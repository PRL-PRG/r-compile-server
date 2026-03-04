package org.prlprg.bc2fir;

import org.prlprg.examples.Example;
import org.prlprg.examples.RExampleTest;
import org.prlprg.fir.ir.FirQuery;
import org.prlprg.snapshots.SnapshotStore;

public class BC2FirCompilerTest {
  @RExampleTest
  public void test(Example example, SnapshotStore store) {
    store.verify(example, FirQuery.INSTANCE);
  }
}
