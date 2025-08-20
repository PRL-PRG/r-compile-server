package org.prlprg.fir.opt;

import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;

public interface Optimization {
  default void run(Module module) {
    for (var function : module.localFunctions()) {
      // Check each function
      run(function);
    }
  }

  default void run(Function function) {
    for (var version : function.versions()) {
      run(function, version);
    }
  }

  void run(Function function, Abstraction version);
}
