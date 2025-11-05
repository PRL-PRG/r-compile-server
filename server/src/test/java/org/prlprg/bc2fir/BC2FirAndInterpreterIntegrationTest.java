package org.prlprg.bc2fir;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.fail;
import static org.prlprg.bc2fir.BC2FirCompilerUtils.compile;
import static org.prlprg.fir.check.Checker.checkAll;
import static org.prlprg.fir.interpret.Builtins.registerBuiltins;
import static org.prlprg.fir.opt.Optimizations.defaultOptimizations;

import com.google.common.collect.ImmutableList;
import java.util.Objects;
import java.util.function.BiConsumer;
import java.util.function.Supplier;
import org.junit.jupiter.params.ParameterizedTest;
import org.prlprg.bc.CompilerException;
import org.prlprg.fir.interpret.InterpretException;
import org.prlprg.fir.interpret.Interpreter;
import org.prlprg.fir.interpret.DeoptSnapshot;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.parseprint.PrettyPrintWriter;
import org.prlprg.parseprint.Printer;
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
        rFilePath,
        (interpreter, check) -> check.checkOutput("FIŘ output", () -> interpreter.call("main")));
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
          var trace = check.recordAndCheckOutput("FIŘ pre-opt #0", () -> interpreter.call("main"));
          var oldModuleStr = interpreter.module().toString();
          for (int i = 1; i < 3; i++) {
            check.checkTraceAndOutput("FIŘ pre-opt #" + i, trace, oldModuleStr, () -> interpreter.call("main"));
          }


          // Phase 1: Create new versions with contextual dispatch
          defaultOptimizations(interpreter.feedback(), 2).run(interpreter.module());
          if (!checkAll(interpreter.module())) {
            fail("Optimized (phase 1) FIŘ failed verification:\n" + interpreter.module());
          }

          for (int i = 0; i < 3; i++) {
            check.checkTraceAndOutput("FIŘ post-opt1 #" + i, trace, oldModuleStr, () -> interpreter.call("main"));
          }

          // Phase 2: insert assumptions in the new versions using collected feedback
          oldModuleStr = interpreter.module().toString();
          defaultOptimizations(interpreter.feedback(), 2).run(interpreter.module());
          if (!checkAll(interpreter.module())) {
            fail("Optimized (phase 2) FIŘ failed verification:\n" + interpreter.module());
          }

          for (int i = 0; i < 3; i++) {
            check.checkTraceAndOutput("FIŘ post-opt2 #" + i, trace, oldModuleStr, () -> interpreter.call("main"));
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
          var intTrace = check.recordAndCheckOutput("FIŘ pre-opt #0", () -> interpreter.call("main2", SEXPs.integer(1)));
          var oldModuleStr = interpreter.module().toString();
          for (int i = 1; i < 3; i++) {
            check.checkTraceAndOutput("FIŘ pre-opt #" + i, intTrace, oldModuleStr, () -> interpreter.call("main2", SEXPs.integer(1)));
          }

          // Phase 1: Create new versions with contextual dispatch
          defaultOptimizations(interpreter.feedback(), 2).run(interpreter.module());
          if (!checkAll(interpreter.module())) {
            fail("Optimized (phase 1) FIŘ failed verification:\n" + interpreter.module());
          }

          for (int i = 0; i < 3; i++) {
            check.checkTraceAndOutput("FIŘ post-opt1 #" + i, intTrace, oldModuleStr, () -> interpreter.call("main2", SEXPs.integer(1)));
          }

          // Phase 2: insert assumptions in the new versions using collected feedback
          defaultOptimizations(interpreter.feedback(), 2).run(interpreter.module());
          if (!checkAll(interpreter.module())) {
            fail("Optimized (phase 2) FIŘ failed verification:\n" + interpreter.module());
          }

          var realTrace = check.recordAndCheckOutput("FIŘ post-opt2 #0", () -> interpreter.call("main2", SEXPs.real(1)));
          oldModuleStr = interpreter.module().toString();
          for (int i = 1; i < 3; i++) {
            check.checkTraceAndOutput("FIŘ post-opt2 #" + i, realTrace, oldModuleStr, () -> interpreter.call("main2", SEXPs.real(1)));
          }

          // Phase 3: insert new assumptions after deoptimization and more feedback
          defaultOptimizations(interpreter.feedback(), 2).run(interpreter.module());
          if (!checkAll(interpreter.module())) {
            fail("Optimized (phase 3) FIŘ failed verification:\n" + interpreter.module());
          }

          check.checkTraceAndOutput("FIŘ post-opt3 #1", intTrace, oldModuleStr, () -> interpreter.call("main2", SEXPs.integer(1)));
          check.checkTraceAndOutput("FIŘ post-opt3 #2", realTrace, oldModuleStr, () -> interpreter.call("main2", SEXPs.real(1)));
          check.checkOutput("FIŘ post-opt3 #3", () -> interpreter.call("main2", SEXPs.logical(true)));
          interpreter.call("main2", SEXPs.integer(2));
          interpreter.call("main2", SEXPs.real(3.5));
        });
  }

  private void testCompilerAndInterpreterAbstract(
      TestPath rFilePath, BiConsumer<Interpreter, Check> test) {
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
      test.accept(interpreter, new Check(interpreter, rOutputStr));
    } catch (CompilerException | BcCompilerUnsupportedException e) {
      fail("GNU-R bytecode compiler crashed", e);
    } catch (BC2CFGCompilerException | BC2ClosureCompilerUnsupportedException e) {
      fail("Bytecode->FIŘ compiler crashed", e);
    } catch (InterpretException e) {
      System.out.println(firModule);
      fail("FIŘ interpreter crashed", e);
    }
  }

  private static class Check {
    private final Interpreter interpreter;
    private final String rOutputStr;

    public Check(Interpreter interpreter, String rOutputStr) {
      this.interpreter = interpreter;
      this.rOutputStr = rOutputStr;
    }

    public void checkOutput(String desc, Supplier<SEXP> runInterpreter) {
      var firOutput = runInterpreter.get();
      var firOutputStr = firOutput.toString();

      assertEquals(
          rOutputStr,
          firOutputStr,
          desc + " produced different output than GNU-R");
    }

    public ImmutableList<DeoptSnapshot> recordAndCheckOutput(String desc, Supplier<SEXP> runInterpreter) {
      return interpreter.checkpointTrace().track(() -> checkOutput(desc, runInterpreter));
    }

    public void checkTraceAndOutput(
        String desc, ImmutableList<DeoptSnapshot> expectedTrace, String oldModuleStr, Supplier<SEXP> runInterpreter) {
      final SEXP[] firOutput = new SEXP[1];
      // Defer checking output because we want to report the first trace difference instead of
      // the output difference if there is one (because it usually directly causes future trace
      // differences and an output difference, but never vice versa).
      var trace =
          interpreter
              .checkpointTrace()
              .track(
                  () -> firOutput[0] = runInterpreter.get());
      var firOutputStr = firOutput[0].toString();

      String lastOkSnapshotStr = null;
      for (int i = 0; i < Math.max(expectedTrace.size(), trace.size()); i++) {
        var expectedSnapshot =
            i < expectedTrace.size() ? expectedTrace.get(i) : null;
        var newSnapshot = i < trace.size() ? trace.get(i) : null;

        // Add extra information to the failed assertion to help debugging.
        if (!Objects.equals(expectedSnapshot, newSnapshot)) {
          if (lastOkSnapshotStr != null) {
            System.out.println("\n=== Last OK ===\n");
            System.out.println(lastOkSnapshotStr);
          }

          var moduleStr = interpreter.module().toString();
          if (!oldModuleStr.equals(moduleStr)) {
            System.out.println("\n=== Last module ===\n");
            System.out.println(oldModuleStr);
            System.out.println("\n=== This module ===\n");
            System.out.println(moduleStr);
          }
        }

        assertEquals(
            expectedSnapshot,
            newSnapshot,
            desc + " deviated from expected trace at checkpoint.");
        lastOkSnapshotStr = Objects.requireNonNull(expectedSnapshot).toString();
      }

      assertEquals(
          rOutputStr,
          firOutputStr,
          desc + " produced different output than GNU-R");
    }
  }
}
