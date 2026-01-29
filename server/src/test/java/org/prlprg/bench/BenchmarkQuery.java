package org.prlprg.bench;

import java.io.IOException;
import java.nio.file.Path;
import org.prlprg.bc.BCQuery;
import org.prlprg.bc2c.BC2CQuery;
import org.prlprg.examples.Example;
import org.prlprg.fir2c.Fir2CQuery;
import org.prlprg.session.gnur.EvalException;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.sexp.StrSXP;
import org.prlprg.snapshots.Query;
import org.prlprg.snapshots.SnapshotStore;
import org.prlprg.util.Files;
import org.prlprg.util.Paths;
import org.prlprg.util.Strings;

/// Check that the article produced by `moduleQuery`'s output hasn't changed, and satisfies
/// extra checks specified by the example's options.
public class BenchmarkQuery implements Query<BenchmarkOutput> {
  public static final BenchmarkQuery INSTANCE = new BenchmarkQuery();

  private static final String BENCHMARK_DRIVER =
      Files.readString(Paths.getResource(BenchmarkQuery.class, "bench.R"));

  @Override
  public BenchmarkOutput compute(Example example, SnapshotStore store) {
    var R = GNUR.instance();
    var astPath = example.absolutePath();
    var bcPath = store.tryLoadPath(example, BCQuery.REGULAR);
    var optBcPath = store.tryLoadPath(example, BCQuery.OPT);
    var bc2cPath = store.tryLoadPath(example, BC2CQuery.OPTIMIZED);
    var firPath = store.tryLoadPath(example, Fir2CQuery.DIRECT.optimized());
    var optFirPath = store.tryLoadPath(example, Fir2CQuery.FULLY_OPTIMIZED);

    var benchmarkLine =
        example
            .text()
            .lines()
            .filter(line -> line.startsWith("#? benchmark:"))
            .findFirst()
            .orElseThrow(() -> new AssertionError("`#? benchmark:` must be on its own line"));
    var benchmarkCall = benchmarkLine.substring("#? benchmark:".length()).trim();

    try {
      var rawOutput =
          R.capturingEval(
              "%s\n".formatted(BENCHMARK_DRIVER)
                  + "\n"
                  + "run(\n"
                  + "  call = %s,\n".formatted(benchmarkCall)
                  + "  ast = ast('%s')".formatted(astPath)
                  + (bcPath == null
                      ? ""
                      : ",\n  bc.default = bc('%s')".formatted(bcPath.toAbsolutePath()))
                  + (optBcPath == null
                      ? ""
                      : ",\n  bc.opt = bc('%s')".formatted(optBcPath.toAbsolutePath()))
                  + (bc2cPath == null
                      ? ""
                      : ",\n  bc2c = cc('%s')".formatted(bc2cPath.toAbsolutePath()))
                  + (firPath == null
                      ? ""
                      : ",\n  fir2c.direct = cc('%s')".formatted(firPath.toAbsolutePath()))
                  + (optFirPath == null
                      ? ""
                      : ",\n  fir2c.opt = cc('%s')".formatted(optFirPath.toAbsolutePath()))
                  + "\n)\n");

      if (!(rawOutput.first() instanceof StrSXP csvSxp)) {
        throw new IllegalArgumentException(
            "Value must be a string vector, got: " + rawOutput.first());
      }
      var csv = Strings.join("\n", csvSxp);

      var outputLog = rawOutput.second();
      return new BenchmarkOutput(csv, outputLog);
    } catch (EvalException e) {
      throw new AssertionError("Benchmark crashed", e);
    }
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

  private BenchmarkQuery() {}
}
