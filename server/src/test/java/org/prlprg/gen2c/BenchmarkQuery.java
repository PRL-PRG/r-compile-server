package org.prlprg.gen2c;

import java.io.IOException;
import java.nio.file.Path;
import org.prlprg.bc.BCQuery;
import org.prlprg.examples.Example;
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
public record BenchmarkQuery(CompiledModuleQuery moduleQuery) implements Query<BenchmarkOutput> {
  private static final String BENCHMARK_DRIVER =
      Files.readString(Paths.getResource(BenchmarkQuery.class, "bench.R"));

  public BenchmarkQuery {
    if (!moduleQuery.isOptimized()) {
      throw new IllegalArgumentException("Only benchmark optimized C code");
    }
  }

  @Override
  public String name() {
    return moduleQuery.name() + ".eval";
  }

  @Override
  public BenchmarkOutput compute(Example example, SnapshotStore store) {
    var R = GNUR.instance();
    var astPath = example.absolutePath();
    var bcPath = store.loadPath(example, BCQuery.REGULAR);
    var optBcPath = store.loadPath(example, BCQuery.OPT);
    var firPath = store.loadPath(example, moduleQuery());

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
              "astPath <- '%s'\nbcPath <- '%s'\noptBcPath <- '%s'\nfirPath <- '%s'\ncall <- parse(text = '%s')[[1]]\n%s"
                  .formatted(
                      astPath,
                      bcPath.toAbsolutePath(),
                      optBcPath.toAbsolutePath(),
                      firPath.toAbsolutePath(),
                      benchmarkCall,
                      BENCHMARK_DRIVER));

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
}
