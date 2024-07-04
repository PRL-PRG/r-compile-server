package org.prlprg.optimizations;

import org.prlprg.ir.cfg.CFG;
import org.prlprg.ir.cfg.RValue;

/**
 * Uses scope analysis to get rid of as many `LdVar`'s as possible (from PIR).
 *
 * <p>Similar to LLVM's {@code mem2reg} pass, we try to lift as many loads from the R environment to
 * {@linkplain RValue SSA variables}.
 */
class ScopeResolution implements OptimizationPass {
  @Override
  public void doApply(CFG cfg, OptimizationContext ctx) {
    // TODO
  }
}
