package org.prlprg.fir.interpret;

import static org.junit.jupiter.api.Assertions.assertEquals;
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

/// The interpreter runs an unevaluated version's fallback for the rest of the top-level call, then
/// evaluates it.
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
    assertEquals(1, feedback.get(copy).numCalls(), "the fallback counts as a call");
    assertTrue(copy.isEvaluated(), "the copy is evaluated once the top-level call returns");

    var second = interpreter.call("main");
    assertEquals(new Value.Sexp(SEXPs.integer(42)), second);
    assertEquals(2, feedback.get(copy).numCalls());
  }

  /// Within one top-level call, an unevaluated version runs its fallback however many times it's
  /// called: it can't be evaluated mid-call (optimizing it would change the code being run).
  @Test
  void fallbackForTheWholeTopLevelCall() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () -+> V {
                r1: V = f< v1(I) --> V >(<int 1>);
                r2: V = f< v1(I) --> V >(<int 2>);
                return r2;
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
    var copy =
        LazyCopy.create(new NoOptimization(), feedback, f, source, List.of(Type.BOXED_INTEGER));

    var interpreter = new InternalInterpreter(module, feedback);
    registerBuiltins(interpreter);

    // Both calls in `main` dispatch to the copy, and both run its fallback.
    var first = interpreter.call("main");
    assertEquals(new Value.Sexp(SEXPs.integer(3)), first);
    assertEquals(2, feedback.get(copy).numCalls());
    assertTrue(copy.isEvaluated(), "evaluated afterwards");
    assertEquals(
        2, feedback.get(source).numCalls(), "the fallbacks called the source, in the same call");

    var second = interpreter.call("main");
    assertEquals(new Value.Sexp(SEXPs.integer(3)), second);
    assertEquals(2, feedback.get(source).numCalls(), "now the copy's body runs instead");
  }
}
