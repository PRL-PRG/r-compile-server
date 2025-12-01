package org.prlprg.bc2c;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.fail;

import org.junit.jupiter.api.extension.ExtendWith;
import org.junit.jupiter.params.ParameterizedTest;
import org.prlprg.bc.StdlibClosuresSource;
import org.prlprg.sexp.SEXP;
import org.prlprg.examples.DirectorySource;
import org.prlprg.examples.ExamplePath;
import org.prlprg.util.gnur.GNUR;
import org.prlprg.util.gnur.GNURTestSupport;

@ExtendWith(BC2Fir2CSnapshotTestExtension.class)
@GNURTestSupport
public class BC2Fir2CCompileTest implements StdlibClosuresSource {
  private final GNUR R;

  public BC2Fir2CCompileTest(GNUR R) {
    this.R = R;
  }

  @Override
  public SEXP eval(String source) {
    return R.eval(source);
  }

  @ParameterizedTest
  @DirectorySource(glob = "*.R")
  void testSpecificExamples(ExamplePath rPath, BC2CSnapshot snapshot) {
    snapshot.setName(rPath.name());

    var testFile = new RExampleFile(rPath.read());
    for (var check : testFile.checks()) {
      var options = new SnapshotOptions(check.options());
      snapshot.verify(check.code(), true, options.saveSnapshot, options.extraChecks);
    }
  }


}
