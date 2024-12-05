package org.prlprg.optimizations;

import org.prlprg.ir.cfg.CFG;

/**
 * <a href="https://en.wikipedia.org/wiki/Common_subexpression_elimination">Wikipedia</a>.
 *
 * <p>Note that R semantics mean we have to prove no reflection between merged expressions.
 */
class CommonSubexpressionElimination implements OptimizationPass {
  @Override
  public void doApply(CFG cfg, OptimizationContext ctx) {
    // TODO
  }
}
