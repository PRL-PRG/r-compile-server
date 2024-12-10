package org.prlprg.optimizations;

import org.prlprg.ir.cfg.CFG;

/**
 * Calls {@link CFG#cleanup()}.
 *
 * <p>Not technically an "optimization", but important to run between passes.
 */
class Cleanup implements OptimizationPass {
  @Override
  public void doApply(CFG cfg, OptimizationContext ctx) {
    cfg.cleanup();
  }
}
