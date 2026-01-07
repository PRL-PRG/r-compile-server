#include "compiler.hpp"
#include "client.hpp"
#include "rsh.hpp"
#include "serialize.hpp"
#include "util.hpp"
#include <cstdlib>
#include <cstring>
#include <fstream>
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

  // Check if compilation was successful
  if (compiler_response.has_failure()) {
    const auto &failure = compiler_response.failure();
    Rf_error("Compilation failed\n");
    Rf_error("Command: %s", failure.command().c_str());
    Rf_error("Error: %s", failure.compiler_output().c_str());

    if (!failure.source_code().empty()) {
      Rf_error("Source code:\n");
      Rf_error("%s", failure.source_code().c_str());
      Rf_error("\n");
    }

    return closure;
  }

  auto compiled_fun = compiler_response.success();

  // Determine where to save debug files
  std::string debug_dir;
  bool cleanup_debug_dir = false;

  if (opts.output_dir.has_value()) {
    debug_dir = opts.output_dir.value();
  } else if (compiled_fun.has_source_code_data() && opts.debug) {
    // Create temporary directory for debug files
    char temp_template[] = "/tmp/rsh_debug_XXXXXX";
    char *temp_dir = mkdtemp(temp_template);
    if (temp_dir) {
      debug_dir = std::string(temp_dir);
      cleanup_debug_dir = false; // Keep debug files for GDB
    } else {
      Rf_warning("Failed to create temporary debug directory");
    }
  }

  // Save intermediate files if output_dir is specified or debug mode is enabled
  if (!debug_dir.empty()) {

    // Save object file
    if (!compiled_fun.code().empty()) {
      std::string obj_filename = debug_dir + "/" + opts.name + ".o";
      std::ofstream obj_file(obj_filename, std::ios::binary);
      if (obj_file.is_open()) {
        obj_file.write(compiled_fun.code().data(), compiled_fun.code().size());
        obj_file.close();
      } else {
        Rf_warning("Failed to write object file: %s", obj_filename.c_str());
      }
    }

    // Save constants pool
    if (!compiled_fun.constants().empty()) {
      std::string const_filename = debug_dir + "/" + opts.name + ".RDS";
      std::ofstream const_file(const_filename, std::ios::binary);
      if (const_file.is_open()) {
        const std::string &data = compiled_fun.constants();
        const_file.write(data.data(), data.size());
        const_file.write(reinterpret_cast<const char *>(data.data()),
                         data.size());
        const_file.close();
      } else {
        Rf_warning("Failed to write constants file: %s",
                   const_filename.c_str());
      }
    }

    // Save source code for debugging (always save if available)
    if (compiled_fun.has_source_code_data()) {
      std::string c_filename = debug_dir + "/" + opts.name + ".c";
      std::ofstream c_file(c_filename);
      if (c_file.is_open()) {
        const std::string &data = compiled_fun.source_code_data().source_code();
        c_file.write(data.data(), data.size());
        c_file.close();

        // Print debug info to help users locate source files
        if (!opts.output_dir.has_value() && opts.debug) {
          Rprintf("Debug source file saved to: %s\n", c_filename.c_str());
        }
      } else {
        Rf_warning("Failed to write C file: %s", c_filename.c_str());
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
  // Native or bytecode?
  if (opts.tier == protocol::Tier::OPTIMIZED) {
    fun_ptr = insert_into_jit(name.c_str(), compiled_fun);
    // FIXME: update the finalizer
    // R_RegisterCFinalizerEx(fun_ptr_sxp, &jit_fun_destructor, FALSE);

    auto c_cp = rsh::deserialize(compiled_fun.constants());
    body =
        PROTECT(R_MakeExternalPtr((void *)fun_ptr, Rsh_ClosureBodyTag, c_cp));
  } else if (opts.tier == protocol::Tier::BASELINE) {
    body = PROTECT(rsh::deserialize(compiled_fun.code())); // P2
    if (TYPEOF(body) != BCODESXP) {
      Rf_error("Expected bytecode, got %s", Rf_type2char(TYPEOF(body)));
    }
  }

  // Prepare compilation info
  SEXP info = PROTECT(Rf_allocVector(VECSXP, 4));
  SEXP info_names = PROTECT(Rf_allocVector(STRSXP, 4));

  // Binary size
  SET_STRING_ELT(info_names, 0, Rf_mkChar("binary_size"));
  SET_VECTOR_ELT(info, 0, Rf_ScalarInteger(compiled_fun.code().size()));

  // Constant pool size
  SET_STRING_ELT(info_names, 1, Rf_mkChar("constants_size"));
  SET_VECTOR_ELT(info, 1, Rf_ScalarInteger(compiled_fun.constants().size()));

  // File paths
  if (!debug_dir.empty()) {
    SET_STRING_ELT(info_names, 2, Rf_mkChar("object_file"));
    SET_VECTOR_ELT(info, 2,
                   Rf_mkString((debug_dir + "/" + opts.name + ".o").c_str()));

    SET_STRING_ELT(info_names, 3, Rf_mkChar("constants_file"));
    SET_VECTOR_ELT(info, 3,
                   Rf_mkString((debug_dir + "/" + opts.name + ".RDS").c_str()));
  } else {
    SET_STRING_ELT(info_names, 2, Rf_mkChar("object_file"));
    SET_VECTOR_ELT(info, 2, R_NilValue);

    SET_STRING_ELT(info_names, 3, Rf_mkChar("constants_file"));
    SET_VECTOR_ELT(info, 3, R_NilValue);
  }

  Rf_setAttrib(info, R_NamesSymbol, info_names);

  // Inplace or not (i.e. through through an explicit call to `compile` or
  // through the R JIT)
  if (opts.inplace) {
    SET_BODY(closure, body);
    UNPROTECT(1); // For P1 or P2
    // FIXME: add logging primitives
    Rprintf("Compiled in place fun %s (fun=%p, body=%p) ; ", opts.name.c_str(),
            closure, body);
    if (opts.tier == protocol::Tier::OPTIMIZED) {
      Rprintf("Jit-compiled: jit=%p\n", fun_ptr);
    } else {
      Rprintf("Bytecode-compiled\n");
    }
  } else {
    SEXP orig = closure;
    closure =
        PROTECT(Rf_mkCLOSXP(FORMALS(closure), body, CLOENV(closure))); // P3
    // FIXME: add logging primitive
    UNPROTECT(1); // P1 or P2
    Rprintf("Replaced compiled fun %s -- %p (fun=%p, body=%p) ; ",
            opts.name.c_str(), orig, closure, body);
    if (opts.tier == protocol::Tier::OPTIMIZED) {
      Rprintf("Jit-compiled: jit=%p\n", fun_ptr);
    } else {
      Rprintf("Bytecode-compiled\n");
    }
  }

  UNPROTECT(1); // P3

  // Return list with closure and info
  SEXP result = PROTECT(Rf_allocVector(VECSXP, 2));
  SEXP result_names = PROTECT(Rf_allocVector(STRSXP, 2));

  SET_STRING_ELT(result_names, 0, Rf_mkChar("closure"));
  SET_VECTOR_ELT(result, 0, closure);

  SET_STRING_ELT(result_names, 1, Rf_mkChar("info"));
  SET_VECTOR_ELT(result, 1, info);

  Rf_setAttrib(result, R_NamesSymbol, result_names);

  UNPROTECT(4); // info, info_names, result, result_names

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
