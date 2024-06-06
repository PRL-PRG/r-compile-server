#define R_NO_REMAP
#include <R.h>
#include <Rinternals.h>

#include <R_ext/Rdynload.h>

#include "jit.h"

static JIT *jit = nullptr;
SEXP load_fun(SEXP filename);

extern "C" {

static const R_CallMethodDef callMethods[] = {
    {"load_fun", (DL_FUNC)&load_fun, 1}, {NULL, NULL, 0}};

void R_init_rsh(DllInfo *dll) {
  R_registerRoutines(dll, NULL, callMethods, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);

  jit = JIT::create();
}
}

SEXP load_fun(SEXP filename) {
  jit->add_object_file(CHAR(STRING_ELT(filename, 0)));
  // void *ptr = jit->lookup("jit_f");
  // return R_MakeExternalPtr(ptr, R_NilValue, R_NilValue);
}
