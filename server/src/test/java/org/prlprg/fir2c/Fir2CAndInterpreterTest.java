package org.prlprg.fir2c;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertNotNull;
import static org.junit.jupiter.api.Assertions.assertTrue;
import static org.junit.jupiter.api.Assertions.fail;
import static org.prlprg.fir.check.Checker.checkAll;
import static org.prlprg.fir.interpret.internal.Builtins.registerBuiltins;
import static org.prlprg.fir.ir.ParseUtil.parseModule;

import java.io.IOException;
import java.nio.file.Path;
import java.util.UUID;
import org.junit.jupiter.params.ParameterizedTest;
import org.prlprg.fir.interpret.InterpretException;
import org.prlprg.fir.interpret.internal.InternalInterpreter;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.fir2c.FirCompiledModule.FirCompiledDispatchIndex;
import org.prlprg.primitive.Logical;
import org.prlprg.rds.RDSWriter;
import org.prlprg.service.RshCompiler;
import org.prlprg.service.RshCompiler.RuntimeVariant;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.VecSXP;
import org.prlprg.examples.DirectorySource;
import org.prlprg.util.Files;
import org.prlprg.examples.ExamplePath;
import org.prlprg.util.cc.CCompilationException;
import org.prlprg.session.gnur.GNUR;

public class Fir2CAndInterpreterTest {
  private final GNUR R;

  public Fir2CAndInterpreterTest(GNUR R) {
    this.R = R;
  }

  @ParameterizedTest
  @DirectorySource(glob = "*.fir")
  void runtimeMatchesInterpreter(ExamplePath firPath) throws Exception {
    var firText = firPath.read();
    var caseName = firPath.name();

    var firModule = parseModule(firText);
    if (!checkAll(firModule)) {
      fail("Invalid testcase (failed verification)");
    }

    var expected = interpret(firModule);
    var actual = compileAndExecute(firModule, caseName);
    assertEquals(
        expected.toString(),
        actual.toString(),
        () -> "Interpret/compile+run mismatch for " + caseName);
  }

  private SEXP interpret(Module firModule) {
    var interpreter = new InternalInterpreter(firModule);
    registerBuiltins(interpreter);
    try {
      return interpreter.call("main");
    } catch (InterpretException e) {
      System.out.println(interpreter.module());
      throw new AssertionError("Testcase crashed interpreter", e);
    }
  }

  private SEXP compileAndExecute(Module firModule, String caseName) throws Exception {
    var mainFun = firModule.localFunction(Variable.named("main"));
    assertNotNull(mainFun, "Testcase missing main function");
    assertEquals(
        1, mainFun.versions().size(), "Testcase `main` function must have at exactly one version");
    assertTrue(
        mainFun.version(0).parameters().isEmpty(),
        "Testcase `main` function version must have zero arguments");

    var compiled =
        Module2CCompiler.compile(
            firModule, R.getSession(), Option.CHECK_ARITY, Option.EMIT_DEBUG_COMMENTS);

    if (!(compiled.compiledFunctionDispatches().get(mainFun) instanceof FirCompiledDispatchIndex.Regular(var dispatchName))) {
      throw new IllegalArgumentException("Missing dispatch for `main` function (or it's a builtin, but probably not)");
    }

    var entrySymbol = dispatchName + "_entry";
    var cSource = compiled.cUnit() + driverSource(dispatchName, entrySymbol);

    var tempDir =
        Files.createTempDirectory("fir2c-" + sanitizeCaseName(caseName) + "-" + UUID.randomUUID());
    try {
      Path cFile = tempDir.resolve("module.c");
      Files.writeString(cFile, cSource);

      Path cpFile = tempDir.resolve("module.RDS");
      RDSWriter.writeFile(cpFile.toFile(), compiled.constantPool());

      Path soFile = tempDir.resolve("module.so");
      compileSharedObject(cFile, soFile, tempDir, firModule, caseName);

      var runResult = runSharedObject(entrySymbol, soFile, cpFile);
      return switch (runResult) {
        case RunResult.Ok(var value) -> value;
        case RunResult.Error(var message) ->
            throw new AssertionError("Execution failed: " + message);
      };
    } finally {
      Files.deleteRecursively(tempDir);
    }
  }

  private static String driverSource(String dispatchName, String entrySymbol) {
    return
"""
extern SEXP %1$s(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);

SEXP %2$s(SEXP env, SEXP pool) {
  return %1$s(pool, env, 0, NULL, Rsh_Fir_param_types_empty());
}
"""
        .formatted(dispatchName, entrySymbol);
  }

  private static void compileSharedObject(
      Path cFile, Path soFile, Path workDir, Module firModule, String caseName)
      throws IOException, InterruptedException {
    try {
      RshCompiler.getInstance(3, RuntimeVariant.FIR2C)
          .createBuilder(cFile.getFileName().toString(), soFile.getFileName().toString())
          .flag("-shared")
          .flag("-Wl,-undefined,dynamic_lookup")
          .flag("-DRSH_TESTS")
          .flag("-DRSH_PC")
          .workingDirectory(workDir.toFile())
          .compile();
    } catch (CCompilationException e) {
      System.out.println("=== FIR ===");
      System.out.println(firModule);
      System.out.println("=== C ===");
      System.out.println(Files.readString(cFile));
      fail("Failed to compile shared object for " + caseName, e);
    }
  }

  private RunResult runSharedObject(String entrySymbol, Path soFile, Path cpFile) {
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
                list(ok=TRUE, value=.Call('%3$s', env, cp)),
                error=function(e) list(ok=FALSE, message=conditionMessage(e))
              )
            })
            fir2c_run
            """
            .formatted(escapeForR(soFile), escapeForR(cpFile), entrySymbol);

    var pair = R.capturingEval(script);
    var sexp = pair.first();
    if (!(sexp instanceof VecSXP vec) || vec.size() != 2) {
      throw new AssertionError("Unexpected R result: " + sexp);
    }
    var ok =
        vec.get(0)
            .asScalarLogical()
            .filter(v -> v != Logical.NA)
            .map(v -> v == Logical.TRUE)
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

  private static String sanitizeCaseName(String raw) {
    return raw.replaceAll("[^A-Za-z0-9._-]", "_");
  }

  private sealed interface RunResult {
    record Ok(SEXP value) implements RunResult {}

    record Error(String message) implements RunResult {}
  }
}
