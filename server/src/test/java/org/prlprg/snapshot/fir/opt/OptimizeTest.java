package org.prlprg.snapshot.fir.opt;

import org.prlprg.examples.Example;
import org.prlprg.examples.FirExampleTest;
import org.prlprg.fir.opt.Optimization;
import org.prlprg.snapshot.SnapshotStore;

/// Test that various optimizations don't crash and produce expected (according to snapshot)
/// output.
@OptimizationTestClass
public record OptimizeTest(Optimization optimization) {
  @FirExampleTest
  void test(Example example, SnapshotStore store) {
    store.verify(example, new OptimizedFirQuery(optimization));
  }
}
