package org.prlprg.optimizations;

import static org.prlprg.ir.analysis.PropertiesComputer.computeClosureVersionProperties;
import static org.prlprg.ir.analysis.PropertiesComputer.computePromiseProperties;

import org.prlprg.ir.analysis.PropertiesComputer;
import org.prlprg.ir.cfg.CFG;
import org.prlprg.ir.closure.ClosureVersion;
import org.prlprg.ir.closure.Promise;

/**
 * Computes the properties of the object containing the {@link CFG}.
 *
 * <p>Throws {@link UnsupportedOperationException} when given a CFG directly. Instead it overrides
 * the other {@code #doApply} overloads.
 *
 * <p>This uses {@link PropertiesComputer}, which is in {@link org.prlprg.ir.analysis}. The
 * {@linkplain org.prlprg.bc2ir bytecode->IR compiler} also computed properties for the baseline.
 *
 * <p>This isn't like the other optimizations, because the properties affect <i>other</i> code, not
 * the code that had its properties computed. However, if the code is inner, this other code
 * includes other code we are optimizing, so it has to be in between passes.
 */
class ComputeProperties implements OptimizationPass {

  @Override
  public void doApply(ClosureVersion version, boolean isOutermost, OptimizationContext ctx) {
    // Outermost version's properties are computed at the end of optimization, only once, because
    // others are redundant.
    if (!isOutermost) {
      version.setProperties(computeClosureVersionProperties(version.body()));
    }
  }

  @Override
  public void doApply(Promise promise, OptimizationContext ctx) {
    promise.setProperties(computePromiseProperties(promise.body()));
  }

  @Override
  public void doApply(CFG cfg, OptimizationContext ctx) {
    throw new UnsupportedOperationException(
        "ComputeProperties doesn't take a CFG directly, it takes the object containing it.");
  }
}
