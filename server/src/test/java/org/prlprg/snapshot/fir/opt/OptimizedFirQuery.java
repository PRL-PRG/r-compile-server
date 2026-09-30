package org.prlprg.snapshot.fir.opt;

import static org.junit.Assert.fail;
import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.prlprg.fir.check.Checker.checkAll;
import static org.prlprg.fir.opt.Cleanup.cleanup;

import java.util.Collections;
import java.util.List;
import java.util.Map;
import java.util.Objects;
import java.util.WeakHashMap;
import org.prlprg.examples.Example;
import org.prlprg.examples.SexpResult.Error;
import org.prlprg.examples.SexpResult.Ok;
import org.prlprg.fir.feedback.MockModuleFeedback;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.opt.Optimization;
import org.prlprg.snapshot.SkipQueryException;
import org.prlprg.snapshot.SnapshotStore;
import org.prlprg.snapshot.fir.interpret.InterpretQuery;
import org.prlprg.snapshot.fir.ir.FirQuery;
import org.prlprg.snapshot.fir.ir.GenFirQuery;
import org.prlprg.util.Files;
import org.prlprg.util.Paths;

/// The example's module after running `optimization` on it.
///
/// The optimizations create unevaluated versions, which are only optimized once they're evaluated
/// (by running `optimization` again), so the module this computes isn't done being optimized.
public record OptimizedFirQuery(Optimization optimization) implements GenFirQuery {
  /// The feedback each module this computed was optimized with, which is also what its unevaluated
  /// versions are optimized with when they're evaluated.
  private static final Map<Module, MockModuleFeedback> FEEDBACKS =
      Collections.synchronizedMap(new WeakHashMap<>());

  /// The feedback `module`, which this query computed, is optimized with.
  ///
  /// Record into it (instead of into a new feedback) so that the versions evaluated later are
  /// optimized with what was recorded until then.
  public static MockModuleFeedback feedbackOf(Module module) {
    return Objects.requireNonNull(
        FEEDBACKS.get(module), "module wasn't computed by an `OptimizedFirQuery`");
  }

  @Override
  public String name() {
    return optimization().name().equals("default")
        ? "opt.fir"
        : "opt." + optimization.name() + ".fir";
  }

  @Override
  public boolean equals(Object o) {
    if (!(o instanceof OptimizedFirQuery(var o1))) {
      return false;
    }
    return Objects.equals(optimization.name(), o1.name());
  }

  @Override
  public int hashCode() {
    return Objects.hashCode(optimization.name());
  }

  /// A module with unevaluated versions is only what this query computes until it's used.
  @Override
  public boolean isTransient() {
    return true;
  }

  @Override
  public Module compute(Example example, SnapshotStore store) {
    var module = unoptimized(example, store);
    optimization.run(feedbackOf(module), module);
    return module;
  }

  /// The module with the baseline and the best version of every function evaluated, which is what
  /// a program that calls each function often enough ends up running.
  ///
  /// It's optimized again instead of evaluating `data`, which whoever loaded it still wants
  /// unevaluated.
  @Override
  public Module snapshot(Module data, Example example, SnapshotStore store) {
    var module = unoptimized(example, store);

    // Log optimizations, and save even if we fail to compute
    var log = new OptimizationLog(module);
    try {
      optimization.run(feedbackOf(module), module);

      // Evaluating a version optimizes it, which can add functions and better versions. Those
      // aren't evaluated in turn: the point is what's reached, not everything.
      for (var function : List.copyOf(module.localFunctions())) {
        var best = function.versions().first();
        function.baseline().body();
        if (!best.isStub()) {
          best.body();
        }
      }
      // The baselines aren't optimized, so nothing cleaned them up since BC->FIŘ.
      cleanup(module);
    } finally {
      log.close();

      if (!example.hasOption("", "dontSaveSnapshots")) {
        var path = Paths.addingExtension(store.snapshotPath(example, this), "optlog.html");
        Files.createDirectories(path.getParent());
        log.writeHtml(path);
      }
    }

    return module;
  }

  /// Every version is optimized by one run of the optimizations, instead of each by the run that
  /// evaluating it starts.
  @Override
  public void evaluateAll(Module module) {
    optimization.evaluateAll(feedbackOf(module), module);
    // The baselines aren't optimized, so nothing cleaned them up since BC->FIŘ.
    cleanup(module);
  }

  /// The example's module before it's optimized, with the feedback to optimize it with.
  private Module unoptimized(Example example, SnapshotStore store) {
    if (GenFirQuery.isDeliberatelyInvalid(example)) {
      // Don't try to optimize invalid FIR, it may crash
      throw new SkipQueryException(name(), new RuntimeException("Invalid FIR"));
    }

    // `FirQuery` is transient, so this is ours to optimize.
    var module = store.load(example, FirQuery.INSTANCE);

    MockModuleFeedback feedback;
    // Get feedback from interpreter because feedback from eval is unimplemented.
    // When it's implemented, switch to eval.
    try {
      var interpretOutput = store.load(example, InterpretQuery.MAIN);
      // It's for another module, since the interpreter loaded its own. Copying it evaluates the
      // versions it's for, which are the baselines the interpreter called.
      feedback = interpretOutput.feedback().copyFor(module);
      switch (interpretOutput.result()) {
        case Ok _ -> System.err.println("Using INTERPRETER feedback");
        case Error(var message, _) ->
            System.err.println(
                "Using PARTIAL INTERPRETER feedback (from crashed but successful run):\n"
                    + message);
      }
    } catch (SkipQueryException e) {
      System.err.println("Interpreter crashed with exception: " + e.getMessage());
      //noinspection CallToPrintStackTrace
      e.printStackTrace();

      feedback = new MockModuleFeedback(module);
      System.err.println("Using MOCK feedback");
    }

    FEEDBACKS.put(module, feedback);
    return module;
  }

  @Override
  public void verifyExtra(Module data, Example example, SnapshotStore store) {
    if (!checkAll(data)) {
      fail("Optimized FIR is invalid");
    }
  }

  @Override
  public void verifyNoRegression(
      Module previous, Module current, Example example, SnapshotStore store) {
    assertEquals(previous.toString(), current.toString(), "Optimized FIŘ changed");
  }
}
