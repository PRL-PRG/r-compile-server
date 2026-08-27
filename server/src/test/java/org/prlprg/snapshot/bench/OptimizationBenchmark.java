package org.prlprg.snapshot.bench;

import org.prlprg.examples.Example;
import org.prlprg.examples.RExampleTest;
import org.prlprg.snapshot.SnapshotStore;

@SuppressWarnings("NewClassNamingConvention")
public class OptimizationBenchmark {
  /// Run all benchmarks once per optimization, each time with that optimization removed, to see
  /// how much it affects performance (and code size).
  ///
  /// This takes minutes per example, since it compiles and runs each one ~45 times; narrow it with
  /// [org.prlprg.TestConfig#EXAMPLE_FILTER] and
  /// [org.prlprg.TestConfig#BENCHMARK_OPTIMIZATIONS].
  @RExampleTest(benchmark = true)
  void benchmarkOptimizations(Example example, SnapshotStore store) {
    var output = store.verify(example, OptimizationBenchmarkQuery.INSTANCE);

    System.err.println("Optimization benchmark:");
    System.err.println(output);
  }
}
