package org.prlprg.fir.opt.abstraction;

import org.prlprg.fir.interpret.InterpretUtil.TestInterpretCtx;
import org.prlprg.fir.opt.Optimization;
import org.prlprg.fir.opt.OptimizationTest;

class ScopeOptimizationTest extends OptimizationTest {

  @Override
  protected Optimization optimization(TestInterpretCtx c) {
    return new ScopeOptimization();
  }
}
