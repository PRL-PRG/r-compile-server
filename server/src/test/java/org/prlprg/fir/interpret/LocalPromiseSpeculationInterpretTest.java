package org.prlprg.fir.interpret;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertInstanceOf;
import static org.junit.jupiter.api.Assertions.assertThrows;
import static org.junit.jupiter.api.Assertions.assertTrue;

import java.util.Objects;
import org.intellij.lang.annotations.Language;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.interpret.internal.InternalInterpreter;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.fir.opt.Specialize;
import org.prlprg.fir.opt.specialize.SpecializeLocalPromise;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.PromSXP;
import org.prlprg.sexp.SEXPs;

/// Tests speculating a promise [local][org.prlprg.fir.ir.expression.Promise#local()] from call
/// feedback, analogous to [ReflectionSpeculationInterpretTest] (which does the same for
/// non-reflective environments):
///
/// - If the function was profiled at least [#THRESHOLD] times without its promise escaping, the
///   promise is speculated local; the speculation isn't guarded by a checkpoint, so forcing the
///   promise after it escapes (outlives the frame that created it) crashes instead of deoptimizing.
/// - If an escape was recorded, or the function wasn't profiled enough, the promise stays non-local
///   and forcing it after it escapes works (records the escape as feedback).
///
/// Each test drives [SpecializeLocalPromise] directly on `main`'s baseline (like the other
/// promise/env unit tests), so it isolates the speculation from the snapshot tests' feedback
/// collection.
class LocalPromiseSpeculationInterpretTest {
  private static final int THRESHOLD = 10;

  private static final Specialize SPECULATE =
      new Specialize("specializeLocalPromise", new SpecializeLocalPromise(THRESHOLD));

  /// `main` creates a promise and returns it, so forcing the returned promise afterwards (from
  /// outside `main`'s frame) is an escape. The promise starts non-local; the speculation may make
  /// it local.
  @Language("FIR")
  private static final String MODULE =
      """
      fun main() {
        () -+> p(v1(I) -) {
          r: p(v1(I) -) = prom<v1(I) ->{ return <int 42>; };
          return r;
        }
      }
      """;

  /// `main` is called enough times without its returned promise ever escaping-then-forced, so the
  /// promise is speculated local; forcing a returned promise afterwards (it has escaped) crashes.
  @Test
  void hotWithoutEscapeFeedback_speculatesLocal_thenEscapeCrashes() {
    var module = ParseUtil.parseModule(MODULE);
    var interpreter = new InternalInterpreter(module);

    // Warmup: call `main` enough times, discarding (never forcing) the returned promises, so no
    // escape is recorded even though each promise outlives `main`'s frame.
    for (var i = 0; i < THRESHOLD + 1; i++) {
      callAndGetPromise(interpreter);
    }

    optimize(module, interpreter);

    var printed = Printer.toString(module);
    assertTrue(
        printed.contains("prom-"), "promise should be speculated local; printed:\n" + printed);

    // A promise from a post-speculation call is local. It escapes when `main` returns, so forcing
    // it crashes (the speculated-local code has no checkpoint to deoptimize from).
    var promise = callAndGetPromise(interpreter);
    var e = assertThrows(InterpretException.class, () -> interpreter.force(promise));
    assertTrue(
        e.getMessage().contains("speculated-local promise after it escaped"),
        "unexpected message: " + e.getMessage());
  }

  /// `main`'s returned promise escapes and is forced during the profiled calls, so the escape is in
  /// its feedback, the promise isn't speculated local, and forcing a returned promise works.
  @Test
  void escapeInFeedback_doesntSpeculate_thenForceWorks() {
    var module = ParseUtil.parseModule(MODULE);
    var interpreter = new InternalInterpreter(module);

    // Warmup: force each returned promise after `main` returned, recording the escape each time.
    for (var i = 0; i < THRESHOLD + 1; i++) {
      var promise = callAndGetPromise(interpreter);
      assertEquals(SEXPs.integer(42), interpreter.force(promise));
    }

    optimize(module, interpreter);

    var printed = Printer.toString(module);
    assertFalse(
        printed.contains("prom-"), "escaping promise should stay non-local; printed:\n" + printed);

    var promise = callAndGetPromise(interpreter);
    assertEquals(SEXPs.integer(42), interpreter.force(promise));
  }

  /// `main` isn't profiled enough for the absence of an escape to be trusted, so its promise isn't
  /// speculated local, and forcing a returned promise works.
  @Test
  void belowThreshold_doesntSpeculate_thenForceWorks() {
    var module = ParseUtil.parseModule(MODULE);
    var interpreter = new InternalInterpreter(module);

    for (var i = 0; i < 2; i++) {
      callAndGetPromise(interpreter);
    }

    optimize(module, interpreter);

    var printed = Printer.toString(module);
    assertFalse(
        printed.contains("prom-"),
        "insufficiently-profiled promise should stay non-local; printed:\n" + printed);

    var promise = callAndGetPromise(interpreter);
    assertEquals(SEXPs.integer(42), interpreter.force(promise));
  }

  private static PromSXP callAndGetPromise(InternalInterpreter interpreter) {
    var result = interpreter.call("main");
    var sexp = assertInstanceOf(Value.Sexp.class, result).value();
    return assertInstanceOf(PromSXP.class, sexp);
  }

  /// Optimize `main`'s baseline in place with the interpreter's collected feedback (like the other
  /// promise/env unit tests, we drive the abstraction-level optimization directly since the
  /// module-level entry point deliberately skips baselines).
  private static void optimize(Module module, InternalInterpreter interpreter) {
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main")));
    var baseline = main.baseline();
    SPECULATE.run(main, interpreter.feedback().get(baseline), baseline);
  }
}
