package org.prlprg.fir.interpret;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;
import static org.prlprg.fir.interpret.internal.Builtins.registerBuiltins;

import com.google.common.collect.ImmutableList;
import java.util.List;
import java.util.Objects;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.feedback.MockModuleFeedback;
import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.interpret.internal.InternalInterpreter;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.fir.opt.LazyCopy;
import org.prlprg.fir.opt.Optimization;
import org.prlprg.sexp.SEXPs;

/// The interpreter runs an unevaluated version's fallback once, then evaluates it.
class LazyVersionInterpretTest {
  private static final class NoOptimization extends Optimization {
    @Override
    public boolean runWithoutRecording(
        Optimization topLevel, ModuleFeedback feedback, Function function) {
      return false;
    }
  }

  @Test
  void fallbackOnceThenEvaluated() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () -+> V {
                r: V = f< v1(I) --> V >(<int 41>);
                return r;
              }
            }

            fun f(x) {
              (x:*) -+> V {
                v: V = force? x;
                return v;
              }
              (x:v(I)) --> V {
                r: v(I) = `+`< v(I),v(I) --> v(I) >(x, <int 1>);
                return r;
              }
            }
            """);
    var f = Objects.requireNonNull(module.localFunction(Variable.named("f")));
    var source = f.versions().first();
    var feedback = new MockModuleFeedback(module);
    // The copy takes exactly what `main` passes, so it's what `main`'s call dispatches to.
    var copy =
        LazyCopy.create(new NoOptimization(), feedback, f, source, List.of(Type.BOXED_INTEGER));
    assertEquals(
        copy,
        f.guess(
            new Signature(
                ImmutableList.of(Type.BOXED_INTEGER), Type.ANY_VALUE_SEXP, Effects.NONE)));

    var interpreter = new InternalInterpreter(module, feedback);
    registerBuiltins(interpreter);

    var first = interpreter.call("main");
    assertEquals(new Value.Sexp(SEXPs.integer(42)), first);
    assertFalse(copy.isEvaluated(), "the first call ran the fallback");
    assertEquals(1, feedback.get(copy).numCalls(), "which counts as a call");

    var second = interpreter.call("main");
    assertEquals(new Value.Sexp(SEXPs.integer(42)), second);
    assertTrue(copy.isEvaluated(), "the second call evaluated the copy");

    var third = interpreter.call("main");
    assertEquals(new Value.Sexp(SEXPs.integer(42)), third);
  }
}
