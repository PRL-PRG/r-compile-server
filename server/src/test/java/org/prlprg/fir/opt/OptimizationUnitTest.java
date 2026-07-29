package org.prlprg.fir.opt;

import org.prlprg.fir.feedback.MockModuleFeedback;
import org.prlprg.fir.ir.module.Module;

public interface OptimizationUnitTest {
  Optimization optimization();

  default boolean run(Module module) {
    return optimization().run(new MockModuleFeedback(module), module);
  }
}
