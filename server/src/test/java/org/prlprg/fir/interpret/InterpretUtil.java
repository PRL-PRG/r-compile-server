package org.prlprg.fir.interpret;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.fail;
import static org.junit.jupiter.api.Assumptions.abort;
import static org.prlprg.fir.check.Checker.checkAll;
import static org.prlprg.fir.ir.ParseUtil.parseModule;

import java.util.function.Consumer;
import javax.annotation.Nullable;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.sexp.ListSXP;
import org.prlprg.sexp.PromSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.util.Streams;
import org.prlprg.util.TestPath;

public class InterpretUtil {
  /// Tests that the FIŘ file, when interpreted, produces the expected output, and raises
  /// expected errors.
  ///
  /// Then, depending on the given function, optimizes the FIŘ file and tests more.
  public static void testInterpretFirFile(
      TestPath firPath, boolean testInvalid, Consumer<TestInterpretCtx> optimize) {
    testInterpretFirFile(firPath.read(), testInvalid, optimize);
  }

  /// Tests that the FIŘ file, when interpreted, produces the expected output, and raises
  /// expected errors.
  ///
  /// Then, depending on the given function, optimizes the FIŘ file and tests more.
  public static void testInterpretFirFile(
      String firText, boolean testInvalid, Consumer<TestInterpretCtx> optimize) {
    var firModule = parseModule(firText);

    var expectedIsValid = checkAll(firModule);
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
                Streams.zeroOneOrThrow(
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

    verifyRunAndCheck(interpreter, expectedOutput, expectedErrorMsg);

    // Ok, now test optimizations.
    optimize.accept(
        new TestInterpretCtx(interpreter, expectedIsValid, expectedOutput, expectedErrorMsg));
  }

  /// Hijack unimplemented functions in the examples, e.g. `inc`.
  private static void registerStubs(Interpreter interpreter) {
    if (interpreter.module().lookupFunction("inc") != null) {
      interpreter.registerExternalVersion(
          "inc",
          0,
          (interpreter1, _, args, _) -> {
            if (args.size() != 1 || args.getFirst().asScalarInteger().isEmpty()) {
              throw interpreter1.fail("`inc`'s arguments must consist of one scalar integer");
            }
            var arg = args.getFirst().asScalarInteger().get();

            return SEXPs.integer(arg + 1);
          });
    }
    if (interpreter.module().lookupFunction("dec") != null) {
      interpreter.registerExternalVersion(
          "dec",
          0,
          (interpreter1, _, args, _) -> {
            if (args.size() != 1 || args.getFirst().asScalarInteger().isEmpty()) {
              throw interpreter1.fail("`dec`'s arguments must consist of one scalar integer");
            }
            var arg = args.getFirst().asScalarInteger().get();

            return SEXPs.integer(arg - 1);
          });
    }
    if (interpreter.module().lookupFunction("add") != null) {
      interpreter.registerExternalVersion(
          "add",
          0,
          (interpreter1, _, args, _) -> {
            if (args.size() != 2
                || args.getFirst().asScalarInteger().isEmpty()
                || args.get(1).asScalarInteger().isEmpty()) {
              throw interpreter1.fail("`add`'s arguments must consist of two scalar integers");
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
          (interpreter1, _, args, _) -> {
            if (args.size() != 3
                || args.getFirst().asScalarInteger().isEmpty()
                || !(args.get(1) instanceof PromSXP ifTrue)
                || !(args.get(2) instanceof PromSXP ifFalse)) {
              throw interpreter1.fail(
                  "`if0`'s arguments must consist of one scalar integer and two promises");
            }
            var condition = args.getFirst().asScalarInteger().get();

            return condition == 0 ? interpreter.force(ifTrue) : interpreter.force(ifFalse);
          });
    }
    if (interpreter.module().lookupFunction("provide") != null) {
      interpreter.registerExternalVersion(
          "provide",
          0,
          (interpreter1, _, args, _) -> {
            if (args.size() != 1) {
              throw interpreter1.fail("`provide`'s arguments must consist of one value");
            }
            var nextProvided = provided(interpreter).appended(null, args.getFirst());
            setProvided(interpreter, nextProvided);
            return SEXPs.NULL;
          });
    }
    if (interpreter.module().lookupFunction("require") != null) {
      interpreter.registerExternalVersion(
          "require",
          0,
          (interpreter1, _, args, _) -> {
            if (args.size() != 1) {
              throw interpreter1.fail("`require`'s arguments must consist of one value");
            }
            var provided = provided(interpreter);
            if (provided.isEmpty()) {
              throw interpreter1.fail("No value was `require`d");
            }
            var nextProvided = provided.fromIndex(1);
            if (!args.getFirst().equals(provided.value(0))) {
              throw interpreter1.fail(
                  "`require`d value doesn't match the first `provide`d value: expected "
                      + args.getFirst()
                      + " but got "
                      + provided.value(0)
                      + "\nrest = "
                      + nextProvided);
            }
            setProvided(interpreter, nextProvided);
            return SEXPs.NULL;
          });
    }
    if (interpreter.module().lookupFunction("print") != null) {
      interpreter.registerExternalVersion(
          "print",
          0,
          (interpreter1, _, args, _) -> {
            if (args.size() != 1) {
              throw interpreter1.fail("`print`'s arguments must consist of one value");
            }
            System.out.println("PRINT " + args.getFirst());
            return SEXPs.NULL;
          });
    }
  }

  private static ListSXP provided(Interpreter interpreter) {
    var sexp = interpreter.globalEnv().getLocal("provided").orElse(SEXPs.list());
    if (!(sexp instanceof ListSXP listSXP)) {
      throw interpreter.fail("expected `provided` to be a list, but got: " + sexp);
    }
    return listSXP;
  }

  private static void setProvided(Interpreter interpreter, ListSXP values) {
    interpreter.globalEnv().set("provided", values);
  }

  /// Run verifiers, then call `main`, then check the output and error (if any) against expected.
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
    private final boolean expectedIsValid;
    private final @Nullable SEXP expectedOutput;
    private final @Nullable String expectedErrorMsg;

    private TestInterpretCtx(
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

    /// Re-verify if initially valid, then rerun the interpreter, then check that it still produces
    /// the expected output and raises expected errors.
    public void retest() {
      if (expectedIsValid && !checkAll(interpreter.module())) {
        fail("Module failed verification:\n" + interpreter.module());
      }

      verifyRunAndCheck(interpreter, expectedOutput, expectedErrorMsg);
    }
  }
}
