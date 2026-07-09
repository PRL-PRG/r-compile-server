package org.prlprg.fir.check;

import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;

import org.intellij.lang.annotations.Language;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.parseprint.Printer;

class LocalPromiseCheckerTest {
  /// A version whose promise reads `a` (defined in the outer frame). `%s` is the promise's local
  /// marker (`-` for local, empty for non-local).
  @Language("FIR")
  private static final String CAPTURING_TEMPLATE =
      """
      () -+> v1(I) { reg a:v1(I), reg p:p(v1(I) -), reg r:v1(I) |
        a = <int 1>;
        p = prom%s<v1(I) ->{ return a; };
        r = force p;
        return r;
      }
      """;

  @Test
  void nonLocalPromiseReadingCapture_reportsError() {
    assertTrue(
        hasErrors(CAPTURING_TEMPLATE.formatted("")),
        "a non-local promise reading a capture should be an error");
  }

  @Test
  void localPromiseReadingCapture_ok() {
    assertFalse(hasErrors(CAPTURING_TEMPLATE.formatted("-")), "a local promise may read captures");
  }

  @Test
  void nonLocalPromiseWithoutCaptures_ok() {
    assertFalse(
        hasErrors(
            """
            () -+> v1(I) { reg p:p(v1(I) -), reg r:v1(I) |
              p = prom<v1(I) ->{ return <int 5>; };
              r = force p;
              return r;
            }
            """),
        "a non-local promise that reads no captures is fine");
  }

  private static boolean hasErrors(@Language("FIR") String source) {
    var abstraction = ParseUtil.parseAbstraction(source);
    var checker = new LocalPromiseChecker();
    checker.run(null, abstraction);
    if (checker.hasErrors()) {
      // Print for debugging visibility on failure.
      System.err.println("Errors in:\n" + Printer.toString(abstraction));
    }
    return checker.hasErrors();
  }
}
