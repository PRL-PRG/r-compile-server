package org.prlprg.fir.opt;

import org.prlprg.fir.interpret.InterpretUtil.TestInterpretCtx;
import org.prlprg.fir.opt.abstraction.Specialize;
import org.prlprg.fir.opt.specialize.ReturnTypeAndEffects;

class ReturnTypeAndEffectsTest extends OptimizationTest {
  @Override
  protected Optimization optimization(TestInterpretCtx c) {
    return new Specialize(new ReturnTypeAndEffects());
  }
}
