package org.prlprg.snapshot.gen2c;

import static org.junit.jupiter.api.Assertions.assertEquals;

import java.io.IOException;
import java.nio.file.Path;
import java.util.Objects;
import java.util.function.Function;
import org.jspecify.annotations.Nullable;
import org.prlprg.examples.Example;
import org.prlprg.examples.SexpResult;
import org.prlprg.examples.SexpResult.Error;
import org.prlprg.examples.SexpResult.Ok;
import org.prlprg.fir.feedback.MockModuleFeedback;
import org.prlprg.fir.parseprint.ModuleFeedbackParseContext;
import org.prlprg.fir2c.Fir2CSession;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.Printer;
import org.prlprg.server.FirTestServer;
import org.prlprg.service.RshCompiler;
import org.prlprg.service.RshCompiler.RuntimeVariant;
import org.prlprg.session.gnur.EvalException;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.sexp.NilSXP;
import org.prlprg.sexp.StrSXP;
import org.prlprg.sexp.VecSXP;
import org.prlprg.snapshot.Query;
import org.prlprg.snapshot.SkipQueryException;
import org.prlprg.snapshot.SnapshotStore;
import org.prlprg.snapshot.fir2c.Fir2CQuery;
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

  /// How many times a FIŘ module's `main` is called: enough for a version's stub to run its
  /// fallback (the first call), then the compiled version (the second, which in the deterministic
  /// mode the tests use waits for it), then what it calls compiled (the third). Not for BC2C
  /// modules, whose tests count what one call does.
  private static final int FIR_RUNS = 3;

  @Override
  public EvalOutput compute(Example example, SnapshotStore store) {
    if (example.hasOption(name(), "noEval")) {
      throw new SkipQueryException(name());
    }

    var evalQuery = moduleQuery.forEval();
    var isStandalone = evalQuery.isStandalone();
    if (!isStandalone) {
      checkRshInstalled();
    }
    var R = isStandalone ? GNUR.instance() : GNUR.rshInstance();
    var modulePath = store.loadPath(example, evalQuery);

    // What the compile server has of the module, if it's connected (it isn't standalone).
    var idPath = modulePath.resolve("id.txt");
    var moduleId = Files.exists(idPath) ? Files.readString(idPath) : "";
    var server = moduleId.isEmpty() ? null : FirTestServer.instance();
    var session =
        server == null
            ? null
            : Objects.requireNonNull(server.firModules().get(moduleId), "module isn't registered")
                .session();

    var runs = moduleQuery.runtime() == RuntimeVariant.FIR2C ? FIR_RUNS : 1;
    var source =
        "path <- '%s'\nprefix <- '%s'\nfir_port <- %s\nruns <- %dL\n%s"
            .formatted(
                modulePath.toAbsolutePath(),
                session == null ? "" : session.prefix(),
                server == null ? "NULL" : server.port() + "L",
                runs,
                EVAL_DRIVER);

    try {
      var rawOutput = R.capturingEval(source);

      if (!(rawOutput.first() instanceof VecSXP v) || v.size() != 3) {
        throw new IllegalArgumentException(
            "Value first item must be a vector of size 3, got: " + rawOutput.first());
      }
      var res = v.get(0);
      var pc = PerformanceCounters.from(v.get(1));
      var feedback =
          switch (v.get(2)) {
            case NilSXP _ -> null;
            case StrSXP s when s.isSimpleScalar() -> {
              var module =
                  session != null
                      ? session.module()
                      : store.load(example, ((Fir2CQuery) moduleQuery).firQuery());
              var parseCtx = new ModuleFeedbackParseContext(module);
              yield Parser.fromString(s.get(0), MockModuleFeedback.class, parseCtx);
            }
            default ->
                throw new IllegalArgumentException(
                    "Value third item must be NULL or serialized `MockModuleFeedback`");
          };
      var outputLog = rawOutput.second();
      return new EvalOutput(new Ok(res), outputLog, feedback, pc, moduleAfter(session));
    } catch (EvalException e) {
      return new EvalOutput(
          new Error(e, false),
          e.outputLog(),
          null,
          PerformanceCounters.EMPTY,
          moduleAfter(session));
    } finally {
      if (server != null) {
        server.firModules().remove(moduleId);
      }
    }
  }

  private static boolean checkedRsh = false;

  /// A module that isn't standalone gets its runtime from the `rsh` package installed in the
  /// vendored R, not from the working tree, so that package has to be installed and up to date
  /// (`make -C client/rsh install`). Otherwise the failures are confusing (a missing symbol at
  /// `dyn.load`, or the old runtime's behavior), so check up front, once.
  private static synchronized void checkRshInstalled() {
    if (checkedRsh) {
      return;
    }
    var installed = RshCompiler.R_DIRECTORY.resolve("library/rsh/libs/rsh.so");
    if (!Files.exists(installed)) {
      throw new IllegalStateException(
          "The `rsh` package isn't installed in the vendored R ("
              + installed
              + " doesn't exist). Run `make -C client/rsh install`.");
    }
    var installedAt = installed.toFile().lastModified();
    var sources = RshCompiler.RSH_DIRECTORY.resolve("src");
    var newer =
        Files.listDir(sources, "*", Integer.MAX_VALUE, false, true).stream()
            .map(sources::resolve)
            .filter(p -> p.toString().matches(".*\\.(c|h|cpp|hpp)$"))
            .filter(p -> p.toFile().lastModified() > installedAt)
            .toList();
    if (!newer.isEmpty()) {
      throw new IllegalStateException(
          "The `rsh` package installed in the vendored R is older than its sources: "
              + newer
              + ". Run `make -C client/rsh install`.");
    }
    checkedRsh = true;
  }

  /// The module as the run left it (see [EvalOutput#module()]), or `null` if it wasn't connected.
  private static @Nullable String moduleAfter(@Nullable Fir2CSession session) {
    if (session == null) {
      return null;
    }
    // The server changes the module on its own threads, but every request was answered before
    // the run finished (the driver waits for that).
    synchronized (session) {
      return session.module().toString();
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
    // If a crash is expected in this query but not the oracle's (e.g.
    // `#? [opt.fir2c.opt.eval]crashes`, for optimized code that crashes instead of deoptimizing),
    // the outputs deliberately differ; `verifyExtra` asserts the crash and `verifyNoRegression`
    // asserts its message doesn't change.
    var oracleName = new EvalQuery(moduleQuery.evalOracle()).name();
    if (example.hasOption(name(), "crashes") != example.hasOption(oracleName, "crashes")) {
      return;
    }

    // `expected` may come from a different compilation of this example (the oracle), so a closure
    // it evaluates to has a body compiled to whatever that compilation produced; compare without
    // those. Comparing the same query across runs, where the bodies do have to match, is
    // `verifyNoRegression`'s job.
    assertEquals(
        expected.result().withoutCompiledCode(),
        actual.result().withoutCompiledCode(),
        "Return value or crash reason changed");
    if (!example.hasOption("", "nondeterministic")) {
      // `expected` may come from a different compilation of this example (the oracle), where R
      // names a different call in its errors and warnings, so compare without those. Comparing the
      // same query across runs, where the calls do have to match, is `verifyNoRegression`'s job.
      assertEquals(
          expected.behaviorOutputLogWithoutCalls(),
          actual.behaviorOutputLogWithoutCalls(),
          "Output changed");

      // Only when both are the same compilation: an optimized module's baselines run less than
      // the unoptimized module's (once per version, until the version is compiled), so they
      // record less.
      if (moduleQuery == moduleQuery.evalOracle()
          && expected.feedback() != null
          && actual.feedback() != null) {
        assertEquals(expected.feedback(), actual.feedback(), "Feedback changed");
      }
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
    data.result().check(example, name());

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
    var feedbackPath = path.resolve("feedback.txt");
    var modulePath = path.resolve("module.fir");

    var result = SexpResult.read(path, R);
    var outputLog = Files.readString(outputLogPath);
    MockModuleFeedback feedback = null;
    if (Files.exists(feedbackPath)) {
      var module = store.load(example, ((Fir2CQuery) moduleQuery).firQuery());
      var parseCtx = new ModuleFeedbackParseContext(module);
      feedback = Parser.fromFile(feedbackPath.toFile(), MockModuleFeedback.class, parseCtx);
    }
    var module = Files.exists(modulePath) ? Files.readString(modulePath) : null;

    return new EvalOutput(result, outputLog, feedback, PerformanceCounters.EMPTY, module);
  }

  @Override
  public void serialize(EvalOutput data, Path path, Example example, SnapshotStore store)
      throws IOException {
    var outputLogPath = path.resolve("output.log");
    var feedbackPath = path.resolve("feedback.txt");

    Files.createDirectories(path);
    data.result().write(path);
    Files.writeString(outputLogPath, data.outputLog());
    if (data.feedback() == null) {
      Files.deleteIfExists(feedbackPath);
    } else {
      Printer.toFile(feedbackPath.toFile(), data.feedback());
    }
    var modulePath = path.resolve("module.fir");
    if (data.module() == null) {
      Files.deleteIfExists(modulePath);
    } else {
      Files.writeString(modulePath, data.module());
    }
  }
}
