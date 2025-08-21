package org.prlprg.fir.opt;

import java.util.List;
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
    var versions =
        mayAddOrRemoveVersions() ? List.copyOf(function.versions()) : function.versions();
    for (var version : versions) {
      run(function, version);
    }
  }

  default boolean mayAddOrRemoveVersions() {
    // Most optimizations don't modify functions.
    return false;
  }

  void run(Function function, Abstraction version);
}
