package org.prlprg.snapshot.bench;

import static org.prlprg.fir.opt.Optimizations.defaultOptimizationsWithout;
import static org.prlprg.snapshot.bench.VariantBenchmark.BASELINE;
import static org.prlprg.snapshot.bench.VariantBenchmark.BASELINE_RERUN;

import java.util.ArrayList;
import java.util.List;
import org.prlprg.TestConfig;
import org.prlprg.examples.Example;
import org.prlprg.fir.opt.Optimizations;
import org.prlprg.snapshot.SnapshotStore;
import org.prlprg.snapshot.bench.VariantBenchmark.Variant;

/// Benchmark the example compiled by the default optimizations, then once per optimization
/// selected by [TestConfig#BENCHMARK_OPTIMIZATIONS] with that one removed, to measure what each
/// optimization is worth (see [Optimizations#defaultOptimizationsWithout(String)]).
///
/// Each variant's optimized FIŘ, optimization log, generated C, and shared object are snapshotted
/// like the default pipeline's, under a directory named after the optimization it removed.
///
/// The table also gets the [reference rows][VariantBenchmark#referenceRows] -- `ast`,
/// `bc.default`, `bc.opt`, and `fir2c.default` -- the same representations [BenchmarkQuery]
/// reports.
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
    var baseline = VariantBenchmark.compiled(example, store, BASELINE, null);

    var variants = new ArrayList<Variant>();
    variants.add(baseline);
    variants.addAll(
        removedOptimizations().stream()
            .map(
                removed ->
                    VariantBenchmark.compiled(
                        example, store, removed, defaultOptimizationsWithout(removed)))
            .toList());
    // Benchmark the baseline a second time, at the end. It's the same code as the first row, so
    // the difference between the two rows is this benchmark's noise floor: two runs of identical
    // code were observed to differ by up to 20%, apparently depending on how the shared object
    // happened to be loaded, so a smaller difference than that doesn't mean anything.
    variants.add(baseline.rerun(BASELINE_RERUN));
    variants.addAll(VariantBenchmark.referenceRows(example, store, baseline));

    var log = new StringBuilder();
    var measurements =
        VariantBenchmark.measure(variants, BenchmarkQuery.benchmarkCall(example), log);
    return VariantBenchmark.report(
        "", "report", VariantBenchmark.columns(measurements), log.toString());
  }

  private OptimizationBenchmarkQuery() {}
}
