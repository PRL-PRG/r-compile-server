package org.prlprg.fir.opt;

import static org.prlprg.fir.check.Checker.checkAll;

import java.util.List;
import org.prlprg.AppConfig;
import org.prlprg.AppConfig.CfgDebugLevel;
import org.prlprg.fir.ir.module.Function;

/// Run the optimizations in order, then don't re-run.
public class Sequence implements Optimization {
  private final List<Optimization> subOptimizations;

  public Sequence(Optimization... subOptimizations) {
    this.subOptimizations = List.of(subOptimizations);
  }

  @Override
  public void run(Function function) {
    var check = AppConfig.CFG_DEBUG_LEVEL.compareTo(CfgDebugLevel.AFTER_STEP) >= 0;

    for (var opt : subOptimizations) {
      var checkOpt = check && !(opt instanceof Cleanup);
      var codePreOpt = checkOpt ? function.toString() : null;

      opt.run(function);

      if (checkOpt) {
        new Cleanup(false).run(function);
        if (!checkAll(function)) {
          throw new AssertionError(
              "Verification failed after "
                  + opt
                  + "\nBefore:\n"
                  + codePreOpt
                  + "\nAfter:\n"
                  + function);
        }
      }
    }
  }
}
