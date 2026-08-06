#include <R_ext/Rdynload.h>

#include "client.hpp"
#include "compiler.hpp"

extern "C" {
#include "bc2c/runtime.h"
#include "fir2c/runtime.h"
void R_init_rsh(DllInfo *dll);
}

static const R_CallMethodDef callMethods[] = {
    {"initialize", (DL_FUNC)&rsh::initialize, 0},
    {"compile", (DL_FUNC)&rsh::compile, 2},
    {"is_compiled", (DL_FUNC)&rsh::is_compiled, 1},
    {"init_client", (DL_FUNC)&rsh::init_client, 3},
    {"get_total_size", (DL_FUNC)&rsh::get_total_size, 0},
    {"clear_cache", (DL_FUNC)&rsh::clear_cache, 0},
    // Registered because `R_useDynamicSymbols` is off below, so an unregistered entry point can't
    // be reached by name: `.Call("Fir_serialized_feedback", <module constant pool>)` (see
    // `server/doc/bytecode-baseline-feedback.md`) would fail to resolve, and the callers that wrap
    // it in `tryCatch` would silently read the feedback as "nothing recorded".
    {"Fir_serialized_feedback", (DL_FUNC)&Fir_serialized_feedback, 1},
    {NULL, NULL, 0}};

void R_init_rsh(DllInfo *dll) {
  R_registerRoutines(dll, NULL, callMethods, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
}
