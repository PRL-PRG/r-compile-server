package org.prlprg.fir.interpret;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.fail;
import static org.junit.jupiter.api.Assumptions.abort;

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import org.junit.jupiter.params.ParameterizedTest;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.parseprint.ParseException;
import org.prlprg.parseprint.Parser;
import org.prlprg.sexp.PromSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.util.DirectorySource;
import org.prlprg.util.Streams;

/// Tests for the FIŘ interpreter where the module and expected return value are parsed.
final class InterpreterTest {
  /// Tests that all FIŘ files in the test resources directory, when interpreted, raise expected
  /// errors and no other errors.
  @ParameterizedTest
  @DirectorySource(root = "..", glob = "*.fir")
  void testInterpretFirFiles(Path firFilePath) throws IOException {

    String unseenExpectedError = null;

    try {
      var firText = Files.readString(firFilePath);
      var firModule = Parser.fromString(firText, Module.class);

      unseenExpectedError =
          firText
              .lines()
              .map(String::trim)
              .filter(line -> line.startsWith("# runtime-error: "))
              .map(line -> line.substring("# runtime-error: ".length()))
              .collect(
                  Streams.intoOneOrThrow(
                      () -> new AssertionError("Multiple runtime-error annotations not allowed")))
              .orElse(null);
      var expectedReturnSexp =
          firText
              .lines()
              .map(String::trim)
              .filter(line -> line.startsWith("# runtime-return: "))
              .map(line -> line.substring("# runtime-return: ".length()))
              .collect(
                  Streams.intoOneOrThrow(
                      () ->
                          new AssertionError("Multiple runtime-return annotations (not allowed)")))
              .map(text -> Parser.fromString(text, SEXP.class))
              .orElse(null);

      var mainFun = firModule.localFunction("main");
      if (mainFun == null
          || mainFun.versions().isEmpty()
          || !mainFun.version(0).parameters().isEmpty()) {
        fail(
            "File must have `fun main` with at least one version, and the first version must have no parameters");
      }

      var interpreter = new Interpreter(firModule);
      registerBuiltins(interpreter);
      var actualReturnSexp = interpreter.call("main");

      if (unseenExpectedError != null) {
        fail("Expected runtime error not raised: " + unseenExpectedError);
      }

      if (expectedReturnSexp != null) {
        assertEquals(
            expectedReturnSexp, actualReturnSexp, "`main`'s return value doesn't match expected");
      }
    } catch (InterpretException e) {
      if (unseenExpectedError != null) {
        if (e.mainMessage().lines().findFirst().orElseThrow().equals(unseenExpectedError)) {
          // Expected error, just ignore it.
          return;
        } else {
          fail("Interpreter crashed.\nExpected error: " + unseenExpectedError, e);
        }
      }

      throw new AssertionError("Interpreter crashed", e);
    } catch (ParseException e) {
      abort(
          "Failed to parse FIŘ file: "
              + firFilePath
              + "\nError: "
              + e.getMessage()
              + "\nContent:\n"
              + Files.readString(firFilePath));
    }
  }

  /// Hijack some builtins and intrinsics in the interpreter.
  private void registerBuiltins(Interpreter interpreter) {
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
}
