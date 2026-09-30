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
public abstract class AbstractionOptimization extends Optimization {
  /// Run as the top-level optimization. Returns `true` if it made progress.
  public final boolean run(
      @Nullable Function function, AbstractionFeedback feedback, Abstraction abstraction) {
    return runAsTopLevel(() -> run(this, function, feedback, abstraction));
  }

  /// Run as a sub-optimization of `topLevel` (or as `topLevel` itself). Returns `true` if it made
  /// progress.
  public final boolean run(
      Optimization topLevel,
      @Nullable Function function,
      AbstractionFeedback feedback,
      Abstraction abstraction) {
    return abstraction
        .module()
        .record(
            "AbstractionOptimization#run",
            List.of(this, Optional.ofNullable(function), feedback, abstraction),
            () -> {
              var changed = runWithoutRecording(topLevel, function, feedback, abstraction);

              if (AppConfig.DEBUG) {
                cleanup(abstraction);
              }

              return changed;
            });
  }

  /// Runs on every version that's evaluated, except the baseline.
  ///
  /// An unevaluated version is optimized when it's evaluated: by this run if that's during it,
  /// otherwise by the run that evaluating it starts (see [LazyCopy]).
  @Override
  public boolean runWithoutRecording(
      Optimization topLevel, ModuleFeedback feedback, Function function) {
    var changed = false;
    // Copy `version` because we may modify it.
    for (var version : List.copyOf(function.versions())) {
      if (version == function.baseline()) {
        // Don't optimize baseline
        continue;
      }
      if (!version.isStub() && !version.isEvaluated()) {
        continue;
      }
      changed |= runWithoutRecording(topLevel, function, feedback.get(version), version);
    }
    return changed;
  }

  /// Returns `true` if it made progress.
  public abstract boolean runWithoutRecording(
      Optimization topLevel,
      @Nullable Function function,
      AbstractionFeedback feedback,
      Abstraction abstraction);
}
