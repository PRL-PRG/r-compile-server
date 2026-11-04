package org.prlprg.snapshot.bench;

import java.io.IOException;
import java.nio.file.Path;
import java.util.List;
import java.util.Objects;
import java.util.function.Predicate;
import java.util.function.ToIntFunction;
import java.util.stream.Collectors;
import java.util.stream.IntStream;
import org.prlprg.examples.Example;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir2c.Fir2CSession;
import org.prlprg.snapshot.Query;
import org.prlprg.snapshot.SnapshotStore;
import org.prlprg.snapshot.fir2c.Fir2CQuery;
import org.prlprg.snapshot.gen2c.EvalQuery;
import org.prlprg.util.Files;

/// How many versions each function of the example's optimized module has, after its benchmark
/// call runs on the lazy module: with stubs that ask the test compile server for their versions,
/// like the eval tests (see `server/doc/lazy-versions.md`).
///
/// The module's main (the example's warmup) runs until it runs compiled (see `eval.R`), then the
/// benchmark call runs `runs` times.
/// Per function, it counts these versions (the baseline is one of them; stubs, i.e. builtins,
/// aren't counted):
///
/// - *created*: every version the optimizations created, lazy or evaluated;
/// - *evaluated*: the versions whose body was computed (by a stub's request, or because another
///   version needed it, e.g. to inline it);
/// - *compiled*: the versions the client runs compiled at the end (a baseline the client has
///   counts, though it may run bytecode);
/// - *redundant*: evaluated versions the optimizations didn't change, which the client runs as
///   their fallback instead (so they aren't compiled).
///
/// The CSV is a histogram: per number of versions, how many functions have that many created,
/// evaluated and compiled versions. The log also has the per-function table.
///
/// @param stubThreshold How many calls a stub runs its fallback before it requests its version.
/// @param runs How many times the benchmark call runs.
public record VersionBenchmarkQuery(int stubThreshold, int runs) implements Query<BenchmarkOutput> {
  /// The client's default threshold (`Fir_jit_threshold`), and enough runs that a version which a
  /// run makes hot is compiled by the next.
  public static final VersionBenchmarkQuery INSTANCE = new VersionBenchmarkQuery(10, 3);

  @Override
  public String name() {
    return "snapshot/bench/versions"
        + (equals(INSTANCE) ? "" : ".threshold" + stubThreshold + ".runs" + runs);
  }

  /// The versions of one function.
  private record Counts(String function, int created, int evaluated, int compiled, int redundant) {
    static Counts of(Function function, Fir2CSession session) {
      var versions = function.versions().stream().filter(v -> !v.isStub()).toList();
      ToIntFunction<Predicate<Abstraction>> count = p -> (int) versions.stream().filter(p).count();
      return new Counts(
          function.name().name(),
          versions.size(),
          count.applyAsInt(Abstraction::isEvaluated),
          count.applyAsInt(
              v -> {
                var state = session.version(v);
                return state != null && state.compiled();
              }),
          count.applyAsInt(v -> v != function.baseline() && isRedundant(v)));
    }

    /// What `Fir2CCompiler#isRedundant` checks (it's private there).
    private static boolean isRedundant(Abstraction version) {
      var lazyBody = version.lazyBody();
      return version.isEvaluated()
          && lazyBody != null
          && version.fingerprint().equals(lazyBody.evaluatedFingerprint());
    }
  }

  @Override
  public BenchmarkOutput compute(Example example, SnapshotStore store) {
    var definitions = "bench_call <- quote(%s)".formatted(BenchmarkQuery.benchmarkCall(example));
    var run =
        EvalQuery.run(
            example, store, Fir2CQuery.OPTIMIZED_ONLY_FIR, stubThreshold, runs, definitions);
    if (run.error() != null) {
      throw new AssertionError("Benchmark crashed:\n" + run.outputLog(), run.error());
    }
    var session = Objects.requireNonNull(run.session(), "the lazy module isn't connected");

    // The server changes the module on its own threads, but every request was answered before
    // the run finished (the driver waits for that).
    List<Counts> counts;
    synchronized (session) {
      counts = session.module().localFunctions().stream().map(f -> Counts.of(f, session)).toList();
    }

    var max = counts.stream().mapToInt(Counts::created).max().orElse(0);
    var csv =
        "n.versions,functions.created,functions.evaluated,functions.compiled\n"
            + IntStream.rangeClosed(0, max)
                .mapToObj(
                    n ->
                        "%d,%d,%d,%d\n"
                            .formatted(
                                n,
                                withCount(counts, Counts::created, n),
                                withCount(counts, Counts::evaluated, n),
                                withCount(counts, Counts::compiled, n)))
                .collect(Collectors.joining());

    var table =
        "function,created,evaluated,compiled,redundant\n"
            + counts.stream()
                .map(
                    c ->
                        "%s,%d,%d,%d,%d\n"
                            .formatted(
                                c.function(),
                                c.created(),
                                c.evaluated(),
                                c.compiled(),
                                c.redundant()))
                .collect(Collectors.joining());
    return new BenchmarkOutput(csv, "Per function:\n" + table + "\nHistogram:\n" + csv);
  }

  /// How many functions have `n` versions, counted by `count`.
  private static long withCount(List<Counts> counts, ToIntFunction<Counts> count, int n) {
    return counts.stream().filter(c -> count.applyAsInt(c) == n).count();
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
