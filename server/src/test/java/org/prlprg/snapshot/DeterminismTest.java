package org.prlprg.snapshot;

import static org.prlprg.fir.opt.Optimizations.defaultOptimizations;

import java.io.FileNotFoundException;
import java.nio.file.Path;
import java.util.List;
import java.util.stream.Stream;
import org.junit.jupiter.api.Named;
import org.junit.jupiter.api.extension.ExtendWith;
import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.Arguments;
import org.junit.jupiter.params.provider.MethodSource;
import org.prlprg.examples.Example;
import org.prlprg.parseprint.ParseException;
import org.prlprg.parseprint.Parser;
import org.prlprg.snapshot.bc.BCQuery;
import org.prlprg.snapshot.fir.ir.FirQuery;
import org.prlprg.snapshot.fir.opt.OptimizedFirQuery;
import org.prlprg.snapshot.fir2c.Fir2CQuery;
import org.prlprg.snapshot.gen2c.EvalQuery;
import org.prlprg.util.Paths;

/// Computes a few representative queries twice, and checks that both results are equal.
///
/// [SnapshotStore#verify(Example, Query)] computes a query once, and compares it against its
/// snapshot from a previous run, so it doesn't catch a query that differs between two computations
/// in the same run.
@ExtendWith(SnapshotStoreParameterResolver.class)
class DeterminismTest {
  private static final List<String> EXAMPLES =
      List.of("nested_closures", "bench_awf_bounce_nonames");

  static Stream<Arguments> queries() {
    return Stream.<Query<?>>of(
            BCQuery.REGULAR,
            FirQuery.INSTANCE,
            new OptimizedFirQuery(defaultOptimizations()),
            new EvalQuery(Fir2CQuery.DIRECT))
        .flatMap(
            query ->
                EXAMPLES.stream().map(name -> Arguments.of(Named.of(query.name(), query), name)));
  }

  @ParameterizedTest
  @MethodSource("queries")
  <T> void computesTheSameTwice(Query<T> query, String exampleName, SnapshotStore store)
      throws ParseException, FileNotFoundException {
    var rpath = Path.of(exampleName + ".R");
    var example =
        Parser.fromFile(
            Paths.getResource(Example.class, "R").resolve(rpath).toFile(),
            Example.class,
            new Example.ParseContext(rpath));

    var first = query.snapshot(query.compute(example, store), example, store);
    var second = query.snapshot(query.compute(example, store), example, store);
    query.verifyEqual(first, second, example, store);
  }
}
