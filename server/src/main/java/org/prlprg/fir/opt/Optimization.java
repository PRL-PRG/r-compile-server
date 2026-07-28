package org.prlprg.fir.opt;

import java.util.List;
import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.util.Strings;

/// An optimization that runs on a [Function].
public interface Optimization {
  default String name() {
    return Strings.pascalCaseToCamelCase(getClass().getSimpleName());
  }

  default boolean run(ModuleFeedback feedback, Module module) {
    return module.record(
        "Optimization#run", List.of(this, feedback), () -> runWithoutRecording(feedback, module));
  }

  default boolean runWithoutRecording(ModuleFeedback feedback, Module module) {
    var changed = false;
    for (var function : module.localFunctions()) {
      // Check each function
      changed |= run(feedback, function);
    }
    return changed;
  }

  default boolean run(ModuleFeedback feedback, Function function) {
    return function
        .owner()
        .record(
            "Optimization#run",
            List.of(this, feedback, function),
            () -> runWithoutRecording(feedback, function));
  }

  boolean runWithoutRecording(ModuleFeedback feedback, Function function);
}
