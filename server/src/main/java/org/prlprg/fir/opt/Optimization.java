package org.prlprg.fir.opt;

import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.util.Strings;

/// An optimization that runs on a [Function].
public interface Optimization {
  default String name() {
    return Strings.pascalCaseToCamelCase(getClass().getSimpleName());
  }

  default void run(ModuleFeedback feedback, Module module) {
    for (var function : module.localFunctions()) {
      // Check each function
      run(feedback, function);
    }
  }

  void run(ModuleFeedback feedback, Function function);
}
