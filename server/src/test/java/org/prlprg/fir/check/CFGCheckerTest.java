package org.prlprg.fir.check;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assumptions.abort;

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.HashSet;
import java.util.List;
import java.util.function.Predicate;
import java.util.stream.Collectors;
import org.junit.jupiter.params.ParameterizedTest;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.parseprint.ParseException;
import org.prlprg.parseprint.Parser;
import org.prlprg.util.DirectorySource;

public class CFGCheckerTest {
  /// Tests that all FIR files in the test resources directory, when CFG checked, raise expected
  /// CFG errors and no other errors.
  @ParameterizedTest
  @DirectorySource(root = "..", glob = "*.fir")
  void testCFGCheckFirFiles(Path firFilePath) throws IOException {
    try {
      var firText = Files.readString(firFilePath);
      var firModule = Parser.fromString(firText, Module.class);

      var cfgChecker = new CFGChecker();
      cfgChecker.run(firModule);

      var unseenCFGCheckerErrorMessages =
          cfgChecker.errors().stream()
              .map(CheckException::mainMessage)
              .collect(Collectors.toCollection(HashSet::new));
      var unseenExpectedErrors =
          firText
              .lines()
              .map(String::trim)
              .filter(line -> line.startsWith("# cfg-error: "))
              .map(line -> line.substring("# cfg-error: ".length()))
              .filter(Predicate.not(unseenCFGCheckerErrorMessages::remove))
              .toList();
      var unexpectedCFGCheckerErrors =
          cfgChecker.errors().stream()
              .filter(error -> unseenCFGCheckerErrorMessages.contains(error.mainMessage()))
              .map(CheckException::getMessage)
              .toList();

      assertEquals(
          List.of(), unexpectedCFGCheckerErrors, "CFG checking produced unexpected errors");
      assertEquals(List.of(), unseenExpectedErrors, "CFG checking didn't produce expected errors");
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
