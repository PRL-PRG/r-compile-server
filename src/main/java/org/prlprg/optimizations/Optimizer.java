package org.prlprg.optimizations;

import static org.prlprg.ir.analysis.PropertiesComputer.computeClosureVersionProperties;

import java.util.logging.Logger;
import org.prlprg.ir.cfg.CFG;
import org.prlprg.ir.closure.Closure;
import org.prlprg.ir.closure.ClosureVersion;
import org.prlprg.ir.closure.CodeObject;
import org.prlprg.ir.closure.Promise;

/** Optimize a {@link ClosureVersion}. */
public class Optimizer {
  private static final Logger logger = Logger.getLogger(Optimizer.class.getName());

  /** Run the default optimization passes on a {@link ClosureVersion}. */
  public static void optimize(ClosureVersion closureVersion) {
    optimize(closureVersion, new OptimizationContext(), OptimizationPhase.DEFAULT);
  }

  // TODO: Functions to run other sequences of optimization phases...

  // region optimization logic
  /** Run the given optimization phases on a {@link ClosureVersion} with the given context. */
  static void optimize(
      ClosureVersion version, OptimizationContext context, OptimizationPhase... phases) {
    logger.info(
        "Optimizing closure version " + version.closure().name() + "#" + version.index() + "...");
    for (var phase : phases) {
      logger.info("- Phase " + phase.name() + "...");
      for (var pass : phase.passes()) {
        logger.info("  - Pass " + pass.name() + "...");
        optimize(version, true, context, pass);
      }
    }
    logger.info("  - Compute outermost properties...");
    // `PropertiesComputer` computes properties of inner code, and only inner code.
    version.setProperties(computeClosureVersionProperties(version.body()));
  }

  /**
   * Run the given optimization pass on a {@link ClosureVersion}.
   *
   * <p>This only runs the given pass, and it recurses in inner {@linkplain CodeObject code objects}
   * if necessary.
   */
  static void optimize(
      ClosureVersion version,
      boolean isOutermost,
      OptimizationContext context,
      OptimizationPass pass) {
    pass.doApply(version, isOutermost, context);
    if (pass.recurseInInnerCode()) {
      optimizeInnersIn(version.body(), context, pass);
    }
  }

  /**
   * Run the given optimization pass on an inner {@link CodeObject}.
   *
   * <p>If it's a closure, optimizes all its versions. If its a promise, optimizes its body.
   */
  static void optimizeInner(
      CodeObject codeObject, OptimizationContext context, OptimizationPass pass) {
    switch (codeObject) {
      case Closure closure -> optimizeInner(closure, context, pass);
      case Promise promise -> optimizeInner(promise, context, pass);
    }
  }

  /**
   * Run the given optimization pass on an inner {@link Closure}.
   *
   * <p>Specifically, runs it on all its {@link ClosureVersion}s (in the outermost closure, the
   * optimizations are all applied to one specific version).
   */
  static void optimizeInner(Closure closure, OptimizationContext context, OptimizationPass pass) {
    logger.info("    - On inner closure " + closure.name() + "...");
    closure
        .streamVersions()
        .forEach(
            version -> {
              logger.info("      - On inner closure version " + version.index() + "...");
              optimize(version, false, context, pass);
            });
  }

  /** Run the given optimization pass on an inner {@link Promise}. */
  static void optimizeInner(Promise promise, OptimizationContext context, OptimizationPass pass) {
    logger.info("    - On promise " + promise.name() + "...");
    pass.doApply(promise, context);
    if (pass.recurseInInnerCode()) {
      optimizeInnersIn(promise.body(), context, pass);
    }
  }

  /**
   * Run the given optimization pass on inner code objects in the given {@link CFG}.
   *
   * <p>This does not optimize the {@link CFG} itself, that is done via specific functions on the
   * {@link OptimizationPass} interface (which don't recurse).
   */
  static void optimizeInnersIn(CFG body, OptimizationContext context, OptimizationPass pass) {
    assert pass.recurseInInnerCode();
    body.streamInnerCodeObjects().forEach(innerCode -> optimizeInner(innerCode, context, pass));
  }
  // endregion optimization logic
}
