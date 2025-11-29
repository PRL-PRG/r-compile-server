package org.prlprg.fir.opt;

import org.prlprg.fir.interpret.TestInterpret.TestContext;

class SpeculateAssumeTest extends OptimizationTest {
  @Override
  protected Optimization optimization(TestContext c) {
    return new SpeculateAssume(c.interpreter().feedback(), 1, true);
  }
}
