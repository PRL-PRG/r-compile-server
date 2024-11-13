package org.prlprg.bc2c;

import static org.junit.jupiter.api.Assertions.assertEquals;

import java.io.File;
import java.io.IOException;
import java.lang.reflect.Method;
import java.util.Objects;
import java.util.function.Consumer;
import java.util.logging.Logger;
import org.prlprg.RSession;
import org.prlprg.bc.BCCompiler;
import org.prlprg.rds.RDSWriter;
import org.prlprg.rsession.TestRSession;
import org.prlprg.service.RshCompiler;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.VecSXP;
import org.prlprg.util.Either;
import org.prlprg.util.Files;
import org.prlprg.util.Pair;
import org.prlprg.util.ThrowingSupplier;
import org.prlprg.util.gnur.GNUR;
import org.prlprg.util.gnur.GNURFactory;
import org.prlprg.util.snapshot.RDSFileSnapshotStoreFactory;
import org.prlprg.util.snapshot.SnapshotExtension;

public class BC2CSnapshotTestExtension
    extends SnapshotExtension<BC2CSnapshotTestExtension.TestResult> {

  private static final Logger logger = Logger.getLogger(BC2CSnapshotTestExtension.class.getName());
  private final GNUR R;

  @SuppressWarnings("unused")
  public BC2CSnapshotTestExtension() {
    this(new TestRSession());
  }

  public BC2CSnapshotTestExtension(RSession session) {
    super(new RDSFileSnapshotStoreFactory<>(session, TestResult::toSEXP, TestResult::fromSEXP));
    this.R = GNURFactory.createRestarting(session);
  }

  record TestArtifact(Either<Exception, TestResult> result, File tempDir) {
    public void destroy() {
      Files.deleteRecursively(tempDir.toPath());
    }
  }

  // we do not persist the performance counters
  public record TestResult(String code, SEXP value, PerformanceCounters pc, String output) {
    public SEXP toSEXP() {
      return SEXPs.vec(SEXPs.string(code), value, SEXPs.string(output));
    }

    public static TestResult fromSEXP(SEXP sexp) {
      if (!(sexp instanceof VecSXP v) || v.size() != 3) {
        throw new IllegalArgumentException("Value must be a vector of size 3, got: " + sexp);
      }

      var codeSxp = v.get(0);
      var code =
          codeSxp
              .asScalarString()
              .orElseThrow(
                  () -> new IllegalArgumentException("Expected code as string, got: " + codeSxp));

      var value = v.get(1);

      var outputSxp = v.get(2);
      var output =
          outputSxp
              .asScalarString()
              .orElseThrow(
                  () ->
                      new IllegalArgumentException("Expected a string output, got: " + outputSxp));

      // the performance counters are not kept in the snapshot
      return new TestResult(code, value, PerformanceCounters.EMPTY, output);
    }
  }

  @Override
  protected void checkEqual(TestResult expected, TestResult actual) {
    assertEquals(expected.code(), actual.code(), "Code is different");
    assertEquals(expected.value(), actual.value(), "Result is different");
    assertEquals(expected.output(), actual.output(), "Output is different");
  }

  @Override
  protected Object createSnapshot(Method testMethod) {
    return new BC2CSnapshot() {
      int seq = 0;
      boolean clean = true;

      @Override
      public void verify(String code, TestResultCheck... extraChecks) {
        var artifact = compileAndCall(code);
        try {
          if (artifact.result.isLeft()) {
            throw artifact.result.getLeft();
          } else {
            var res = artifact.result.getRight();
            BC2CSnapshotTestExtension.this.verify(
                testMethod, String.valueOf(++seq), res, oracle(code));

            for (var check : extraChecks) {
              check.accept(res);
            }

            if (clean) {
              artifact.destroy();
            } else {
              copyMakefile(artifact.tempDir);
              logger.info("Compilation dir: " + artifact.tempDir.getAbsolutePath());
            }
          }
        } catch (Throwable e) {
          copyMakefile(artifact.tempDir);
          throw new RuntimeException(
              "Test failed - compilation dir: " + artifact.tempDir.getAbsolutePath(), e);
        }
      }

      @Override
      public void setClean(boolean clean) {
        this.clean = clean;
      }

      private void copyMakefile(File tempDir) {
        var makeFile = new File(tempDir, "Makefile");

        Files.copyURL(
            Objects.requireNonNull(getClass().getResource("Makefile")), makeFile.toPath());
      }
    };
  }

  @Override
  protected Class<?> getSnapshotClass() {
    return BC2CSnapshot.class;
  }

  private ThrowingSupplier<TestResult> oracle(String code) {
    return () -> {
      var res = R.capturingEval(code);
      return new TestResult(code, res.first(), PerformanceCounters.EMPTY, res.second());
    };
  }

  TestArtifact compileAndCall(String code) {
    // this has to be the same as in the test/resources/.../Makefile
    var prefix = "test";

    var tempDir = Files.createTempDirectory("test-bc2cc").toFile();
    var cFile = new File(tempDir, prefix + ".c");
    var cpFile = new File(tempDir, prefix + ".RDS");
    var soFile = new File(tempDir, prefix + ".so");
    var rFile = new File(tempDir, prefix + ".R");

    try {
      Files.clearDirectory(tempDir.toPath());
    } catch (IOException e) {
      throw new RuntimeException(e);
    }

    var funCode = "function() {" + code + "}";
    var closure = (CloSXP) R.eval(funCode);
    var ast2bc = new BCCompiler(closure, R.getSession());

    // FIXME: just for now as we do not support guards
    ast2bc.setOptimizationLevel(3);
    var bc =
        ast2bc
            .compile()
            .orElseThrow(() -> new RuntimeException("Compilation did not produce byte code"));

    try {
      var bc2c = new BC2CCompiler(bc);
      var module = bc2c.finish();

      RDSWriter.writeFile(cpFile, module.constantPool());

      Files.writeString(cFile.toPath(), module.file().toString());

      RshCompiler.getInstance(3)
          .createBuilder(cFile.getPath(), soFile.getPath())
          .flag("-shared")
          .flag("-DRSH_TESTS")
          .flag("-DRSH_PC")
          .compile();

      // FIXME: try global env
      String testDriver =
          "options(warn=1)\n"
              + "dyn.load('%s')\n".formatted(soFile.getAbsolutePath())
              + "cp <- readRDS('%s')\n".formatted(cpFile.getAbsolutePath())
              + "env <- new.env()\n"
              + "parent.env(env) <- globalenv()\n"
              + "invisible(.Call('Rsh_initialize_runtime'))\n"
              + "res <- .Call('%s', env, cp)\n".formatted(module.topLevelFunName())
              + "pc <- .Call('Rsh_pc_get')\n"
              + "dyn.unload('%s')\n".formatted(soFile.getAbsolutePath())
              + "list(res, pc)\n";

      Files.writeString(rFile.toPath(), testDriver);

      var nestedWithOutput =
          R.capturingEval("source('%s', local=F)$value".formatted(rFile.getAbsolutePath()));
      var pair = splitValueAndPC(nestedWithOutput.first());
      var res = new TestResult(code, pair.first(), pair.second(), nestedWithOutput.second());

      return new TestArtifact(Either.right(res), tempDir);
    } catch (Exception e) {
      return new TestArtifact(Either.left(e), tempDir);
    }
  }

  private Pair<SEXP, PerformanceCounters> splitValueAndPC(SEXP value) {
    if (!(value instanceof VecSXP v) || v.size() != 2) {
      throw new IllegalArgumentException(
          "Value first item must be a vector of size 2, got: " + value);
    }
    var res = v.get(0);
    var pc = PerformanceCounters.from(v.get(1));

    return Pair.of(res, pc);
  }

  // removes the possible heap pollution from generic array creation
  // in the BC2CSnapshot.verify method
  public interface TestResultCheck extends Consumer<TestResult> {}

  public interface BC2CSnapshot {
    void verify(String code, TestResultCheck... extraChecks);

    void setClean(boolean clean);
  }
}
