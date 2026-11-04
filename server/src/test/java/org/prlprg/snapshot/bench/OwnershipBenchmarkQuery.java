package org.prlprg.snapshot.bench;

import static org.prlprg.fir.opt.Optimizations.defaultOptimizationsWithout;
import static org.prlprg.snapshot.bench.VariantBenchmark.BASELINE;
import static org.prlprg.snapshot.bench.VariantBenchmark.BASELINE_RERUN;

import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import org.jetbrains.annotations.Unmodifiable;
import org.jspecify.annotations.Nullable;
import org.prlprg.examples.Example;
import org.prlprg.fir.opt.Optimization;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.sexp.RealSXP;
import org.prlprg.snapshot.SnapshotStore;
import org.prlprg.snapshot.bench.VariantBenchmark.Measurement;
import org.prlprg.snapshot.bench.VariantBenchmark.Variant;
import org.prlprg.util.Files;
import org.prlprg.util.Paths;

/// Benchmark the example compiled by the default optimizations, without each of the
/// [ownership optimizations][#OWNERSHIP], and without all of them, and count each variant's copies.
///
/// The table is [OptimizationBenchmarkQuery]'s, with the copy counts `dups` (GNU-R's
/// `duplicate`s), `fir.dups` (compiled code's copies) and `fir.dups.shallow` (those of them that
/// are shallow), and `dups.ratio` (`dups` relative to the `<none>` row's). The counts come from
/// one untimed call in the variant's [stats build][org.prlprg.snapshot.fir2c.Fir2CQuery#stats()],
/// after the example's warmup (see `promisebench.R`). A variant with the same C as an earlier one
/// reuses its counts, like its time; the reference rows other than `fir2c.default` have none.
public class OwnershipBenchmarkQuery implements BenchmarkOutputQuery {
  public static final OwnershipBenchmarkQuery INSTANCE = new OwnershipBenchmarkQuery();

  /// The optimizations that avoid copies, by using and creating owned and borrowed values.
  public static final @Unmodifiable List<String> OWNERSHIP =
      List.of(
          "callOwnedVersion",
          "consumeDeadDup",
          "elideConsumedDup",
          "createOwnedParameterVersion",
          "createBorrowedParameterVersion");

  /// The `Fir_stats_get` counters in the table, in order.
  private static final @Unmodifiable List<String> COUNTERS =
      List.of("dups", "fir.dups", "fir.dups.shallow");

  private static final String SCRIPT =
      Files.readString(Paths.getResource(OwnershipBenchmarkQuery.class, "ownership.R"));

  @Override
  public String name() {
    return "snapshot/bench/ownership";
  }

  @Override
  public BenchmarkOutput compute(Example example, SnapshotStore store) {
    // Each compiled variant's optimization, by label (`null` is the default optimizations)
    var optimizations = new LinkedHashMap<String, @Nullable Optimization>();
    optimizations.put(BASELINE, null);
    OWNERSHIP.forEach(name -> optimizations.put(name, defaultOptimizationsWithout(name)));
    optimizations.put(String.join("+", OWNERSHIP), defaultOptimizationsWithout(OWNERSHIP));

    var variants = new ArrayList<Variant>();
    optimizations.forEach(
        (label, optimization) ->
            variants.add(VariantBenchmark.compiled(example, store, label, optimization)));
    var baseline = variants.getFirst();
    variants.add(baseline.rerun(BASELINE_RERUN));
    variants.addAll(VariantBenchmark.referenceRows(example, store, baseline));

    var log = new StringBuilder();
    var call = BenchmarkQuery.benchmarkCall(example);
    var measurements = VariantBenchmark.measure(variants, call, log);

    // Count after timing, so it can't affect the times
    var counts = new LinkedHashMap<String, List<Double>>();
    for (var measurement : measurements) {
      var label = measurement.variant().label();
      counts.put(label, counts(measurement, optimizations, counts, example, store, call, log));
    }

    var columns = VariantBenchmark.columns(measurements);
    for (var i = 0; i < COUNTERS.size(); i++) {
      var counter = i;
      columns.put(
          COUNTERS.get(i),
          VariantBenchmark.rNumbers(counts.values().stream().map(c -> c.get(counter)).toList()));
    }
    return VariantBenchmark.report(SCRIPT, "reportOwnership", columns, log.toString());
  }

  /// [#COUNTERS] of `measurement`'s variant: those of the earlier variant with the same C or the
  /// same module (in `earlier`), else counted in its stats build, else `NaN`.
  private static List<Double> counts(
      Measurement measurement,
      Map<String, @Nullable Optimization> optimizations,
      Map<String, List<Double>> earlier,
      Example example,
      SnapshotStore store,
      String call,
      StringBuilder log) {
    var variant = measurement.variant();
    var label = variant.label();
    var none = COUNTERS.stream().map(_ -> Double.NaN).toList();
    if (measurement.sameAs() != null) {
      return earlier.get(measurement.sameAs());
    }
    // The reruns of the baseline (`BASELINE_RERUN` and `fir2c.default`) run its module
    if (!optimizations.containsKey(label)) {
      return variant.kind() == VariantBenchmark.Kind.CC ? earlier.get(BASELINE) : none;
    }

    var path = store.tryLoadPath(example, VariantBenchmark.fir2c(optimizations.get(label)).stats());
    if (path == null) {
      log.append("No stats build to count ").append(label).append('\n');
      return none;
    }
    try {
      var rawOutput =
          GNUR.instance()
              .capturingEval(
                  PromiseBenchmarkQuery.BENCHMARK_DRIVER
                      + "\n"
                      + "statsOne(\n"
                      + "  call = %s,\n".formatted(call)
                      + "  path = '%s',\n".formatted(path.toAbsolutePath())
                      + "  counters = %s\n".formatted(VariantBenchmark.rStrings(COUNTERS))
                      + ")\n");
      if (rawOutput.first() instanceof RealSXP values && values.size() == COUNTERS.size()) {
        return values.stream().toList();
      }
      log.append("Didn't return counts for ")
          .append(label)
          .append(": ")
          .append(rawOutput.first())
          .append('\n');
    } catch (RuntimeException | Error e) {
      log.append("Crashed counting ").append(label).append(": ").append(e).append('\n');
    }
    return none;
  }

  private OwnershipBenchmarkQuery() {}
}
