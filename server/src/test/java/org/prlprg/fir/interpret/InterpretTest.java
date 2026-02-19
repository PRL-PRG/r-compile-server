package org.prlprg.fir.interpret;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.fail;

import org.junit.jupiter.api.Disabled;
import org.prlprg.bc2fir.BC2FirCompilerTest;
import org.prlprg.examples.Example;
import org.prlprg.examples.FirExampleTest;
import org.prlprg.examples.SexpResult.Error;
import org.prlprg.examples.SexpResult.Ok;
import org.prlprg.fir.ir.FirParseTest;
import org.prlprg.fir.ir.FirQuery;
import org.prlprg.fir2c.Fir2CCompileTest;
import org.prlprg.gen2c.EvalQuery;
import org.prlprg.snapshots.SkipQueryException;
import org.prlprg.snapshots.SnapshotStore;
import org.prlprg.snapshots.order.OrderAfter;

/// Runs supported FIŘ modules in the internal interpreter, testing the interpreter, BC->FIŘ,
/// and FIŘ parsing.
@OrderAfter(BC2FirCompilerTest.class)
@OrderAfter(FirParseTest.class)
@OrderAfter(Fir2CCompileTest.class)
@Disabled
class InterpretTest {
  /// Call the interpreter once, check output.
  @FirExampleTest(skipOption = "noEval")
  void test(Example example, SnapshotStore store) {
    store.verify(example, InterpretQuery.MAIN);
  }

  /// Check that the interpreter and evaluator both fail, or both have the same return value.
  @FirExampleTest(skipOption = "noEval")
  void testAgainstEval(Example example, SnapshotStore store) {
    var interpretOutput = store.load(example, InterpretQuery.MAIN);
    var evalOutput = store.load(example, EvalQuery.FIR_ORACLE);

    if ((interpretOutput.result().isSimplyUnsupported())
        || evalOutput.result().isSimplyUnsupported()) {
      throw new SkipQueryException(InterpretQuery.MAIN.name());
    }

    switch (evalOutput.result()) {
      case Ok(var evalValue) when interpretOutput.result() instanceof Ok(var interpretValue) ->
          assertEquals(evalValue, interpretValue, "Return value changed");
      case Ok(var evalValue)
          when interpretOutput.result() instanceof Error(var interpretError, var _) ->
          fail(
              "Eval succeeded with `"
                  + evalValue
                  + "`, but interpret failed with:\n"
                  + interpretError);
      case Error(var evalError, var _)
          when interpretOutput.result() instanceof Ok(var interpretValue) ->
          fail(
              "Eval failed with `"
                  + evalError
                  + "`, but interpret succeeded with `"
                  + interpretValue
                  + "`");
      default -> {
        // Both crashed, the messages will be different
      }
    }
  }

  /// Call the interpreter many times, check that output is the same.
  @FirExampleTest(skipOption = "noEval")
  void testRepeat(Example example, SnapshotStore store) {
    var module = store.load(example, FirQuery.INSTANCE);
    var interpreter = new TestInterpreter(module);

    for (int i = 1; i <= 3; i++) {
      store.verify(example, InterpretQuery.MAIN, interpreter.call("main"), "run " + i);
    }
  }
}
