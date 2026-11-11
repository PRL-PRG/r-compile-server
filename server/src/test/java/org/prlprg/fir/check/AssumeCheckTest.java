package org.prlprg.fir.check;

import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;

import java.util.Objects;
import org.intellij.lang.annotations.Language;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.variable.Variable;

/// `TypeAndEffectChecker` reports an assumption that no value of its argument's type can pass.
class AssumeCheckTest {
  /// A promise with any effects can be one without effects, and an owned vector is a vector.
  @Test
  void assumptionThatAValueCanPass_isOk() {
    assertFalse(
        hasErrors(
            """
            (x:v(I)) -+> V {
              p: p(V +) = prom<V +>{
                return <real 1.0>;
              };
              q: p?(v1(R) -) = p ?: p?(v1(R) -);
              y: v(I)o = dup x;
              z: v(I) = y ?: v(I);
              return z;
            }
            """));
  }

  /// A version for a missing `x` keeps the baseline's assumption in a branch that is dead.
  @Test
  void assumptionOfANarrowerParameter_isOk() {
    assertFalse(
        hasErrors(
            """
            (x:miss) -+> V {
              y: v1(R) = x ?: v1(R);
              return y;
            }
            """));
  }

  /// A version for a missing `x` keeps the baseline's assumption on `x`'s default value.
  @Test
  void assumptionOfARegisterInANarrowerVersion_isOk() {
    var module =
        ParseUtil.parseModule(
            """
            fun f(x) {
              (x:*) -+> V { ... }
              (x:miss) -+> V {
                p: p(V +) = prom<V +>{
                  return <real 1.0>;
                };
                y: v1(R) = p ?: v1(R);
                return y;
              }
            }
            """);
    var function = Objects.requireNonNull(module.localFunction(Variable.named("f")));
    var checker = new TypeAndEffectChecker();
    checker.run(
        function,
        function.versions().stream()
            .filter(v -> v != function.baseline())
            .findFirst()
            .orElseThrow());
    checker.print();
    assertFalse(checker.hasErrors());
  }

  @Test
  void assumptionOfADisjointType_isAnError() {
    assertTrue(
        hasErrors(
            """
            (x:v(I)) -+> V {
              y: v(I)o = dup x;
              z: v(L) = y ?: v(L);
              return z;
            }
            """));
  }

  private static boolean hasErrors(@Language("FIR") String source) {
    var checker = new TypeAndEffectChecker();
    checker.run(null, ParseUtil.parseAbstraction(source));
    checker.print();
    return checker.hasErrors();
  }
}
