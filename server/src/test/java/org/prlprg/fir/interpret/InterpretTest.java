package org.prlprg.fir.interpret;

import static org.prlprg.fir.interpret.InterpretUtil.testInterpretFirFile;

import java.nio.file.Path;
import org.junit.jupiter.params.ParameterizedTest;
import org.prlprg.util.DirectorySource;

/// Tests for the FIŘ interpreter where the module and expected return value are parsed.
class InterpretTest {
  /// Tests that all FIŘ files in the test resources directory, when interpreted, raise expected
  /// errors and no other errors.
  @ParameterizedTest
  @DirectorySource(root = "..", glob = "*.fir")
  void testInterpretFirFiles(Path firFilePath) {
    testInterpretFirFile(firFilePath, true, _ -> {});
  }
}
