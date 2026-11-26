package org.prlprg.snapshot.bench;

import org.prlprg.examples.Example;
import org.prlprg.examples.RExampleTest;
import org.prlprg.snapshot.SnapshotStore;

/// Run all benchmarks without one key category of optimizations per method, to see how much each
/// category is worth (see [KeyBenchmarkQuery]).
///
/// Each method takes about a minute per example; narrow it with
/// [org.prlprg.TestConfig#EXAMPLE_FILTER].
@SuppressWarnings("NewClassNamingConvention")
public class KeyBenchmark {
  @RExampleTest(benchmark = true)
  void benchmarkCopyElision(Example example, SnapshotStore store) {
    benchmark(example, store, KeyBenchmarkQuery.COPY_ELISION);
  }

  @RExampleTest(benchmark = true)
  void benchmarkVariableElision(Example example, SnapshotStore store) {
    benchmark(example, store, KeyBenchmarkQuery.VARIABLE_ELISION);
  }

  @RExampleTest(benchmark = true)
  void benchmarkPromiseInlining(Example example, SnapshotStore store) {
    benchmark(example, store, KeyBenchmarkQuery.PROMISE_INLINING);
  }

  @RExampleTest(benchmark = true)
  void benchmarkScalarUnboxing(Example example, SnapshotStore store) {
    benchmark(example, store, KeyBenchmarkQuery.SCALAR_UNBOXING);
  }

  @RExampleTest(benchmark = true)
  void benchmarkContextualDispatch(Example example, SnapshotStore store) {
    benchmark(example, store, KeyBenchmarkQuery.CONTEXTUAL_DISPATCH);
  }

  private static void benchmark(Example example, SnapshotStore store, KeyBenchmarkQuery query) {
    var output = store.verify(example, query);

    System.err.println("Key benchmark, without " + query.label() + ":");
    System.err.println(output);
  }
}
