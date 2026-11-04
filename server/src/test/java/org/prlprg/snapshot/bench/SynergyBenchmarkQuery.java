package org.prlprg.snapshot.bench;

import static org.prlprg.fir.opt.Optimizations.defaultOptimizationsWithout;
import static org.prlprg.snapshot.bench.VariantBenchmark.BASELINE;
import static org.prlprg.snapshot.bench.VariantBenchmark.BASELINE_RERUN;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Comparator;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.SequencedSet;
import org.jetbrains.annotations.Unmodifiable;
import org.prlprg.TestConfig;
import org.prlprg.examples.Example;
import org.prlprg.fir.opt.Optimizations;
import org.prlprg.snapshot.SnapshotStore;
import org.prlprg.snapshot.bench.VariantBenchmark.Variant;
import org.prlprg.util.Files;
import org.prlprg.util.Paths;

/// Benchmark the example compiled by the default optimizations without each of several sets of
/// optimizations, and compare each set's slowdown to the product of its members' single-removal
/// slowdowns from [OptimizationBenchmarkQuery]. A `synergy` above 1 means the members cover for
/// each other: removing all of them costs more than removing each one does.
///
/// The sets are, among the optimizations [TestConfig#BENCHMARK_OPTIMIZATIONS] selects:
/// - every pair among the [TestConfig#BENCHMARK_SYNERGY_TOP] with the largest single-removal
///   slowdown;
/// - every subset of size 3 up to [TestConfig#BENCHMARK_SYNERGY_MAX_SIZE] among the
///   [TestConfig#BENCHMARK_SYNERGY_TOP_DEEP] with the largest single-removal slowdown;
/// - every subset of size 2 up to [TestConfig#BENCHMARK_SYNERGY_MAX_SIZE] of each of
///   [#FAMILIES];
/// - the sets in [TestConfig#BENCHMARK_SYNERGY_SETS].
///
/// Each set is reduced by [Optimizations#canonicalRemoval], and a set that reduces to one already
/// benchmarked, or to a single optimization, is skipped. `copyBaseline` isn't ranked, because
/// nearly every pair with it reduces to it alone.
///
/// `slowdown` is relative to this run's baseline, but `expected` comes from the run of
/// [OptimizationBenchmarkQuery], so `synergy` has both runs' noise. The table's `significant` is
/// whether `synergy` is farther from 1 than the noise floor: the relative difference between the
/// `<none>` and `<none> (rerun)` rows, but at least [TestConfig#BENCHMARK_NOISE_FLOOR_MIN].
///
/// [OptimizationBenchmarkQuery]'s snapshot is reused, unless [TestConfig#IGNORE_SNAPSHOTS] matches
/// `snapshot/bench/opt`, which reruns it.
public class SynergyBenchmarkQuery implements BenchmarkOutputQuery {
  public static final SynergyBenchmarkQuery INSTANCE = new SynergyBenchmarkQuery();

  /// Groups of optimizations that work on the same thing, so they're the likeliest to cover for
  /// each other.
  public static final @Unmodifiable List<List<String>> FAMILIES =
      List.of(
          // Ownership
          List.of(
              "callOwnedVersion",
              "consumeDeadDup",
              "elideConsumedDup",
              "createOwnedParameterVersion",
              "createBorrowedParameterVersion"),
          // Environment
          List.of(
              "specializeNonReflectiveEnv",
              "specializeLocalPromise",
              "elideDeadStore",
              "promoteStaticallyKnownVariables",
              "elideEnv"),
          // Unboxing
          List.of("unbox", "unboxPhi", "elideRedundantBoxUnbox", "schedulePure"),
          // Speculation
          List.of("speculateDispatch", "speculateAssume", "optimizeCallee"),
          // Strictness
          List.of("strictifyPromise", "strictifyPhi", "deferIntoPromise"),
          // Checkpoints
          List.of("mergeConsecutiveCheckpoints", "elideUnusedCheckpoints"));

  private static final String SCRIPT =
      Files.readString(Paths.getResource(SynergyBenchmarkQuery.class, "synergy.R"));

  @Override
  public String name() {
    return "snapshot/bench/synergy";
  }

  @Override
  public BenchmarkOutput compute(Example example, SnapshotStore store) {
    var slowdowns = slowdowns(store.load(example, OptimizationBenchmarkQuery.INSTANCE));
    var sets = removalSets(slowdowns);

    var baseline = VariantBenchmark.compiled(example, store, BASELINE, null);
    var variants = new ArrayList<Variant>();
    variants.add(baseline);
    variants.addAll(
        sets.stream()
            .map(
                set ->
                    VariantBenchmark.compiled(
                        example, store, String.join("+", set), defaultOptimizationsWithout(set)))
            .toList());
    variants.add(baseline.rerun(BASELINE_RERUN));

    var sizes = new ArrayList<Integer>();
    var expected = new ArrayList<Double>();
    sizes.add(0);
    expected.add(1.0);
    for (var set : sets) {
      sizes.add(set.size());
      expected.add(
          set.stream()
              .mapToDouble(name -> slowdowns.getOrDefault(name, Double.NaN))
              .reduce(1, (a, b) -> a * b));
    }
    sizes.add(0);
    expected.add(1.0);

    var log = new StringBuilder();
    var measurements =
        VariantBenchmark.measure(variants, BenchmarkQuery.benchmarkCall(example), log);
    var columns = VariantBenchmark.columns(measurements);
    columns.put("size", VariantBenchmark.rInts(sizes, -1));
    columns.put("expected", VariantBenchmark.rNumbers(expected));
    columns.put("noise.min", Double.toString(TestConfig.BENCHMARK_NOISE_FLOOR_MIN));
    return VariantBenchmark.report(SCRIPT, "reportSynergy", columns, log.toString());
  }

  /// The single-removal slowdown of each optimization in `optimizationBenchmark`'s table (`NaN`
  /// if it's `NA`).
  static Map<String, Double> slowdowns(BenchmarkOutput optimizationBenchmark) {
    var rows =
        optimizationBenchmark
            .csv()
            .lines()
            .map(
                line ->
                    Arrays.stream(line.split(",", -1)).map(SynergyBenchmarkQuery::unquote).toList())
            .toList();
    var removed = rows.getFirst().indexOf("removed");
    var slowdown = rows.getFirst().indexOf("slowdown");
    var names = Optimizations.individualOptimizationNames();

    var slowdowns = new LinkedHashMap<String, Double>();
    for (var row : rows.subList(1, rows.size())) {
      if (names.contains(row.get(removed))) {
        var value = row.get(slowdown);
        slowdowns.put(
            row.get(removed), value.equals("NA") ? Double.NaN : Double.parseDouble(value));
      }
    }
    return slowdowns;
  }

  private static String unquote(String field) {
    return field.length() >= 2 && field.startsWith("\"") && field.endsWith("\"")
        ? field.substring(1, field.length() - 1)
        : field;
  }

  /// The sets to remove (see the class doc), each [canonical][Optimizations#canonicalRemoval] and
  /// with at least two optimizations, in the order they're listed there.
  static SequencedSet<List<String>> removalSets(Map<String, Double> slowdowns) {
    var candidates = OptimizationBenchmarkQuery.removedOptimizations();
    var ranked =
        candidates.stream()
            .filter(name -> !name.equals("copyBaseline"))
            .filter(name -> !slowdowns.getOrDefault(name, Double.NaN).isNaN())
            .sorted(Comparator.comparing(slowdowns::get).reversed())
            .toList();
    var maxSize = TestConfig.BENCHMARK_SYNERGY_MAX_SIZE;

    var sets = new ArrayList<List<String>>();
    sets.addAll(subsets(top(ranked, TestConfig.BENCHMARK_SYNERGY_TOP), 2, Math.min(2, maxSize)));
    sets.addAll(subsets(top(ranked, TestConfig.BENCHMARK_SYNERGY_TOP_DEEP), 3, maxSize));
    for (var family : FAMILIES) {
      sets.addAll(subsets(family.stream().filter(candidates::contains).toList(), 2, maxSize));
    }
    sets.addAll(explicitSets());

    var canonical = new LinkedHashSet<List<String>>();
    for (var set : sets) {
      var reduced = Optimizations.canonicalRemoval(set);
      if (reduced.size() >= 2) {
        canonical.add(reduced);
      }
    }
    return canonical;
  }

  private static List<String> top(List<String> ranked, int count) {
    return ranked.subList(0, Math.min(count, ranked.size()));
  }

  /// [TestConfig#BENCHMARK_SYNERGY_SETS], parsed.
  private static List<List<String>> explicitSets() {
    return Arrays.stream(TestConfig.BENCHMARK_SYNERGY_SETS.split(","))
        .filter(set -> !set.isBlank())
        .map(set -> Arrays.stream(set.split("\\+")).map(String::trim).toList())
        .toList();
  }

  /// Every subset of `items` with `minSize` to `maxSize` items, smallest first, each in the order
  /// of `items`.
  private static List<List<String>> subsets(List<String> items, int minSize, int maxSize) {
    var subsets = new ArrayList<List<String>>();
    for (var size = minSize; size <= Math.min(maxSize, items.size()); size++) {
      addSubsets(items, size, 0, new ArrayList<>(), subsets);
    }
    return subsets;
  }

  private static void addSubsets(
      List<String> items, int size, int from, List<String> prefix, List<List<String>> subsets) {
    if (prefix.size() == size) {
      subsets.add(List.copyOf(prefix));
      return;
    }
    for (var i = from; i < items.size(); i++) {
      prefix.add(items.get(i));
      addSubsets(items, size, i + 1, prefix, subsets);
      prefix.removeLast();
    }
  }

  private SynergyBenchmarkQuery() {}
}
