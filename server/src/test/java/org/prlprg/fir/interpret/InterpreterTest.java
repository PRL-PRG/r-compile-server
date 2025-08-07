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
import org.prlprg.sexp.SEXP;
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
      var actualReturnSexp = interpreter.call("main");

      if (unseenExpectedError != null) {
        fail("Expected runtime error not raised: " + unseenExpectedError);
      }

      if (expectedReturnSexp != null) {
        assertEquals(
            expectedReturnSexp, actualReturnSexp, "`main`'s return value doesn't match expected");
      }
    } catch (InterpreterException e) {
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
}
