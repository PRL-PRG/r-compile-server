package org.prlprg.bc;

import static org.junit.jupiter.api.Assumptions.abort;

import java.nio.file.Path;
import org.junit.jupiter.api.TestInstance;
import org.junit.jupiter.api.extension.ExtendWith;
import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.MethodSource;
import org.prlprg.examples.Example;
import org.prlprg.examples.RExampleTest;
import org.prlprg.sexp.SEXP;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.snapshots.SnapshotStore;

public class BCCompilerIT {
  @RExampleTest
  public void testStdlibFunctions(Example example, SnapshotStore store) {
    if (example.rpath().equals(Path.of("stdlib", "utils", ".install.macbinary"))
        && System.getProperty("os.name").contains("Mac")) {
      abort("utils/.install.macbinary is different on macOS, so the snapshot also differs");
    }

    store.verify(example, BCQuery.INSTANCE);
  }
}
