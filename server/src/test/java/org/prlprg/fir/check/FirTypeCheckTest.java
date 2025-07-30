package org.prlprg.fir.check;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertTrue;
import static org.junit.jupiter.api.Assumptions.abort;

import com.google.common.base.Joiner;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.HashSet;
import java.util.List;
import java.util.stream.Collectors;
import org.junit.jupiter.params.ParameterizedTest;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.parseprint.ParseException;
import org.prlprg.parseprint.Parser;
import org.prlprg.util.DirectorySource;

/// Tests type-checking FIR files.
public class FirTypeCheckTest {
  /// Tests that all FIR files in the test resources directory, when type checked, raise expected
  /// type errors and no other errors.
  @ParameterizedTest
  @DirectorySource(root = "..", glob = "*.fir")
  void testTypeCheckFirFiles(Path firFilePath) throws IOException {
    try {
      var firText = Files.readString(firFilePath);
      var firModule = Parser.fromString(firText, Module.class);

      var typeChecker = new TypeChecker();
      typeChecker.run(firModule);

      var unseenTypeCheckerErrorMessages =
          typeChecker.errors().stream()
              .map(CheckException::mainMessage)
              .collect(Collectors.toCollection(HashSet::new));
      firText
          .lines()
          .map(String::trim)
          .filter(line -> line.startsWith("# error: "))
          .forEach(
              line -> {
                var expectedError = line.substring("# error: ".length());
                assertTrue(
                    unseenTypeCheckerErrorMessages.remove(expectedError),
                    "Expected error not found: " + expectedError);
              });

      var unexpectedTypeCheckerErrors =
          typeChecker.errors().stream()
              .filter(error -> unseenTypeCheckerErrorMessages.contains(error.mainMessage()))
              .toList();
      assertEquals(
          List.of(),
          unexpectedTypeCheckerErrors,
          "Type checking produced unexpected errors:\n\n"
              + Joiner.on("\n\n").join(unexpectedTypeCheckerErrors));
    } catch (ParseException e) {
      abort(
          "Failed to parse FIR file: "
              + firFilePath
              + "\nError: "
              + e.getMessage()
              + "\nContent:\n"
              + Files.readString(firFilePath));
    }
  }
}
