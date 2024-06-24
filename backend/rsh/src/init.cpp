#include <R.h>
#include <Rinternals.h>

#include <R_ext/Rdynload.h>

#include "R_ext/Print.h"
#include "client.h"
#include "jit.h"
#include "rsh.h"
#include "serialize.h"
#include "util.h"

static JIT *jit = nullptr;

// TODO: there must be way to get this from DESCRIPTION
static SEXP PKG_NAME = Rf_install("rsh");
static SEXP BODY_BC_TMPL_NAME = Rf_install(".BODY_BC_TMPL");
static SEXP BODY_BC_TMPL = nullptr;
static SEXP CALL_FUN = nullptr;

SEXP initialize(SEXP, SEXP);
SEXP call_fun(SEXP, SEXP, SEXP, SEXP);
SEXP compile_fun(SEXP, SEXP, SEXP);
SEXP create_call(void *);

extern "C" {
#define BCODE_CODE(x) CAR(x)
SEXP R_bcEncode(SEXP);
SEXP R_bcDecode(SEXP);

#define GETVAR_OP 20
#define PUSHCONSTARG_OP 34

static const R_CallMethodDef callMethods[] = {
    {"initialize", (DL_FUNC)&initialize, 2},
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

SEXP initialize(SEXP body_bc_tmpl, SEXP call_fun) {
  BODY_BC_TMPL = body_bc_tmpl;
  CALL_FUN = call_fun;

  return R_NilValue;
}

using JitFun = SEXP (*)(SEXP env, SEXP cp);

SEXP call_fun(SEXP call, SEXP op, SEXP args, SEXP env) {
  Rprintf("call_fun\n");

  // SEXP closure_addr_sxp = CADR(args);
  // if (TYPEOF(closure_addr_sxp) != INTSXP || LENGTH(closure_addr_sxp) != 2) {
  //   Rf_error("Expected a 2-element integer vector");
  // }
  //
  // int *closure_addr_sxp_data = INTEGER(closure_addr_sxp);
  //
  // std::uintptr_t closure_addr =
  //     ((std::uintptr_t)closure_addr_sxp_data[1] << 32) |
  //     (std::uintptr_t)closure_addr_sxp_data[0];
  // SEXP closure = reinterpret_cast<SEXP>(closure_addr);
  //
  // if (TYPEOF(closure) != CLOSXP) {
  //   Rf_error("Expected a closure");
  // }

  SEXP closure = CADR(args);
  SEXP body = BODY(closure);
  if (TYPEOF(body) != BCODESXP) {
    Rf_error("Expected a compiled closure");
  }

  SEXP cp = BCODE_CONSTS(body);
  SEXP c_cp = VECTOR_ELT(cp, LENGTH(cp) - 1);
  auto fun = (JitFun)R_ExternalPtrAddr(VECTOR_ELT(c_cp, 0));
  SEXP res = fun(env, VECTOR_ELT(c_cp, 1));

  return res;
}

SEXP compile_fun(SEXP name, SEXP closure, SEXP raw) {
  // FIXME: assert that the body template is initialized

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

  auto constants =
      PROTECT(deserialize((u8 *)constants_raw.data(), constants_raw.size()));

  // The C constant pool has the following slots:
  // 0: the pointer to the compiled function
  // 1: the contants used by the compiled function
  auto c_cp = PROTECT(Rf_allocVector(VECSXP, 2));
  SET_VECTOR_ELT(c_cp, 0, R_MakeExternalPtr(fun_ptr, R_NilValue, R_NilValue));
  SET_VECTOR_ELT(c_cp, 1, constants);

  auto body = PROTECT(Rf_duplicate(BODY_BC_TMPL));

  // auto bc = BCODE_CODE(body);
  // bc = PROTECT(R_bcDecode(bc));
  // if (INTEGER(bc)[8] != GETVAR_OP) {
  //   Rf_error("Expected GETVAR_OP at position 8");
  // }
  // INTEGER(bc)[8] = PUSHCONSTARG_OP;
  // bc = PROTECT(R_bcEncode(bc));

  auto cp = BCODE_CONSTS(body);
  cp = PROTECT(append_elem(cp, c_cp));
  SET_VECTOR_ELT(cp, 0, BODY(closure));

  SEXP patch;

  patch = VECTOR_ELT(cp, 2);
  if (TYPEOF(patch) != STRSXP &&
      strcmp(CHAR(STRING_ELT(patch, 0)), ".PATCH_ADDR")) {
    Rf_error("Expected .PATCH_CLOSURE symbol");
  }
  SET_VECTOR_ELT(cp, 2, CALL_FUN);

  patch = VECTOR_ELT(cp, 3);
  if (TYPEOF(patch) != STRSXP &&
      strcmp(CHAR(STRING_ELT(patch, 0)), ".PATCH_CLOSURE")) {
    Rf_error("Expected .PATCH_CLOSURE symbol");
  }
  SET_VECTOR_ELT(cp, 3, closure);

  // usize closure_addr = reinterpret_cast<std::uintptr_t>(closure);
  // // Create a 2-element integer vector
  // SEXP closure_addr_sxp = PROTECT(Rf_allocVector(INTSXP, 2));
  // int *closure_addr_sxp_data = INTEGER(closure_addr_sxp);
  //
  // closure_addr_sxp_data[0] = (int)(closure_addr & 0xFFFFFFFF); // Lower 32
  // bits closure_addr_sxp_data[1] =
  //     (int)((closure_addr >> 32) & 0xFFFFFFFF); // Upper 32 bits
  //
  // SET_VECTOR_ELT(cp, 3, closure_addr_sxp);

  // SETCAR(body, bc);
  SETCDR(body, cp);

  SET_BODY(closure, body);
  Rprintf("Compiled fun %s (fun=%p, jit=%p, body=%p)\n", name_str.c_str(),
          closure, fun_ptr, body);
  UNPROTECT(5);

  return closure;
}
