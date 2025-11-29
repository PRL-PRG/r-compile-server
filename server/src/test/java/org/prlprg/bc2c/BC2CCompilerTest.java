package org.prlprg.bc2c;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.fail;

import java.util.List;
import org.junit.jupiter.api.extension.ExtendWith;
import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.MethodSource;
import org.prlprg.bc2c.BC2CDirectSnapshotTestExtension.BC2CDirectSnapshot;
import org.prlprg.bc2c.BC2CDirectSnapshotTestExtension.TestResultCheck;
import org.prlprg.sexp.CloSXP;
import org.prlprg.examples.DirectorySource;
import org.prlprg.examples.RExampleFile;
import org.prlprg.util.TestPath;

@ExtendWith(BC2CDirectSnapshotTestExtension.class)
abstract class BC2CCompilerTest {
  @ParameterizedTest
  @DirectorySource(glob = "*.R")
  void testSpecificExamples(TestPath rPath, BC2CSnapshot snapshot) {
    snapshot.setName(rPath.name());

    var testFile = new RExampleFile(rPath.read());
    for (var check : testFile.checks()) {
      var options = new BC2CExampleOptions(true, check.options());
      snapshot.verify(check.code(), options.compilePromises, options.saveSnapshot, options.extraChecks);
    }
  }

  @ParameterizedTest
  @MethodSource("stdlibFunctionNameSexpsAndCodes")
  void testFromStdlib(
      String name, CloSXP ignore, String functionCode, BC2CSnapshot snapshot) {
    snapshot.setName(name);
    snapshot.verify(functionCode, true, true, List.of());
  }
}

