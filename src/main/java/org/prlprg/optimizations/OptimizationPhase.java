package org.prlprg.optimizations;

import com.google.common.collect.ImmutableList;
import org.prlprg.ir.closure.ClosureVersion;

/**
 * A collection of {@linkplain OptimizationPass optimization passes}.
 *
 * <p>The logic to run the phases is in {@link Optimizer#optimize(ClosureVersion,
 * OptimizationContext, OptimizationPhase...)}.
 */
class OptimizationPhase {
  private final String name;
  private final ImmutableList<OptimizationPass> passes;

  // region the phases
  //
  // Important to note:
  // - There's no `DeadCodeElimination` because it's handled in `Cleanup` (and there are
  //   optimizations like `ElideEnvs` that remove specific non-trivial dead code).
  // - There's no `ConstantPropagation` because `Constant` is a node itself, not an instruction.

  /**
   * Default optimization passes.
   *
   * <p>Currently this is all of them, and there are no passes for speculation.
   */
  static final OptimizationPhase DEFAULT =
      new OptimizationPhase(
          "Default",
          new ScopeResolution(),
          new ElideEnvs(),
          new LoopInvariantCodeMotion(),
          new CopyPropagation(),
          new CommonSubexpressionElimination(),
          new Cleanup(),
          new Verify(),
          new ComputeProperties(),
          new ScopeResolution(),
          new ElideEnvs(),
          new LoopInvariantCodeMotion(),
          new CopyPropagation(),
          new CommonSubexpressionElimination(),
          new Cleanup(),
          new Verify(),
          new ComputeProperties());

  // endregion the phases

  // region boilerplate
  private OptimizationPhase(String name, ImmutableList<OptimizationPass> passes) {
    if (passes.isEmpty()) {
      throw new IllegalArgumentException("An optimization phase must have at least one pass");
    }

    this.name = name;
    this.passes = passes;
  }

  private OptimizationPhase(String name, OptimizationPass... passes) {
    this(name, ImmutableList.copyOf(passes));
  }

  /** The name of this phase, for logging. */
  public String name() {
    return name;
  }

  /** The sequence of passes in this phase. */
  public ImmutableList<OptimizationPass> passes() {
    return passes;
  }
  // endregion boilerplate
}
