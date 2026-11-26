package org.prlprg.snapshot.bench;

import org.prlprg.examples.Example;
import org.prlprg.examples.RExampleTest;
import org.prlprg.snapshot.SnapshotStore;

@SuppressWarnings("NewClassNamingConvention")
public class OwnershipBenchmark {
  /// Run all benchmarks without each ownership optimization, and without all of them, and count
  /// the copies of each (see [OwnershipBenchmarkQuery]).
  ///
  /// This takes minutes per example; narrow it with [org.prlprg.TestConfig#EXAMPLE_FILTER].
  @RExampleTest(benchmark = true)
  void benchmarkOwnership(Example example, SnapshotStore store) {
    var output = store.verify(example, OwnershipBenchmarkQuery.INSTANCE);

    System.err.println("Ownership benchmark:");
    System.err.println(output);
  }
}
