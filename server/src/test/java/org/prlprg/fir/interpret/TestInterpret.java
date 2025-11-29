package org.prlprg.fir.interpret;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.fail;
import static org.junit.jupiter.api.Assumptions.abort;
import static org.prlprg.fir.check.Checker.checkAll;
import static org.prlprg.fir.interpret.RegisterStubs.registerStubs;
import static org.prlprg.fir.ir.ParseUtil.parseModule;

import java.util.List;
import java.util.function.Consumer;
import javax.annotation.Nullable;
import org.prlprg.fir.interpret.internal.InternalInterpreter;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.sexp.SEXP;
import org.prlprg.util.Streams;
import org.prlprg.util.TestPath;

public final class TestInterpret {
  /// Tests that the FIŘ file, when interpreted, produces the expected output, and raises
  /// expected errors.
  ///
  /// Then, depending on the given function, optimizes the FIŘ file and tests more.
  public static void testInterpretFirFile(
      TestPath firPath, boolean testInvalid, Consumer<TestContext> optimize) {
    testInterpretFirFile(firPath.read(), testInvalid, optimize);
  }

  /// Tests that the FIŘ file, when interpreted, produces the expected output, and raises
  /// expected errors.
  ///
  /// Then, depending on the given function, optimizes the FIŘ file and tests more.
  public static void testInterpretFirFile(
      String firText, boolean testInvalid, Consumer<TestContext> optimize) {
    var module = parseModule(firText);

    var expectedIsValid = checkAll(module);
    if (!testInvalid && !expectedIsValid) {
      abort("This test only checks valid FIŘ");
    }

    var expectedOutput =
        firText
            .lines()
            .map(String::trim)
            .filter(line -> line.startsWith("# runtime-return: "))
            .map(line -> line.substring("# runtime-return: ".length()))
            .collect(
                Streams.zeroOneOrThrow(
                    () -> fail("Multiple runtime-return annotations (not allowed)")))
            .map(ParseUtil::parseSexp)
            .orElse(null);
    var expectedErrorMsg =
        firText
            .lines()
            .map(String::trim)
            .filter(line -> line.startsWith("# runtime-error: "))
            .map(line -> line.substring("# runtime-error: ".length()))
            .collect(
                Streams.zeroOneOrThrow(
                    () -> fail("Multiple runtime-error annotations not allowed")))
            .orElse(null);

    var mainFun = module.localFunction(Variable.named("main"));
    if (mainFun == null
        || mainFun.versions().isEmpty()
        || !mainFun.version(0).parameters().isEmpty()) {
      fail(
          "File must have `fun main` with at least one version, and the first version must have no parameters");
    }

    // First test using the internal interpreter, if it can.
    // Regardless of whether the internal interpreter works, also test using the compiler and
    // GNU-R interpreter.
    for (var interpreter : List.of(new InternalInterpreter(module), new GnurInterpreter(module))) {
      registerStubs(interpreter);

      // Test the unoptimized module first.
      verifyRunAndCheck(interpreter, expectedOutput, expectedErrorMsg);

      // Now test optimizations.
      optimize.accept(new TestContext(interpreter, expectedIsValid, expectedOutput, expectedErrorMsg));
    }
  }

  /// Call `main`, then check the output and error (if any) against expected.
  private static void verifyRunAndCheck(
      Interpreter interpreter, @Nullable SEXP expectedOutput, @Nullable String expectedErrorMsg) {
    try {
      var actualReturnSexp = interpreter.call("main");

      if (expectedErrorMsg != null) {
        fail("Expected runtime error not raised: " + expectedErrorMsg);
      }

      if (expectedOutput != null) {
        assertEquals(
            expectedOutput, actualReturnSexp, "`main`'s return value doesn't match expected");
      }
    } catch (InterpretException e) {
      if (expectedErrorMsg != null) {
        var actualErrorMsg =
            e.mainMessage()
                .lines()
                .findFirst()
                .orElseThrow()
                .replaceAll(
                    "\\.Interpret\\(promise\\(-?[0-9]*\\)\\)", ".Interpret(promise(<...>))");
        if (!expectedErrorMsg.equals(actualErrorMsg)) {
          System.out.println(interpreter.module());
        }
        assertEquals(
            expectedErrorMsg,
            actualErrorMsg,
            "Interpreter crashed with WRONG ERROR\nFull message:\n" + e.mainMessage());
      } else {
        System.out.println(interpreter.module());
        fail("Interpreter crashed", e);
      }
    }
  }

  public static class TestContext {
    private final Interpreter interpreter;
    private final boolean expectedIsValid;
    private final @Nullable SEXP expectedOutput;
    private final @Nullable String expectedErrorMsg;

    private TestContext(
        Interpreter interpreter,
        boolean expectedIsValid,
        @Nullable SEXP expectedOutput,
        @Nullable String expectedErrorMsg) {
      this.interpreter = interpreter;
      this.expectedIsValid = expectedIsValid;
      this.expectedOutput = expectedOutput;
      this.expectedErrorMsg = expectedErrorMsg;
    }

    public Interpreter interpreter() {
      return interpreter;
    }

    public Module module() {
      return interpreter.module();
    }

    /// Re-verify if initially valid, then rerun the interpreter, then check that it still
    /// produces the expected output and raises expected errors.
    public void retest() {
      if (expectedIsValid && !checkAll(module())) {
        fail("Module failed verification:\n" + module());
      }

      verifyRunAndCheck(interpreter, expectedOutput, expectedErrorMsg);
    }
  }

  private TestInterpret() {
    // Static class
  }
}
