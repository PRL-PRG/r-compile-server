#define R_NO_REMAP
#include <R.h>
#include <Rinternals.h>

#include <R_ext/Rdynload.h>

#include "jit.h"

static JIT *jit = nullptr;
SEXP load_fun(SEXP filename);
SEXP call_fun(SEXP pointer);
SEXP call_fun2(SEXP pointer, SEXP arg);
SEXP call_fun3(SEXP, SEXP, SEXP, SEXP);

extern "C" {

static const R_CallMethodDef callMethods[] = {
    {"load_fun", (DL_FUNC)&load_fun, 1},
    {"call_fun", (DL_FUNC)&call_fun, 1},
    {"call_fun2", (DL_FUNC)&call_fun2, 2},
    {NULL, NULL, 0}};

static const R_ExternalMethodDef externalMethods[] = {
    {"call_fun3", (DL_FUNC)&call_fun3, -1}, {NULL, NULL, 0}};

void R_init_rsh(DllInfo *dll) {
  R_registerRoutines(dll, NULL, callMethods, NULL, externalMethods);
  R_useDynamicSymbols(dll, FALSE);

  jit = JIT::create();
}
}

SEXP load_fun(SEXP filename) {
  jit->add_object_file(CHAR(STRING_ELT(filename, 0)));
  void *ptr = jit->lookup("jit_f");
  return R_MakeExternalPtr(ptr, R_NilValue, R_NilValue);
}

SEXP call_fun(SEXP pointer) {
  void *ptr = R_ExternalPtrAddr(pointer);
  SEXP (*fun)() = (SEXP(*)())ptr;
  return fun();
}

SEXP call_fun2(SEXP pointer, SEXP arg) {
  void *ptr = R_ExternalPtrAddr(pointer);
  SEXP (*fun)(SEXP) = (SEXP(*)(SEXP))ptr;
  return fun(arg);
}

SEXP call_fun3(SEXP call, SEXP op, SEXP args, SEXP env) {
  Rprintf("call_fun3\n");
  return R_NilValue;
}
