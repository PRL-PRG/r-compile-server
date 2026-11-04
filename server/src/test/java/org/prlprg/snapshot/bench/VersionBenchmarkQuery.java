package org.prlprg.snapshot.bench;

import java.io.IOException;
import java.nio.file.Path;
import java.util.Arrays;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Objects;
import java.util.function.Predicate;
import java.util.function.ToIntFunction;
import java.util.stream.Collectors;
import java.util.stream.IntStream;
import org.prlprg.TestConfig;
import org.prlprg.examples.Example;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir2c.Fir2CSession;
import org.prlprg.sexp.RealSXP;
import org.prlprg.sexp.VecSXP;
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
/// - *created*: every version the optimizations created and didn't remove, lazy or evaluated;
/// - *evaluated*: the versions whose body was computed (by a stub's request, or because another
///   version needed it, e.g. to inline it);
/// - *compiled*: the versions the client runs compiled at the end (a baseline the client has
///   counts, though it may run bytecode);
/// - *redundant*: evaluated versions the optimizations didn't change, which the client runs as
///   their fallback instead (so they aren't compiled);
/// - *requested*: the client's stubs that sent a request;
/// - *impls*: the compiled implementations the client got (the first, and every update);
/// - *stubs*: the stubs the client got, including those of versions removed since;
/// - *patches*: the requests whose answer had code.
///
/// The CSV is a histogram: per number of versions, how many functions have that many created,
/// evaluated and compiled versions. The log also has the per-function table, a per-version table
/// (every version the client got, and every other one the module has), and each run's wall time.
///
/// @param stubThreshold How many calls a stub runs its fallback before it requests its version.
/// @param runs How many times the benchmark call runs.
public record VersionBenchmarkQuery(int stubThreshold, int runs) implements Query<BenchmarkOutput> {
  /// The client's default threshold (`Fir_jit_threshold`), and [TestConfig#BENCHMARK_VERSION_RUNS].
  public static final VersionBenchmarkQuery INSTANCE =
      new VersionBenchmarkQuery(10, TestConfig.BENCHMARK_VERSION_RUNS);

  @Override
  public String name() {
    return "snapshot/bench/versions"
        + (equals(INSTANCE) ? "" : ".threshold" + stubThreshold + ".runs" + runs);
  }

  /// The versions of one function.
  private record Counts(
      String function,
      int created,
      int evaluated,
      int compiled,
      int redundant,
      int requested,
      int impls,
      int stubs,
      int patches) {
    static Counts of(Function function, Fir2CSession session) {
      var versions = function.versions().stream().filter(v -> !v.isStub()).toList();
      ToIntFunction<Predicate<Abstraction>> count = p -> (int) versions.stream().filter(p).count();
      var clientVersions = clientVersions(function, session);
      var requests =
          session.requests().stream()
              .filter(r -> session.functionOf(session.stub(r.stubId())) == function)
              .toList();
      return new Counts(
          function.name().name(),
          versions.size(),
          count.applyAsInt(Abstraction::isEvaluated),
          count.applyAsInt(
              v -> {
                var state = session.version(v);
                return state != null && state.compiled();
              }),
          count.applyAsInt(v -> v != function.baseline() && isRedundant(v)),
          (int) requests.stream().map(Fir2CSession.Request::stubId).distinct().count(),
          clientVersions.stream().mapToInt(v -> implsOf(session, v)).sum(),
          (int) session.stubs().stream().filter(v -> session.functionOf(v) == function).count(),
          (int) requests.stream().filter(Fir2CSession.Request::patched).count());
    }
  }

  /// What `Fir2CCompiler#isRedundant` checks (it's private there).
  private static boolean isRedundant(Abstraction version) {
    var lazyBody = version.lazyBody();
    return version.isEvaluated()
        && lazyBody != null
        && version.fingerprint().equals(lazyBody.evaluatedFingerprint());
  }

  /// The versions of `function` the client has, including those removed from it since.
  private static List<Abstraction> clientVersions(Function function, Fir2CSession session) {
    return session.versions().stream().filter(v -> session.functionOf(v) == function).toList();
  }

  /// How many compiled implementations of `version` the client got.
  private static int implsOf(Fir2CSession session, Abstraction version) {
    var state = Objects.requireNonNull(session.version(version));
    return state.implementations() - (state.stubId() == null ? 0 : 1);
  }

  /// One row of the per-version table.
  private static String versionRow(Function function, Abstraction version, Fir2CSession session) {
    var state = session.version(version);
    var lazyBody = version.lazyBody();
    var creator =
        version == function.baseline()
            ? "baseline"
            : lazyBody == null || lazyBody.creator() == null ? "-" : lazyBody.creator();
    var stubId = state == null ? null : state.stubId();
    var requested =
        stubId != null && session.requests().stream().anyMatch(r -> r.stubId() == stubId);
    return String.join(
        ",",
        function.name().name(),
        "\"" + version.signature() + "\"",
        creator,
        String.valueOf(function.versions().contains(version)),
        stubId == null ? "-" : stubId.toString(),
        String.valueOf(requested),
        String.valueOf(version.isEvaluated()),
        String.valueOf(state != null && state.compiled()),
        String.valueOf(version != function.baseline() && isRedundant(version)),
        state == null ? "0" : String.valueOf(implsOf(session, version)));
  }

  @Override
  public BenchmarkOutput compute(Example example, SnapshotStore store) {
    var definitions =
        """
        bench_call <- quote(%s)
        cat("rsh library:", find.package("rsh"), "\\n")
        """
            .formatted(BenchmarkQuery.benchmarkCall(example));
    var run =
        EvalQuery.run(
            example, store, Fir2CQuery.OPTIMIZED_ONLY_FIR, stubThreshold, runs, definitions);
    if (run.error() != null) {
      throw new AssertionError("Benchmark crashed:\n" + run.outputLog(), run.error());
    }
    var session = Objects.requireNonNull(run.session(), "the lazy module isn't connected");
    var bench = (VecSXP) Objects.requireNonNull(run.value()).get(3);
    var times = ((RealSXP) bench.get(0)).data();

    // The server changes the module on its own threads, but every request was answered before
    // the run finished (the driver waits for that).
    List<Counts> counts;
    String versionTable;
    synchronized (session) {
      var functions = session.module().localFunctions();
      counts = functions.stream().map(f -> Counts.of(f, session)).toList();
      versionTable =
          "function,signature,creator,live,stub,requested,evaluated,compiled,redundant,impls\n"
              + functions.stream()
                  .flatMap(
                      f -> {
                        var versions = new LinkedHashSet<Abstraction>();
                        f.versions().stream().filter(v -> !v.isStub()).forEach(versions::add);
                        versions.addAll(clientVersions(f, session));
                        return versions.stream().map(v -> versionRow(f, v, session) + "\n");
                      })
                  .collect(Collectors.joining());
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
        "function,created,evaluated,compiled,redundant,requested,impls,stubs,patches\n"
            + counts.stream()
                .map(
                    c ->
                        "%s,%d,%d,%d,%d,%d,%d,%d,%d\n"
                            .formatted(
                                c.function(),
                                c.created(),
                                c.evaluated(),
                                c.compiled(),
                                c.redundant(),
                                c.requested(),
                                c.impls(),
                                c.stubs(),
                                c.patches()))
                .collect(Collectors.joining());
    var timeLine =
        Arrays.stream(times).mapToObj("%.3f"::formatted).collect(Collectors.joining(","));
    var rshLine =
        run.outputLog().lines().filter(l -> l.startsWith("rsh library:")).findFirst().orElse("");
    return new BenchmarkOutput(
        csv,
        rshLine
            + "\nPer function:\n"
            + table
            + "\nPer version:\n"
            + versionTable
            + "\nRun times (s):\n"
            + timeLine
            + "\n\nHistogram:\n"
            + csv);
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
