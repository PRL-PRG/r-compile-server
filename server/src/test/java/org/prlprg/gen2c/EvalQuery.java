package org.prlprg.gen2c;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.fail;

import java.io.IOException;
import java.nio.file.Path;
import java.util.function.Function;
import org.prlprg.bc2c.BC2CQuery;
import org.prlprg.examples.Example;
import org.prlprg.fir2c.Fir2CQuery;
import org.prlprg.rds.RDSReader;
import org.prlprg.rds.RDSWriter;
import org.prlprg.service.RshCompiler.RuntimeVariant;
import org.prlprg.session.gnur.EvalException;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.session.gnur.GNURQuery;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.VecSXP;
import org.prlprg.snapshots.Query;
import org.prlprg.snapshots.SnapshotStore;
import org.prlprg.util.Either;
import org.prlprg.util.Files;
import org.prlprg.util.Pair;
import org.prlprg.util.Paths;

/// Check that the article produced by `moduleQuery`'s output hasn't changed, and satisfies
/// extra checks specified by the example's options.
public record EvalQuery(CompiledModuleQuery moduleQuery) implements Query<EvalOutput> {
  public static EvalQuery BC = new EvalQuery(BC2CQuery.INSTANCE);
  public static EvalQuery FIR_ORACLE = new EvalQuery(Fir2CQuery.DIRECT);

  private static final String EVAL_DRIVER =
      Files.readString(Paths.getResource(EvalQuery.class, "eval.R"));

  /// Evaluate the snapshot generated at [Path] by some [CompiledModuleQuery] and return the output.
  public static EvalOutput eval(Path path, GNUR R) {
    try {
      var nestedWithOutput =
          R.capturingEval("setwd('%s')\n%s".formatted(path.toAbsolutePath(), EVAL_DRIVER));
      var pair = splitValueAndPC(nestedWithOutput.first());
      return new EvalOutput(Either.left(pair.first()), nestedWithOutput.second(), pair.second());
    } catch (EvalException e) {
      return new EvalOutput(
          Either.right(e.mainMessage()), e.outputLog(), PerformanceCounters.EMPTY);
    }
  }

  private static Pair<SEXP, PerformanceCounters> splitValueAndPC(SEXP value) {
    if (!(value instanceof VecSXP v) || v.size() != 2) {
      throw new IllegalArgumentException(
          "Value first item must be a vector of size 2, got: " + value);
    }
    var res = v.get(0);
    var pc = PerformanceCounters.from(v.get(1));

    return Pair.of(res, pc);
  }

  @Override
  public String name() {
    return moduleQuery.name() + ".eval";
  }

  @Override
  public EvalOutput compute(Example example, SnapshotStore store) {
    var R = store.query(example, GNURQuery.INSTANCE);
    var modulePath = store.queryPath(example, moduleQuery);

    return eval(modulePath, R);
  }

  @Override
  public void verifyExtra(EvalOutput data, Example example, SnapshotStore store) {
    // TODO: Abstract `Either<SEXP, String>` this code, and serialization/deserialization
    if (example.hasOption(name(), "crashes") && data.success()) {
      fail("Expected **crash**, got success.\n" + data);
    } else if (!data.success()) {
      fail("Expected success.\n" + data);
    }

    if (example.hasOption(name(), "returns")) {
      var expected = example.sexpOption(name(), "returns");
      if (data.success()) {
        assertEquals(expected, data.returnValue().getLeft(), "Wrong return value");
      }
    }

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
    var R = store.query(example, GNURQuery.INSTANCE);

    var returnValuePath = path.resolve("returnValue.RDS");
    var crashPath = path.resolve("crash.txt");
    var outputLogPath = path.resolve("output.log");

    if (Files.exists(returnValuePath) && Files.exists(crashPath)) {
      fail("Snapshot has both return value and crash");
    }
    Either<SEXP, String> returnValue =
        Files.exists(returnValuePath)
            ? Either.left(RDSReader.readFile(R.getSession(), returnValuePath.toFile()))
            : Either.right(Files.readString(crashPath).trim());
    var outputLog = Files.readString(outputLogPath);

    return new EvalOutput(returnValue, outputLog, PerformanceCounters.EMPTY);
  }

  @Override
  public void serialize(EvalOutput data, Path path, Example example, SnapshotStore store)
      throws IOException {
    var returnValuePath = path.resolve("returnValue.RDS");
    var crashPath = path.resolve("crash.txt");
    var outputLogPath = path.resolve("output.log");

    Files.createDirectories(path);
    if (data.returnValue().isLeft()) {
      Files.deleteIfExists(crashPath);
      RDSWriter.writeFile(returnValuePath.toFile(), data.returnValue().getLeft());
    } else {
      Files.deleteIfExists(returnValuePath);
      Files.writeString(crashPath, data.returnValue().getRight());
    }
    Files.writeString(outputLogPath, data.outputLog());
  }
}
