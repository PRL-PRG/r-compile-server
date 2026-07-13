package org.prlprg.fir.interpret;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertInstanceOf;
import static org.junit.jupiter.api.Assertions.assertThrows;
import static org.junit.jupiter.api.Assertions.assertTrue;

import java.util.Objects;
import org.intellij.lang.annotations.Language;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.interpret.internal.InternalInterpreter;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.sexp.PromSXP;
import org.prlprg.sexp.SEXPs;

/// Tests the interpreter's promise-escape tracking: when a promise is forced after the stack frame
/// that created it has exited, a non-local promise records the escape as feedback, while a local
/// one throws.
class PromiseEscapeInterpretTest {
  /// `main` creates a promise and returns it, so forcing it afterwards (from outside its frame) is
  /// an escape. `%s` is the promise's local marker (`-` for local, empty for non-local).
  @Language("FIR")
  private static final String MODULE_TEMPLATE =
      """
      fun main() {
        () -+> p(v1(I) -) { reg r:p(v1(I) -) |
          r = prom%s<v1(I) ->{ return <int 42>; };
          return r;
        }
      }
      """;

  @Test
  void nonLocalPromiseEscape_recordsFeedback() {
    var module = ParseUtil.parseModule(MODULE_TEMPLATE.formatted(""));
    var interpreter = new InternalInterpreter(module);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main")));

    var promise = callAndGetPromise(interpreter);

    // Nothing recorded until the escaped promise is actually forced.
    assertTrue(interpreter.feedback().get(main.baseline()).escapingPromises.isEmpty());

    var forced = interpreter.force(promise);
    assertEquals(SEXPs.integer(42), forced);

    assertEquals(
        1,
        interpreter.feedback().get(main.baseline()).escapingPromises.size(),
        "forcing the escaped non-local promise should record it as escaping");
  }

  @Test
  void escapedPromiseForce_recordedInCreatingScope() {
    var module = ParseUtil.parseModule(MODULE_TEMPLATE.formatted(""));
    var interpreter = new InternalInterpreter(module);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main")));

    var promise = callAndGetPromise(interpreter);
    interpreter.force(promise);

    // The force is recorded in the scope whose `prom` instruction created the promise (main's
    // baseline), even though the promise was forced after that frame had exited.
    var forceCount = interpreter.feedback().get(main.baseline()).forceCount;
    assertEquals(1, forceCount.size(), "the escaped promise's force should be recorded once");
    assertEquals(1, forceCount.values().iterator().next().intValue());
  }

  @Test
  void localPromiseEscape_throws() {
    var module = ParseUtil.parseModule(MODULE_TEMPLATE.formatted("-"));
    var interpreter = new InternalInterpreter(module);

    var promise = callAndGetPromise(interpreter);

    var e = assertThrows(InterpretException.class, () -> interpreter.force(promise));
    assertTrue(
        e.getMessage().contains("speculated-local promise after it escaped"),
        "unexpected message: " + e.getMessage());
  }

  private static PromSXP callAndGetPromise(InternalInterpreter interpreter) {
    var result = interpreter.call("main");
    var sexp = assertInstanceOf(Value.Sexp.class, result).value();
    return assertInstanceOf(PromSXP.class, sexp);
  }
}
