#include "compiler.h"
#include "client.h"
#include "protocol.pb.h"
#include "rsh.h"
#include "serialize.h"
#include <cstdio>
#include <cstring>


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

SEXP CALL_FUN = nullptr;

SEXP RSH_JIT_FUN_PTR = Rf_install("RSH_JIT_FUN_PTR");

static std::variant<protocol::CompileResponse, std::string> compile_closure(std::string const &name, SEXP closure,
                                       u32 opt_level = 3, protocol::Tier tier = protocol::Tier::OPTIMIZED) {
  auto closure_bytes = rsh::serialize(closure);
  auto client = rsh::Client::get_client();
  return client->remote_compile(name, closure_bytes, tier, opt_level);
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
  // TODO: we should have a map hash to name of the function here
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
  SET_VECTOR_ELT(cp, i++, CALL_FUN);
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

SEXP compile_fun(SEXP closure, SEXP name, SEXP opt_level_sxp, SEXP tier_sxp) {
  if (!RSH_JIT_FUN_PTR) {
    Rf_error("The package was not initialized");
  }

  if (TYPEOF(name) != STRSXP || XLENGTH(name) != 1) {
    Rf_error("Expected a single string as a name");
  }

  if (TYPEOF(opt_level_sxp) != INTSXP || XLENGTH(opt_level_sxp) != 1) {
    Rf_error("Expected a single integer as an optimization level");
  }

  u32 opt_level = INTEGER(opt_level_sxp)[0];

  std::string tier_s = CHAR(STRING_ELT(tier_sxp, 0));
  protocol::Tier tier = protocol::Tier::OPTIMIZED;
  if(tier_s == "bytecode") {
    tier = protocol::Tier::BASELINE;
  }

  const char *closure_name = CHAR(STRING_ELT(name, 0));
  char name_str[strlen(closure_name) + 1 + 16];
  sprintf(name_str, "%s_%p", closure_name, closure);

  auto response = compile_closure(name_str, closure, opt_level, tier);
  if (!std::holds_alternative<protocol::CompileResponse>(response)) {// TODO: propagate error from the remote compilation
    Rf_error("Compilation failed: %s", std::get<std::string>(response).c_str());
    return closure;
  }

  auto compiled_fun = std::get<protocol::CompileResponse>(response);
  if(tier == protocol::Tier::OPTIMIZED) {
    

    auto fun_ptr = insert_into_jit(name_str, compiled_fun);
    SEXP c_cp = PROTECT(create_constant_pool(fun_ptr, name_str, compiled_fun));
    SEXP body = PROTECT(create_wrapper_body(closure, c_cp));

    // replace the closure body in place
    SET_BODY(closure, body);

    // FIXME: add logging primitives
    Rprintf("Compiled fun %s (fun=%p, jit=%p, body=%p)\n", name_str, closure,
          fun_ptr, body);
    UNPROTECT(2);

  }
  else if(tier == protocol::Tier::BASELINE) {
    auto body = PROTECT(rsh::deserialize(compiled_fun.code()));
    if(TYPEOF(body) != BCODESXP) {
      Rf_error("Expected bytecode, got %s", Rf_type2char(TYPEOF(body)));
    }
    SET_BODY(closure, body);
    UNPROTECT(1);
  }

  return closure;
}

SEXP call_fun(SEXP call, SEXP op, SEXP args, SEXP env) {
  SEXP closure = CADR(args);
  if (TYPEOF(closure) != CLOSXP) {
    Rf_error("Expected a closure");
  }

  SEXP body = BODY(closure);
  if (TYPEOF(body) != BCODESXP) {
    Rf_error("Expected a compiled closure");
  }

  SEXP cp = BCODE_CONSTS(body);
  if (XLENGTH(cp) != 6) {
    Rf_error("Expected a constant pool with 6 elements");
  }

  SEXP c_cp = VECTOR_ELT(cp, LENGTH(cp) - 2);
  auto fun = (JitFun)R_ExternalPtrAddr(VECTOR_ELT(c_cp, 0));
  SEXP res = fun(env, VECTOR_ELT(c_cp, 1));

  return res;
}

SEXP initialize(SEXP call_fun) {
  // TODO: it would be great if this one can go away,
  // intializing it in the init method.
  // I just don't know how.
  CALL_FUN = call_fun;

  return R_NilValue;
}

} // namespace rsh