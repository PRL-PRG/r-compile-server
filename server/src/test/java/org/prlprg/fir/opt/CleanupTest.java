package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.fail;
import static org.prlprg.fir.ir.ParseUtil.parseModule;
import static org.prlprg.fir.opt.OptimizationTest.replaceAfterComments;

import org.junit.jupiter.params.ParameterizedTest;
import org.prlprg.util.DirectorySource;
import org.prlprg.util.TestPath;

class CleanupTest {
  /// Tests that all FIŘ files in the test resources directory are unaffected by the [Cleanup]
  /// pass.
  @ParameterizedTest
  @DirectorySource(root = "..", glob = "*.fir")
  void testCleanupNoOps(TestPath firPath) {
    var firText = firPath.read();
    var firModule = parseModule(firText);

    var firModuleBeforeCleanup = firModule.toString();
    var expectedAfterCleanup = parseModule(replaceAfterComments("cleanup", firText)).toString();

    try {
      new Cleanup().run(firModule);

      var firModuleAfterCleanup = firModule.toString();

      assertEquals(expectedAfterCleanup, firModuleAfterCleanup, "FIŘ module changed by cleanup");
    } catch (Exception e) {
      fail(
          "Cleanup pass failed on FIŘ file: "
              + firPath
              + "\nError: "
              + e.getMessage()
              + "\nOriginal Content:\n"
              + firModuleBeforeCleanup
              + "\nExpected Content:\n"
              + expectedAfterCleanup);
    }
  }
}
