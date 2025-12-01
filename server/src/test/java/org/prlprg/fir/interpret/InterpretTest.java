package org.prlprg.fir.interpret;

import static org.prlprg.fir.interpret.TestInterpret.testInterpretFirFile;

import org.junit.jupiter.params.ParameterizedClass;
import org.junit.jupiter.params.ParameterizedTest;
import org.prlprg.examples.DirectorySource;
import org.prlprg.examples.ExamplePath;

/// Tests the interpreter where the module and expected return value are parsed.
@ParameterizedClass
class InterpretTest {
  /// Tests that all FIŘ files in the test resources directory, when interpreted, raise expected
  /// errors and no other errors.
  @ParameterizedTest
  @DirectorySource(root = "..", glob = "*.fir")
  void testInterpretFirFiles(ExamplePath firPath) {
    testInterpretFirFile(firPath, true, _ -> {});
  }
}
