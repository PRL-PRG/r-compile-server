package org.prlprg.fir2c;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.fail;
import static org.prlprg.fir.check.Checker.checkAll;
import static org.prlprg.fir.opt.Optimizations.defaultOptimizations;

import java.nio.file.Path;
import org.junit.jupiter.params.ParameterizedTest;
import org.prlprg.bc.CompilerException;
import org.prlprg.bc2fir.BC2CFGCompilerException;
import org.prlprg.bc2fir.BC2ClosureCompilerUnsupportedException;
import org.prlprg.fir.interpret.internal.MockModuleFeedback;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.VecSXP;
import org.prlprg.examples.DirectorySource;
import org.prlprg.examples.ExamplePath;
import org.prlprg.session.gnur.GNUR;

public class BC2Fir2CEvalTest {
  private final GNUR R;

  public BC2Fir2CEvalTest(GNUR R) {
    this.R = R;
  }

  @ParameterizedTest
  @DirectorySource(roots = {".", "../bc2fir"}, glob = "*.R", depth = 2)
  void testDirectCompile(ExamplePath rFilePath) throws Exception {
    runTest(rFilePath, CompileMode.DIRECT);
  }

  @ParameterizedTest
  @DirectorySource(roots = {".", "../bc2fir"}, glob = "*.R", depth = 2)
  void testOptimizingCompile(ExamplePath rFilePath) throws Exception {
    runTest(rFilePath, CompileMode.OPTIMIZED);
  }

  @ParameterizedTest
  @DirectorySource(roots = {"deopt", "../bc2fir/deopt"}, glob = "*.R", depth = 2)
  void testOptimizingCompileAndDeopts(ExamplePath rFilePath) throws Exception {
    runTest(rFilePath, CompileMode.OPTIMIZED_DEOPT);
  }

  private void runTest(ExamplePath rFilePath, CompileMode mode) throws Exception {
    Module firModule = null;
    var caseName = rFilePath.name();

    try {
      var rText = rFilePath.read();
      var rModuleEnv = R.evalEnvironment(rText);
      if (!(rModuleEnv.getLocal("main").orElse(null) instanceof CloSXP main)
          || !main.parameters().isEmpty()) {
        fail("Must have a zero-parameter closure 'main'");
      }

      var rOutput = R.eval(rText + "\n\nmain()");
      var rOutputStr = rOutput.toString();

      firModule = BC2Fir2CTestSupport.compileRModule(rModuleEnv, R.getSession());
      if (mode.isOptimized()) {
        applyOptimizations(firModule, mode.rounds());
      }

      var compiled = BC2Fir2CTestSupport.compileToC(firModule, R.getSession());
      var targetName = mode == CompileMode.OPTIMIZED_DEOPT ? "main2" : "main";
      var targetFun = BC2Fir2CTestSupport.requireFunction(firModule, targetName);
      int argCount = mode == CompileMode.OPTIMIZED_DEOPT ? 1 : 0;

      try (var artifact =
          BC2Fir2CTestSupport.buildSharedObject(
              firModule, compiled, targetFun, caseName, argCount)) {
        if (mode == CompileMode.OPTIMIZED_DEOPT) {
          checkOutput(rOutputStr, runSharedObject(artifact, "1L"));
          checkOutput(rOutputStr, runSharedObject(artifact, "1.0"));
          checkOutput(rOutputStr, runSharedObject(artifact, "TRUE"));

          checkOutput(
              R.eval(rText + "\n\nmain2(2L)").toString(), runSharedObject(artifact, "2L"));
          checkOutput(
              R.eval(rText + "\n\nmain2(3.5)").toString(), runSharedObject(artifact, "3.5"));
        } else {
          checkOutput(rOutputStr, runSharedObject(artifact));
        }
      }
    } catch (CompilerException e) {
      fail("GNU-R bytecode compiler crashed", e);
    } catch (BC2CFGCompilerException | BC2ClosureCompilerUnsupportedException e) {
      fail("Bytecode->FIŘ compiler crashed", e);
    } catch (RuntimeException e) {
      System.out.println(firModule);
      throw e;
    }
  }

  private void applyOptimizations(Module firModule, int rounds) {
    for (int i = 0; i < rounds; i++) {
      defaultOptimizations(new MockModuleFeedback(), 2).run(firModule);
      if (!checkAll(firModule)) {
        fail("Optimized FIŘ failed verification:\n" + firModule);
      }
    }
  }

  private void checkOutput(String expected, RunResult result) {
    var value =
        switch (result) {
          case RunResult.Ok(var v) -> v;
          case RunResult.Error(var message) -> throw new AssertionError("Execution failed: " + message);
        };

    assertEquals(expected, value.toString(), "Output from compiled C differed from GNU-R");
  }

  private RunResult runSharedObject(
      BC2Fir2CTestSupport.SharedObjectArtifact artifact, String... argExprs) {
    var argsSuffix = argExprs.length == 0 ? "" : ", " + String.join(", ", argExprs);
    var script =
        """
            options(warn=1)
            library(rsh)
            fir2c_run <- local({
              so_path <- '%1$s'
              cp_path <- '%2$s'
              dyn.load(so_path)
              on.exit(dyn.unload(so_path), add=TRUE)
              env <- new.env(parent=globalenv())
              cp <- readRDS(cp_path)
              invisible(.Call('Rsh_initialize_runtime'))
              tryCatch(
                list(ok=TRUE, value=.Call('%3$s', env, cp%4$s)),
                error=function(e) list(ok=FALSE, message=conditionMessage(e))
              )
            })
            fir2c_run
            """
            .formatted(
                escapeForR(artifact.soFile()),
                escapeForR(artifact.cpFile()),
                artifact.entrySymbol(),
                argsSuffix);

    var pair = R.capturingEval(script);
    var sexp = pair.first();
    if (!(sexp instanceof VecSXP vec) || vec.size() != 2) {
      throw new AssertionError("Unexpected R result: " + sexp);
    }
    var ok =
        vec.get(0)
            .asScalarLogical()
            .filter(v -> v != org.prlprg.primitive.Logical.NA)
            .map(v -> v == org.prlprg.primitive.Logical.TRUE)
            .orElseThrow(() -> new AssertionError("Missing ok flag"));
    var data = vec.get(1);

    if (!ok) {
      var message = data.asScalarString().orElse(data.toString());
      return new RunResult.Error(message);
    }
    return new RunResult.Ok(data);
  }

  private static String escapeForR(Path path) {
    return path.toAbsolutePath().toString().replace("\\", "/").replace("'", "\\'");
  }

  private enum CompileMode {
    DIRECT(0),
    OPTIMIZED(1),
    OPTIMIZED_DEOPT(3);

    private final int rounds;

    CompileMode(int rounds) {
      this.rounds = rounds;
    }

    boolean isOptimized() {
      return this != DIRECT;
    }

    int rounds() {
      return rounds;
    }
  }

  private sealed interface RunResult {
    record Ok(SEXP value) implements RunResult {}

    record Error(String message) implements RunResult {}
  }
}
