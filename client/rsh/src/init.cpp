#include <R_ext/Rdynload.h>

#include "compiler.h"
#include "client.h"

extern "C" {
static const R_CallMethodDef callMethods[] = {
    {"initialize", (DL_FUNC)&rsh::initialize, 1},
    {"compile_fun", (DL_FUNC)&rsh::compile_fun, 3},
    {"init_client", (DL_FUNC)&rsh::init_client, 3},
    {NULL, NULL, 0}};

static const R_ExternalMethodDef externalMethods[] = {
    {"call_fun", (DL_FUNC)&rsh::call_fun, -1}, {NULL, NULL, 0}};

void R_init_rsh(DllInfo *dll) {
  R_registerRoutines(dll, NULL, callMethods, NULL, externalMethods);
  R_useDynamicSymbols(dll, FALSE);
}
}
