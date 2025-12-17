package org.prlprg.fir.interpret;

import static org.junit.jupiter.api.Assertions.assertEquals;

import org.prlprg.bc2fir.BC2FirCompilerTest;
import org.prlprg.examples.Example;
import org.prlprg.examples.FirExampleTest;
import org.prlprg.fir.ir.FirParseTest;
import org.prlprg.fir.ir.FirQuery;
import org.prlprg.fir2c.Fir2CCompileTest;
import org.prlprg.gen2c.EvalQuery;
import org.prlprg.snapshots.SnapshotStore;
import org.prlprg.snapshots.order.OrderAfter;

/// Runs supported FIŘ modules in the internal interpreter, testing the interpreter, BC->FIŘ,
/// and FIŘ parsing.
@OrderAfter(BC2FirCompilerTest.class)
@OrderAfter(FirParseTest.class)
@OrderAfter(Fir2CCompileTest.class)
class InterpretTest {
  /// Call the interpreter once, check output.
  @FirExampleTest
  void test(Example example, SnapshotStore store) {
    store.verify(example, InterpretQuery.MAIN);
  }

  /// Check that the interpreter and evaluator both fail, or both have the same return value.
  @FirExampleTest
  void testAgainstEval(Example example, SnapshotStore store) {
    var interpretOutput = store.load(example, InterpretQuery.MAIN);
    var evalOutput = store.load(example, EvalQuery.FIR_ORACLE);

    // TODO: When abstracting `Either<SEXP, String>`, also abstract these `assertEqual`s which
    //  have the same message.
    assertEquals(
        interpretOutput.returnValue(),
        evalOutput.returnValue(),
        "Return value or crash reason changed");
  }

  /// Call the interpreter many times, check that output is the same.
  @FirExampleTest
  void testRepeat(Example example, SnapshotStore store) {
    var module = store.load(example, FirQuery.INSTANCE);
    var interpreter = new TestInterpreter(module);

    for (int i = 1; i <= 3; i++) {
      store.verify(example, InterpretQuery.MAIN, interpreter.call("main"), "run " + i);
    }
  }
}
