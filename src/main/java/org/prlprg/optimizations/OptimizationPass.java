package org.prlprg.optimizations;

import org.prlprg.ir.cfg.CFG;
import org.prlprg.ir.cfg.instr.StmtData.MkCls;
import org.prlprg.ir.cfg.instr.StmtData.MkProm;
import org.prlprg.ir.closure.ClosureVersion;
import org.prlprg.ir.closure.CodeObject;
import org.prlprg.ir.closure.Promise;

/**
 * An optimization pass is at its core a function that takes a {@link CFG} and transforms it to
 * something with equivalent behavior but (hopefully) better performance.
 *
 * <p>Optimization passes are grouped into {@linkplain OptimizationPhase phases}. A group of phases
 * is run in the {@link Optimizer}.
 */
interface OptimizationPass {
  /**
   * Transforms the given closure version using data from the given context.
   *
   * <p>By default (and for almost all passes), this just optimizes the body. However, {@link
   * ComputeProperties} has a specific override.
   *
   * <p>Don't call this directly, it should only be called in {@link Optimizer}. This doesn't
   * recurse regardless of {@link #recurseInInnerCode()}.
   */
  default void doApply(ClosureVersion version, boolean isOutermost, OptimizationContext ctx) {
    doApply(version.body(), ctx);
  }

  /**
   * Transforms the given CFG using data from the given context.
   *
   * <p>By default (and for almost all passes), this just optimizes the body. However, {@link
   * ComputeProperties} has a specific override.
   *
   * <p>Don't call this directly, it should only be called in {@link Optimizer}. This doesn't
   * recurse regardless of {@link #recurseInInnerCode()}.
   */
  default void doApply(Promise promise, OptimizationContext ctx) {
    doApply(promise.body(), ctx);
  }

  /**
   * Transforms the given CFG using data from the given context.
   *
   * <p>Don't call this directly, it should only be called in {@link Optimizer}. This doesn't
   * recurse regardless of {@link #recurseInInnerCode()}.
   */
  void doApply(CFG cfg, OptimizationContext ctx);

  /**
   * Whether to recursively transform nested {@linkplain CodeObject code} ({@link MkCls} closures
   * and {@link MkProm} promises).
   *
   * <p>Currently we transform all versions of inner closures. However, unless multiple versions are
   * actually used, we'll probably end up making inner closures only have the baseline version, and
   * if the closure doesn't escape, said version will be optimized for a specific "implicit" call
   * context because it's sound.
   */
  default boolean recurseInInnerCode() {
    return true;
  }

  /** The name of this optimization pass, for logging. */
  default String name() {
    return getClass().getSimpleName();
  }
}
