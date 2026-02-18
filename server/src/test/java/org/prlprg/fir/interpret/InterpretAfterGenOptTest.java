package org.prlprg.fir.interpret;

import org.junit.jupiter.api.Disabled;
import org.prlprg.bc2fir.BC2FirCompilerTest;
import org.prlprg.examples.Example;
import org.prlprg.examples.FirExampleTest;
import org.prlprg.fir.ir.FirParseTest;
import org.prlprg.fir.ir.FirQuery;
import org.prlprg.fir.opt.Optimization;
import org.prlprg.fir.opt.OptimizedFirQuery;
import org.prlprg.sexp.SEXPs;
import org.prlprg.snapshots.SnapshotStore;
import org.prlprg.snapshots.order.OrderAfter;

/// Test that various optimizations don't change interpreter output.
@OrderAfter(BC2FirCompilerTest.class)
@OrderAfter(FirParseTest.class)
@OrderAfter(InterpretTest.class)
@Disabled("TODO: find the inner function name for `testDeopt`, fix other tests")
public interface InterpretAfterGenOptTest {
  Optimization optimization();

  /// Call the interpreter once on an optimization without feedback, check output.
  @FirExampleTest(skipOption = "noEval")
  default void test(Example example, SnapshotStore store) {
    var module = store.load(example, new OptimizedFirQuery(optimization()));
    var interpreter = new TestInterpreter(module);

    store.verify(example, InterpretQuery.MAIN, interpreter.call("main"));
  }

  /// Call the interpreter many times and re-optimize with feedback, check that output is the
  /// same.
  @FirExampleTest(skipOption = "noEval")
  default void testRepeat(Example example, SnapshotStore store) {
    var optimization = optimization();

    var module = store.load(example, FirQuery.INSTANCE);
    var interpreter = new TestInterpreter(module);

    // Warmup
    store.assumeVerify(example, InterpretQuery.MAIN, interpreter.call("main"));
    optimization.run(interpreter.feedback(), module);
    store.assumeVerify(example, InterpretQuery.MAIN, interpreter.call("main"));

    // Test
    for (int i = 3; i <= 5; i++) {
      optimization.run(interpreter.feedback(), module);
      store.verify(example, InterpretQuery.MAIN, interpreter.call("main"), "run " + i);
    }
  }

  /// Call the interpreter many times with different arguments and re-optimize with feedback,
  /// causing deopts. Check that output is the same.
  @FirExampleTest(option = "deopt")
  default void testDeopt(Example example, SnapshotStore store) {
    var optimization = optimization();

    var module = store.load(example, FirQuery.INSTANCE);
    var interpreter = new TestInterpreter(module);

    // Warmup
    for (int i = 1; i <= 3; i++) {
      store.assumeVerify(example, InterpretQuery.MAIN, interpreter.call("main"));
    }
    optimization.run(interpreter.feedback(), module);
    store.assumeVerify(example, InterpretQuery.MAIN, interpreter.call("main"));

    // Test

    for (int i = 1; i <= 3; i++) {
      store.verify(
          example,
          InterpretQuery.DEOPT_REAL,
          interpreter.call("f", SEXPs.real(1)),
          "phase 1 run " + i);
    }
    optimization.run(interpreter.feedback(), module);
    store.verify(
        example,
        InterpretQuery.DEOPT_REAL,
        interpreter.call("f", SEXPs.real(1)),
        "phase 1 post-opt run");

    for (int i = 1; i <= 3; i++) {
      store.verify(
          example,
          InterpretQuery.DEOPT_INT,
          interpreter.call("f", SEXPs.integer(1)),
          "phase 2 run " + i);
    }
    optimization.run(interpreter.feedback(), module);
    store.verify(
        example,
        InterpretQuery.DEOPT_INT,
        interpreter.call("f", SEXPs.integer(1)),
        "phase 2 post-opt run");

    for (int i = 1; i <= 3; i++) {
      store.verify(
          example, InterpretQuery.DEOPT_LGL, interpreter.call("f", SEXPs.TRUE), "phase 3 run " + i);
    }
    optimization.run(interpreter.feedback(), module);
    store.verify(
        example,
        InterpretQuery.DEOPT_LGL,
        interpreter.call("f", SEXPs.TRUE),
        "phase 3 post-opt run");
  }
}
