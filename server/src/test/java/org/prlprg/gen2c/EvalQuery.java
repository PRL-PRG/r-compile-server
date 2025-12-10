package org.prlprg.gen2c;

import static org.junit.jupiter.api.Assertions.assertEquals;

import java.io.IOException;
import java.nio.file.Path;
import java.util.function.Function;
import org.prlprg.examples.Example;
import org.prlprg.rds.RDSReader;
import org.prlprg.rds.RDSWriter;
import org.prlprg.service.RshCompiler;
import org.prlprg.service.RshCompiler.RuntimeVariant;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.session.gnur.GNURQuery;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.VecSXP;
import org.prlprg.snapshots.Query;
import org.prlprg.snapshots.SnapshotStore;
import org.prlprg.util.Files;
import org.prlprg.util.Pair;

/// Check that the article produced by `moduleQuery`'s output hasn't changed, and satisfies
/// extra checks specified by the example's options.
public record EvalQuery(Query<CompiledModule> moduleQuery, RuntimeVariant runtime)
    implements Query<EvalOutput> {
  /// Compile the C source code in [CompiledModule] into a binary and run. Return the
  /// side-effects and output.
  ///
  /// This compiles the C source every time it's called. We don't cache the binary because we
  /// cache the output (elsewhere) and the binary isn't for anything else.
  ///
  /// Currently, we redundantly write `module` a `.c` file when it usually already exists
  /// somewhere else. If necessary we can optimize that by passing the [Example] and [Query]
  /// that generate `module`.
  public static EvalOutput eval(CompiledModule module, RuntimeVariant runtime, GNUR R) {
    // this has to be the same as in the test/resources/.../Makefile
    var prefix = "test";

    var tempDir = Files.createTempDirectory("test-bc2cc");
    var cPath = tempDir.resolve(prefix + ".c");
    var cpPath = tempDir.resolve(prefix + ".RDS");
    var soPath = tempDir.resolve(prefix + ".so");
    var rPath = tempDir.resolve(prefix + ".R");

    try {
      Files.clearDirectory(tempDir);
    } catch (IOException e) {
      throw new RuntimeException(e);
    }

    try {
      RDSWriter.writeFile(cpPath.toFile(), module.constantPool());

      Files.writeString(cPath, module.cCode());

      RshCompiler.getInstance(3, runtime)
          .createBuilder(cPath, soPath)
          .flag("-shared")
          .flag("-Wl,-undefined,dynamic_lookup")
          .flag("-DRSH_TESTS")
          .flag("-DRSH_PC")
          .compile();

      // FIXME: try global env
      var testDriver =
          "options(warn=1)\n"
              + "dyn.load('%s')\n".formatted(soPath.toAbsolutePath())
              + "cp <- readRDS('%s')\n".formatted(cpPath.toAbsolutePath())
              + "env <- new.env()\n"
              + "parent.env(env) <- globalenv()\n"
              + "invisible(.Call('Rsh_initialize_runtime'))\n"
              + "res <- .Call('%s', env, cp)\n".formatted(module.entryFunName())
              + "pc <- .Call('Rsh_pc_get')\n"
              + "dyn.unload('%s')\n".formatted(soPath.toAbsolutePath())
              + "list(res, pc)\n";

      Files.writeString(rPath, testDriver);

      var nestedWithOutput =
          R.capturingEval("source('%s', local=F)$value".formatted(rPath.toAbsolutePath()));

      var pair = splitValueAndPC(nestedWithOutput.first());
      return new EvalOutput(pair.first(), nestedWithOutput.second(), pair.second());
    } catch (Exception e) {
      throw new AssertionError("Failed to compile", e);
    } finally {
      Files.deleteRecursively(tempDir);
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
    try (var R = store.query(example, GNURQuery.INSTANCE)) {
      var module = store.query(example, moduleQuery);
      return eval(module, runtime, R);
    }
  }

  @Override
  public void verifyExtra(EvalOutput data, Example example, SnapshotStore store) {
    if (example.hasOption(name(), "returns")) {
      var expected = example.sexpOption(name(), "returns");
      assertEquals(expected, data.returnValue(), "Wrong return value");
    }

    if (runtime == RuntimeVariant.DIRECT_BC2C) {
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
    try (var R = store.query(example, GNURQuery.INSTANCE)) {
      var returnValuePath = path.resolve("returnValue.RDS");
      var outputLogPath = path.resolve("output.log");

      var returnValue = RDSReader.readFile(R.getSession(), returnValuePath.toFile());
      var outputLog = Files.readString(outputLogPath);

      return new EvalOutput(returnValue, outputLog, PerformanceCounters.EMPTY);
    }
  }

  @Override
  public void serialize(EvalOutput data, Path path, Example example, SnapshotStore store)
      throws IOException {
    var returnValuePath = path.resolve("returnValue.RDS");
    var outputLogPath = path.resolve("output.log");

    Files.createDirectories(path);
    RDSWriter.writeFile(returnValuePath.toFile(), data.returnValue());
    Files.writeString(outputLogPath, data.outputLog());
  }
}
