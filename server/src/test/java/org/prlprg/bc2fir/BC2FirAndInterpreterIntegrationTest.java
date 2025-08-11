package org.prlprg.bc2fir;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.fail;
import static org.prlprg.bc2fir.BC2FirCompilerUtils.compile;

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.Objects;
import org.junit.jupiter.params.ParameterizedTest;
import org.prlprg.bc.CompilerException;
import org.prlprg.fir.interpret.InterpretException;
import org.prlprg.fir.interpret.Interpreter;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.util.DirectorySource;
import org.prlprg.util.NotImplementedError;
import org.prlprg.util.gnur.GNUR;
import org.prlprg.util.gnur.GNURTestSupport;

@GNURTestSupport
public class BC2FirAndInterpreterIntegrationTest {
  private final GNUR R;

  public BC2FirAndInterpreterIntegrationTest(GNUR R) {
    this.R = R;
  }

  /// Tests that all R files in the test resources directory produce the same output:
  /// - When interpreted by GNU-R.
  /// - When bytecode-compiled, converted into FIŘ, and interpreted by [Interpreter].
  @ParameterizedTest
  @DirectorySource(root = ".", glob = "*.R")
  void testCompilerAndInterpreter(Path rFilePath) throws IOException {
    Module firModule = null;

    try {
      var rText = Files.readString(rFilePath);

      var rModuleEnv = R.evalEnvironment(rText);
      if (!(rModuleEnv.getLocal("main").orElse(null) instanceof CloSXP main)
          || !main.parameters().isEmpty()) {
        fail("Must have a zero-parameter closure 'main'");
      }

      var rOutput = R.eval(rText + "\n\nmain()");

      firModule = compile(rModuleEnv, R.getSession());
      var interpreter = new Interpreter(firModule);
      registerBuiltins(interpreter);
      var firOutput = interpreter.call("main");

      // Use `toString()` because we only care about structural equivalence (environments won't be
      // equal but that's OK, we want to check if they're structurally equivalent though).
      assertEquals(
          rOutput.toString(), firOutput.toString(), "FIŘ produced different output than GNU-R");
    } catch (CompilerException | BcCompilerUnsupportedException e) {
      fail("GNU-R bytecode compiler crashed", e);
    } catch (CFGCompilerException | ClosureCompilerUnsupportedException e) {
      fail("Bytecode->FIŘ compiler crashed", e);
    } catch (InterpretException e) {
      fail("FIŘ interpreter crashed.\n\nFIŘ module" + Objects.requireNonNull(firModule), e);
    }
  }

  /// Hijack some builtins and intrinsics in the interpreter, providing enough functionality to
  /// run the tests and have them produce identical output to GNU-R if the FIŘ compiler and
  /// interpreter "work".
  private void registerBuiltins(Interpreter interpreter) {
    // Builtins
    interpreter.registerExternalFunction(
        "+",
        (_, _, args, _) -> {
          if (args.size() != 2) {
            throw new IllegalArgumentException("`+` takes 2 arguments");
          }

          if (args.getFirst().asScalarInteger().isPresent()
              && args.get(1).asScalarInteger().isPresent()) {
            var arg0 = args.getFirst().asScalarInteger().get();
            var arg1 = args.get(1).asScalarInteger().get();
            return SEXPs.integer(arg0 + arg1);
          } else if (args.getFirst().asScalarReal().isPresent()
              && args.get(1).asScalarReal().isPresent()) {
            var arg0 = args.getFirst().asScalarReal().get();
            var arg1 = args.get(1).asScalarReal().get();
            return SEXPs.real(arg0 + arg1);
          } else {
            throw new UnsupportedOperationException(
                "Mock `+` not implemented for arguments except two integers or two reals");
          }
        });
    interpreter.registerExternalFunction(
        "c",
        (_, _, args, _) -> {
          // TODO: Call interpreter
          throw new NotImplementedError();
        });
  }
}
