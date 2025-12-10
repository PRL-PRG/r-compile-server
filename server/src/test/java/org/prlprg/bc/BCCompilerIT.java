package org.prlprg.bc;

import static org.junit.jupiter.api.Assumptions.abort;

import java.nio.file.Path;
import org.prlprg.examples.Example;
import org.prlprg.examples.RExampleTest;
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
