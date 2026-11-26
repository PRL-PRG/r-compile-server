// Compiled into a standalone FIŘ module (`code.so`), with the runtime: R calls these at its
// `dyn.load` and `dyn.unload`. They install the vendored R's hooks that `R_init_rsh` installs when
// the `rsh` package is loaded, so that e.g. `body()` of a compiled closure gives its source.

#include "runtime.h"

#include <R_ext/Rdynload.h>

void R_init_code(DllInfo *dll) {
  if (Rsh_ClosureBodyExpr == NULL) {
    Rsh_ClosureBodyExpr = Fir_closure_body_expr;
  }
}

// So the hook doesn't point into the unloaded module.
void R_unload_code(DllInfo *dll) {
  if (Rsh_ClosureBodyExpr == Fir_closure_body_expr) {
    Rsh_ClosureBodyExpr = NULL;
  }
}
