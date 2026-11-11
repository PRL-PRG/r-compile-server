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
