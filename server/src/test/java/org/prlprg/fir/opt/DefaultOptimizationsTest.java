package org.prlprg.fir.opt;

import static org.prlprg.fir.opt.Optimizations.defaultOptimizations;

import org.prlprg.fir.interpret.TestInterpret.TestContext;

class DefaultOptimizationsTest extends OptimizationTest {
  @Override
  protected Optimization optimization(TestContext c) {
    return defaultOptimizations(c.interpreter().feedback());
  }
}
