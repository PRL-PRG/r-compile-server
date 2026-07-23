package org.prlprg.fir.interpret;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;
import static org.prlprg.fir.interpret.internal.Builtins.registerBuiltins;

import java.util.Objects;
import java.util.function.Consumer;
import org.intellij.lang.annotations.Language;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.interpret.internal.InternalInterpreter;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.fir.opt.AbstractionOptimization;
import org.prlprg.fir.opt.Specialize;
import org.prlprg.fir.opt.sequence.AbstractionFixpointSequence;
import org.prlprg.fir.opt.specialize.ElideDeadStore;
import org.prlprg.fir.opt.specialize.ElideEnv;
import org.prlprg.fir.opt.specialize.ResolveLoad;
import org.prlprg.fir.opt.specialize.SpecializeNonReflectiveEnv;
import org.prlprg.parseprint.Printer;

/// Tests that the environment-related specializations ([SpecializeNonReflectiveEnv], [ElideEnv],
/// [ResolveLoad]) act on a `main` function according to the reflection feedback the interpreter
/// collected, and that doing so preserves the function's behavior.
///
/// In each test `main` builds a local environment and calls another function that is *annotated*
/// reflective. Whether the environment can be optimized depends on whether that callee *actually*
/// accesses it reflectively at runtime (recorded as feedback), not on the static annotation.
class OptimizationBehaviorTest {
  /// Speculate envs with the collected feedback and resolve loads
  private static final AbstractionOptimization SPECULATE_AND_RESOLVE =
      new Specialize("envOpts", new SpecializeNonReflectiveEnv(1), new ResolveLoad());
  /// Remove dead stores, then elide unused environments. `ElideEnv` must run in a *later* pass than
  /// `ElideDeadStore` (see [org.prlprg.fir.opt.Optimizations]): otherwise it examines the `mkenv`
  /// while the now-dead stores are still present and conservatively keeps the environment.
  private static final AbstractionOptimization ELIDE =
      new AbstractionFixpointSequence(
          "elide",
          new Specialize("elideDeadStore", new ElideDeadStore()),
          new Specialize("elideEnv", new ElideEnv()));

  /// Common test logic
  ///
  /// - Interpret `main`
  /// - Optimize: speculate envs with the collected feedback and resolve loads
  /// - Re-interpret and assert that both the output and the checkpoint trace are unchanged
  /// - Check that the optimized module satisfies `speculateConditions`
  /// - Optimize: remove dead stores and elide unused environments
  /// - Check that the optimized module satisfies `elideConditions`
  private static void assertOptimizationBehavior(
      @Language("FIR") String moduleText,
      Consumer<String> speculateConditions,
      Consumer<String> elideConditions) {
    var module = ParseUtil.parseModule(moduleText);
    var interpreter = new InternalInterpreter(module);
    registerBuiltins(interpreter);

    var main = Objects.requireNonNull(module.localFunction(Variable.named("main")));
    // Optimize `main`'s baseline in place: it's the only version, and the module-level entry point
    // deliberately skips baselines (they're the deopt fallback), so we drive the abstraction-level
    // optimization directly, like the other env-optimization unit tests.
    var baseline = main.baseline();
    var feedback = interpreter.feedback().get(baseline);

    var before = new Value[1];
    var after = new Value[1];

    // Interpret before optimizing: this collects the feedback (reflective accesses, call counts)
    // and records the reference output and checkpoint trace.
    var beforeTrace =
        interpreter.checkpointTrace().track(() -> before[0] = interpreter.call("main"));

    // First optimizations
    SPECULATE_AND_RESOLVE.run(main, feedback, baseline);

    // Re-interpret the optimized function
    var afterTrace = interpreter.checkpointTrace().track(() -> after[0] = interpreter.call("main"));

    // Check
    var printed = Printer.toString(module);
    assertEquals(before[0], after[0], "optimization changed the output; printed:\n" + printed);
    assertEquals(
        beforeTrace, afterTrace, "optimization changed the checkpoint trace; printed:\n" + printed);
    speculateConditions.accept(printed);

    // Second optimizations (new feedback doesn't matter)
    ELIDE.run(main, feedback, baseline);

    // Re-interpret again
    afterTrace = interpreter.checkpointTrace().track(() -> after[0] = interpreter.call("main"));

    // Check again
    printed = Printer.toString(module);
    assertEquals(before[0], after[0], "optimization changed the output; printed:\n" + printed);
    assertEquals(
        beforeTrace, afterTrace, "optimization changed the checkpoint trace; printed:\n" + printed);
    elideConditions.accept(printed);
  }

  /// `main` stores to and loads from its environment, and passes a promise (capturing that
  /// environment, with its own loads) to a reflective callee that *only forces* the promise. Since
  /// the environment is never reflectively accessed, its `mkenv` is marked non-reflective, which in
  /// turn lets the loads resolve to the stored constant — neither of which is sound while the
  /// environment may be reflectively accessed.
  @Test
  void nonReflectiveCalleeMarksEnvNonReflectiveAndResolvesLoads() {
    assertOptimizationBehavior(
        """
        fun main() {
          () -+> V {
            mkenv;
            st x = <int 1>;
            p: p(V +) = prom<V +>{ t: V = ld x; return t; };
            f< p(V +) -+> V >(p);
            r: V = ld x;
            popenv;
            return r;
          }
        }

        fun f(r) {
          (reg r:p(V +)) -+> V { v: V = force r; return v; }
        }
        """,
        printed -> {
          assertTrue(
              printed.contains("mkenv~"),
              "env should be marked non-reflective; printed:\n" + printed);
          assertFalse(printed.contains("mkenv-"), "env should not be elided; printed:\n" + printed);
          assertFalse(
              printed.contains("ld x"),
              "loads should be resolved to the stored constant; printed:\n" + printed);
        },
        printed -> {
          assertFalse(printed.contains("st x"), "store should be elided; printed:\n" + printed);
          assertTrue(printed.contains("mkenv-"), "env should be elided; printed:\n" + printed);
        });
  }

  /// Same as [#nonReflectiveCalleeMarksEnvNonReflectiveAndResolvesLoads], but the callee
  /// reflectively reads the promise's environment. The reflective access is recorded, so the
  /// `mkenv` stays regular and the loads can't be resolved (the reflective callee may have changed
  /// the binding).
  @Test
  void reflectiveCalleeKeepsEnvReflectiveAndLeavesLoads() {
    assertOptimizationBehavior(
        """
        fun main() {
          () -+> V {
            mkenv;
            st x = <int 1>;
            p: p(V +) = prom<V +>{ t: * = ld x; return t; };
            f< p(V +) -+> V >(p);
            r: * = ld x;
            popenv;
            return r;
          }
        }

        fun f(r) {
          (reg r:p(V +)) -+> V { v: * = r$x; return v; }
        }
        """,
        printed -> {
          assertFalse(
              printed.contains("mkenv~"),
              "reflectively-accessed env should stay regular; printed:\n" + printed);
          assertFalse(
              printed.contains("mkenv-"),
              "reflectively-accessed env should not be elided; printed:\n" + printed);
          assertTrue(
              printed.contains("t: * = ld x"),
              "first load should not be resolved while reflective; printed:\n" + printed);
          assertTrue(
              printed.contains("r: * = ld x"),
              "second load should not be resolved while reflective; printed:\n" + printed);
        },
        printed -> {
          assertTrue(
              printed.contains("st x"),
              "reflectively-accessed store should not be elided; printed:\n" + printed);
          assertFalse(
              printed.contains("mkenv~"),
              "reflectively-accessed env should stay regular; printed:\n" + printed);
          assertFalse(
              printed.contains("mkenv-"),
              "reflectively-accessed env should not be elided; printed:\n" + printed);
        });
  }

  /// Same as [#nonReflectiveCalleeMarksEnvNonReflectiveAndResolvesLoads], but the promise stores,
  /// and it may or may not have been forced, so the second load can't be resolved.
  @Test
  void nonReflectiveCalleeMarksEnvNonReflectiveAndDoesntResolveMaybeStoredLoad() {
    assertOptimizationBehavior(
        """
        fun main() {
          () -+> V {
            mkenv;
            st x = <int 1>;
            p: p(V +) = prom<V +>{ st x = <int 2>; t: V = ld x; return t; };
            f< p(V +) -+> V >(p);
            r: * = ld x;
            popenv;
            return r;
          }
        }

        fun f(r) {
          (reg r:p(V +)) -+> V { v: V = force r; return v; }
        }
        """,
        printed -> {
          assertTrue(
              printed.contains("mkenv~"),
              "env should be marked non-reflective; printed:\n" + printed);
          assertFalse(printed.contains("mkenv-"), "env should not be elided; printed:\n" + printed);
          assertFalse(
              printed.contains("t: V = ld x"),
              "first load should be resolved after definite store; printed:\n" + printed);
          assertTrue(
              printed.contains("ld x"),
              "second load should not be resolved after maybe-store; printed:\n" + printed);
        },
        printed -> {
          assertTrue(
              printed.contains("st x = <int 1>"),
              "first store should not be elided; printed:\n" + printed);
          assertTrue(
              printed.contains("st x = <int 2>"),
              "second store should not be elided; printed:\n" + printed);
          assertFalse(printed.contains("mkenv-"), "env should not be elided; printed:\n" + printed);
        });
  }

  /// Same as [#nonReflectiveCalleeMarksEnvNonReflectiveAndDoesntResolveMaybeStoredLoad], but the
  /// promise is strict, so the second load can be resolved.
  @Test
  void nonReflectiveCalleeMarksEnvNonReflectiveAndResolvesDefinitelyStoredLoad() {
    assertOptimizationBehavior(
        """
        fun main() {
          () -+> V {
            mkenv;
            st x = <int 1>;
            p: p(V +) = prom<V +>{ st x = <int 2>; t: V = ld x; return t; };
            f< p(V +)@! -+> V >(p);
            r: V = ld x;
            popenv;
            return r;
          }
        }

        fun f(r) {
          (reg r:p(V +)@!) -+> V { v: V = force r; return v; }
        }
        """,
        printed -> {
          assertTrue(
              printed.contains("mkenv~"),
              "env should be marked non-reflective; printed:\n" + printed);
          assertFalse(printed.contains("mkenv-"), "env should not be elided; printed:\n" + printed);
          assertFalse(
              printed.contains("t = ld x"),
              "first load should be resolved after definite store; printed:\n" + printed);
          assertFalse(
              printed.contains("r = ld x"),
              "second load should be resolved after the strict promise's definite store; printed:\n"
                  + printed);
        },
        printed -> {
          assertFalse(printed.contains("st x"), "stores should be elided; printed:\n" + printed);
          assertTrue(printed.contains("mkenv-"), "env should be elided; printed:\n" + printed);
        });
  }

  /// Like [#nonReflectiveCalleeMarksEnvNonReflectiveAndResolvesLoads] but the environment has no
  /// loads or stores (still elides)
  @Test
  void nonReflectiveCalleeWithoutStoresElidesEnv() {
    assertOptimizationBehavior(
        """
        fun main() {
          () -+> V {
            mkenv;
            p: p(V +) = prom<V +>{ return <int 3>; };
            f< p(V +) -+> V >(p);
            popenv;
            return <int 0>;
          }
        }

        fun f(r) {
          (reg r:p(V +)) -+> V { v: V = force r; return v; }
        }
        """,
        printed ->
            assertTrue(
                printed.contains("mkenv~"), "env should be speculated; printed:\n" + printed),
        printed ->
            assertTrue(printed.contains("mkenv-"), "env should be elided; printed:\n" + printed));
  }

  /// Like [#reflectiveCalleeKeepsEnvReflectiveAndLeavesLoads()] but the environment has no
  /// loads or stores (still doesn't elide)
  @Test
  void reflectiveCalleeWithoutStoresKeepsEnv() {
    assertOptimizationBehavior(
        """
        fun main() {
          () -+> V {
            mkenv;
            p: p(V +) = prom<V +>{ return <int 3>; };
            f< p(V +) -+> V >(p);
            popenv;
            return <int 0>;
          }
        }

        fun f(r) {
          (reg r:p(V +)) -+> V { r$x = <int 9>; v: V = r$x; return v; }
        }
        """,
        printed -> {
          assertFalse(
              printed.contains("mkenv~"),
              "reflectively-accessed env should stay regular; printed:\n" + printed);
          assertFalse(
              printed.contains("mkenv-"),
              "reflectively-accessed env should not be elided; printed:\n" + printed);
        },
        printed -> {
          assertFalse(
              printed.contains("mkenv~"),
              "reflectively-accessed env should stay regular; printed:\n" + printed);
          assertFalse(
              printed.contains("mkenv-"),
              "reflectively-accessed env should not be elided; printed:\n" + printed);
        });
  }
}
