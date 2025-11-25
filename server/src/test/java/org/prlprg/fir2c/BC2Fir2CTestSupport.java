package org.prlprg.fir2c;

import static org.junit.jupiter.api.Assertions.fail;
import static org.prlprg.fir.check.Checker.checkAll;
import static org.prlprg.fir.opt.Cleanup.cleanup;

import java.io.IOException;
import java.nio.file.Path;
import java.util.UUID;
import org.prlprg.bc.BCCompiler;
import org.prlprg.fir.check.Checker.Exclude;
import org.prlprg.bc2fir.BC2ClosureCompiler;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.rds.RDSWriter;
import org.prlprg.service.RshCompiler;
import org.prlprg.service.RshCompiler.RuntimeVariant;
import org.prlprg.session.RSession;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.util.Files;
import org.prlprg.util.cc.CCompilationException;

final class BC2Fir2CTestSupport {
  private BC2Fir2CTestSupport() {
    // Utility class; no instances.
  }

  static FirCompiledModule compileToC(Module firModule, RSession session) {
    return Module2CCompiler.compile(
        firModule, session, Option.CHECK_ARITY, Option.EMIT_DEBUG_COMMENTS);
  }

  static Module compileRModule(EnvSXP rModuleEnv, RSession session) {
    var firModule = new Module();
    for (var binding : rModuleEnv.bindings()) {
      var funName = binding.getKey();
      if (!(binding.getValue() instanceof CloSXP funSexpNotCompiled)) {
        throw new IllegalArgumentException(
            "Currently non-closures can't be compiled into FIŘ:\n"
                + funName
                + " <- "
                + binding.getValue());
      }

      var funBc =
          new BCCompiler(funSexpNotCompiled, session)
              .compile()
              .orElseThrow(() -> new IllegalStateException("Closure isn't compilable into bytecode"));
      var funSexp =
          SEXPs.closure(
              funSexpNotCompiled.parameters(),
              SEXPs.bcode(funBc),
              funSexpNotCompiled.env(),
              funSexpNotCompiled.attributes());

      BC2ClosureCompiler.compile(session, firModule, funName, funSexp);
      cleanup(firModule, false);

      if (!checkAll(firModule, Exclude.PROVENANCE)) {
        fail("Compiled FIŘ failed verification\n" + firModule);
      }
    }
    return firModule;
  }

  static SharedObjectArtifact buildSharedObject(
      Module firModule,
      FirCompiledModule compiled,
      Function function,
      String caseName,
      int argCount) {
    var dispatchIdx = compiled.compiledFunctionDispatches().get(function);
    if (dispatchIdx == null) {
      throw new IllegalArgumentException("Missing dispatch for function: " + function.name());
    }
    var dispatchName = dispatchIdx.cFunctionName();
    var entrySymbol = dispatchName + "_entry";
    var cSource = compiled.cModule().toString() + driverSource(dispatchName, entrySymbol, argCount);

    var tempDir =
        Files.createTempDirectory(
            "bc2fir2c-" + sanitizeCaseName(caseName) + "-" + UUID.randomUUID());
    try {
      var cFile = tempDir.resolve("module.c");
      Files.writeString(cFile, cSource);

      var cpFile = tempDir.resolve("module.RDS");
      RDSWriter.writeFile(cpFile.toFile(), compiled.constantPool());

      var soFile = tempDir.resolve("module.so");
      compileSharedObject(cFile, soFile, tempDir, firModule, caseName);

      return new SharedObjectArtifact(entrySymbol, cFile, cpFile, soFile, tempDir);
    } catch (IOException e) {
      throw new RuntimeException("Failed to write files for " + caseName, e);
    } catch (RuntimeException e) {
      Files.deleteRecursively(tempDir);
      throw e;
    }
  }

  static String driverSource(String dispatchName, String entrySymbol, int argCount) {
    var argParams = new StringBuilder();
    var argsArray = new StringBuilder();

    if (argCount > 0) {
      for (int i = 0; i < argCount; i++) {
        argParams.append(", SEXP arg").append(i);
      }
      argsArray.append("  SEXP args[] = {");
      for (int i = 0; i < argCount; i++) {
        if (i > 0) {
          argsArray.append(", ");
        }
        argsArray.append("arg").append(i);
      }
      argsArray.append("};\n");
    } else {
      argsArray.append("  SEXP const *args = NULL;\n");
    }

    var argsPointer = argCount == 0 ? "args" : "args";
    return """
extern SEXP %1$s(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);

SEXP %2$s(SEXP env, SEXP pool%3$s) {
%4$s  return %1$s(pool, env, %5$d, %6$s, Rsh_Fir_param_types_empty());
}
"""
        .formatted(
            dispatchName,
            entrySymbol,
            argParams,
            argsArray,
            argCount,
            argsPointer);
  }

  static Function requireFunction(Module firModule, String name) {
    var function = firModule.localFunction(Variable.named(name));
    if (function == null) {
      throw new IllegalArgumentException("Missing function '" + name + "' in module");
    }
    return function;
  }

  static String sanitizeCaseName(String raw) {
    return raw.replaceAll("[^A-Za-z0-9._-]", "_");
  }

  private static void compileSharedObject(
      Path cFile, Path soFile, Path workDir, Module firModule, String caseName)
      throws IOException {
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
    } catch (InterruptedException e) {
      Thread.currentThread().interrupt();
      throw new RuntimeException("Interrupted while compiling shared object for " + caseName, e);
    }
  }

  record SharedObjectArtifact(
      String entrySymbol, Path cFile, Path cpFile, Path soFile, Path tempDir)
      implements AutoCloseable {
    @Override
    public void close() {
      Files.deleteRecursively(tempDir);
    }
  }
}
