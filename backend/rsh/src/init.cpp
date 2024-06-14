#include <R.h>
#include <Rinternals.h>

#include <R_ext/Rdynload.h>

#include "client.h"
#include "jit.h"

static JIT *jit = nullptr;
SEXP load_fun(SEXP filename);
SEXP call_fun(SEXP pointer);
SEXP call_fun2(SEXP pointer, SEXP arg);
SEXP call_fun3(SEXP, SEXP, SEXP, SEXP);
SEXP compile_fun(SEXP, SEXP, SEXP);

extern "C" {

static const R_CallMethodDef callMethods[] = {
    {"load_fun", (DL_FUNC)&load_fun, 1},
    {"call_fun", (DL_FUNC)&call_fun, 1},
    {"call_fun2", (DL_FUNC)&call_fun2, 2},
    {"compile_fun", (DL_FUNC)&compile_fun, 3},
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
  void *ptr = R_ExternalPtrAddr(CADR(args));
  SEXP (*fun)(SEXP) = (SEXP(*)(SEXP))ptr;
  return fun(env);
}

SEXP compile_fun(SEXP name, SEXP closure, SEXP raw) {
  uint8_t *raw_data = RAW(raw);
  R_xlen_t raw_length = XLENGTH(raw);
  std::vector<uint8_t> data(raw_data, raw_data + raw_length);

  std::string name_str(CHAR(STRING_ELT(name, 0)));

  auto result = compile(name_str, data);
  if (std::holds_alternative<std::string>(result)) {
    Rf_error("%s", std::get<std::string>(result).c_str());
  } else {
    std::vector<uint8_t> payload = std::get<std::vector<uint8_t>>(result);
    jit->add_object(std::move(payload));
    void *ptr = jit->lookup(name_str.c_str());
    SEXP ptr_sxp = PROTECT(R_MakeExternalPtr(ptr, R_NilValue, R_NilValue));

    SEXP nested = PROTECT(Rf_lang3(Rf_install(":::"), Rf_install("rsh"),
                                   Rf_install("C_call_fun3")));
    SEXP call = PROTECT(Rf_lang3(Rf_install(".External2"), nested, ptr_sxp));
    SET_BODY(closure, call);
    UNPROTECT(3);
  }

  return closure;
}
