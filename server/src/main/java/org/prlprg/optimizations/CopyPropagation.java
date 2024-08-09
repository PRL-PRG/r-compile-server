package org.prlprg.optimizations;

import org.prlprg.ir.cfg.CFG;

/**
 * <a href="https://en.wikipedia.org/wiki/Copy_propagation">Wikipedia</a>
 *
 * <p>Since R has loads and stores, this is the pass that replaces redundant store instructions and
 * subsequent load instructions with the stored/loaded value.
 *
 * <p>Note that R semantics mean we have to prove no reflection between these.
 */
class CopyPropagation implements OptimizationPass {
  @Override
  public void doApply(CFG cfg, OptimizationContext ctx) {
    // TODO
  }
}
