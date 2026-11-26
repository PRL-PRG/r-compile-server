package org.prlprg.fir.interpret;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertThrows;
import static org.junit.jupiter.api.Assertions.assertTrue;
import static org.prlprg.fir.interpret.internal.Builtins.registerBuiltins;

import java.util.Objects;
import org.intellij.lang.annotations.Language;
import org.junit.jupiter.api.Timeout;
import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.ValueSource;
import org.prlprg.fir.interpret.internal.InternalInterpreter;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.sexp.SEXPs;

/// Tests the deopt of a version into a baseline that has a base-function guard (the form bc2fir
/// emits for `BASEGUARD`), with and without an earlier checkpoint at the guard's pc.
@Timeout(30)
class BaseGuardInterpretTest {
  @Language("FIR")
  private static final String MODULE =
      """
      fun f(x) {
        (x:*) -+> V {
          %s
          _sym: cls = ldf g;
          _base: cls = ldf-base g;
          _guard: B = `==`< cls,cls --> B >(_sym, _base);
          check L0() else D0();
        L0():
          _guard ?= TRUE;
          return <int 0>;
        D0():
          deopt 0 [];%s
        }
        (x:V) -+> V {
          _sym: cls = ldf g;
          _base: cls = ldf-base g;
          _guard: B = `==`< cls,cls --> B >(_sym, _base);
          check L0() else D0();
        L0():
          _guard ?= TRUE;
          x1: v1(I) = x ?: v1(I);
          return <int 1>;
        D0():
          deopt 0 [];
        }
      }

      fun g() {
        () --> V {
          return <int 7>;
        }
      }
      """;

  private static final String EARLIER_CHECKPOINT = "check E() else D1();\n    E():";
  private static final String EARLIER_DEOPT = "\n    D1():\n      deopt 0 [];";

  /// The version's type assumption fails at the guard's checkpoint; the baseline's guard holds.
  @ParameterizedTest
  @ValueSource(booleans = {false, true})
  void versionDeoptsIntoGuardedBaseline(boolean earlierCheckpoint) {
    var interpreter = interpreterFor(earlierCheckpoint);

    assertEquals(new Value.Sexp(SEXPs.integer(1)), interpreter.call("f", integer()));
    assertEquals(new Value.Sexp(SEXPs.integer(0)), interpreter.call("f", real()));
  }

  /// When `g` is rebound, the guard fails in the version and again in the baseline, which has no
  /// deopt target.
  @ParameterizedTest
  @ValueSource(booleans = {false, true})
  void reboundFunctionFailsInTheBaseline(boolean earlierCheckpoint) {
    var interpreter = interpreterFor(earlierCheckpoint);
    var g = Objects.requireNonNull(interpreter.module().localFunction(Variable.named("g")));
    interpreter.globalEnv().set("g", interpreter.closureStub(g, interpreter.globalEnv()));

    var e = assertThrows(InterpretException.class, () -> interpreter.call("f", integer()));
    assertTrue(
        e.getMessage().contains("Can't restore from the same CFG we deoptimized from"),
        e.getMessage());
  }

  private static InternalInterpreter interpreterFor(boolean earlierCheckpoint) {
    var module =
        ParseUtil.parseModule(
            earlierCheckpoint
                ? MODULE.formatted(EARLIER_CHECKPOINT, EARLIER_DEOPT)
                : MODULE.formatted("", ""));
    var interpreter = new InternalInterpreter(module);
    registerBuiltins(interpreter);
    // The module binds `g` in the global environment; make it the base function too.
    interpreter.baseEnv().set("g", interpreter.globalEnv().get("g").orElseThrow());
    return interpreter;
  }

  private static Value integer() {
    return new Value.Sexp(SEXPs.integer(1));
  }

  private static Value real() {
    return new Value.Sexp(SEXPs.real(1));
  }
}
