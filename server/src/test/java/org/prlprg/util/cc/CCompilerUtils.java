package org.prlprg.util.cc;

import java.io.File;
import java.io.IOException;
import org.prlprg.bc2c.PerformanceCounters;
import org.prlprg.gen2c.CompiledModule;
import org.prlprg.rds.RDSWriter;
import org.prlprg.service.RshCompiler;
import org.prlprg.service.RshCompiler.RuntimeVariant;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.VecSXP;
import org.prlprg.util.Either;
import org.prlprg.util.Files;
import org.prlprg.util.Pair;

public class CCompilerUtils {
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

      Files.writeString(cPath, module.cUnit().toString());

      RshCompiler.getInstance(3, runtime)
          .createBuilder(cPath, soPath)
          .flag("-shared")
          .flag("-DRSH_TESTS")
          .flag("-DRSH_PC")
          .compile();

      // FIXME: try global env
      String testDriver =
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

  private CCompilerUtils() {}
}
