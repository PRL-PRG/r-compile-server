package org.prlprg.snapshot.bc2fir;

import org.prlprg.examples.Example;
import org.prlprg.examples.RExampleTest;
import org.prlprg.snapshot.SnapshotStore;
import org.prlprg.snapshot.fir.ir.FirQuery;

public class BC2FirTest {
  @RExampleTest
  public void test(Example example, SnapshotStore store) {
    store.verify(example, FirQuery.INSTANCE);
  }
}
