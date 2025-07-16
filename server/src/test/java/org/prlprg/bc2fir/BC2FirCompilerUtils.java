package org.prlprg.bc2fir;

import org.prlprg.fir.module.Module;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.EnvSXP;

final class BC2FirCompilerUtils {
  public static Module compile(EnvSXP rModuleEnv) {
    var firModule = new Module();
    for (var binding : rModuleEnv.bindings()) {
      if (!(binding.getValue() instanceof CloSXP funSexp)) {
        throw new IllegalArgumentException(
            "Currently non-closures can't be compiled into FIŘ:\n"
                + binding.getKey()
                + " <- "
                + binding.getValue());
      }

      var funName = binding.getKey();
      ClosureCompiler.compile(firModule, funName, funSexp);
    }
    return firModule;
  }

  private BC2FirCompilerUtils() {
    // Utility class, no instances allowed.
  }
}
