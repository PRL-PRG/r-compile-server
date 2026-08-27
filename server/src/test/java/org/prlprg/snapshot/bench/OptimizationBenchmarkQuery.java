package org.prlprg.snapshot.bench;

import static org.prlprg.fir.opt.Optimizations.defaultOptimizations;
import static org.prlprg.fir.opt.Optimizations.defaultOptimizationsWithout;

import java.io.IOException;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;
import org.jspecify.annotations.Nullable;
import org.prlprg.TestConfig;
import org.prlprg.examples.Example;
import org.prlprg.fir.opt.Optimizations;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.sexp.RealSXP;
import org.prlprg.sexp.StrSXP;
import org.prlprg.snapshot.Query;
import org.prlprg.snapshot.SnapshotStore;
import org.prlprg.snapshot.fir.opt.OptimizedFirQuery;
import org.prlprg.snapshot.fir2c.Fir2CQuery;
import org.prlprg.util.Files;
import org.prlprg.util.Paths;
import org.prlprg.util.Strings;

/// Benchmark the example compiled by the default optimizations, then once per optimization
/// selected by [TestConfig#BENCHMARK_OPTIMIZATIONS] with that one removed, to measure what each
/// optimization is worth (see [Optimizations#defaultOptimizationsWithout(String)]).
///
/// Each variant's optimized FIŘ, optimization log, generated C, and shared object are snapshotted
/// like the default pipeline's, under a directory named after the optimization it removed.
public class OptimizationBenchmarkQuery implements Query<BenchmarkOutput> {
  public static final OptimizationBenchmarkQuery INSTANCE = new OptimizationBenchmarkQuery();

  /// [Variant#removed()] of the variant that removes nothing, which the others are compared to.
  private static final String BASELINE = "<none>";

  /// [Variant#removed()] of the extra row that benchmarks the baseline again, at the end.
  private static final String BASELINE_RERUN = "<none> (rerun)";

  /// [#loc(Path)] when the optimized FIŘ wasn't generated, printed as `NA`.
  private static final int NO_LOC = -1;

  private static final String BENCHMARK_DRIVER =
      Files.readString(Paths.getResource(BenchmarkQuery.class, "bench.R"))
          + "\n"
          + Files.readString(Paths.getResource(OptimizationBenchmarkQuery.class, "optbench.R"));

  /// The optimizations to remove, one per benchmarked variant (besides the baseline): every
  /// individual optimization in the default pipeline, unless [TestConfig#BENCHMARK_OPTIMIZATIONS]
  /// narrows them.
  private static List<String> removedOptimizations() {
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
    var benchmarkCall = BenchmarkQuery.benchmarkCall(example);

    var baseline = variant(example, store, null);

    var variants = new ArrayList<Variant>();
    variants.add(baseline);
    variants.addAll(
        removedOptimizations().stream().map(removed -> variant(example, store, removed)).toList());
    // Benchmark the baseline a second time, at the end. It's the same code as the first row, so
    // the difference between the two rows is this benchmark's noise floor: two runs of identical
    // code were observed to differ by up to 20%, apparently depending on how the shared object
    // happened to be loaded, so a smaller difference than that doesn't mean anything.
    variants.add(new Variant(BASELINE_RERUN, baseline.modulePath(), baseline.loc()));

    // One R call per variant, so a variant that crashes R only loses its own result
    var log = new StringBuilder();
    var times = new double[variants.size()];
    var needsWarmup = true;
    for (var i = 0; i < variants.size(); i++) {
      // The first module benchmarked in a fresh R process is measurably slower than the same
      // module benchmarked later, which would otherwise make the baseline (always first) look
      // slower than the variants that generate identical code. So discard one run, here and
      // whenever a variant may have crashed R, since that starts a new process.
      if (needsWarmup) {
        var _ = time(baseline, benchmarkCall, new StringBuilder());
      }

      times[i] = time(variants.get(i), benchmarkCall, log);
      needsWarmup = Double.isNaN(times[i]);
    }

    return report(variants, times, log.toString());
  }

  /// Optimize and compile the example without `removed` (or with everything, if it's `null`),
  /// storing every intermediate in `snapshots`.
  private static Variant variant(Example example, SnapshotStore store, @Nullable String removed) {
    var optimization =
        removed == null ? defaultOptimizations() : defaultOptimizationsWithout(removed);

    // Snapshots the optimized FIŘ, and its optimization log (written by `OptimizedFirQuery`)
    var firPath = store.tryLoadPath(example, new OptimizedFirQuery(optimization));

    // Snapshots the generated C and the shared object we benchmark. The baseline shares
    // `FULLY_OPTIMIZED`'s snapshot, because it runs the exact same pipeline.
    var fir2c =
        removed == null
            ? Fir2CQuery.FULLY_OPTIMIZED
            : new Fir2CQuery("opt.fir2c." + optimization.name(), optimization).optimized();
    var modulePath = store.tryLoadPath(example, fir2c);

    return new Variant(removed == null ? BASELINE : removed, modulePath, loc(firPath));
  }

  /// The number of lines in the optimized FIŘ at `path`, or [#NO_LOC] if it wasn't generated.
  private static int loc(@Nullable Path path) {
    return path == null ? NO_LOC : (int) Files.readString(path).lines().count();
  }

  /// Run `benchmarkCall` in `variant`'s compiled module, and return how long it took in seconds.
  ///
  /// Returns `NaN` (`NA` in the table) if the variant didn't compile, didn't run, or crashed R.
  /// Appends the reason to `log` in those cases, because that's what the `NA` in the table means.
  private static double time(Variant variant, String benchmarkCall, StringBuilder log) {
    var modulePath = variant.modulePath();
    if (modulePath == null) {
      log.append("Failed to compile without ").append(variant.removed()).append('\n');
      return Double.NaN;
    }

    try {
      var rawOutput =
          GNUR.instance()
              .capturingEval(
                  "%s\n".formatted(BENCHMARK_DRIVER)
                      + "\n"
                      + "benchOne(\n"
                      + "  call = %s,\n".formatted(benchmarkCall)
                      + "  path = '%s'\n".formatted(modulePath.toAbsolutePath())
                      + ")\n");

      if (rawOutput.first() instanceof RealSXP time && time.isScalar()) {
        return time.get(0);
      }

      log.append("Didn't return a time without ")
          .append(variant.removed())
          .append(": ")
          .append(rawOutput.first())
          .append('\n');
      return Double.NaN;
    } catch (RuntimeException | Error e) {
      // Includes R dying, in which case `GNUR.instance()` starts a new one for the next variant
      log.append("Crashed without ").append(variant.removed()).append(": ").append(e).append('\n');
      return Double.NaN;
    }
  }

  /// Have R build, print and return the table of `variants` and their `times`.
  private static BenchmarkOutput report(List<Variant> variants, double[] times, String log) {
    var rawOutput =
        GNUR.instance()
            .capturingEval(
                "%s\n".formatted(BENCHMARK_DRIVER)
                    + "\n"
                    + "report(\n"
                    + "  removed = c(%s),\n"
                        .formatted(Strings.join(", ", v -> "'" + v.removed() + "'", variants))
                    + "  loc = c(%s),\n"
                        .formatted(
                            Strings.join(
                                ", ",
                                v -> v.loc() == NO_LOC ? "NA" : String.valueOf(v.loc()),
                                variants))
                    + "  time = c(%s)\n".formatted(rNumbers(times))
                    + ")\n");

    if (!(rawOutput.first() instanceof StrSXP csvSxp)) {
      throw new IllegalArgumentException(
          "Value must be a string vector, got: " + rawOutput.first());
    }

    return new BenchmarkOutput(String.join("\n", csvSxp), log + rawOutput.second());
  }

  /// `numbers` as R source, with `NaN` as R's `NA`.
  private static String rNumbers(double[] numbers) {
    return Arrays.stream(numbers)
        .mapToObj(n -> Double.isNaN(n) ? "NA" : Double.toString(n))
        .collect(Collectors.joining(", "));
  }

  @Override
  public BenchmarkOutput oracle(Example example, SnapshotStore store) {
    // We don't want to rerun the benchmarks, and this is discarded
    return new BenchmarkOutput("<oracle>", null);
  }

  @Override
  public void verifyEqual(
      BenchmarkOutput expected, BenchmarkOutput actual, Example example, SnapshotStore store) {
    // Benchmarks don't have to be equal, so do nothing
  }

  @Override
  public String snapshotExtension() {
    return "csv";
  }

  @Override
  public BenchmarkOutput deserialize(Path path, Example example, SnapshotStore store) {
    return new BenchmarkOutput(Files.readString(path), null);
  }

  @Override
  public void serialize(BenchmarkOutput data, Path path, Example example, SnapshotStore store)
      throws IOException {
    data.writeCsv(path.toFile());
  }

  /// One benchmarked configuration: the default optimizations without the one named `removed`
  /// ([#BASELINE] if none), the shared object they compiled to (`null` if they failed to), and the
  /// number of lines in the FIŘ they produced.
  private record Variant(String removed, @Nullable Path modulePath, int loc) {}

  private OptimizationBenchmarkQuery() {}
}
