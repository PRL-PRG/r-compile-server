package org.prlprg.fir.opt;

import org.prlprg.fir.interpret.InterpretUtil.TestInterpretCtx;
import org.prlprg.fir.opt.abstraction.Specialize;
import org.prlprg.fir.opt.specialize.DefiniteForce;

class DefiniteForceTest extends OptimizationTest {
  @Override
  protected Optimization optimization(TestInterpretCtx c) {
    return new Specialize(new DefiniteForce());
  }
}
