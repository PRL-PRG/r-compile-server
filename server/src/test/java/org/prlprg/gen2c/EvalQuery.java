package org.prlprg.gen2c;

import static org.junit.jupiter.api.Assertions.assertEquals;

import java.io.IOException;
import java.nio.file.Path;
import java.util.function.Function;
import org.prlprg.examples.Example;
import org.prlprg.examples.SexpResult;
import org.prlprg.examples.SexpResult.Error;
import org.prlprg.examples.SexpResult.Ok;
import org.prlprg.fir2c.Fir2CQuery;
import org.prlprg.service.RshCompiler.RuntimeVariant;
import org.prlprg.session.gnur.EvalException;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.sexp.VecSXP;
import org.prlprg.snapshots.Query;
import org.prlprg.snapshots.SnapshotStore;
import org.prlprg.util.Files;
import org.prlprg.util.Paths;

/// Check that the article produced by `moduleQuery`'s output hasn't changed, and satisfies
/// extra checks specified by the example's options.
public record EvalQuery(CompiledModuleQuery moduleQuery) implements Query<EvalOutput> {
  public static EvalQuery FIR_ORACLE = new EvalQuery(Fir2CQuery.DIRECT);

  private static final String EVAL_DRIVER =
      Files.readString(Paths.getResource(EvalQuery.class, "eval.R"));

  @Override
  public String name() {
    return moduleQuery.name() + ".eval";
  }

  @Override
  public EvalOutput compute(Example example, SnapshotStore store) {
    var R = GNUR.instance();
    var modulePath = store.loadPath(example, moduleQuery);

    try {
      var rawOutput =
          R.capturingEval("path <- '%s'\n%s".formatted(modulePath.toAbsolutePath(), EVAL_DRIVER));

      if (!(rawOutput.first() instanceof VecSXP v) || v.size() != 2) {
        throw new IllegalArgumentException(
            "Value first item must be a vector of size 2, got: " + rawOutput.first());
      }
      var res = v.get(0);
      var pc = PerformanceCounters.from(v.get(1));

      var outputLog = rawOutput.second();
      return new EvalOutput(new Ok(res), outputLog, pc);
    } catch (EvalException e) {
      return new EvalOutput(new Error(e, false), e.outputLog(), PerformanceCounters.EMPTY);
    }
  }

  @Override
  public EvalOutput oracle(Example example, SnapshotStore store) {
    return moduleQuery == moduleQuery.evalOracle()
        ? Query.super.oracle(example, store)
        : new EvalQuery(moduleQuery.evalOracle()).oracle(example, store);
  }

  @Override
  public void verifyEqual(
      EvalOutput expected, EvalOutput actual, Example example, SnapshotStore store) {
    assertEquals(expected.result(), actual.result(), "Return value or crash reason changed");
    if (!example.hasOption("", "nondeterministic")) {
      assertEquals(expected.behaviorOutputLog(), actual.behaviorOutputLog(), "Output changed");
    }
  }

  @Override
  public void verifyNoRegression(
      EvalOutput previous, EvalOutput current, Example example, SnapshotStore store) {
    assertEquals(previous.result(), current.result(), "Return value or crash reason changed");
    if (!example.hasOption("", "nondeterministic")) {
      assertEquals(
          previous.outputLogWithoutAddresses(),
          current.outputLogWithoutAddresses(),
          "Output changed");
    }
  }

  @Override
  public void verifyExtra(EvalOutput data, Example example, SnapshotStore store) {
    data.result().check(example);

    if (moduleQuery.runtime() == RuntimeVariant.DIRECT_BC2C) {
      if (example.hasOption(name(), "fastArith")) {
        assertNoSlow(data.pc(), PerformanceCounters::slowArith, "Expected fast arithmetics");
      }

      if (example.hasOption(name(), "fastMath1")) {
        assertNoSlow(data.pc(), PerformanceCounters::slowArith, "Expected fast math1");
      }

      if (example.hasOption(name(), "fastUnary")) {
        assertNoSlow(data.pc(), PerformanceCounters::slowUnary, "Expected fast math1");
      }

      if (example.hasOption(name(), "fastRelop")) {
        assertNoSlow(data.pc(), PerformanceCounters::slowRelop, "Expected fast relop");
      }

      if (example.hasOption(name(), "fastSubset")) {
        assertEquals(0, data.pc().slowSubset(), "Expected fast subset");
        assertEquals(0, data.pc().dispatchedSubset(), "Expected no dispatched subset");
      }

      if (example.hasOption(name(), "slowSubset")) {
        assertEquals(1, data.pc().slowSubset(), "Expected slow subset");
      }

      if (example.hasOption(name(), "slowSubassign")) {
        assertEquals(1, data.pc().slowSubassign(), "Expected slow subassign");
      }

      if (example.hasOption(name(), "fastSubassign")) {
        assertEquals(0, data.pc().slowSubassign(), "Expected fast subassign");
        assertEquals(0, data.pc().dispatchedSubassign(), "Expected no dispatched subassign");
      }

      if (example.hasOption(name(), "dispatchedSubset")) {
        assertEquals(1, data.pc().dispatchedSubset(), "Expected dispatched subset");
      }

      if (example.hasOption(name(), "dispatchedSubassign")) {
        assertEquals(1, data.pc().dispatchedSubassign(), "Expected dispatched subassign");
      }

      if (example.hasOption(name(), "isq")) {
        assertEquals(1, data.pc().isq(), "Expected isq");
      }

      if (example.hasOption(name(), "noIsq")) {
        assertEquals(0, data.pc().isq(), "Expected no isq");
      }

      if (example.hasOption(name(), "isqFor")) {
        var count = example.intOption(name(), "isqFor", 1);
        assertEquals(count, data.pc().isqFor(), "Expected isqFor " + count + " times");
      }
    }
  }

  private static void assertNoSlow(
      PerformanceCounters pc, Function<PerformanceCounters, Integer> metric, String message) {
    assertEquals(0, metric.apply(pc), message);
  }

  @Override
  public EvalOutput deserialize(Path path, Example example, SnapshotStore store)
      throws IOException {
    var R = GNUR.instance();

    var outputLogPath = path.resolve("output.log");

    var result = SexpResult.read(path, R);
    var outputLog = Files.readString(outputLogPath);

    return new EvalOutput(result, outputLog, PerformanceCounters.EMPTY);
  }

  @Override
  public void serialize(EvalOutput data, Path path, Example example, SnapshotStore store)
      throws IOException {
    var outputLogPath = path.resolve("output.log");

    Files.createDirectories(path);
    data.result().write(path);
    Files.writeString(outputLogPath, data.outputLog());
  }
}
