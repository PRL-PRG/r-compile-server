package org.prlprg.fir.opt.specialize;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.opt.AbstractionOptimization;
import org.prlprg.fir.opt.AbstractionOptimizationUnitTest;
import org.prlprg.fir.opt.Specialize;
import org.prlprg.parseprint.Printer;

class DefiniteForceTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new Specialize(new DefiniteForce());
  }

  @Test
  void knownPromise_maybeForceBecomesDefinite() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (p:p(v1(I) -)) -~> v1(I) {
              v: v1(I) = force? p;
              return v;
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertFalse(
        printed.contains("force?"),
        "maybe-force of a statically-known promise should become a definite force; printed:\n"
            + printed);
    assertTrue(
        printed.contains("force "), "the force should remain, but definite; printed:\n" + printed);
  }

  @Test
  void knownValue_maybeForceIsForwarded() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (x:v1(I)) -~> v1(I) {
              v: v1(I) = force? x;
              return v;
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertFalse(
        printed.contains("force"),
        "maybe-force of a statically-known value should be forwarded (elided); printed:\n"
            + printed);
  }

  @Test
  void maybePromise_notStrengthened() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (p:p?(v1(I) -)) -~> v1(I) {
              v: v1(I) = force? p;
              return v;
            }
            """);

    run(abstraction);

    var printed = Printer.toString(abstraction);
    assertTrue(
        printed.contains("force?"),
        "maybe-force of a maybe-promise must stay a maybe-force; printed:\n" + printed);
  }

  /// `bench_shootout_binarytrees_naive` `tree`: the promise for `depth - 1` forces `depth` again.
  @Test
  void forceInLocalPromise_dominatedByForceOfSameParameter_forwarded() {
    var abstraction = promiseForcing("prom-", "d2: v1(R) = force? depth;");
    assertTrue(run(abstraction), "optimization should report a change");
    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("return d1;"), "the promise should return d1:\n" + printed);
    assertFalse(printed.contains("force? depth"), "the force should be gone:\n" + printed);
  }

  @Test
  void forceThroughAssumeChain_forwarded() {
    var abstraction =
        promiseForcing(
            "prom-", "a: p?(v1(R) -) = depth ?: p?(v1(R) -);\n    d2: v1(R) = force? a;");
    assertTrue(run(abstraction), "optimization should report a change");
    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("return d1;"), "the promise should return d1:\n" + printed);
  }

  @Test
  void forceInNonLocalPromise_notForwarded() {
    // A non-local promise can't capture `d1`.
    var abstraction = promiseForcing("prom", "d2: v1(R) = force? depth;");
    run(abstraction);
    var printed = Printer.toString(abstraction);
    assertFalse(printed.contains("return d1;"), "the force should stay:\n" + printed);
  }

  @Test
  void forceNotDominated_notForwarded() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (c:B, depth:p(v1(R) -)) -~> v1(R) {
              if c then L1() else L2();
            L1():
              d1: v1(R) = force depth;
              goto L3();
            L2():
              goto L3();
            L3():
              d2: v1(R) = force depth;
              return d2;
            }
            """);
    run(abstraction);
    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("return d2;"), "the force should stay:\n" + printed);
  }

  @Test
  void forceWithNarrowerType_notForwarded() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (depth:*) -~> V {
              d1: V = force? depth;
              a: p(v1(R) -) = depth ?: p(v1(R) -);
              d2: v1(R) = force a;
              return d2;
            }
            """);
    run(abstraction);
    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("return d2;"), "the force should stay:\n" + printed);
  }

  @Test
  void secondForceInSameBlock_forwarded() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (depth:p(v1(R) -)) -~> v1(R) {
              d1: v1(R) = force depth;
              d2: v1(R) = force depth;
              return d2;
            }
            """);
    assertTrue(run(abstraction), "optimization should report a change");
    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("return d1;"), "the second force should be d1:\n" + printed);
  }

  /// `bench_awf_mandelbrot`: the promise of `bitwXor(sum, byteAcc)` loads `sum`, which this
  /// version only binds to values.
  @Test
  void loadOfValueOnlyVariableInPromise_cast() {
    var abstraction = ParseUtil.parseAbstraction(promiseLoading("~", "st x = <real 0.0>;"));
    assertTrue(run(abstraction), "optimization should report a change");
    var printed = Printer.toString(abstraction);
    assertFalse(printed.contains("force?"), "the maybe-force should be gone:\n" + printed);
    assertTrue(printed.contains(" as V;"), "the force should be a cast:\n" + printed);
  }

  @Test
  void loadInRegularEnv_notCast() {
    assertMaybeForceStays(ParseUtil.parseAbstraction(promiseLoading("", "st x = <real 0.0>;")));
  }

  /// The closure can store a promise into `x` with `st-super`.
  @Test
  void loadWithNonStaticClosure_notCast() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(y, c) {
              (y:*, c:B) -+> V { ... }
            %s
            }

            fun target() {
              () --> I {
                return 1;
              }
            }
            """
                .formatted(promiseLoading("~", "st x = <real 0.0>;\n  f: cls = clos target;")));
    run(module);
    var printed = Printer.toString(module);
    assertTrue(printed.contains("force?"), "the maybe-force should stay:\n" + printed);
  }

  @Test
  void loadOfVariableWithPromiseStore_notCast() {
    assertMaybeForceStays(
        ParseUtil.parseAbstraction(promiseLoading("~", "st x = <real 0.0>;\n  st x = y;")));
  }

  @Test
  void loadOfVariableWithSuperStore_notCast() {
    assertMaybeForceStays(
        ParseUtil.parseAbstraction(
            promiseLoading("~", "st x = <real 0.0>;\n  st-super x = <real 1.0>;")));
  }

  @Test
  void loadNotDominatedByStore_notCast() {
    assertMaybeForceStays(
        ParseUtil.parseAbstraction(
            promiseLoading(
                "~",
                """
                if c then L1() else L2();
                L1():
                  st x = <real 0.0>;
                  goto L3();
                L2():
                  goto L3();
                L3():\
                """)));
  }

  private void assertMaybeForceStays(Abstraction abstraction) {
    run(abstraction);
    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("force?"), "the maybe-force should stay:\n" + printed);
  }

  /// Makes an environment (`env` is its kind: `~` or empty), runs `beforePromise`, then forces a
  /// promise that loads `x` and maybe-forces it.
  private static String promiseLoading(String env, String beforePromise) {
    return """
        (y:*, c:B) -+> V {
          mkenv%s;
          %s
          p: p(V +) = prom<V +>{
            x1: * = ld x;
            x2: V = force? x1;
            return x2;
          };
          v: V = force p;
          popenv;
          return v;
        }
        """
        .formatted(env, beforePromise);
  }

  /// Forces `depth`, then makes a promise (`promise` is `prom-` or `prom`) whose body runs
  /// `forcing`, which forces `depth` into `d2`, and returns `d2`.
  private static Abstraction promiseForcing(String promise, String forcing) {
    return ParseUtil.parseAbstraction(
        """
        (depth:p(v1(R) -)) -~> p(v1(R) -) {
          d1: v1(R) = force depth;
          q: p(v1(R) -) = %s<v1(R) ->{
            %s
            return d2;
          };
          return q;
        }
        """
            .formatted(promise, forcing));
  }
}
