package org.prlprg.bench;

import org.prlprg.examples.Example;
import org.prlprg.examples.RExampleTest;
import org.prlprg.snapshots.SnapshotStore;

@SuppressWarnings("NewClassNamingConvention")
public class Benchmark {
  /// Run all benchmarks.
  @RExampleTest(benchmark = true)
  void benchmark(Example example, SnapshotStore store) {
    var output = store.verify(example, BenchmarkQuery.INSTANCE);

    System.err.println("Benchmark:");
    System.err.println(output);
  }
}
