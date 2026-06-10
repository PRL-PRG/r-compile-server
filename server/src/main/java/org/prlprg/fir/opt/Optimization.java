package org.prlprg.fir.opt;

import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;

/// An optimization that runs on a [Function].
public interface Optimization {
  default void run(Module module) {
    for (var function : module.localFunctions()) {
      // Check each function
      run(function);
    }
  }

  void run(Function function);
}
