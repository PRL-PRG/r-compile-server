package org.prlprg.fir.check;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.prlprg.fir.ir.ParseUtil.parseModule;

import java.util.HashSet;
import java.util.List;
import java.util.function.Predicate;
import java.util.stream.Collectors;
import java.util.stream.Stream;
import org.junit.jupiter.params.ParameterizedTest;
import org.prlprg.util.DirectorySource;
import org.prlprg.util.TestPath;

/// Tests checking FIŘ files' types, effects, and flow.
class TypeEffectProvenanceCheckTest {
  /// Tests that all FIŘ files in the test resources directory, when type checked, raise expected
  /// type errors and no other errors.
  @ParameterizedTest
  @DirectorySource(root = "..", glob = "*.fir")
  void testTypeCheckFirFiles(TestPath firPath) {
    var firText = firPath.read();
    var firModule = parseModule(firText);

    var typeAndEffectChecker = new TypeAndEffectChecker();
    var provenanceChecker = new ProvenanceChecker();
    typeAndEffectChecker.run(firModule);
    provenanceChecker.run(firModule);

    var unseenErrorMessages =
        Stream.concat(typeAndEffectChecker.errors().stream(), provenanceChecker.errors().stream())
            .map(CheckException::mainMessage)
            .collect(Collectors.toCollection(HashSet::new));
    var unseenExpectedErrors =
        firText
            .lines()
            .map(String::trim)
            .filter(line -> line.startsWith("# type-error: "))
            .map(line -> line.substring("# type-error: ".length()))
            .filter(Predicate.not(unseenErrorMessages::remove))
            .toList();
    var unexpectedErrors =
        typeAndEffectChecker.errors().stream()
            .filter(error -> unseenErrorMessages.contains(error.mainMessage()))
            .map(CheckException::getMessage)
            .toList();

    assertEquals(List.of(), unexpectedErrors, "Type checking produced unexpected errors");
    assertEquals(List.of(), unseenExpectedErrors, "Type checking DIDN'T produce expected errors");
  }
}
