package org.prlprg.snapshot.bc;

import static org.junit.jupiter.api.Assumptions.abort;

import java.nio.file.Path;
import org.prlprg.examples.Example;
import org.prlprg.examples.RExampleTest;
import org.prlprg.snapshot.SnapshotStore;

public class BCTest {
  @RExampleTest
  public void test(Example example, SnapshotStore store) {
    test(example, store, BCQuery.REGULAR);
  }

  @RExampleTest
  public void testOpt(Example example, SnapshotStore store) {
    test(example, store, BCQuery.OPT);
  }

  private void test(Example example, SnapshotStore store, BCQuery query) {
    if (example.rpath().equals(Path.of("stdlib", "utils", ".install.macbinary.R"))
        && System.getProperty("os.name").contains("Mac")) {
      abort("utils/.install.macbinary is different on macOS, so the snapshot also differs");
    }

    store.verify(example, query);
  }
}
