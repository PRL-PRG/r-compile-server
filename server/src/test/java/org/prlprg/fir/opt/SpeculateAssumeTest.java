package org.prlprg.fir.opt;

import org.prlprg.fir.interpret.InterpretUtil.TestInterpretCtx;

class SpeculateAssumeTest extends OptimizationTest {
  @Override
  protected Optimization optimization(TestInterpretCtx c) {
    return new SpeculateAssume(c.interpreter()::feedback, 1);
  }
}
