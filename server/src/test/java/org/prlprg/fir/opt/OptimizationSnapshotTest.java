package org.prlprg.fir.opt;

import org.prlprg.bc2fir.BC2FirCompilerTest;
import org.prlprg.examples.Example;
import org.prlprg.examples.FirExampleTest;
import org.prlprg.fir.ir.FirParseTest;
import org.prlprg.snapshots.SnapshotStore;
import org.prlprg.snapshots.order.OrderAfter;

/// Test that various optimizations don't crash and produce expected (according to snapshot)
/// output.
@OrderAfter(BC2FirCompilerTest.class)
@OrderAfter(FirParseTest.class)
@OptimizationTestClass
public record OptimizationSnapshotTest(Optimization optimization) {
  @FirExampleTest
  void test(Example example, SnapshotStore store) {
    store.verify(example, new OptimizedFirQuery(optimization));
  }
}
