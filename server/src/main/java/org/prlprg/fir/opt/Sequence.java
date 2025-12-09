package org.prlprg.fir.opt;

import static org.prlprg.fir.check.Checker.checkAll;

import java.util.List;
import org.prlprg.AppConfig;
import org.prlprg.AppConfig.CfgDebugLevel;
import org.prlprg.fir.check.Checker.Exclude;
import org.prlprg.fir.ir.module.Function;

/// Run the optimizations in order, then don't re-run.
public class Sequence implements Optimization {
  private final String name;
  private final List<Optimization> subOptimizations;

  public Sequence(String name, Optimization... subOptimizations) {
    this.name = name;
    this.subOptimizations = List.of(subOptimizations);
  }

  @Override
  public String name() {
    return name;
  }

  @Override
  public void run(Function function) {
    var check = AppConfig.CFG_DEBUG_LEVEL.compareTo(CfgDebugLevel.AFTER_STEP) >= 0;

    for (var opt : subOptimizations) {
      var codePreOpt = check ? function.toString() : null;

      opt.run(function);

      if (check && !checkAll(function, Exclude.STRICT_CFG)) {
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
