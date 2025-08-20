package org.prlprg.fir.interpret;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.fail;
import static org.junit.jupiter.api.Assumptions.abort;
import static org.prlprg.fir.check.Checker.checkAll;
import static org.prlprg.fir.ir.ParseUtil.parseModule;

import java.nio.file.Path;
import java.util.function.Consumer;
import javax.annotation.Nullable;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.sexp.PromSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.util.Files;
import org.prlprg.util.Streams;

public class InterpretUtil {
  /// Tests that the FIŘ file, when interpreted, produces the expected output, and raises
  /// expected errors.
  ///
  /// Then, depending on the given function, optimizes the FIŘ file and tests more.
  public static void testInterpretFirFile(
      Path firFile, boolean testInvalid, Consumer<TestInterpretCtx> optimize) {
    testInterpretFirFile(Files.readString(firFile), testInvalid, optimize);
  }

  /// Tests that the FIŘ file, when interpreted, produces the expected output, and raises
  /// expected errors.
  ///
  /// Then, depending on the given function, optimizes the FIŘ file and tests more.
  public static void testInterpretFirFile(
      String firText, boolean testInvalid, Consumer<TestInterpretCtx> optimize) {
    var firModule = parseModule(firText);

    if (!testInvalid && !checkAll(firModule)) {
      abort("This test only checks valid FIŘ");
    }

    var expectedOutput =
        firText
            .lines()
            .map(String::trim)
            .filter(line -> line.startsWith("# runtime-return: "))
            .map(line -> line.substring("# runtime-return: ".length()))
            .collect(
                Streams.intoOneOrThrow(
                    () -> new AssertionError("Multiple runtime-return annotations (not allowed)")))
            .map(ParseUtil::parseSexp)
            .orElse(null);
    var expectedErrorMsg =
        firText
            .lines()
            .map(String::trim)
            .filter(line -> line.startsWith("# runtime-error: "))
            .map(line -> line.substring("# runtime-error: ".length()))
            .collect(
                Streams.intoOneOrThrow(
                    () -> new AssertionError("Multiple runtime-error annotations not allowed")))
            .orElse(null);

    var mainFun = firModule.localFunction("main");
    if (mainFun == null
        || mainFun.versions().isEmpty()
        || !mainFun.version(0).parameters().isEmpty()) {
      fail(
          "File must have `fun main` with at least one version, and the first version must have no parameters");
    }

    var interpreter = new Interpreter(firModule);
    registerStubs(interpreter);

    runAndCheck(interpreter, expectedOutput, expectedErrorMsg);

    // Ok, now test optimizations.
    optimize.accept(new TestInterpretCtx(interpreter, expectedOutput, expectedErrorMsg));
  }

  /// Hijack unimplemented functions in the examples, e.g. `inc`.
  private static void registerStubs(Interpreter interpreter) {
    if (interpreter.module().lookupFunction("inc") != null) {
      interpreter.registerExternalVersion(
          "inc",
          0,
          (_, _, args, _) -> {
            if (args.size() != 1 || args.getFirst().asScalarInteger().isEmpty()) {
              throw new IllegalArgumentException(
                  "`inc`'s arguments must consist of one scalar integer");
            }
            var arg = args.getFirst().asScalarInteger().get();

            return SEXPs.integer(arg + 1);
          });
    }
    if (interpreter.module().lookupFunction("dec") != null) {
      interpreter.registerExternalVersion(
          "dec",
          0,
          (_, _, args, _) -> {
            if (args.size() != 1 || args.getFirst().asScalarInteger().isEmpty()) {
              throw new IllegalArgumentException(
                  "`dec`'s arguments must consist of one scalar integer");
            }
            var arg = args.getFirst().asScalarInteger().get();

            return SEXPs.integer(arg - 1);
          });
    }
    if (interpreter.module().lookupFunction("add") != null) {
      interpreter.registerExternalVersion(
          "add",
          0,
          (_, _, args, _) -> {
            if (args.size() != 2
                || args.getFirst().asScalarInteger().isEmpty()
                || args.get(1).asScalarInteger().isEmpty()) {
              throw new IllegalArgumentException(
                  "`add`'s arguments must consist of two scalar integers");
            }
            var arg0 = args.getFirst().asScalarInteger().get();
            var arg1 = args.get(1).asScalarInteger().get();

            return SEXPs.integer(arg0 + arg1);
          });
    }
    if (interpreter.module().lookupFunction("if0") != null) {
      interpreter.registerExternalVersion(
          "if0",
          0,
          (_, _, args, _) -> {
            if (args.size() != 3
                || args.getFirst().asScalarInteger().isEmpty()
                || !(args.get(1) instanceof PromSXP ifTrue)
                || !(args.get(2) instanceof PromSXP ifFalse)) {
              throw new IllegalArgumentException(
                  "`if0`'s arguments must consist of one scalar integer and two promises");
            }
            var condition = args.getFirst().asScalarInteger().get();

            return condition == 0 ? interpreter.force(ifTrue) : interpreter.force(ifFalse);
          });
    }
  }

  /// Call `main`, then check the output and error (if any) against expected.
  private static void runAndCheck(
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
                .replaceAll("\\.Interpret\\(([^)]*)\\)", ".Interpret(...)");
        assertEquals(
            expectedErrorMsg,
            actualErrorMsg,
            "Interpreter crashed with WRONG ERROR\nFull message:\n" + e.mainMessage());
      } else {
        fail("Interpreter crashed", e);
      }
    }
  }

  public static class TestInterpretCtx {
    private final Interpreter interpreter;
    private final @Nullable SEXP expectedOutput;
    private final @Nullable String expectedErrorMsg;

    private TestInterpretCtx(
        Interpreter interpreter, @Nullable SEXP expectedOutput, @Nullable String expectedErrorMsg) {
      this.interpreter = interpreter;
      this.expectedOutput = expectedOutput;
      this.expectedErrorMsg = expectedErrorMsg;
    }

    public Interpreter interpreter() {
      return interpreter;
    }

    public Module module() {
      return interpreter.module();
    }

    /// Rerun the interpreter and check that it still produces the expected output and raises
    /// expected errors.
    public void retest() {
      runAndCheck(interpreter, expectedOutput, expectedErrorMsg);
    }
  }
}
