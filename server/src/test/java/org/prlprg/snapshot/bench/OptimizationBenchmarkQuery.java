package org.prlprg.snapshot.bench;

import static org.prlprg.fir.opt.Optimizations.defaultOptimizationsWithout;

import java.util.LinkedHashMap;
import java.util.List;
import org.prlprg.TestConfig;
import org.prlprg.examples.Example;
import org.prlprg.fir.opt.Optimization;
import org.prlprg.fir.opt.Optimizations;
import org.prlprg.snapshot.SnapshotStore;

/// Benchmark the example compiled by the default optimizations, then once per optimization
/// selected by [TestConfig#BENCHMARK_OPTIMIZATIONS] with that one removed, to measure what each
/// optimization is worth (see [Optimizations#defaultOptimizationsWithout(String)]).
///
/// Each variant's optimized FIŘ, optimization log, generated C, and shared object are snapshotted
/// like the default pipeline's, under a directory named after the optimization it removed.
///
/// The rows are [VariantBenchmark#benchmark]'s.
public class OptimizationBenchmarkQuery implements BenchmarkOutputQuery {
  public static final OptimizationBenchmarkQuery INSTANCE = new OptimizationBenchmarkQuery();

  /// The optimizations to remove, one per benchmarked variant (besides the baseline): every
  /// individual optimization in the default pipeline, unless [TestConfig#BENCHMARK_OPTIMIZATIONS]
  /// narrows them.
  static List<String> removedOptimizations() {
    return Optimizations.individualOptimizationNames().stream()
        .filter(name -> TestConfig.BENCHMARK_OPTIMIZATIONS.matcher(name).matches())
        .toList();
  }

  @Override
  public String name() {
    // Not the default (the package name), because `BenchmarkQuery` already has that
    return "snapshot/bench/opt";
  }

  @Override
  public BenchmarkOutput compute(Example example, SnapshotStore store) {
    var optimizations = new LinkedHashMap<String, Optimization>();
    removedOptimizations()
        .forEach(removed -> optimizations.put(removed, defaultOptimizationsWithout(removed)));
    return VariantBenchmark.benchmark(example, store, optimizations);
  }

  private OptimizationBenchmarkQuery() {}
}
