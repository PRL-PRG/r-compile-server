package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;
import static org.prlprg.fir.interpret.internal.Builtins.registerBuiltins;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.check.Checker;
import org.prlprg.fir.feedback.MockModuleFeedback;
import org.prlprg.fir.interpret.internal.InternalInterpreter;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.SEXPs;

class OwnPhiWebTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new OwnPhiWeb();
  }

  /// `y = dup x; for (k in 0..n-1) { w = dup vec; w[k] = k + 100 }; return <result>`, where `vec`
  // is
  /// the loop phi. `extra` is inserted in the body before the `dup`.
  private static String loop(
      String entryArgs, String phis, String extra, String backArgs, String result) {
    return """
        fun f(x, n) {
          (x:*, n:*) -+> V { ... }
          (x:v(I), n:I) -+> v(I) {
            y: v(I)o = dup x;
            goto H(%1$s);
          H(vec: v(I), k: I%2$s):
            c: L = `<`< I,I --> L >(k, n);
            b: B = naToFalse< L --> B >(c);
            if b then B1() else E();
          B1():
            %3$s
            w: v(I)o = dup vec;
            k2: I = `+`< I,I --> I >(k, 1);
            k3: I = `+`< I,I --> I >(k, 100);
            w[k] = k3;
            goto H(%4$s);
          E():
            return %5$s;
          }
        }
        """
        .formatted(entryArgs, phis, extra, backArgs, result);
  }

  @Test
  void loopThatWritesItsVector_dupIsRemoved() {
    var printed = assertSameResults(loop("y, 0", "", "", "w, k2", "vec"), true);
    assertFalse(printed.contains("dup vec"), printed);
    assertTrue(printed.contains("H(vec: v(I)o"), printed);
  }

  /// The sieve shape: an outer loop reads the vector, and an inner loop writes it.
  @Test
  void innerLoopThatWritesItsVector_dupIsRemoved() {
    var printed =
        assertSameResults(
            """
            fun f(x, n) {
              (x:*, n:*) -+> V { ... }
              (x:v(I), n:I) -+> v(I) {
                y: v(I)o = dup x;
                goto H(y, 0);
              H(vec: v(I), k: I):
                c: L = `<`< I,I --> L >(k, n);
                b: B = naToFalse< L --> B >(c);
                if b then B1() else E();
              B1():
                e: I = vec[k];
                goto Q(vec, e);
              Q(u: v(I), j: I):
                c2: L = `<`< I,I --> L >(j, n);
                b2: B = naToFalse< L --> B >(c2);
                if b2 then B2() else X();
              B2():
                w: v(I)o = dup u;
                w[j] = k;
                j2: I = `+`< I,I --> I >(j, 1);
                goto Q(w, j2);
              X():
                k2: I = `+`< I,I --> I >(k, 1);
                goto H(u, k2);
              E():
                return vec;
              }
            }
            """,
            true);
    assertFalse(printed.contains("dup u"), printed);
  }

  /// `old` and `vec` would be the same vector, so `old` would see the writes.
  @Test
  void phiArgumentTwiceInAJump_isLeftAlone() {
    assertSameResults(loop("y, 0, y", ", old: v(I)", "", "w, k2, old", "old"), false);
  }

  /// `y` is read after the loop, so it can't move into the loop.
  @Test
  void sourceLiveAfterTheJump_isLeftAlone() {
    assertSameResults(
        loop("y, 0", "", "", "w, k2", "consume z")
            .replace("return consume z;", "z: v(I)o = dup y;\n    return consume z;"),
        false);
  }

  /// `d2` keeps a reference to the first iteration's `w`, which then moves into the loop phi, so
  /// the later iterations would write it.
  @Test
  void sourceSharedBeforeTheJump_isLeftAlone() {
    assertSameResults(
        """
        fun f(x, n) {
          (x:*, n:*) -+> V { ... }
          (x:v(I), n:I) -+> V {
            y: v(I)o = dup x;
            d0: dots = dots[x];
            goto H(y, 0, d0);
          H(vec: v(I), k: I, d: dots):
            c: L = `<`< I,I --> L >(k, n);
            b: B = naToFalse< L --> B >(c);
            if b then B1() else E();
          B1():
            w: v(I)o = dup vec;
            k2: I = `+`< I,I --> I >(k, 1);
            k3: I = `+`< I,I --> I >(k, 100);
            w[k] = k3;
            z: L = `==`< I,I --> L >(k, 0);
            zb: B = naToFalse< L --> B >(z);
            if zb then K() else N();
          K():
            d2: dots = dots[w];
            goto H(w, k2, d2);
          N():
            goto H(w, k2, d);
          E():
            s: V = sum< dots,miss -+> V >(d, <missing>);
            return s;
          }
        }
        """,
        false);
  }

  /// `x` is the caller's vector: an in-place write would change it for the next call.
  @Test
  void sharedSource_isLeftAlone() {
    assertSameResults(loop("x, 0", "", "", "w, k2", "vec"), false);
  }

  /// `a` is a reference to `vec` that the loop keeps, and the next iteration writes `vec`.
  @Test
  void aliasInTheLoop_isLeftAlone() {
    assertSameResults(
        loop("y, 0, x", ", old: v(I)", "a: v(I) = vec ?: v(I);", "w, k2, a", "old"), false);
  }

  /// `d2` holds `vec` across the write of the same iteration.
  @Test
  void dotsElementInTheLoop_isLeftAlone() {
    assertSameResults(
        """
        fun f(x, n) {
          (x:*, n:*) -+> V { ... }
          (x:v(I), n:I) -+> V {
            y: v(I)o = dup x;
            d0: dots = dots[x];
            goto H(y, 0, d0);
          H(vec: v(I), k: I, d: dots):
            c: L = `<`< I,I --> L >(k, n);
            b: B = naToFalse< L --> B >(c);
            if b then B1() else E();
          B1():
            d2: dots = dots[vec];
            w: v(I)o = dup vec;
            k2: I = `+`< I,I --> I >(k, 1);
            k3: I = `+`< I,I --> I >(k, 100);
            w[k] = k3;
            goto H(w, k2, d2);
          E():
            s: V = sum< dots,miss -+> V >(d, <missing>);
            return s;
          }
        }
        """,
        false);
  }

  /// The promise reads `vec` when it's forced, after the write.
  @Test
  void captureInAPromise_isLeftAlone() {
    assertSameResults(
        """
        fun f(x, n) {
          (x:*, n:*) -+> V { ... }
          (x:v(I), n:I) -+> v1(I) {
            y: v(I)o = dup x;
            goto H(y, 0, 0);
          H(vec: v(I), k: I, acc: I):
            c: L = `<`< I,I --> L >(k, n);
            b: B = naToFalse< L --> B >(c);
            if b then B1() else E();
          B1():
            p: p(v1(I) -) = prom-<v1(I) ->{
              e: I = vec[0];
              eb: v1(I) = box< I --> v1(I) >(e);
              return eb;
            };
            w: v(I)o = dup vec;
            k2: I = `+`< I,I --> I >(k, 1);
            k3: I = `+`< I,I --> I >(k, 100);
            w[0] = k3;
            pv: v1(I) = force p;
            pe: I = unbox< v1(I) --> I >(pv);
            acc2: I = `+`< I,I --> I >(acc, pe);
            goto H(w, k2, acc2);
          E():
            r: v1(I) = box< I --> v1(I) >(acc);
            return r;
          }
        }
        """,
        false);
  }

  /// Run the pass, [ConsumeDeadDup] and [ElideConsumedDup], and check that `f` gives the same
  /// results before and after (2 calls on the same vector, so a write to it shows), and whether
  /// the pass changed the module. Return the module, printed.
  private String assertSameResults(String text, boolean changes) {
    var module = ParseUtil.parseModule(text);
    var before = results(module);
    var changed = run(module);
    new ConsumeDeadDup().run(new MockModuleFeedback(module), module);
    new ElideConsumedDup().run(new MockModuleFeedback(module), module);
    var printed = Printer.toString(module);
    assertEquals(before, results(module), printed);
    assertTrue(Checker.checkAll(module), "should type-check:\n" + printed);
    assertEquals(changes, changed, printed);
    return printed;
  }

  private static String results(Module module) {
    var interpreter = new InternalInterpreter(module);
    registerBuiltins(interpreter);
    var x = new Value.Sexp(SEXPs.integer(1, 2, 3, 4));
    var first = interpreter.call("f", x, new Value.Int(3));
    var second = interpreter.call("f", x, new Value.Int(2));
    return first + " " + second + " " + x;
  }
}
