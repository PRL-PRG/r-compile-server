package org.prlprg.fir.check;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.prlprg.fir.ir.ParseUtil.parseModule;

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.HashSet;
import java.util.List;
import java.util.function.Predicate;
import java.util.stream.Collectors;
import org.junit.jupiter.params.ParameterizedTest;
import org.prlprg.util.DirectorySource;

/// Tests type-checking FIŘ files.
class TypeCheckTest {
  /// Tests that all FIŘ files in the test resources directory, when type checked, raise expected
  /// type errors and no other errors.
  @ParameterizedTest
  @DirectorySource(root = "..", glob = "*.fir")
  void testTypeCheckFirFiles(Path firFilePath) throws IOException {
    var firText = Files.readString(firFilePath);
    var firModule = parseModule(firText);

    var typeChecker = new TypeChecker();
    typeChecker.run(firModule);

    var unseenTypeCheckerErrorMessages =
        typeChecker.errors().stream()
            .map(CheckException::mainMessage)
            .collect(Collectors.toCollection(HashSet::new));
    var unseenExpectedErrors =
        firText
            .lines()
            .map(String::trim)
            .filter(line -> line.startsWith("# type-error: "))
            .map(line -> line.substring("# type-error: ".length()))
            .filter(Predicate.not(unseenTypeCheckerErrorMessages::remove))
            .toList();
    var unexpectedTypeCheckerErrors =
        typeChecker.errors().stream()
            .filter(error -> unseenTypeCheckerErrorMessages.contains(error.mainMessage()))
            .map(CheckException::getMessage)
            .toList();

    assertEquals(
        List.of(), unexpectedTypeCheckerErrors, "Type checking produced unexpected errors");
    assertEquals(List.of(), unseenExpectedErrors, "Type checking DIDN'T produce expected errors");
  }
}
