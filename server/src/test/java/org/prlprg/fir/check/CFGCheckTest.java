package org.prlprg.fir.check;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.prlprg.fir.ir.ParseUtil.parseModule;

import java.util.HashSet;
import java.util.List;
import java.util.function.Predicate;
import java.util.stream.Collectors;
import org.junit.jupiter.params.ParameterizedTest;
import org.prlprg.util.DirectorySource;
import org.prlprg.util.TestPath;

class CFGCheckTest {
  /// Tests that all FIŘ files in the test resources directory, when CFG checked, raise expected
  /// CFG errors and no other errors.
  @ParameterizedTest
  @DirectorySource(root = "..", glob = "*.fir", depth = 2)
  void testCFGCheckFirFiles(TestPath firPath) {
    var firText = firPath.read();
    var firModule = parseModule(firText);

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

    assertEquals(List.of(), unexpectedCFGCheckerErrors, "CFG checking produced unexpected errors");
    assertEquals(List.of(), unseenExpectedErrors, "CFG checking DIDN'T produce expected errors");
  }
}
