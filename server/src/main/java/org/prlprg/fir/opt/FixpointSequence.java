package org.prlprg.fir.opt;

import static org.prlprg.fir.check.Checker.checkAll;

import java.util.List;
import org.prlprg.AppConfig;
import org.prlprg.AppConfig.CfgDebugLevel;
import org.prlprg.fir.check.Checker.Exclude;
import org.prlprg.fir.ir.abstraction.Abstraction;

/// An optimization that runs sub-optimizations in a sequence repeatedly until a fixpoint.
///
/// It can't reuse analyses, and will rerun every optimization in the sequence until there is a
/// full pass where none make any changes. You can optionally limit the number of iterations.
public class FixpointSequence implements AbstractionOptimization {
  /// If more than this many optimizations are run, it's assumed that no fixpoint will be reached,
  /// and an error is thrown.
  private static final int HARD_LIMIT = 100000;

  private final int maxIterations;
  private final List<AbstractionOptimization> subOptimizations;

  public FixpointSequence(AbstractionOptimization... subOptimizations) {
    this(Integer.MAX_VALUE, subOptimizations);
  }

  public FixpointSequence(int maxIterations, AbstractionOptimization... subOptimizations) {
    this.maxIterations = maxIterations;
    this.subOptimizations = List.of(subOptimizations);
  }

  @Override
  public boolean run(Abstraction abstraction) {
    var check = AppConfig.CFG_DEBUG_LEVEL.compareTo(CfgDebugLevel.AFTER_STEP) >= 0;

    var iteration = 0;
    while (iteration < maxIterations) {
      // Run iterations.
      var iterationChanged = false;
      for (var opt : subOptimizations) {
        var codePreOpt = check ? abstraction.toString() : null;

        iterationChanged |= opt.run(abstraction);

        if (check && !checkAll(abstraction, Exclude.STRICT_CFG)) {
          throw new AssertionError(
              "Verification failed after "
                  + opt
                  + "\nBefore:\n"
                  + codePreOpt
                  + "\nAfter:\n"
                  + abstraction);
        }
      }

      // Stop if no changes.
      if (!iterationChanged) {
        break;
      }

      // Increment and check hard limit (soft limit checked in loop condition).
      iteration++;
      if (iteration >= HARD_LIMIT) {
        throw new IllegalStateException(
            "Didn't reach a fixpoint after " + HARD_LIMIT + " iterations, this is likely a bug");
      }
    }

    return iteration > 0;
  }
}
