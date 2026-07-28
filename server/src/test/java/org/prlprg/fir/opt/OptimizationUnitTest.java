package org.prlprg.fir.opt;

import org.prlprg.fir.interpret.internal.MockModuleFeedback;
import org.prlprg.fir.ir.module.Module;

public interface OptimizationUnitTest {
  Optimization optimization();

  default boolean run(Module module) {
    return optimization().run(new MockModuleFeedback(), module);
  }
}
