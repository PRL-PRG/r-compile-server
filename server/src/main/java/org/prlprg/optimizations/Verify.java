package org.prlprg.optimizations;

import org.prlprg.ir.cfg.CFG;

/**
 * Calls {@link CFG#verify()}.
 *
 * <p>Not technically an "optimization", but important to run between passes.
 */
class Verify implements OptimizationPass {
  @Override
  public void doApply(CFG cfg, OptimizationContext ctx) {
    cfg.verify();
  }
}
