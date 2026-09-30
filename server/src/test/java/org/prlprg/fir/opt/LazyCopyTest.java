package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;
import static org.prlprg.fir.check.Checker.checkAll;

import java.util.List;
import java.util.Objects;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.feedback.MockModuleFeedback;
import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.callee.FallbackCallee;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.FunctionParameter;
import org.prlprg.fir.ir.variable.Variable;

class LazyCopyTest {
  /// Counts its runs, so a test can see whether evaluating a copy started one.
  private static final class CountingOptimization extends Optimization {
    int runs = 0;

    @Override
    public boolean runWithoutRecording(
        Optimization topLevel, ModuleFeedback feedback, Function function) {
      runs++;
      return false;
    }
  }

  private static Module module() {
    return ParseUtil.parseModule(
        """
        fun f(x) {
          (x:*) -+> V {
            v: V = force? x;
            return v;
          }
          (x:v(I)) --> V {
            return x;
          }
        }
        """);
  }

  private static Function f(Module module) {
    return Objects.requireNonNull(module.localFunction(Variable.named("f")));
  }

  @Test
  void copyIsUnevaluatedWithAFallbackThatCallsTheSource() {
    var module = module();
    var f = f(module);
    var source = f.versions().first();
    var topLevel = new CountingOptimization();
    var feedback = new MockModuleFeedback(module);

    var copy = LazyCopy.create(topLevel, feedback, f, source, List.of(Type.BOXED_INTEGER));

    assertFalse(copy.isEvaluated());
    assertEquals(source.returnType(), copy.returnType(), "the signature isn't lazy");
    assertEquals(source.effects(), copy.effects());
    assertTrue(f.versions().contains(copy));

    var fallback = Objects.requireNonNull(copy.fallback());
    assertEquals(1, fallback.bbs().size());
    var call =
        fallback.entry().statements().stream()
            .filter(s -> s.expression() instanceof Call(FallbackCallee _))
            .findFirst()
            .orElseThrow();
    assertEquals(
        source.signature(), ((FallbackCallee) ((Call) call.expression()).callee()).signature());
    assertEquals(source, f.guess(source.signature(), copy), "the fallback resolves past the copy");
    assertTrue(checkAll(module), "an unevaluated copy checks");
  }

  @Test
  void evaluatingCopiesTheSourceAndRerunsTheOptimizationAfterItsRun() {
    var module = module();
    var f = f(module);
    var source = f.versions().first();
    var topLevel = new CountingOptimization();
    var feedback = new MockModuleFeedback(module);

    // Created outside of a run, so its run id has changed by the time the copy is evaluated.
    var copy =
        LazyCopy.create(
            topLevel,
            feedback,
            f,
            source,
            FunctionParameter.copyAll(source.parameters()),
            LazyCopy.Adapter.NONE);
    assertEquals(0, topLevel.runs);

    var body = copy.body();
    assertTrue(copy.isEvaluated());
    assertEquals(source.body().toString(), body.toString(), "the body is the source's");
    assertEquals(1, topLevel.runs, "evaluating outside a run optimizes with a new run");
    assertTrue(checkAll(module));
  }

  @Test
  void evaluatingDuringTheCreatingRunDoesntStartAnother() {
    var module = module();
    var f = f(module);
    var source = f.versions().first();
    var feedback = new MockModuleFeedback(module);

    var creating =
        new Optimization() {
          int runs = 0;

          @Override
          public boolean runWithoutRecording(
              Optimization topLevel, ModuleFeedback feedback1, Function function) {
            runs++;
            var copy =
                LazyCopy.create(
                    topLevel,
                    feedback1,
                    function,
                    source,
                    FunctionParameter.copyAll(source.parameters()),
                    LazyCopy.Adapter.NONE);
            // Evaluated in the same run.
            copy.body();
            return false;
          }
        };
    creating.run(feedback, module);
    assertEquals(1, creating.runs, "the run that created the copy optimizes it itself");
  }

  @Test
  void evaluateAllOptimizesEverythingInOneRun() {
    var module = module();
    var f = f(module);
    var source = f.versions().first();
    var topLevel = new CountingOptimization();
    var feedback = new MockModuleFeedback(module);
    for (var i = 0; i < 3; i++) {
      LazyCopy.create(
          topLevel,
          feedback,
          f,
          source,
          FunctionParameter.copyAll(source.parameters()),
          LazyCopy.Adapter.NONE);
    }
    assertTrue(module.hasUnevaluated());

    topLevel.evaluateAll(feedback, module);
    assertFalse(module.hasUnevaluated());
    assertEquals(1, topLevel.runs, "one run for all of them, not one each");
  }
}
