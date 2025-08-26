package org.prlprg.bc2fir;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.fail;
import static org.prlprg.bc2fir.BC2FirCompilerUtils.compile;
import static org.prlprg.fir.interpret.Builtins.registerBuiltins;

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
import org.prlprg.util.DirectorySource;
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
  @DirectorySource(glob = "*.R", depth = 2)
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
      fail("FIŘ interpreter crashed.\n\nFIŘ module:\n" + Objects.requireNonNull(firModule), e);
    }
  }
}
