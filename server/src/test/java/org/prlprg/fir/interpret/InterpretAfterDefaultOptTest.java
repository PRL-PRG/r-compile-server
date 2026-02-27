package org.prlprg.fir.interpret;

import static org.prlprg.fir.opt.Optimizations.defaultOptimizations;

import org.prlprg.fir.opt.Optimization;

public class InterpretAfterDefaultOptTest implements InterpretAfterGenOptTest {
  @Override
  public Optimization optimization() {
    return defaultOptimizations(10);
  }
}
