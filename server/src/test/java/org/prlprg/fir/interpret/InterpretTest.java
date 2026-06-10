package org.prlprg.fir.interpret;

import static org.prlprg.fir.interpret.InterpretUtil.testInterpretFirFile;

import org.junit.jupiter.params.ParameterizedTest;
import org.prlprg.util.DirectorySource;
import org.prlprg.util.TestPath;

/// Tests for the FIŘ interpreter where the module and expected return value are parsed.
class InterpretTest {
  /// Tests that all FIŘ files in the test resources directory, when interpreted, raise expected
  /// errors and no other errors.
  @ParameterizedTest
  @DirectorySource(root = "..", glob = "*.fir")
  void testInterpretFirFiles(TestPath firPath) {
    testInterpretFirFile(firPath, true, _ -> {});
  }
}
