package org.prlprg.fir.interpret;

import org.prlprg.examples.Example;
import org.prlprg.examples.FirExampleTest;
import org.prlprg.fir.ir.FirQuery;
import org.prlprg.gen2c.EvalQuery;
import org.prlprg.snapshots.SnapshotStore;

/// Runs supported FIŘ modules in the internal interpreter, testing the interpreter, BC->FIŘ,
/// and FIŘ parsing.
class InterpretTest {
  /// Call the interpreter once, check output.
  @FirExampleTest
  void test(Example example, SnapshotStore store) {
    store.verify(example, InterpretQuery.MAIN);
  }

  /// Check that the interpreter and evaluator both fail, or both have the same return value.
  @FirExampleTest
  void testAgainstEval(Example example, SnapshotStore store) {
    var interpretOutput = store.query(example, InterpretQuery.MAIN);
    var evalOutput = store.query(example, EvalQuery.FIR_ORACLE);
  }

  /// Call the interpreter many times, check that output is the same.
  @FirExampleTest
  void testRepeat(Example example, SnapshotStore store) {
    var module = store.query(example, FirQuery.INSTANCE);
    var interpreter = new TestInterpreter(module);

    for (int i = 1; i <= 3; i++) {
      store.verify(example, InterpretQuery.MAIN, interpreter.call("main"), "run " + i);
    }
  }
}
