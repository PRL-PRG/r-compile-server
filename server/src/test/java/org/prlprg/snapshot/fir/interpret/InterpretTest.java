package org.prlprg.snapshot.fir.interpret;

import static org.junit.jupiter.api.Assertions.fail;
import static org.prlprg.sexp.AllEqual.assertAllEqual;

import java.util.IdentityHashMap;
import java.util.Map;
import org.prlprg.examples.Example;
import org.prlprg.examples.FirExampleTest;
import org.prlprg.examples.SexpResult.Error;
import org.prlprg.examples.SexpResult.Ok;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.UserEnvSXP;
import org.prlprg.sexp.VecSXP;
import org.prlprg.snapshot.SkipQueryException;
import org.prlprg.snapshot.SnapshotStore;
import org.prlprg.snapshot.fir.ir.FirQuery;
import org.prlprg.snapshot.gen2c.EvalQuery;

/// Runs supported FIŘ modules in the internal interpreter, testing the interpreter, BC->FIŘ,
/// and FIŘ parsing.
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
          assertAllEqual(
              withoutClosureDetails(evalValue, new IdentityHashMap<>()),
              withoutClosureDetails(interpretValue, new IdentityHashMap<>()),
              (e, i) -> new Ok(e).withoutCompiledCode().equals(new Ok(i).withoutCompiledCode()),
              "Return value changed");
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

  /// `sexp` with what differs between closures the interpreter and GNU-R make replaced: the body.
  ///
  /// `envs` maps each environment already copied to its copy, because a closure's environment may
  /// bind the closure itself.
  private static SEXP withoutClosureDetails(SEXP sexp, Map<EnvSXP, EnvSXP> envs) {
    return switch (sexp) {
      case CloSXP c ->
          SEXPs.closure(
              c.parameters(),
              SEXPs.symbol("code"),
              (EnvSXP) withoutClosureDetails(c.env(), envs),
              c.attributes());
      case UserEnvSXP e when envs.containsKey(e) -> envs.get(e);
      case UserEnvSXP e -> {
        var copy = new UserEnvSXP();
        envs.put(e, copy);
        copy.setParent((EnvSXP) withoutClosureDetails(e.parent(), envs));
        copy.setAttributes(e.attributes());
        e.bindings().forEach(b -> copy.set(b.getKey(), withoutClosureDetails(b.getValue(), envs)));
        yield copy;
      }
      case VecSXP v ->
          SEXPs.vec(v.stream().map(x -> withoutClosureDetails(x, envs)).toList(), v.attributes());
      default -> sexp;
    };
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
