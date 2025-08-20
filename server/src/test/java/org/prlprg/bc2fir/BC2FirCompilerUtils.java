package org.prlprg.bc2fir;

import static org.junit.jupiter.api.Assertions.fail;
import static org.prlprg.fir.check.Checker.checkAll;
import static org.prlprg.fir.opt.Cleanup.cleanup;

import org.prlprg.bc.BCCompiler;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.session.RSession;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.SEXPs;

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

      var funBc =
          new BCCompiler(funSexpNotCompiled, session)
              .compile()
              .orElseThrow(BcCompilerUnsupportedException::new);
      var funSexp =
          SEXPs.closure(
              funSexpNotCompiled.parameters(),
              SEXPs.bcode(funBc),
              funSexpNotCompiled.env(),
              funSexpNotCompiled.attributes());

      ClosureCompiler.compile(firModule, funName, funSexp);
      cleanup(firModule);

      if (!checkAll(firModule)) {
        fail("FIŘ failed verification\n" + firModule);
      }
    }
    return firModule;
  }

  private BC2FirCompilerUtils() {
    // Utility class, no instances allowed.
  }
}
