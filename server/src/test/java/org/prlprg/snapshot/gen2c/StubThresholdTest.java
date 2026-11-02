package org.prlprg.snapshot.gen2c;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertTrue;

import java.nio.file.Path;
import java.util.Objects;
import org.junit.jupiter.api.Test;
import org.prlprg.examples.Example;
import org.prlprg.parseprint.Parser;
import org.prlprg.snapshot.SnapshotStore;
import org.prlprg.snapshot.fir2c.Fir2CQuery;
import org.prlprg.util.Paths;

/// A stub requests its version only once it's called as many times as the threshold, so with a
/// higher threshold the same runs evaluate fewer versions (see `server/doc/lazy-versions.md`).
class StubThresholdTest {
  @Test
  void higherThresholdEvaluatesFewerVersions() throws Exception {
    var rpath = Path.of("closure.R");
    var example =
        Parser.fromFile(
            Paths.getResource(Example.class, "R").resolve(rpath).toFile(),
            Example.class,
            new Example.ParseContext(rpath));
    var store = new SnapshotStore();

    var eager = new EvalQuery(Fir2CQuery.OPTIMIZED_ONLY_FIR, 1).compute(example, store);
    var hot = new EvalQuery(Fir2CQuery.OPTIMIZED_ONLY_FIR, 2).compute(example, store);

    assertEquals(eager.result(), hot.result());
    var eagerVersions = evaluatedVersions(eager);
    var hotVersions = evaluatedVersions(hot);
    assertTrue(
        hotVersions < eagerVersions,
        "threshold 2 evaluates "
            + hotVersions
            + " versions, threshold 1 "
            + eagerVersions
            + ":\n"
            + hot.module());
  }

  /// How many versions the module the run left has evaluated (the ones it prints, and the
  /// baselines).
  private static long evaluatedVersions(EvalOutput output) {
    return Objects.requireNonNull(output.module(), "the module has stubs")
        .lines()
        .filter(line -> line.startsWith("  ("))
        .count();
  }
}
