package org.prlprg.fir.opt;

import java.util.List;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.function.BooleanSupplier;
import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.util.Strings;

/// An optimization that runs on a [Function].
///
/// An optimization is either run directly, which makes it the *top-level* optimization of that
/// run, or by another optimization (e.g. a [sequence][org.prlprg.fir.opt.sequence.Sequence]) as one
/// of its sub-optimizations. Either way it's told which optimization is the top-level one, which is
/// what a version it creates re-runs when it's evaluated later (see [LazyCopy]).
public abstract class Optimization {
  private static final AtomicInteger NEXT_RUN_ID = new AtomicInteger(1);

  private int runId = 0;
  private int runDepth = 0;

  public String name() {
    return Strings.pascalCaseToCamelCase(getClass().getSimpleName());
  }

  @Override
  public String toString() {
    return name();
  }

  /// Identifies the run of this optimization as the top-level one that is in progress.
  ///
  /// It changes both when such a run starts and when it ends, so two reads are equal iff no run
  /// started or ended in between, e.g. iff a version is evaluated during the run that created it.
  public final int runId() {
    return runId;
  }

  /// Whether this is running as the top-level optimization.
  public final boolean isRunning() {
    return runDepth > 0;
  }

  /// Run as the top-level optimization. Returns `true` if it made progress.
  public final boolean run(ModuleFeedback feedback, Module module) {
    return runAsTopLevel(() -> run(this, feedback, module));
  }

  /// Run as the top-level optimization. Returns `true` if it made progress.
  public final boolean run(ModuleFeedback feedback, Function function) {
    return runAsTopLevel(() -> run(this, feedback, function));
  }

  /// If more than this many runs leave something unevaluated, [#evaluateAll(ModuleFeedback,
  /// Module)] assumes they always will, and throws.
  private static final int EVALUATE_ALL_LIMIT = 100;

  /// Evaluate every unevaluated version in `module`, and optimize them with this, until the
  /// optimizations don't create any more.
  ///
  /// Evaluating a version this created already optimizes it, but (unless it's during a run) by
  /// starting a run for that version alone, so evaluating them one by one runs this once per
  /// version. This evaluates every version in a run that then optimizes them together.
  public final void evaluateAll(ModuleFeedback feedback, Module module) {
    for (var i = 0; module.hasUnevaluated(); i++) {
      if (i == EVALUATE_ALL_LIMIT) {
        throw new IllegalStateException(
            "Optimizations still create unevaluated versions after "
                + EVALUATE_ALL_LIMIT
                + " runs, this is likely a bug:\n"
                + module);
      }

      runAsTopLevel(
          () -> {
            module.evaluateAll();
            return run(this, feedback, module);
          });
    }
  }

  final boolean runAsTopLevel(BooleanSupplier run) {
    var outerRunId = runId;
    runId = NEXT_RUN_ID.getAndIncrement();
    runDepth++;
    try {
      return run.getAsBoolean();
    } finally {
      runDepth--;
      // A nested run hands the enclosing one its id back, so versions the enclosing run created
      // are still recognized as its own.
      runId = runDepth == 0 ? NEXT_RUN_ID.getAndIncrement() : outerRunId;
    }
  }

  /// Run as a sub-optimization of `topLevel` (or as `topLevel` itself). Returns `true` if it made
  /// progress.
  public final boolean run(Optimization topLevel, ModuleFeedback feedback, Module module) {
    return module.record(
        "Optimization#run",
        List.of(this, feedback),
        () -> runWithoutRecording(topLevel, feedback, module));
  }

  public boolean runWithoutRecording(
      Optimization topLevel, ModuleFeedback feedback, Module module) {
    var changed = false;
    // Copy because we may add functions (evaluating a version can).
    for (var function : List.copyOf(module.localFunctions())) {
      // Check each function
      changed |= run(topLevel, feedback, function);
    }
    return changed;
  }

  /// Run as a sub-optimization of `topLevel` (or as `topLevel` itself). Returns `true` if it made
  /// progress.
  public final boolean run(Optimization topLevel, ModuleFeedback feedback, Function function) {
    return function
        .owner()
        .record(
            "Optimization#run",
            List.of(this, feedback, function),
            () -> runWithoutRecording(topLevel, feedback, function));
  }

  public abstract boolean runWithoutRecording(
      Optimization topLevel, ModuleFeedback feedback, Function function);
}
