package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;
import static org.prlprg.fir.check.Checker.checkAll;

import com.google.common.collect.ImmutableList;
import java.util.List;
import java.util.Objects;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.feedback.MockModuleFeedback;
import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.fir.parseprint.ModuleFeedbackParseContext;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.Printer;

/// How optimizations treat unevaluated versions: only inlining evaluates one, and the rest leave
/// them (and what they need) alone.
class LazyVersionOptimizationTest {
  private static final class NoOptimization extends Optimization {
    @Override
    public boolean runWithoutRecording(
        Optimization topLevel, ModuleFeedback feedback, Function function) {
      return false;
    }
  }

  /// `main` calls `f`'s only non-baseline version, which is replaced by an unevaluated copy.
  private static Module moduleCallingLazyCopy() {
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
    var f = f(module);
    var source = f.versions().first();
    // The copy takes exactly what `main` passes, so it's what `main`'s call dispatches to.
    var copy =
        LazyCopy.create(
            new NoOptimization(),
            new MockModuleFeedback(module),
            f,
            source,
            List.of(Type.BOXED_INTEGER));
    assertEquals(
        copy,
        f.guess(
            new Signature(
                ImmutableList.of(Type.BOXED_INTEGER), Type.ANY_VALUE_SEXP, Effects.NONE)));
    return module;
  }

  private static Function f(Module module) {
    return Objects.requireNonNull(module.localFunction(Variable.named("f")));
  }

  private static Abstraction mainVersion(Module module) {
    return Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline();
  }

  @Test
  void inlineEvaluatesTheCallee() {
    var module = moduleCallingLazyCopy();
    var copy = f(module).versions().first();

    var changed =
        new Inline(1000)
            .run(
                null,
                org.prlprg.fir.feedback.AbstractionFeedback.standaloneForTesting(
                    mainVersion(module)),
                mainVersion(module));

    assertTrue(changed);
    assertTrue(copy.isEvaluated(), "the callee was evaluated to inline it");
    var printed = Printer.toString(mainVersion(module));
    assertFalse(printed.contains("f<"), "and inlined:\n" + printed);
    assertTrue(checkAll(module));
  }

  @Test
  void otherOptimizationsDontEvaluate() {
    var module = moduleCallingLazyCopy();
    var copy = f(module).versions().first();

    // Everything but `Inline`.
    var optimization =
        new org.prlprg.fir.opt.sequence.Sequence(
            "noInline",
            new Specialize(
                "specialize",
                new org.prlprg.fir.opt.specialize.OptimizeCallee(10),
                new org.prlprg.fir.opt.specialize.ImproveSignatures()),
            new Unbox(),
            new StrictifyPromise(),
            new CreateBestVersion(9),
            new Cleanup(false));
    optimization.run(new MockModuleFeedback(module), module);

    assertFalse(copy.isEvaluated());
    assertTrue(checkAll(module));
  }

  @Test
  void elideUnusedVersionsKeepsTheSourceOfAnUnevaluatedCopy() {
    var module = moduleCallingLazyCopy();
    var f = f(module);
    var source =
        f.versions().stream()
            .filter(Abstraction::isEvaluated)
            .filter(v -> v != f.baseline())
            .findFirst()
            .orElseThrow();
    var copy = f.versions().first();
    var feedback =
        Parser.fromString(
            """
            feedback {
              f< * -+> V > = 15x []
            }
            """,
            MockModuleFeedback.class,
            new ModuleFeedbackParseContext(module));

    new ElideUnusedVersions(10).run(feedback, module);

    assertTrue(f.versions().contains(copy), "the copy has a static occurrence");
    assertTrue(f.versions().contains(source), "the copy's source is kept for it");
    assertFalse(copy.isEvaluated());
  }
}
