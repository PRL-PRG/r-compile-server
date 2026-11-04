package org.prlprg.snapshot.bench;

import static org.prlprg.fir.opt.Optimizations.defaultOptimizations;

import java.io.IOException;
import java.io.UncheckedIOException;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Collection;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.SequencedMap;
import java.util.stream.Collectors;
import org.jspecify.annotations.Nullable;
import org.prlprg.examples.Example;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.opt.Optimization;
import org.prlprg.parseprint.Parser;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.sexp.RealSXP;
import org.prlprg.sexp.StrSXP;
import org.prlprg.snapshot.SnapshotStore;
import org.prlprg.snapshot.bc.BCQuery;
import org.prlprg.snapshot.fir.opt.OptimizedFirQuery;
import org.prlprg.snapshot.fir2c.Fir2CQuery;
import org.prlprg.util.Files;
import org.prlprg.util.Paths;
import org.prlprg.util.ThrowingSupplier;

/// Benchmarks variants of an example, one R call per variant, and reports them in a table.
///
/// A variant is the example compiled by some optimization pipeline (see [#compiled]), or one of the
/// reference rows (see [#referenceRows]). The benchmark queries in this package build their
/// variants, [measure][#measure] them, and pass the times and their own columns to an R function
/// that builds the table (see [#report]).
///
/// A variant whose generated C is equal to an earlier variant's isn't benchmarked again: it gets
/// the earlier time, and the earlier variant's label in the `same.as` column. The same C runs the
/// same, so a second measurement only adds noise.
final class VariantBenchmark {
  /// [Variant#label()] of the variant that removes nothing, which the others are compared to.
  static final String BASELINE = "<none>";

  /// [Variant#label()] of the row that benchmarks the baseline again, at the end.
  static final String BASELINE_RERUN = "<none> (rerun)";

  /// [#loc(Path)] when the optimized FIŘ wasn't generated, printed as `NA`.
  static final int NO_LOC = -1;

  /// `bench.R` and `optbench.R`, which define the functions [#time] and [#report] call.
  static final String DRIVER =
      Files.readString(Paths.getResource(BenchmarkQuery.class, "bench.R"))
          + "\n"
          + Files.readString(Paths.getResource(VariantBenchmark.class, "optbench.R"));

  /// One benchmarked row: the example compiled by an optimization pipeline, or (for the reference
  /// rows) the plain interpreter or bytecode and the source/RDS file to run it from.
  ///
  /// @param modulePath `null` if the row's input failed to compile.
  /// @param loc [#NO_LOC] for the reference rows, which aren't FIŘ.
  /// @param deduplicate Whether to reuse the time of an earlier variant with the same C. It's
  ///     `false` for the rows that benchmark the same module again on purpose.
  record Variant(String label, Kind kind, @Nullable Path modulePath, int loc, boolean deduplicate) {
    /// A row that benchmarks `this` again, under `label`.
    Variant rerun(String label) {
      return new Variant(label, kind, modulePath, loc, false);
    }
  }

  /// What [#time(Variant, String, StringBuilder)] runs [Variant#modulePath()] as.
  enum Kind {
    AST,
    BC,
    CC
  }

  /// A [Variant] and its time in seconds (`NaN` if it failed).
  ///
  /// @param sameAs The label of the earlier variant with the same C, whose time this reuses.
  record Measurement(Variant variant, double time, @Nullable String sameAs) {}

  /// Optimize and compile the example with `optimization` (or the default optimizations, if it's
  /// `null`), storing every intermediate in `store`.
  ///
  /// The optimized FIŘ, its optimization log, the generated C, and the shared object are
  /// snapshotted like the default pipeline's, under a directory named after `optimization`.
  static Variant compiled(
      Example example, SnapshotStore store, String label, @Nullable Optimization optimization) {
    // Snapshots the optimized FIŘ, and its optimization log (written by `OptimizedFirQuery`)
    var firPath =
        store.tryLoadPath(
            example,
            new OptimizedFirQuery(optimization == null ? defaultOptimizations() : optimization));

    // Snapshots the generated C and the shared object we benchmark. The default shares
    // `FULLY_OPTIMIZED`'s snapshot, because it runs the exact same pipeline.
    var fir2c =
        optimization == null
            ? Fir2CQuery.FULLY_OPTIMIZED
            : new Fir2CQuery("opt.fir2c." + optimization.name(), optimization).optimized();
    var modulePath = store.tryLoadPath(example, fir2c);

    return new Variant(label, Kind.CC, modulePath, loc(firPath), true);
  }

  /// The reference rows: the plain interpreter (`ast`), default and fully-optimized bytecode
  /// (`bc.default`, `bc.opt`), and `baseline` again (`fir2c.default`).
  ///
  /// They're a reference point: the other rows only compare `fir2c` variants to each other, so
  /// without these there's no sense of how much any of that matters next to the interpreter or
  /// bytecode.
  static List<Variant> referenceRows(Example example, SnapshotStore store, Variant baseline) {
    return List.of(
        new Variant("ast", Kind.AST, example.absolutePath(), NO_LOC, false),
        new Variant(
            "bc.default", Kind.BC, store.tryLoadPath(example, BCQuery.REGULAR), NO_LOC, false),
        new Variant("bc.opt", Kind.BC, store.tryLoadPath(example, BCQuery.OPT), NO_LOC, false),
        baseline.rerun("fir2c.default"));
  }

  /// Time every variant, in order, except one whose C equals an earlier variant's.
  ///
  /// Appends why a variant has no time to `log`.
  static List<Measurement> measure(
      List<Variant> variants, String benchmarkCall, StringBuilder log) {
    var warmup = variants.getFirst();
    var measurements = new ArrayList<Measurement>();
    var needsWarmup = true;
    for (var variant : variants) {
      // The first match is the original, because a duplicate always comes after it
      var original = measurements.stream().filter(m -> sameCode(m.variant(), variant)).findFirst();
      if (original.isPresent()) {
        measurements.add(
            new Measurement(variant, original.get().time(), original.get().variant().label()));
        continue;
      }

      // The first module benchmarked in a fresh R process is measurably slower than the same
      // module benchmarked later, which would otherwise make the baseline (always first) look
      // slower than the variants that generate identical code. So discard one run, here and
      // whenever a variant may have crashed R, since that starts a new process.
      if (needsWarmup) {
        var _ = time(warmup, benchmarkCall, new StringBuilder());
      }

      var time = time(variant, benchmarkCall, log);
      measurements.add(new Measurement(variant, time, null));
      needsWarmup = Double.isNaN(time);
    }
    return measurements;
  }

  /// Whether both variants may be deduplicated, and their generated C and constant pools are
  /// equal.
  private static boolean sameCode(Variant a, Variant b) {
    if (!a.deduplicate() || !b.deduplicate() || a.modulePath() == null || b.modulePath() == null) {
      return false;
    }
    return sameFile(a.modulePath(), b.modulePath(), "code.c")
        && sameFile(a.modulePath(), b.modulePath(), "bindings.rds");
  }

  private static boolean sameFile(Path dirA, Path dirB, String name) {
    try {
      return java.nio.file.Files.mismatch(dirA.resolve(name), dirB.resolve(name)) == -1;
    } catch (IOException e) {
      throw new UncheckedIOException(e);
    }
  }

  /// The number of lines across the best version of every function in the optimized FIŘ at
  /// `path`, or [#NO_LOC] if it wasn't generated.
  ///
  /// "Best" means most specialized: a function usually has several versions, one per signature
  /// the optimizer dispatches on ([org.prlprg.fir.ir.module.Function#versions]), and the most
  /// specialized one is the one printed last (see
  /// [org.prlprg.fir.parseprint.IrPrintContext#printFunction]). Only that version runs on the hot
  /// path, so summing every version's lines -- i.e. the file's total line count -- would overstate
  /// how much code the optimizations actually produced.
  private static int loc(@Nullable Path path) {
    if (path == null) {
      return NO_LOC;
    }
    var module = ThrowingSupplier.get(() -> Parser.fromFile(path.toFile(), Module.class));
    return module.localFunctions().stream()
        .mapToInt(f -> (int) f.versions().first().toString().lines().count())
        .sum();
  }

  /// Run `benchmarkCall` in `variant`'s module (or source/bytecode file, for the `ast`/`bc`
  /// reference rows), and return how long it took in seconds.
  ///
  /// Returns `NaN` (`NA` in the table) if the variant didn't compile, didn't run, or crashed R.
  /// Appends the reason to `log` in those cases, because that's what the `NA` in the table means.
  private static double time(Variant variant, String benchmarkCall, StringBuilder log) {
    var modulePath = variant.modulePath();
    if (modulePath == null) {
      log.append("Nothing to benchmark for ").append(variant.label()).append('\n');
      return Double.NaN;
    }

    var rFunction =
        switch (variant.kind()) {
          case AST -> "benchOneAst";
          case BC -> "benchOneBc";
          case CC -> "benchOne";
        };

    try {
      var rawOutput =
          GNUR.instance()
              .capturingEval(
                  "%s\n".formatted(DRIVER)
                      + "\n"
                      + rFunction
                      + "(\n"
                      + "  call = %s,\n".formatted(benchmarkCall)
                      + "  path = '%s'\n".formatted(modulePath.toAbsolutePath())
                      + ")\n");

      if (rawOutput.first() instanceof RealSXP time && time.isScalar()) {
        return time.get(0);
      }

      log.append("Didn't return a time for ")
          .append(variant.label())
          .append(": ")
          .append(rawOutput.first())
          .append('\n');
      return Double.NaN;
    } catch (RuntimeException | Error e) {
      // Includes R dying, in which case `GNUR.instance()` starts a new one for the next variant
      log.append("Crashed benchmarking ")
          .append(variant.label())
          .append(": ")
          .append(e)
          .append('\n');
      return Double.NaN;
    }
  }

  /// The columns every table has, as R vectors: `removed` (the label), `loc`, `time`, and
  /// `same.as`. Callers add their own columns to the returned map.
  static SequencedMap<String, String> columns(List<Measurement> measurements) {
    var columns = new LinkedHashMap<String, String>();
    columns.put("removed", rStrings(measurements.stream().map(m -> m.variant().label()).toList()));
    columns.put("loc", rInts(measurements.stream().map(m -> m.variant().loc()).toList(), NO_LOC));
    columns.put("time", rNumbers(measurements.stream().map(Measurement::time).toList()));
    columns.put("same.as", rStrings(measurements.stream().map(Measurement::sameAs).toList()));
    return columns;
  }

  /// Have R build, print and return a table, by calling `rFunction` with `columns` as named
  /// arguments, after [#DRIVER] and `script` (which may define `rFunction`).
  ///
  /// `log` is prepended to what R prints.
  static BenchmarkOutput report(
      String script, String rFunction, SequencedMap<String, String> columns, String log) {
    var call =
        columns.entrySet().stream()
            .map(e -> "  %s = %s".formatted(e.getKey(), e.getValue()))
            .collect(Collectors.joining(",\n", rFunction + "(\n", "\n)\n"));
    var rawOutput = GNUR.instance().capturingEval(DRIVER + "\n" + script + "\n" + call);

    if (!(rawOutput.first() instanceof StrSXP csvSxp)) {
      throw new IllegalArgumentException(
          "Value must be a string vector, got: " + rawOutput.first());
    }

    return new BenchmarkOutput(String.join("\n", csvSxp), log + rawOutput.second());
  }

  /// `strings` as an R character vector, with `null` as `NA`.
  static String rStrings(Collection<@Nullable String> strings) {
    return strings.stream()
        .map(s -> s == null ? "NA" : "'" + s + "'")
        .collect(Collectors.joining(", ", "c(", ")"));
  }

  /// `numbers` as an R numeric vector, with `NaN` as `NA`.
  static String rNumbers(Collection<Double> numbers) {
    return numbers.stream()
        .map(n -> n.isNaN() ? "NA" : n.toString())
        .collect(Collectors.joining(", ", "c(", ")"));
  }

  /// `ints` as an R integer vector, with `na` as `NA`.
  static String rInts(Collection<Integer> ints, int na) {
    return ints.stream()
        .map(i -> i == na ? "NA" : i.toString())
        .collect(Collectors.joining(", ", "c(", ")"));
  }

  private VariantBenchmark() {}
}
