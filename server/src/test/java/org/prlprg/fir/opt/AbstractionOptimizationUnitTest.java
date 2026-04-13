package org.prlprg.fir.opt;

import org.prlprg.fir.interpret.internal.MockModuleFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;

public interface AbstractionOptimizationUnitTest extends OptimizationUnitTest {
  @Override
  AbstractionOptimization optimization();

  default boolean run(Abstraction abstraction) {
    return optimization().run(null, new MockModuleFeedback().get(abstraction), abstraction);
  }
}
