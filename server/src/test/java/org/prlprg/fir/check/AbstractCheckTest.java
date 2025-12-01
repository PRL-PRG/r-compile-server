package org.prlprg.fir.check;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.prlprg.fir.ir.ParseUtil.parseModule;

import com.google.common.collect.HashMultiset;
import java.util.List;
import java.util.function.Predicate;
import java.util.stream.Collectors;
import org.junit.jupiter.params.ParameterizedTest;
import org.prlprg.examples.DirectorySource;
import org.prlprg.examples.ExamplePath;

abstract class AbstractCheckTest {
  private final String checkName;
  private final Checker checker;
  private final String checkCommentStart;

  protected AbstractCheckTest(String checkName, Checker checker) {
    this.checkName = checkName;
    this.checker = checker;
    checkCommentStart = "# " + checkName + "-error: ";
  }

  /// Tests that all FIŘ files in the test resources directory, when checked with the given
  /// checker, raise expected errors and no other errors.
  @ParameterizedTest
  @DirectorySource(root = "..", glob = "*.fir", depth = 2)
  void testCheckFirFiles(ExamplePath firPath) {
    var firText = firPath.read();
    var firModule = parseModule(firText);

    checker.run(firModule);

    var unseenErrors =
        checker.errors().stream()
            .map(CheckException::mainMessage)
            .collect(Collectors.toCollection(HashMultiset::create));
    var unseenExpectedErrors =
        firText
            .lines()
            .map(String::trim)
            .filter(line -> line.startsWith(checkCommentStart))
            .map(line -> line.substring(checkCommentStart.length()))
            .filter(Predicate.not(unseenErrors::remove))
            .toList();
    var unexpectedErrors =
        checker.errors().stream()
            .filter(error -> unseenErrors.contains(error.mainMessage()))
            .map(CheckException::getMessage)
            .toList();

    assertEquals(List.of(), unexpectedErrors, checkName + " checking produced unexpected errors");
    assertEquals(
        List.of(), unseenExpectedErrors, checkName + " checking DIDN'T produce expected errors");
  }
}
