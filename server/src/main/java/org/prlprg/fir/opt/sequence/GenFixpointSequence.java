package org.prlprg.fir.opt.sequence;

import java.util.List;
import org.prlprg.AppConfig;
import org.prlprg.AppConfig.CfgDebugLevel;

/// Runs sub-optimizations in a sequence repeatedly until a fixpoint. Shared by
/// [ModuleFixpointSequence] and [AbstractionFixpointSequence], which are different kinds of
/// optimizations and so can't share a superclass.
abstract class GenFixpointSequence<Opt, Feedback, Target> {
  /// If more than this many optimizations are run, it's assumed that no fixpoint will be reached,
  /// and an error is thrown.
  private static final int HARD_LIMIT = 1000;

  private final int maxIterations;
  private final List<Opt> subOptimizations;

  protected GenFixpointSequence(int maxIterations, List<Opt> subOptimizations) {
    this.maxIterations = maxIterations;
    this.subOptimizations = subOptimizations;
  }

  final boolean run(Feedback feedback, Target target) {
    var check = AppConfig.CFG_DEBUG_LEVEL.compareTo(CfgDebugLevel.AFTER_STEP) >= 0;

    var iteration = 0;
    while (iteration < maxIterations) {
      // Run iterations.
      var iterationChanged = false;
      for (var opt : subOptimizations) {
        var codePreOpt = check ? target.toString() : null;

        iterationChanged |= runOptimization(opt, feedback, target);

        if (check && !checkTarget(target)) {
          throw new AssertionError(
              "Verification failed after "
                  + opt
                  + "\nBefore:\n"
                  + codePreOpt
                  + "\nAfter:\n"
                  + target);
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
            "Didn't reach a fixpoint after "
                + HARD_LIMIT
                + " iterations, this is likely a bug:\n"
                + target);
      }
    }

    return iteration > 0;
  }

  protected abstract boolean runOptimization(Opt opt, Feedback feedback, Target target);

  protected abstract boolean checkTarget(Target target);
}
