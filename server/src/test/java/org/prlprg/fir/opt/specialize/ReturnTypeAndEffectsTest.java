package org.prlprg.fir.opt.specialize;

import org.prlprg.fir.interpret.TestInterpret.TestContext;
import org.prlprg.fir.opt.Optimization;
import org.prlprg.fir.opt.OptimizationTest;
import org.prlprg.fir.opt.Specialize;

class ReturnTypeAndEffectsTest extends OptimizationTest {
  @Override
  protected Optimization optimization(TestContext c) {
    return new Specialize(new ReturnTypeAndEffects());
  }
}
