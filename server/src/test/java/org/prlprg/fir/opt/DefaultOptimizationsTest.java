package org.prlprg.fir.opt;

import static org.prlprg.fir.opt.Optimizations.defaultOptimizations;

import org.prlprg.fir.interpret.InterpretUtil.TestInterpretCtx;

class DefaultOptimizationsTest extends OptimizationTest {
  @Override
  protected Optimization optimization(TestInterpretCtx c) {
    return defaultOptimizations(c.interpreter()::feedback);
  }
}
