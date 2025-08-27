package org.prlprg.fir.opt;

import org.prlprg.fir.interpret.InterpretUtil.TestInterpretCtx;
import org.prlprg.fir.opt.abstraction.OriginOptimization;

class OriginOptimizationTest extends OptimizationTest {

  @Override
  protected Optimization optimization(TestInterpretCtx c) {
    return new OriginOptimization();
  }
}
