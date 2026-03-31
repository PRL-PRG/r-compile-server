package org.prlprg.fir.opt;

import java.util.List;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.module.Function;

/// An optimization that runs on an [Abstraction].
public interface AbstractionOptimization extends Optimization {
  @Override
  default boolean runWithoutRecording(ModuleFeedback feedback, Function function) {
    var changed = false;
    // Copy `version` because we may modify it.
    for (var version : List.copyOf(function.versions())) {
      changed |= runWithoutRecording(function, feedback.get(version), version);
    }
    return changed;
  }

  /// Returns `true` if it made progress.
  default boolean run(Function function, AbstractionFeedback feedback, Abstraction abstraction) {
    return function
        .owner()
        .record(
            "AbstractionOptimization#run",
            List.of(this, function, feedback, abstraction),
            () -> runWithoutRecording(function, feedback, abstraction));
  }

  /// Returns `true` if it made progress.
  boolean runWithoutRecording(
      Function function, AbstractionFeedback feedback, Abstraction abstraction);
}
