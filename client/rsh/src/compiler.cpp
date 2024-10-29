#include "compiler.hpp"
#include "client.hpp"
#include "rsh.hpp"
#include "serialize.hpp"
#include "util.hpp"
#include <cstring>

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

SEXP RSH_JIT_FUN_PTR = Rf_install("RSH_JIT_FUN_PTR");

static std::variant<protocol::CompileResponse, std::string> compile_closure(SEXP closure, CompilerOptions options) {
  // If a function has already been compiled to native code
  if(Rf_asLogical(is_compiled(closure))) {
    return "Function already compiled";
  }

  std::vector<uint8_t> closure_bytes;

  if(IS_BYTECODE(BODY(closure))) {
    // Build the closure AST to get the correct hash
    // The AST is the first element in the constant pool of the BCODESXP
    SEXP body = BODY_EXPR(closure);
    auto ast_clos = Rf_mkCLOSXP(FORMALS(closure), body, CLOENV(closure));
    closure_bytes = rsh::serialize(ast_clos);
  }
  else {
   closure_bytes = rsh::serialize(closure);
  }
  auto client = rsh::Client::get_client();
  return client->remote_compile(closure_bytes, options);
}

static void *insert_into_jit(const char* name, protocol::CompileResponse const &compiled_fun) {
  auto native_code = compiled_fun.code();
  GJIT->add_object(native_code);
  auto ptr = GJIT->lookup(name);
  if (!ptr) {
    Rf_error("Unable to find the function in the JIT");
  }
  return ptr;
}

static SEXP create_constant_pool(void *fun_ptr, const char* name,
                                 protocol::CompileResponse const &compiled_fun) {
  auto pool = PROTECT(Rf_allocVector(VECSXP, 2));

  // create an external pointer to the JITed function with a finalizer
  auto p = R_MakeExternalPtr(fun_ptr, RSH_JIT_FUN_PTR,
                             Rf_mkString(name));
  R_RegisterCFinalizerEx(p, &jit_fun_destructor, FALSE);

  // slot 0: the pointer to the compiled function
  SET_VECTOR_ELT(pool, 0, p);

  // slot 1: the contants used by the compiled function
  auto consts_vec = rsh::deserialize(compiled_fun.constants());
  SET_VECTOR_ELT(pool, 1, consts_vec);

  UNPROTECT(1); // consts

  return pool;
}

static SEXP create_wrapper_body(SEXP closure, SEXP c_cp) {
  auto bc_size = sizeof(CALL_FUN_BC) / sizeof(i32);

  auto bc = PROTECT(Rf_allocVector(INTSXP, bc_size));
  memcpy(INTEGER(bc), CALL_FUN_BC, sizeof(CALL_FUN_BC));
  bc = R_bcEncode(bc);

  auto expr_index = PROTECT(Rf_allocVector(INTSXP, bc_size));
  INTEGER(expr_index)[0] = NA_INTEGER;
  memset(INTEGER(expr_index) + 1, 0, (bc_size - 1) * sizeof(i32));

  auto cp = PROTECT(Rf_allocVector(VECSXP, 6));
  int i = 0;

  // store the original AST (consequently it will not correspond to the AST)
  SET_VECTOR_ELT(cp, i++, BODY(closure));
  SET_VECTOR_ELT(cp, i++, Rf_install(".External2"));
  SET_VECTOR_ELT(cp, i++, BC2C_CALL_TRAMPOLINE_SXP);
  SET_VECTOR_ELT(cp, i++, closure);
  SET_VECTOR_ELT(cp, i++, c_cp);
  SET_VECTOR_ELT(cp, i++, expr_index);

  // properly name the expression index (the last element of the constant pool)
  auto cp_names = Rf_allocVector(STRSXP, 6);
  Rf_setAttrib(cp, R_NamesSymbol, cp_names);
  for (i = 0; i < 5; i++) {
    SET_STRING_ELT(cp_names, i, R_BlankString);
  }
  SET_STRING_ELT(cp_names, 5, Rf_mkChar("expressionIndex"));

  auto body = Rf_cons(bc, cp);
  SET_TYPEOF(body, BCODESXP);

  UNPROTECT(3);
  return body;
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
    }
    else if(!strcmp(name, "tier")) {
      SEXP tier_sxp = VECTOR_ELT(listsxp, i);
      if(TYPEOF(tier_sxp) != STRSXP) {
        Rf_error("Expected a string for the tier option");
      }
      opts.tier = protocol::Tier::OPTIMIZED;
      std::string tier_s = CHAR(STRING_ELT(tier_sxp, 0));
      protocol::Tier tier = protocol::Tier::OPTIMIZED;
      if(tier_s == "bytecode") {
        opts.tier = protocol::Tier::BASELINE;
      }
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
  if (!RSH_JIT_FUN_PTR) {
    Rf_error("The package was not initialized");
  }

  if (TYPEOF(options) != VECSXP) {
    Rf_error("Expected a list of compiler options");
  }

  auto opts = CompilerOptions::from_list(options);

  auto response = compile_closure(closure, opts);
  if (!std::holds_alternative<protocol::CompileResponse>(response)) {
    Rf_error("Compilation failed: %s", std::get<std::string>(response).c_str());
    return closure;
  }

  auto compiled_fun = std::get<protocol::CompileResponse>(response);

  // If the code is empty, we keep the SEXP
  if(!compiled_fun.has_code() || compiled_fun.code().empty()) {
    Rf_warning("Empty body returned for function %s. Most likely because of browser in the body", opts.name.c_str());
    return closure;
  }

  SEXP body = nullptr;
  SEXP c_cp = nullptr;
  void * fun_ptr = nullptr;

  std::string name = genSymbol(compiled_fun.hash(), 0);
  // Native or bytecode?
  if(opts.tier == protocol::Tier::OPTIMIZED) {
    fun_ptr = insert_into_jit(name.c_str(), compiled_fun);
    c_cp = PROTECT(create_constant_pool(fun_ptr, name.c_str(), compiled_fun));
    
  }
  else if(opts.tier == protocol::Tier::BASELINE) {
    body = PROTECT(rsh::deserialize(compiled_fun.code()));
    if(TYPEOF(body) != BCODESXP) {
      Rf_error("Expected bytecode, got %s", Rf_type2char(TYPEOF(body)));
    }
  }

  // Inplace or not (i.e. through through an explicit call to `compile` or through the R JIT)
  if (opts.inplace) {
    if(opts.tier == protocol::Tier::OPTIMIZED) {
       body = PROTECT(create_wrapper_body(closure, c_cp));
    }
    SET_BODY(closure, body);
    UNPROTECT(1);
    // FIXME: add logging primitives
    Rprintf("Compiled in place fun %s (fun=%p, body=%p) ; ",
            opts.name.c_str(), closure,
            body);
    if(opts.tier == protocol::Tier::OPTIMIZED) {
      Rprintf("Jit-compiled: jit=%p\n", fun_ptr);
    }
    else {
      Rprintf("Bytecode-compiled\n");
    }
  } else {
    SEXP orig = closure;
    closure = PROTECT(Rf_mkCLOSXP(FORMALS(closure), R_NilValue, CLOENV(closure)));
    if(opts.tier == protocol::Tier::OPTIMIZED) {
      // In that case, the body needs a reference to its body
      body = PROTECT(create_wrapper_body(closure, c_cp));
    }
    SET_BODY(closure, body);
    // FIXME: add logging primitive
    UNPROTECT(1);
    Rprintf(
        "Replaced compiled fun %s -- %p (fun=%p, body=%p) ; ",
        opts.name.c_str(), orig, closure,
        body);
    if(opts.tier == protocol::Tier::OPTIMIZED) {
      Rprintf("Jit-compiled: jit=%p\n", fun_ptr);
    }
    else {
      Rprintf("Bytecode-compiled\n");
    }
  }

  // Unprotecting after creating the bodies above.
  if(opts.tier == protocol::Tier::OPTIMIZED) {
    UNPROTECT(2);
  }
  else {
    UNPROTECT(1);
  }


  return closure;
}

SEXP is_compiled(SEXP closure) {
  if (TYPEOF(closure) != CLOSXP) {
    Rf_error("Expected a closure");
  }

  SEXP body = BODY(closure);
  if (TYPEOF(body) != BCODESXP) {
    return Rf_ScalarLogical(FALSE);
  }

  SEXP cp = BCODE_CONSTS(body);
  if (XLENGTH(cp) != 6) {
    return Rf_ScalarLogical(FALSE);
  }

  SEXP c_cp = VECTOR_ELT(cp, LENGTH(cp) - 2);
  if (XLENGTH(c_cp) != 2) {
    return Rf_ScalarLogical(FALSE);
  }

  if (TYPEOF(VECTOR_ELT(c_cp, 0)) != EXTPTRSXP) {
    // TODO: check if the pointer is a valid function, i.e. ORC knows about it
    return Rf_ScalarLogical(FALSE);
  }

  if (TYPEOF(VECTOR_ELT(c_cp, 1)) != VECSXP) {
    return Rf_ScalarLogical(FALSE);
  }

  return Rf_ScalarLogical(TRUE);
}

#define RSH_PACKAGE_NAME "rsh"

SEXP initialize() {
  Rsh_initialize_runtime();

  BC2C_CALL_TRAMPOLINE_SXP = load_symbol_checked("rsh", "C_call_trampoline");

  return R_NilValue;
}

} // namespace rsh
