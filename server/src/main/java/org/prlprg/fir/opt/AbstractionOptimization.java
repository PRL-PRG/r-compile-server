package org.prlprg.fir.opt;

import static org.prlprg.fir.opt.Cleanup.cleanup;

import java.util.List;
import java.util.Optional;
import org.jspecify.annotations.Nullable;
import org.prlprg.AppConfig;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.module.Function;

/// An optimization that runs on an [Abstraction].
public interface AbstractionOptimization extends Optimization {
  /// Returns `true` if it made progress.
  default boolean run(
      @Nullable Function function, AbstractionFeedback feedback, Abstraction abstraction) {
    return abstraction
        .module()
        .record(
            "AbstractionOptimization#run",
            List.of(this, Optional.ofNullable(function), feedback, abstraction),
            () -> {
              var changed = runWithoutRecording(function, feedback, abstraction);

              if (AppConfig.DEBUG) {
                cleanup(abstraction);
              }

              return changed;
            });
  }

  @Override
  default boolean runWithoutRecording(ModuleFeedback feedback, Function function) {
    var changed = false;
    // Copy `version` because we may modify it.
    for (var version : List.copyOf(function.versions())) {
      if (version == function.baseline()) {
        // Don't optimize baseline
        continue;
      }
      changed |= runWithoutRecording(function, feedback.get(version), version);
    }
    return changed;
  }

  /// Returns `true` if it made progress.
  boolean runWithoutRecording(
      @Nullable Function function, AbstractionFeedback feedback, Abstraction abstraction);
}
