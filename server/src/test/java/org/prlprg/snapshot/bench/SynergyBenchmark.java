package org.prlprg.snapshot.bench;

import org.prlprg.examples.Example;
import org.prlprg.examples.RExampleTest;
import org.prlprg.snapshot.SnapshotStore;

@SuppressWarnings("NewClassNamingConvention")
public class SynergyBenchmark {
  /// Run all benchmarks once per set of optimizations, each time with that set removed, to see
  /// whether removing several costs more (or less) than removing each one.
  ///
  /// This reuses [OptimizationBenchmark]'s results, and runs it first if they're missing. Narrow
  /// it with [org.prlprg.TestConfig#EXAMPLE_FILTER],
  // [org.prlprg.TestConfig#BENCHMARK_OPTIMIZATIONS]
  /// and the `BENCHMARK_SYNERGY_*` options.
  @RExampleTest(benchmark = true)
  void benchmarkSynergy(Example example, SnapshotStore store) {
    var output = store.verify(example, SynergyBenchmarkQuery.INSTANCE);

    System.err.println("Synergy benchmark:");
    System.err.println(output);
  }
}
