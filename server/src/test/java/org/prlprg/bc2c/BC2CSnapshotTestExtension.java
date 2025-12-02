package org.prlprg.bc2c;

import static org.junit.jupiter.api.Assertions.assertEquals;

import java.io.File;
import java.io.IOException;
import java.lang.reflect.Method;
import java.util.List;
import java.util.Objects;
import java.util.logging.Logger;
import org.prlprg.TestConfig;
import org.prlprg.gen2c.CompiledModule;
import org.prlprg.rds.RDSWriter;
import org.prlprg.session.TestRSession;
import org.prlprg.service.RshCompiler;
import org.prlprg.service.RshCompiler.RuntimeVariant;
import org.prlprg.session.RSession;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.VecSXP;
import org.prlprg.util.Either;
import org.prlprg.util.Files;
import org.prlprg.util.Pair;
import org.prlprg.util.ThrowingSupplier;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.session.snapshot.RDSFileSnapshotStoreFactory;
import org.prlprg.util.snapshot.SnapshotExtension;

abstract class BC2CSnapshotTestExtension
    extends SnapshotExtension<BC2CSnapshotTestResult> {
  private static final Logger logger = Logger.getLogger(BC2CSnapshotTestExtension.class.getName());
  protected final GNUR R;

  abstract CompiledModule compile(CloSXP ast, boolean compilePromises);
  abstract RuntimeVariant runtimeVariant();

  BC2CSnapshotTestExtension() {
    this(new TestRSession());
  }

  private BC2CSnapshotTestExtension(RSession session) {
    super(new RDSFileSnapshotStoreFactory<>(session, BC2CSnapshotTestResult::toSEXP, BC2CSnapshotTestResult::fromSEXP));
    this.R = GNURFactory.createRestarting(session);
  }

  @Override
  protected void checkEqual(BC2CSnapshotTestResult expected, BC2CSnapshotTestResult actual) {
    assertEquals(expected.code(), actual.code(), "Code is different");
    assertEquals(expected.value(), actual.value(), "Result is different");
    assertEquals(expected.output(), actual.output(), "Output is different");
  }

  @Override
  protected Object createSnapshot(Method testMethod) {
    return new BC2CSnapshot() {
      String snapshotPrefix = "";
      int seq = 0;

      @Override
      public void setName(String snapshotName) {
        snapshotPrefix = snapshotName + "/";
        seq = 0;
      }

      @Override
      public void verify(String code, boolean compilePromises, boolean saveSnapshot, List<BC2CExampleExtraCheck> extraChecks) {
        var artifact = compileAndCall(code, compilePromises);
        try {
          if (artifact.result.isLeft()) {
            throw artifact.result.getLeft();
          } else {
            var res = artifact.result.getRight();
            BC2CSnapshotTestExtension.this.verify(
                testMethod, snapshotPrefix + (++seq), res, oracle(code), saveSnapshot);

            for (var check : extraChecks) {
              check.accept(res);
            }

            if (TestConfig.OVERRIDE_SNAPSHOTS) {
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

  private ThrowingSupplier<BC2CSnapshotTestResult> oracle(String code) {
    return () -> {
      var res = R.capturingEval(code);
      return new BC2CSnapshotTestResult(code, res.first(), PerformanceCounters.EMPTY, res.second());
    };
  }

  TestArtifact compileAndCall(String code, boolean compilePromises) {
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
    var funAst = (CloSXP) R.eval(funCode);

    try {
      var module = compile(funAst, compilePromises);

      RDSWriter.writeFile(cpFile, module.constantPool());

      Files.writeString(cFile.toPath(), module.cUnit().toString());

      RshCompiler.getInstance(3, runtimeVariant())
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
              + "res <- .Call('%s', env, cp)\n".formatted(module.entryFunName())
              + "pc <- .Call('Rsh_pc_get')\n"
              + "dyn.unload('%s')\n".formatted(soFile.getAbsolutePath())
              + "list(res, pc)\n";

      Files.writeString(rFile.toPath(), testDriver);

      var nestedWithOutput =
          R.capturingEval("source('%s', local=F)$value".formatted(rFile.getAbsolutePath()));
      var pair = splitValueAndPC(nestedWithOutput.first());
      var res = new BC2CSnapshotTestResult(code, pair.first(), pair.second(), nestedWithOutput.second());

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

  private record TestArtifact(Either<Exception, BC2CSnapshotTestResult> result, File tempDir) {
    public void destroy() {
      Files.deleteRecursively(tempDir.toPath());
    }
  }
}
