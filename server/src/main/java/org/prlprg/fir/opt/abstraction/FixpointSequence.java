package org.prlprg.fir.opt.abstraction;

import java.util.List;
import org.prlprg.fir.ir.abstraction.Abstraction;

/// An optimization that runs sub-optimizations in a sequence repeatedly until there are no more
/// changes.
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
    var changed = false;

    var iteration = 0;
    do {
      // Run iterations.
      var iterationChanged = false;
      for (var opt : subOptimizations) {
        iterationChanged |= opt.run(abstraction);
      }

      changed = iterationChanged;

      // Increment and check hard or (in `while (...)`) soft limit.
      iteration++;
      if (iteration >= HARD_LIMIT) {
        throw new IllegalStateException(
            "Didn't reach a fixpoint after " + HARD_LIMIT + " iterations, this is likely a bug");
      }
    } while (!changed && iteration < maxIterations);

    return changed;
  }
}
