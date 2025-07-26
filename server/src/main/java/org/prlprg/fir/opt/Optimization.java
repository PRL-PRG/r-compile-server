package org.prlprg.fir.opt;

import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;

public abstract class Optimization {
  public void run(Module module) {
    for (var function : module.localFunctions()) {
      // Check each function
      run(function);
    }
  }

  public void run(Function function) {
    for (var version : function.versions()) {
      run(version);
    }
  }

  public abstract void run(Abstraction abstraction);
}
