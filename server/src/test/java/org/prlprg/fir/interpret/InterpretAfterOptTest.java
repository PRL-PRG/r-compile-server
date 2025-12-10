package org.prlprg.fir.interpret;

import org.prlprg.examples.Example;
import org.prlprg.examples.FirExampleTest;
import org.prlprg.fir.ir.FirQuery;
import org.prlprg.fir.opt.Optimization;
import org.prlprg.fir.opt.OptimizationTestClass;
import org.prlprg.fir.opt.OptimizedFirQuery;
import org.prlprg.sexp.SEXPs;
import org.prlprg.snapshots.SnapshotStore;

/// Test that various optimizations don't change interpreter output.
@OptimizationTestClass
public record InterpretAfterOptTest(Optimization optimization) {
  /// Call the interpreter once on an optimization without feedback, check output.
  @FirExampleTest
  void test(Example example, SnapshotStore store) {
    var module = store.query(example, new OptimizedFirQuery(optimization));
    var interpreter = new TestInterpreter(module);

    store.verify(example, InterpretQuery.MAIN, interpreter.call("main"));
  }

  /// Call the interpreter many times and re-optimize with feedback, check that output is the
  /// same.
  @FirExampleTest
  void testRepeat(Example example, SnapshotStore store) {
    var module = store.query(example, FirQuery.INSTANCE);
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
  void testDeopt(Example example, SnapshotStore store) {
    var module = store.query(example, FirQuery.INSTANCE);
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
