#include <R.h>
#include <Rinternals.h>

#include <R_ext/Rdynload.h>

#include "R_ext/Arith.h"
#include "R_ext/Print.h"
#include "client.h"
#include "jit.h"
#include "rsh.h"
#include "serialize.h"

static JIT *jit = nullptr;

// TODO: there must be way to get this from DESCRIPTION
static SEXP PKG_NAME = Rf_install("rsh");
static SEXP CALL_FUN = nullptr;

SEXP initialize(SEXP);
SEXP call_fun(SEXP, SEXP, SEXP, SEXP);
SEXP compile_fun(SEXP, SEXP, SEXP);
SEXP create_call(void *);

#define PUSHCONSTARG_OP 34
#define BASEGUARD_OP 123
#define GETBUILTIN_OP 26
#define CALLBUILTIN_OP 39
#define RETURN_OP 1

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

extern "C" {
#define BCODE_CODE(x) CAR(x)
SEXP R_bcEncode(SEXP);
SEXP R_bcDecode(SEXP);

static const R_CallMethodDef callMethods[] = {
    {"initialize", (DL_FUNC)&initialize, 1},
    {"compile_fun", (DL_FUNC)&compile_fun, 3},
    {NULL, NULL, 0}};

static const R_ExternalMethodDef externalMethods[] = {
    {"call_fun", (DL_FUNC)&call_fun, -1}, {NULL, NULL, 0}};

void R_init_rsh(DllInfo *dll) {
  R_registerRoutines(dll, NULL, callMethods, NULL, externalMethods);
  R_useDynamicSymbols(dll, FALSE);

  jit = JIT::create();
}
}

SEXP initialize(SEXP call_fun) {
  CALL_FUN = call_fun;

  return R_NilValue;
}

using JitFun = SEXP (*)(SEXP env, SEXP cp);

SEXP call_fun(SEXP call, SEXP op, SEXP args, SEXP env) {
  Rprintf("call_fun\n");

  SEXP closure = CADR(args);
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

SEXP compile_fun(SEXP name, SEXP closure, SEXP raw) {
  // FIXME: assert that it has been initialized

  uint8_t *raw_data = RAW(raw);
  R_xlen_t raw_length = XLENGTH(raw);
  std::vector<uint8_t> data(raw_data, raw_data + raw_length);

  std::string name_str(CHAR(STRING_ELT(name, 0)));

  auto response = rsh::compile(name_str, data);

  if (!response.has_result()) {
    Rf_error("Compilation failed: %s", response.failure().c_str());
    return closure;
  }

  auto native_code = response.result().native_code();
  jit->add_object(native_code);
  void *fun_ptr = jit->lookup(name_str.c_str());
  auto constants_raw = response.result().constants();

  // The C constant pool has the following slots:
  auto c_cp = PROTECT(Rf_allocVector(VECSXP, 2));
  // 0: the pointer to the compiled function
  SET_VECTOR_ELT(c_cp, 0, R_MakeExternalPtr(fun_ptr, R_NilValue, R_NilValue));

  // 1: the contants used by the compiled function
  auto constants =
      PROTECT(deserialize((u8 *)constants_raw.data(), constants_raw.size()));
  SET_VECTOR_ELT(c_cp, 1, constants);
  UNPROTECT(1);

  auto bc_size = sizeof(CALL_FUN_BC) / sizeof(i32);
  auto bc = PROTECT(Rf_allocVector(INTSXP, bc_size));
  memcpy(INTEGER(bc), CALL_FUN_BC, sizeof(CALL_FUN_BC));
  bc = R_bcEncode(bc);

  auto expressionsIndex = PROTECT(Rf_allocVector(INTSXP, bc_size));
  INTEGER(expressionsIndex)[0] = NA_INTEGER;
  memset(INTEGER(expressionsIndex) + 1, 0, (bc_size - 1) * sizeof(i32));

  auto cp = PROTECT(Rf_allocVector(VECSXP, 6));
  int i = 0;
  SET_VECTOR_ELT(cp, i++, BODY(closure));
  SET_VECTOR_ELT(cp, i++, Rf_install(".External2"));
  SET_VECTOR_ELT(cp, i++, CALL_FUN);
  SET_VECTOR_ELT(cp, i++, closure);
  SET_VECTOR_ELT(cp, i++, c_cp);
  SET_VECTOR_ELT(cp, i++, expressionsIndex);

  // TODO: add the name of the last element

  auto body = PROTECT(Rf_cons(bc, cp));
  SET_TYPEOF(body, BCODESXP);

  SET_BODY(closure, body);
  Rprintf("Compiled fun %s (fun=%p, jit=%p, body=%p)\n", name_str.c_str(),
          closure, fun_ptr, body);

  UNPROTECT(5);

  return closure;
}
