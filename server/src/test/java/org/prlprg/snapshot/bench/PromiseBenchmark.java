package org.prlprg.snapshot.bench;

import org.prlprg.examples.Example;
import org.prlprg.examples.RExampleTest;
import org.prlprg.snapshot.SnapshotStore;

@SuppressWarnings("NewClassNamingConvention")
public class PromiseBenchmark {
  /// Count the promises (and copies) of every benchmark's call, without and with the FIŘ
  /// optimizations (see [PromiseBenchmarkQuery]).
  @RExampleTest(benchmark = true)
  void benchmarkPromises(Example example, SnapshotStore store) {
    var output = store.verify(example, PromiseBenchmarkQuery.INSTANCE);

    System.err.println("Promise benchmark:");
    System.err.println(output);
  }
}
