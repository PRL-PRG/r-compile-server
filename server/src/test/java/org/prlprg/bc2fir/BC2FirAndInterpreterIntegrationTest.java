package org.prlprg.bc2fir;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.fail;
import static org.prlprg.bc2fir.BC2FirCompilerUtils.compile;
import static org.prlprg.fir.check.Checker.checkAll;
import static org.prlprg.fir.interpret.Builtins.registerBuiltins;
import static org.prlprg.fir.opt.Optimizations.defaultOptimizations;

import java.util.function.BiConsumer;
import org.junit.jupiter.params.ParameterizedTest;
import org.prlprg.bc.CompilerException;
import org.prlprg.fir.interpret.InterpretException;
import org.prlprg.fir.interpret.Interpreter;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.primitive.Complex;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.util.DirectorySource;
import org.prlprg.util.TestPath;
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
  void testCompilerAndInterpreter(TestPath rFilePath) {
    testCompilerAndInterpreterAbstract(
        rFilePath, (interpreter, check) -> check.accept("FIŘ output", interpreter.call("main")));
  }

  /// Tests that all R files in the test resources directory produce the same output:
  /// - When interpreted by GNU-R.
  /// - When bytecode-compiled, converted into FIŘ, and interpreted by [Interpreter].
  /// - When optimized with [default optimizations][
  /// org.prlprg.fir.opt.Optimizations#defaultOptimizations] and interpreted by [Interpreter].
  @ParameterizedTest
  @DirectorySource(glob = "*.R", depth = 2)
  void testCompilerInterpreterOptimizer(TestPath rFilePath) {
    testCompilerAndInterpreterAbstract(
        rFilePath,
        (interpreter, check) -> {
          for (int i = 0; i < 3; i++) {
            check.accept("FIŘ pre-opt #" + i, interpreter.call("main"));
          }

          // Phase 1: Create new versions with contextual dispatch
          defaultOptimizations(interpreter.feedback(), 2).run(interpreter.module());
          if (!checkAll(interpreter.module())) {
            fail("Optimized (phase 1) FIŘ failed verification:\n" + interpreter.module());
          }

          for (int i = 0; i < 3; i++) {
            check.accept("FIŘ post-opt1 #" + i, interpreter.call("main"));
          }

          // Phase 2: insert assumptions in the new versions using collected feedback
          defaultOptimizations(interpreter.feedback(), 2).run(interpreter.module());
          if (!checkAll(interpreter.module())) {
            fail("Optimized (phase 2) FIŘ failed verification:\n" + interpreter.module());
          }

          for (int i = 0; i < 3; i++) {
            check.accept("FIŘ post-opt2 #" + i, interpreter.call("main"));
          }
        });
  }

  /// Tests that all R files in the `deopt` directory produce the same output:
  /// - When interpreted by GNU-R.
  /// - When bytecode-compiled, converted into FIŘ, and interpreted by [Interpreter].
  /// - When optimized with [default optimizations][
  /// org.prlprg.fir.opt.Optimizations#defaultOptimizations] and interpreted by [Interpreter].
  /// - When `main2` is called with a real instead of an integer (same output but causes deopts)
  @ParameterizedTest
  @DirectorySource(root = "deopt", glob = "*.R", depth = 2)
  void testCompilerAndInterpreterDeopt(TestPath rFilePath) {
    testCompilerAndInterpreterAbstract(
        rFilePath,
        (interpreter, check) -> {
          for (int i = 0; i < 3; i++) {
            check.accept("FIŘ pre-opt #" + i, interpreter.call("main2", SEXPs.integer(42)));
          }

          // Phase 1: Create new versions with contextual dispatch
          defaultOptimizations(interpreter.feedback(), 2).run(interpreter.module());
          if (!checkAll(interpreter.module())) {
            fail("Optimized (phase 1) FIŘ failed verification:\n" + interpreter.module());
          }

          for (int i = 0; i < 3; i++) {
            check.accept("FIŘ post-opt1 #" + i, interpreter.call("main2", SEXPs.integer(42)));
          }

          // Phase 2: insert assumptions in the new versions using collected feedback
          defaultOptimizations(interpreter.feedback(), 2).run(interpreter.module());
          if (!checkAll(interpreter.module())) {
            fail("Optimized (phase 2) FIŘ failed verification:\n" + interpreter.module());
          }

          for (int i = 0; i < 3; i++) {
            check.accept("FIŘ post-opt2 #" + i, interpreter.call("main2", SEXPs.real(42)));
          }

          // Phase 3: insert new assumptions after deoptimization and more feedback
          defaultOptimizations(interpreter.feedback(), 2).run(interpreter.module());
          if (!checkAll(interpreter.module())) {
            fail("Optimized (phase 3) FIŘ failed verification:\n" + interpreter.module());
          }

          check.accept("FIŘ post-opt3 #1", interpreter.call("main2", SEXPs.integer(42)));
          check.accept("FIŘ post-opt3 #2", interpreter.call("main2", SEXPs.real(42)));
          check.accept(
              "FIŘ post-opt3 #3", interpreter.call("main2", SEXPs.complex(new Complex(42, 0))));
        });
  }

  private void testCompilerAndInterpreterAbstract(
      TestPath rFilePath, BiConsumer<Interpreter, BiConsumer<String, SEXP>> test) {
    Module firModule = null;

    try {
      var rText = rFilePath.read();

      var rModuleEnv = R.evalEnvironment(rText);
      if (!(rModuleEnv.getLocal("main").orElse(null) instanceof CloSXP main)
          || !main.parameters().isEmpty()) {
        fail("Must have a zero-parameter closure 'main'");
      }

      var rOutput = R.eval(rText + "\n\nmain()");

      firModule = compile(rModuleEnv, R.getSession());

      var interpreter = new Interpreter(firModule);
      registerBuiltins(interpreter);

      // Use `toString()` because we only care about structural equivalence (environments won't
      // be equal but that's OK, we want to check if they're structurally equivalent though).
      var rOutputStr = rOutput.toString();
      test.accept(
          interpreter,
          (desc, firOutput) ->
              assertEquals(
                  rOutputStr,
                  firOutput.toString(),
                  desc + " produced different output than GNU-R"));
    } catch (CompilerException | BcCompilerUnsupportedException e) {
      fail("GNU-R bytecode compiler crashed", e);
    } catch (CFGCompilerException | ClosureCompilerUnsupportedException e) {
      fail("Bytecode->FIŘ compiler crashed", e);
    } catch (InterpretException e) {
      System.out.println(firModule);
      fail("FIŘ interpreter crashed", e);
    }
  }
}
