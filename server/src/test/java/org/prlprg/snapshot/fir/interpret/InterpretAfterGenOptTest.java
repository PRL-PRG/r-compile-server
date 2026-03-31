package org.prlprg.snapshot.fir.interpret;

import java.util.Objects;
import org.junit.jupiter.api.Disabled;
import org.prlprg.examples.Example;
import org.prlprg.examples.FirExampleTest;
import org.prlprg.fir.ir.expression.Closure;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.fir.opt.Optimization;
import org.prlprg.sexp.SEXPs;
import org.prlprg.snapshot.SnapshotStore;
import org.prlprg.snapshot.fir.ir.FirQuery;
import org.prlprg.snapshot.fir.opt.OptimizedFirQuery;
import org.prlprg.util.Streams;

/// Test that various optimizations don't change interpreter output.
@Disabled("Temporarily")
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

    var deoptFnName =
        Objects.requireNonNull(
                Objects.requireNonNull(module.localFunction(Variable.named("main")))
                    .baseline()
                    .cfg())
            .entry()
            .statements()
            .stream()
            .map(Statement::expression)
            .filter(e -> e instanceof Closure)
            .map(Closure.class::cast)
            .map(c -> c.code().name().name())
            .collect(
                Streams.oneOrThrowError(
                    () ->
                        new AssertionError(
                            "deopt example doesn't start by declaring a function (the deopt function)")));

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
          interpreter.call(deoptFnName, SEXPs.real(1)),
          "phase 1 run " + i);
    }
    optimization.run(interpreter.feedback(), module);
    store.verify(
        example,
        InterpretQuery.DEOPT_REAL,
        interpreter.call(deoptFnName, SEXPs.real(1)),
        "phase 1 post-opt run");

    for (int i = 1; i <= 3; i++) {
      store.verify(
          example,
          InterpretQuery.DEOPT_INT,
          interpreter.call(deoptFnName, SEXPs.integer(1)),
          "phase 2 run " + i);
    }
    optimization.run(interpreter.feedback(), module);
    store.verify(
        example,
        InterpretQuery.DEOPT_INT,
        interpreter.call(deoptFnName, SEXPs.integer(1)),
        "phase 2 post-opt run");

    for (int i = 1; i <= 3; i++) {
      store.verify(
          example,
          InterpretQuery.DEOPT_LGL,
          interpreter.call(deoptFnName, SEXPs.TRUE),
          "phase 3 run " + i);
    }
    optimization.run(interpreter.feedback(), module);
    store.verify(
        example,
        InterpretQuery.DEOPT_LGL,
        interpreter.call(deoptFnName, SEXPs.TRUE),
        "phase 3 post-opt run");
  }
}
