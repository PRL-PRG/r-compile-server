package org.prlprg.bc2fir;

import java.util.Objects;
import org.prlprg.bc.BCCompiler;
import org.prlprg.fir.module.Module;
import org.prlprg.rsession.TestRSession;
import org.prlprg.session.RSession;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.ListSXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.util.gnur.GNUR;

final class BC2FirCompilerUtils {
  public static Module compile(EnvSXP rModuleEnv, RSession session) {
    var firModule = new Module();
    for (var binding : rModuleEnv.bindings()) {
      var funName = binding.getKey();
      if (!(binding.getValue() instanceof CloSXP funSexpNotCompiled)) {
        throw new IllegalArgumentException(
            "Currently non-closures can't be compiled into FIŘ:\n"
                + funName
                + " <- "
                + binding.getValue());
      }

      var funBc = new BCCompiler(funSexpNotCompiled, session).compile().orElseThrow(() -> new IllegalArgumentException("closure can't be compiled into R bytecode"));
      var funSexp = SEXPs.closure(
          funSexpNotCompiled.parameters(),
          SEXPs.bcode(funBc),
          funSexpNotCompiled.env(),
          funSexpNotCompiled.attributes());

      ClosureCompiler.compile(firModule, funName, funSexp);
    }
    return firModule;
  }

  private BC2FirCompilerUtils() {
    // Utility class, no instances allowed.
  }
}
