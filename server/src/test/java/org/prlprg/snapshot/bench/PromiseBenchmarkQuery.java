package org.prlprg.snapshot.bench;

import java.io.IOException;
import java.nio.file.Path;
import org.jspecify.annotations.Nullable;
import org.prlprg.examples.Example;
import org.prlprg.fir.opt.CopyBaseline;
import org.prlprg.session.gnur.EvalException;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.sexp.StrSXP;
import org.prlprg.snapshot.Query;
import org.prlprg.snapshot.SnapshotStore;
import org.prlprg.snapshot.fir2c.Fir2CQuery;
import org.prlprg.util.Files;
import org.prlprg.util.Paths;

/// Count the copies and the promises of one benchmark call, in the example compiled without FIŘ
/// optimizations (`fir2c.copy`) and with the default ones (`fir2c.opt`).
///
/// `fir2c.copy` only runs [CopyBaseline], so every function runs an unoptimized FIŘ copy of its
/// baseline. It isn't `Fir2CQuery.DIRECT`, because that module's baselines run GNU-R bytecode, so
/// it never creates a FIŘ promise.
///
/// The modules are [stats builds][Fir2CQuery#stats()]: their runtime counts compiled promises
/// that are created, forced, and that reflect, and the copies (see `Fir_stats_get` in
/// `client/rsh/src/fir2c/runtime.h`). The counts start after the example's warmup. GNU-R promises
/// (from bytecode and base closures) aren't counted.
///
/// Besides the counters, the table has the ratios `ratio.may.reflect` (of created promises, those
/// whose code the effect inference says may reflect), `ratio.reflected` (of those, the ones that
/// reflected), and `ratio.unforced` (of created promises, those never forced).
public class PromiseBenchmarkQuery implements Query<BenchmarkOutput> {
  public static final PromiseBenchmarkQuery INSTANCE = new PromiseBenchmarkQuery();

  /// `bench.R` and `promisebench.R`, which define `run` and `statsOne`.
  static final String BENCHMARK_DRIVER =
      Files.readString(Paths.getResource(BenchmarkQuery.class, "bench.R"))
          + "\n"
          + Files.readString(Paths.getResource(PromiseBenchmarkQuery.class, "promisebench.R"));

  @Override
  public String name() {
    // Not the default (the package name), because `BenchmarkQuery` already has that
    return "snapshot/bench/promise";
  }

  @Override
  public BenchmarkOutput compute(Example example, SnapshotStore store) {
    var copy = new CopyBaseline();
    var copyPath =
        store.tryLoadPath(
            example, new Fir2CQuery("opt.fir2c." + copy.name(), copy).optimized().stats());
    var optPath = store.tryLoadPath(example, Fir2CQuery.FULLY_OPTIMIZED.stats());

    try {
      var rawOutput =
          GNUR.instance()
              .capturingEval(
                  "%s\n".formatted(BENCHMARK_DRIVER)
                      + "\n"
                      + "run(\n"
                      + "  call = %s,\n".formatted(BenchmarkQuery.benchmarkCall(example))
                      + "  fir2c.copy = %s,\n".formatted(rPath(copyPath))
                      + "  fir2c.opt = %s\n".formatted(rPath(optPath))
                      + ")\n");

      if (!(rawOutput.first() instanceof StrSXP csvSxp)) {
        throw new IllegalArgumentException(
            "Value must be a string vector, got: " + rawOutput.first());
      }
      return new BenchmarkOutput(String.join("\n", csvSxp), rawOutput.second());
    } catch (EvalException e) {
      throw new AssertionError("Promise benchmark crashed", e);
    }
  }

  /// `path` as an R string, or `NA` if the module didn't compile.
  private static String rPath(@Nullable Path path) {
    return path == null ? "NA" : "'%s'".formatted(path.toAbsolutePath());
  }

  @Override
  public void verifyEqual(
      BenchmarkOutput expected, BenchmarkOutput actual, Example example, SnapshotStore store) {
    // Counts may change with any change to the compiler, so do nothing
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

  private PromiseBenchmarkQuery() {}
}
