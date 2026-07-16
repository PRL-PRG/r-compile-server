package org.prlprg.fir.interpret;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertThrows;
import static org.junit.jupiter.api.Assertions.assertTrue;
import static org.prlprg.fir.interpret.internal.Builtins.registerBuiltins;

import java.util.Objects;
import org.intellij.lang.annotations.Language;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.interpret.internal.InternalInterpreter;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.fir.opt.Specialize;
import org.prlprg.fir.opt.specialize.SpecializeNonReflectiveEnv;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.SEXPs;

/// Tests speculating environments non-reflective from call feedback, analogous to R examples
/// `reflect_sys_parent.R` and `reflect_sys_parent2.R`):
///
/// - If the function was profiled at least [#THRESHOLD] times without reflecting, its environment
///   is speculated non-reflective; the speculation isn't guarded by a checkpoint, so reflecting
///   afterwards crashes instead of deoptimizing.
/// - If a reflective access was recorded, or the function wasn't profiled enough, the environment
///   stays regular and reflecting afterwards works.
class ReflectionSpeculationInterpretTest {
  private static final int THRESHOLD = 10;

  private static final Specialize SPECULATE =
      new Specialize("specializeEnv", new SpecializeNonReflectiveEnv(THRESHOLD));

  /// `f(b)` reflects on its own frame iff `b` (`sys.frame` is the interpreter's mock of the
  /// `sys.parent` family of stack-reflection builtins).
  @Language("FIR")
  private static final String MODULE =
      """
      fun f(b) {
        (reg b:v1(L)) -+> V { reg cond:B, reg sysfun:cls, reg r:V |
          mkenv;
          cond = naToFalse< v1(L) --> B >(b);
          if cond then L1() else L0();
        L1():
          sysfun = ldf `sys.frame`;
          r = dyn sysfun(<int 0>);
          popenv;
          return <int 1>;
        L0():
          popenv;
          return <int 0>;
        }
      }
      """;

  private static final Value FALSE = new Value.Sexp(SEXPs.FALSE);
  private static final Value TRUE = new Value.Sexp(SEXPs.TRUE);
  private static final Value INT_0 = new Value.Sexp(SEXPs.integer(0));
  private static final Value INT_1 = new Value.Sexp(SEXPs.integer(1));

  /// `f` is called enough times to compile without ever reflecting, so its environment is
  /// speculated non-reflective; reflecting afterwards crashes (the compiled code doesn't
  /// deoptimize).
  @Test
  void hotWithoutReflectionFeedback_speculates_thenReflectionCrashes() {
    var module = ParseUtil.parseModule(MODULE);
    var interpreter = interpreterFor(module);

    for (var i = 0; i < THRESHOLD + 1; i++) {
      assertEquals(INT_0, interpreter.call("f", FALSE));
    }

    optimize(module, interpreter);

    var printed = Printer.toString(module);
    assertTrue(
        printed.contains("mkenv~"),
        "env should be speculated non-reflective; printed:\n" + printed);

    var e = assertThrows(InterpretException.class, () -> interpreter.call("f", TRUE));
    assertTrue(
        e.getMessage().contains("Reflective access to a speculated-non-reflective"),
        "unexpected message: " + e.getMessage());
  }

  /// `f` reflects during its profiled calls (booleans alternate), so the reflective access is in
  /// its feedback, its environment isn't speculated, and reflecting afterwards works.
  @Test
  void reflectionInFeedback_doesntSpeculate_thenReflectionWorks() {
    var module = ParseUtil.parseModule(MODULE);
    var interpreter = interpreterFor(module);

    var b = true;
    for (var i = 0; i < THRESHOLD + 1; i++) {
      assertEquals(b ? INT_1 : INT_0, interpreter.call("f", b ? TRUE : FALSE));
      b = !b;
    }

    optimize(module, interpreter);

    var printed = Printer.toString(module);
    assertFalse(
        printed.contains("mkenv~"),
        "reflectively-accessed env should stay regular; printed:\n" + printed);

    assertEquals(INT_1, interpreter.call("f", TRUE));
  }

  /// `f` isn't profiled enough for the absence of a reflective access to be trusted, so its
  /// environment isn't speculated, and reflecting afterwards works.
  @Test
  void belowThreshold_doesntSpeculate_thenReflectionWorks() {
    var module = ParseUtil.parseModule(MODULE);
    var interpreter = interpreterFor(module);

    for (var i = 0; i < 2; i++) {
      assertEquals(INT_0, interpreter.call("f", FALSE));
    }

    optimize(module, interpreter);

    var printed = Printer.toString(module);
    assertFalse(
        printed.contains("mkenv~"),
        "insufficiently-profiled env should stay regular; printed:\n" + printed);

    assertEquals(INT_1, interpreter.call("f", TRUE));
  }

  private static InternalInterpreter interpreterFor(Module module) {
    var interpreter = new InternalInterpreter(module);
    registerBuiltins(interpreter);
    return interpreter;
  }

  /// Optimize `f`'s baseline in place with the interpreter's collected feedback (like the other
  /// env-optimization unit tests, we drive the abstraction-level optimization directly since the
  /// module-level entry point deliberately skips baselines).
  private static void optimize(Module module, InternalInterpreter interpreter) {
    var f = Objects.requireNonNull(module.localFunction(Variable.named("f")));
    var baseline = f.baseline();
    SPECULATE.run(f, interpreter.feedback().get(baseline), baseline);
  }
}
