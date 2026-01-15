#include "compiler.hpp"
#include "R_ext/Error.h"
#include "R_ext/Print.h"
#include "Rinternals.h"
#include "client.hpp"
#include "rsh.hpp"
#include "serialize.hpp"
#include "util.hpp"
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <system_error>
#include <unistd.h>

extern "C" {
#include "bc2c/runtime.h"
}
// clang-format off
static i32 CALL_FUN_BC[] = {
  12,
  GETBUILTIN_OP,   1,
  PUSHCONSTARG_OP, 2,
  PUSHCONSTARG_OP, 3,
  CALLBUILTIN_OP,  0,
  RETURN_OP
};
// clang-format on

void jit_fun_destructor(SEXP fun_ptr) {
  // FIXME: this is wrong, we need to use the resource trackers
  SEXP name = R_ExternalPtrProtected(fun_ptr);
  if (TYPEOF(name) != STRSXP || XLENGTH(name) != 1) {
    Rf_error("Expected a name of jitted function");
  }
  auto name_str = CHAR(STRING_ELT(name, 0));
  Rprintf("Destroying fun %s %p\n", name_str, fun_ptr);
  rsh::GJIT->remove(name_str);
}

namespace rsh {

static std::variant<protocol::CompileResponse, std::string>
compile_closure(SEXP closure, CompilerOptions options) {
  // If a function has already been compiled to native code
  if (Rf_asLogical(is_compiled(closure))) {
    return "Function already compiled";
  }

  std::vector<uint8_t> closure_bytes;

  if (IS_BYTECODE(BODY(closure))) {
    // Build the closure AST to get the correct hash
    // The AST is the first element in the constant pool of the BCODESXP
    SEXP body = BODY_EXPR(closure);
    auto ast_clos = Rf_mkCLOSXP(FORMALS(closure), body, CLOENV(closure));
    closure_bytes = rsh::serialize(ast_clos);
  } else {
    closure_bytes = rsh::serialize(closure);
  }
  auto client = rsh::Client::get_client();
  return client->remote_compile(closure_bytes, options);
}

static void *insert_into_jit(const char *name,
                             protocol::CompileSuccess const &compiled_fun) {
  auto native_code = compiled_fun.code();
  GJIT->replace_object(name, native_code);
  auto ptr = GJIT->lookup(name);
  if (!ptr) {
    Rf_error("Unable to find the function in the JIT");
  }
  return ptr;
}

CompilerOptions CompilerOptions::from_list(SEXP listsxp) {
  if (TYPEOF(listsxp) != VECSXP) {
    Rf_error("Expected a list of compiler options");
  }

  SEXP names = Rf_getAttrib(listsxp, R_NamesSymbol);
  if (TYPEOF(names) != STRSXP) {
    Rf_error("Expected named elements in the VECSXP.");
  }

  CompilerOptions opts;

  for (int i = 0; i < XLENGTH(listsxp); i++) {
    SEXP namesxp = STRING_ELT(names, i);
    if (namesxp == R_NilValue) {
      Rf_error("Unnamed element in the compiler option list.");
    }

    const char *name = CHAR(namesxp);

    if (!strcmp(name, "name")) {
      opts.name =
          vec_element_as_string(listsxp, i, "name option must be a string");
    } else if (!strcmp(name, "bc_opt")) {
      opts.bc_opt =
          vec_element_as_int(listsxp, i, "bc_opt option must be an integer");
    } else if (!strcmp(name, "cc_opt")) {
      opts.cc_opt =
          vec_element_as_int(listsxp, i, "cc_opt option must be an integer");
    } else if (!strcmp(name, "inplace")) {
      opts.inplace =
          vec_element_as_bool(listsxp, i, "inplace option must be a logical");
    } else if (!strcmp(name, "cache")) {
      opts.cache =
          vec_element_as_bool(listsxp, i, "cache option must be a logical");
    } else if (!strcmp(name, "debug")) {
      opts.debug =
          vec_element_as_bool(listsxp, i, "debug option must be a logical");
    } else if (!strcmp(name, "tier")) {
      SEXP tier_sxp = VECTOR_ELT(listsxp, i);
      if (TYPEOF(tier_sxp) != STRSXP) {
        Rf_error("Expected a string for the tier option");
      }
      opts.tier = protocol::Tier::OPTIMIZED;
      std::string tier_s = CHAR(STRING_ELT(tier_sxp, 0));
      protocol::Tier tier = protocol::Tier::OPTIMIZED;
      if (tier_s == "bytecode") {
        opts.tier = protocol::Tier::BASELINE;
      }
    } else if (!strcmp(name, "output_dir")) {
      opts.output_dir = vec_element_as_string(
          listsxp, i, "output_dir option must be a string");
    } else {
      Rf_error("Unknown compiler option %s", name);
    }
  }
  return opts;
}

std::string genSymbol(uint64_t hash, int index) {

  return "gen_" + std::to_string(hash) + "_" + std::to_string(index);
}

SEXP compile(SEXP closure, SEXP options) {
  if (TYPEOF(options) != VECSXP) {
    Rf_error("Expected a list of compiler options");
  }

  auto opts = CompilerOptions::from_list(options);

  auto response = compile_closure(closure, opts);
  if (std::string *error = std::get_if<std::string>(&response)) {
    Rf_error("Request failed: %s", error->c_str());
    return closure;
  }

  auto compiler_response = std::get<protocol::CompileResponse>(response);

  if (compiler_response.has_failure()) {
    const auto &failure = compiler_response.failure();
    fs::path source_code_path;

    if (!failure.source_code().empty()) {
      if (write_to_temp(failure.source_code(), source_code_path)) {
        Rf_warning("Unable to save source code of a failed compilation");
      }
    }

    Rf_error("Compilation failed\nCommand:%s\nError:%s%s",
             failure.command().c_str(), failure.compiler_output().c_str(),
             source_code_path.c_str());

    return closure;
  }

  auto compiled_fun = compiler_response.success();

  fs::path debug_dir;
  fs::path o_file;
  fs::path c_file;
  fs::path cc_file;

  if (opts.output_dir.has_value()) {
    debug_dir = opts.output_dir.value();
    if (!fs::exists(debug_dir)) {
      std::error_code ec;
      fs::create_directories(debug_dir, ec);
      if (ec) {
        Rf_warning("Unable to create output directory: %s",
                   ec.message().c_str());
        debug_dir = "";
      }
    }
  } else if (compiled_fun.has_source_code_data() && opts.debug) {
    if (auto err = create_temp_dir(debug_dir)) {
      Rf_warning("Failed to create temporary debug directory: %s",
                 err->c_str());
    }
  }

  if (!debug_dir.empty()) {
    if (!compiled_fun.code().empty()) {
      o_file = debug_dir / (opts.name + ".o");
      if (auto err = write_to(o_file, compiled_fun.code())) {
        Rf_warning("Failed to write object file: %s: %s", o_file.c_str(),
                   err->c_str());
      }
    }

    if (!compiled_fun.constants().empty()) {
      cc_file = debug_dir / (opts.name + ".RDS");
      if (auto err = write_to(cc_file, compiled_fun.constants())) {
        Rf_warning("Failed to write constants file: %s: %s", cc_file.c_str(),
                   err->c_str());
      }
    }

    if (compiled_fun.has_source_code_data()) {
      c_file = debug_dir / (opts.name + ".c");
      if (auto err =
              write_to(c_file, compiled_fun.source_code_data().source_code())) {
        Rf_warning("Failed to write constants file: %s: %s", c_file.c_str(),
                   err->c_str());
      }
    }
  }

  // If the code is empty, we keep the SEXP
  if (compiled_fun.code().empty()) {
    Rf_warning("Empty body returned for function %s. Most likely because of "
               "browser in the body",
               opts.name.c_str());
    return closure;
  }

  SEXP body = nullptr;
  SEXP c_cp = nullptr;
  void *fun_ptr = nullptr;
  SEXP fun_ptr_sxp = nullptr;

  std::string name = genSymbol(compiled_fun.hash(), 0);

  if (opts.tier == protocol::Tier::OPTIMIZED) {
    fun_ptr = insert_into_jit(name.c_str(), compiled_fun);

    // FIXME: update the finalizer
    // R_RegisterCFinalizerEx(fun_ptr_sxp, &jit_fun_destructor, FALSE);

    auto c_cp = PROTECT(rsh::deserialize(compiled_fun.constants()));
    body = R_MakeExternalPtr((void *)fun_ptr, Rsh_ClosureBodyTag, c_cp);
    UNPROTECT(1); // c_cp
    PROTECT(body);
  } else if (opts.tier == protocol::Tier::BASELINE) {
    body = PROTECT(rsh::deserialize(compiled_fun.code()));
    if (TYPEOF(body) != BCODESXP) {
      Rf_warning("Function %s was not compiled into bytecode (got back %s)",
                 opts.name.c_str(), Rf_type2char(TYPEOF(body)));
    }
  }

  SEXP info = PROTECT(Rf_allocVector(VECSXP, 5));
  SEXP info_names = PROTECT(Rf_allocVector(STRSXP, 5));

  SET_STRING_ELT(info_names, 0, Rf_mkChar("binary_size"));
  SET_VECTOR_ELT(info, 0, Rf_ScalarInteger(compiled_fun.code().size()));

  SET_STRING_ELT(info_names, 1, Rf_mkChar("constants_size"));
  SET_VECTOR_ELT(info, 1, Rf_ScalarInteger(compiled_fun.constants().size()));

  SET_STRING_ELT(info_names, 2, Rf_mkChar("object_file"));
  SET_VECTOR_ELT(info, 2,
                 o_file.empty() ? Rf_ScalarString(NA_STRING)
                                : Rf_mkString(o_file.c_str()));
  SET_STRING_ELT(info_names, 3, Rf_mkChar("constants_file"));
  SET_VECTOR_ELT(info, 3,
                 cc_file.empty() ? Rf_ScalarString(NA_STRING)
                                 : Rf_mkString(cc_file.c_str()));
  SET_STRING_ELT(info_names, 4, Rf_mkChar("source_file"));
  SET_VECTOR_ELT(info, 4,
                 c_file.empty() ? Rf_ScalarString(NA_STRING)
                                : Rf_mkString(c_file.c_str()));

  Rf_setAttrib(info, R_NamesSymbol, info_names);
  UNPROTECT(1); // info_names

  if (opts.inplace) {
    SET_BODY(closure, body);
  } else {
    closure = Rf_mkCLOSXP(FORMALS(closure), body, CLOENV(closure));
  }
  PROTECT(closure);

  // FIXME: add logging primitive
  Rprintf("Compiled fun %s (symbol %s) ; ", opts.name.c_str(), name.c_str());

  // Return list with closure and info
  SEXP result = PROTECT(Rf_allocVector(VECSXP, 2));
  SEXP result_names = PROTECT(Rf_allocVector(STRSXP, 2));

  SET_STRING_ELT(result_names, 0, Rf_mkChar("closure"));
  SET_VECTOR_ELT(result, 0, closure);

  SET_STRING_ELT(result_names, 1, Rf_mkChar("info"));
  SET_VECTOR_ELT(result, 1, info);

  Rf_setAttrib(result, R_NamesSymbol, result_names);
  UNPROTECT(1); // result_names

  UNPROTECT(4); // result, closure, info, body

  return result;
}

SEXP is_compiled(SEXP closure) {
  return Rf_ScalarLogical(Rsh_is_closure(closure));
}

#define RSH_PACKAGE_NAME "rsh"

SEXP initialize() {
  Rsh_initialize_runtime();

  return R_NilValue;
}

} // namespace rsh
