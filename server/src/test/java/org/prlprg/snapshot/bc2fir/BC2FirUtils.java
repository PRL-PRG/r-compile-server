package org.prlprg.snapshot.bc2fir;

import static org.junit.jupiter.api.Assertions.fail;
import static org.prlprg.fir.check.Checker.checkAll;
import static org.prlprg.fir.opt.Cleanup.cleanup;

import org.prlprg.bc.BCCompiler;
import org.prlprg.bc2fir.BC2FirClosureCompiler;
import org.prlprg.fir.check.Checker.Exclude;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.session.RSession;
import org.prlprg.sexp.BCodeSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.SEXPs;

public final class BC2FirUtils {
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

      var funSexp = funSexpNotCompiled;
      if (!(funSexp.body() instanceof BCodeSXP)) {
        var funBc =
            new BCCompiler(funSexpNotCompiled, session)
                .compile()
                .orElseThrow(BCCompilerUnsupportedException::new);
        funSexp =
            SEXPs.closure(
                funSexpNotCompiled.parameters(),
                SEXPs.bcode(funBc),
                funSexpNotCompiled.env(),
                funSexpNotCompiled.attributes());
      }

      BC2FirClosureCompiler.compile(session, firModule, funName, funSexp);
      cleanup(firModule);

      // Don't check flow, because it's trivial (no `consume` annotations) but expensive.
      if (!checkAll(firModule, Exclude.PROVENANCE)) {
        fail("Compiled FIŘ failed verification\n" + firModule);
      }
    }
    return firModule;
  }

  private BC2FirUtils() {
    // Utility class, no instances allowed.
  }
}
