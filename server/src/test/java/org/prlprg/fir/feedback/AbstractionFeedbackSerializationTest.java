package org.prlprg.fir.feedback;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertInstanceOf;
import static org.prlprg.fir.interpret.internal.Builtins.registerBuiltins;

import java.util.Objects;
import org.intellij.lang.annotations.Language;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.interpret.internal.InternalInterpreter;
import org.prlprg.fir.interpret.internal.MockModuleFeedback;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.sexp.PromSXP;

/// Regression tests for serializing [AbstractionFeedback], which round-trips (prints then parses)
/// during [MockModuleFeedback#deepCopy] — the copy the optimizer runs on.
///
/// [reflectiveEnvs][AbstractionFeedback#reflectiveEnvs] and
/// [escapingPromises][AbstractionFeedback#escapingPromises] are stored as
/// [CfgPosition][org.prlprg.fir.ir.position.CfgPosition]s. A `CfgPosition` prints its whole CFG by
/// default, so the feedback prints them *compactly* (`bb:index`) and parses them back against the
/// abstraction's CFG. These tests guard that round-trip: before it was fixed, a recorded
/// escape/reflective-env made the deep copy fail to parse.
///
/// The feedback is produced by the interpreter (not hand-built) so it's realistic: the scope also
/// has register feedback, which the compact positions are printed alongside.
class AbstractionFeedbackSerializationTest {
  /// `main` creates a promise and returns it, so forcing the returned promise after `main` returns
  /// records the `prom`'s position as escaping.
  @Language("FIR")
  private static final String ESCAPING_PROMISE_MODULE =
      """
      fun main() {
        () -+> p(v1(I) +) { reg r:p(v1(I) +) |
          r = prom<v1(I) +>{ return <int 42>; };
          return r;
        }
      }
      """;

  /// `main` reflectively reads its own frame (`sys.frame(0)`), recording its `mkenv`'s position as
  /// reflectively accessed.
  @Language("FIR")
  private static final String REFLECTIVE_ENV_MODULE =
      """
      fun main() {
        () -+> V { reg sysfun:cls, reg r:V |
          mkenv;
          sysfun = ldf `sys.frame`;
          r = dyn sysfun(<int 0>);
          popenv;
          return r;
        }
      }
      """;

  @Test
  void escapingPromisePositionRoundTrips() {
    var module = ParseUtil.parseModule(ESCAPING_PROMISE_MODULE);
    var interpreter = new InternalInterpreter(module);

    // Record an escape: call `main` (which returns the promise), then force it after `main`'s frame
    // has exited.
    var result = interpreter.call("main");
    var promise =
        assertInstanceOf(PromSXP.class, assertInstanceOf(Value.Sexp.class, result).value());
    interpreter.force(promise);

    var original = interpreter.feedback().get(baselineOf(module));
    assertEquals(1, original.escapingPromises.size(), "sanity: interpreter recorded the escape");

    var copy = roundTrip(module, interpreter.feedback());
    assertEquals(
        1, copy.escapingPromises.size(), "escaping-promise position should survive the round-trip");
  }

  @Test
  void reflectiveEnvPositionRoundTrips() {
    var module = ParseUtil.parseModule(REFLECTIVE_ENV_MODULE);
    var interpreter = new InternalInterpreter(module);
    registerBuiltins(interpreter);

    interpreter.call("main");

    var original = interpreter.feedback().get(baselineOf(module));
    assertEquals(
        1, original.reflectiveEnvs.size(), "sanity: interpreter recorded the reflective access");

    var copy = roundTrip(module, interpreter.feedback());
    assertEquals(
        1, copy.reflectiveEnvs.size(), "reflective-env position should survive the round-trip");
  }

  /// Deep-copy the module and feedback (which serializes then re-parses the feedback), returning
  /// the copy's feedback for `main`'s baseline.
  private static AbstractionFeedback roundTrip(Module module, MockModuleFeedback feedback) {
    var copy = MockModuleFeedback.deepCopy(module, feedback);
    return copy.second().get(baselineOf(copy.first()));
  }

  private static Abstraction baselineOf(Module module) {
    return Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline();
  }
}
