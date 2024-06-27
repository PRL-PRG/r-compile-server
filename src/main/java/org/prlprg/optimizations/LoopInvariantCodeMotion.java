package org.prlprg.optimizations;

import org.prlprg.ir.cfg.CFG;

/**
 * <a href="https://en.wikipedia.org/wiki/Loop-invariant_code_motion">Wikipedia</a>
 *
 * <p>Note that R semantics mean we have to prove no reflection within the loop that could affect
 * the invariant.
 */
class LoopInvariantCodeMotion implements OptimizationPass {
  @Override
  public void doApply(CFG cfg, OptimizationContext ctx) {
    // TODO
  }
}
