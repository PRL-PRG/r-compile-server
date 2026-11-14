package org.prlprg.fir.check;

import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;

import org.intellij.lang.annotations.Language;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.parseprint.Printer;

class ProvenanceCheckerTest {
  /// `d` keeps a reference to `a`, so `%s` after it would change `d`'s element.
  @Language("FIR")
  private static final String SHARE_TEMPLATE =
      """
      (x:v(I)) -+> V {
        a: v(I)o = dup x;
        d: dots = dots[a];
        %s
        r: V = sum< dots,miss -+> V >(d, <missing>);
        return r;
      }
      """;

  /// A loop that runs `%s` (where `a` is owned) and then `consume`s `a`.
  @Language("FIR")
  private static final String LOOP_TEMPLATE =
      """
      (x:v(I), n:I) -+> v1(I) {
        a0: v(I)o = dup x;
        goto LOOP(0);
      LOOP(i: I):
        c: L = `<`< I,I --> L >(i, n);
        b: B = naToFalse< L --> B >(c);
        if b then BODY() else EXIT();
      BODY():
        %s
        w: v(I)o = dup consume a;
        w[0] = 1;
        i2: I = `+`< I,I --> I >(i, 1);
        goto LOOP(i2);
      EXIT():
        r: v1(I) = box< I --> v1(I) >(i);
        return r;
      }
      """;

  /// Each iteration defines a new `a`, which the `consume` of the previous iteration doesn't touch.
  @Test
  void consumeInTheLoopThatDefines_isOk() {
    assertFalse(hasErrors(LOOP_TEMPLATE.formatted("a: v(I)o = dup x;")));
  }

  @Test
  void consumeInALoopOfAnEarlierDefinition_isAnError() {
    assertTrue(hasErrors(LOOP_TEMPLATE.replace("a0:", "a:").formatted("")));
  }

  @Test
  void consumeAfterCaptureInTheLoopThatDefines_isAnError() {
    assertTrue(
        hasErrors(
            LOOP_TEMPLATE.formatted(
                """
                a: v(I)o = dup x;
                  p: p(v(I) -) = prom<v(I) ->{
                    return a;
                  };
                """)));
  }

  /// The loop moves the captured vector back into the phi `a`, so its next definition doesn't end
  /// the capture.
  @Test
  void consumeOfAPhiCapturedInAnEarlierIteration_isAnError() {
    assertTrue(
        hasErrors(
            """
            (x:v(I), n:I) -+> v1(I) {
              a0: v(I)o = dup x;
              goto LOOP(a0, 0);
            LOOP(a: v(I)o, i: I):
              c: L = `<`< I,I --> L >(i, n);
              b: B = naToFalse< L --> B >(c);
              if b then BODY() else EXIT();
            BODY():
              p: p(v1(I) -) = prom<v1(I) ->{
                e: I = a[0];
                eb: v1(I) = box< I --> v1(I) >(e);
                return eb;
              };
              i2: I = `+`< I,I --> I >(i, 1);
              goto LOOP(a, i2);
            EXIT():
              w: v(I)o = dup consume a;
              r: v1(I) = box< I --> v1(I) >(i);
              return r;
            }
            """));
  }

  /// The caller can write `x` in place after the call, which would change the returned list.
  @Test
  void shareOfBorrowed_isAnError() {
    assertTrue(
        hasErrors(
            """
            (x:v(I)b) -+> V {
              d: dots = dots[x];
              r: V = list< dots -+> V >(d);
              return r;
            }
            """));
  }

  @Test
  void writeOrConsumeAfterShare_isAnError() {
    assertFalse(hasErrors(SHARE_TEMPLATE.formatted("e: I = a[0];")), "a read is ok");
    assertTrue(hasErrors(SHARE_TEMPLATE.formatted("a[0] = 1;")), "a write is an error");
    assertTrue(
        hasErrors(SHARE_TEMPLATE.formatted("w: v(I)o = dup consume a;")), "a consume is an error");
  }

  /// The `st` hands `y` off to the interpreter, so the write would change the binding `z`.
  @Test
  void writeAfterAHandOff_isAnError() {
    assertTrue(
        hasErrors(
            """
            (x:v(I)) -+> v1(I) {
              mkenv;
              y: v(I)o = dup x;
              check L1() else D0();
            L1():
              popenv;
              r: v1(I) = box< I --> v1(I) >(1);
              return r;
            D0():
              st z = y;
              y[0] = 5;
              deopt 0 [];
            }
            """));
  }

  private static boolean hasErrors(@Language("FIR") String source) {
    var abstraction = ParseUtil.parseAbstraction(source);
    var checker = new ProvenanceChecker();
    checker.run(null, abstraction);
    if (checker.hasErrors()) {
      System.err.println("Errors in:\n" + Printer.toString(abstraction) + "\n" + checker.errors());
    }
    return checker.hasErrors();
  }
}
