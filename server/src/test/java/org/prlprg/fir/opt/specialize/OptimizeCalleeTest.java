package org.prlprg.fir.opt.specialize;

import org.prlprg.fir.interpret.TestInterpret.TestContext;
import org.prlprg.fir.opt.Optimization;
import org.prlprg.fir.opt.OptimizationTest;
import org.prlprg.fir.opt.Specialize;

class OptimizeCalleeTest extends OptimizationTest {
  @Override
  protected Optimization optimization(TestContext c) {
    return new Specialize(new OptimizeCallee(c.interpreter().feedback(), 1));
  }
}
