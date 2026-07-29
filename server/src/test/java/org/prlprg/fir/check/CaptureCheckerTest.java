package org.prlprg.fir.check;

import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;

import org.intellij.lang.annotations.Language;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.parseprint.Printer;

class CaptureCheckerTest {
  /// A version whose promise reads `a` (defined in the outer frame). `%s` is the promise's local
  /// marker (`-` for local, empty for non-local).
  @Language("FIR")
  private static final String CAPTURING_TEMPLATE =
      """
      () -+> v1(I) {
        a: v1(I) = box< I --> v1(I) >(1);
        p: p(v1(I) -) = prom%s<v1(I) ->{ return a; };
        r: v1(I) = force p;
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
            () -+> v1(I) {
              p: p(v1(I) -) = prom<v1(I) ->{ return <int 5>; };
              r: v1(I) = force p;
              return r;
            }
            """),
        "a non-local promise that reads no captures is fine");
  }

  @Test
  void nonLocalPromiseReadingOwnLocal_ok() {
    // `x` is declared at the version level but defined *inside* the promise, so it's not a capture.
    assertFalse(
        hasErrors(
            """
            () -+> v1(I) {
              p: p(v1(I) -) = prom<v1(I) ->{ x: v1(I) = box< I --> v1(I) >(2); return x; };
              r: v1(I) = force p;
              return r;
            }
            """),
        "a non-local promise reading a register it defines itself is fine");
  }

  @Test
  void nestedNonLocalPromiseReadingOuterCapture_reportsError() {
    // `a` is defined in the outermost frame and read in the doubly-nested `pin`, so it's a capture
    // of `pin` (whose innermost CFG differs from where `a` is defined), not of `pout`.
    assertTrue(
        hasErrors(
            """
            () -+> v1(I) {
              a: v1(I) = box< I --> v1(I) >(1);
              pout: p(v1(I) -) = prom<v1(I) ->{
                pin: p(v1(I) -) = prom<v1(I) ->{ return a; };
                ri: v1(I) = force pin;
                return ri;
              };
              r: v1(I) = force pout;
              return r;
            }
            """),
        "a non-local promise nested inside another that reads an outer capture should be an error");
  }

  @Test
  void nestedLocalPromiseReadingOuterCapture_ok() {
    // Only the inner promise reads the capture `a`, and it's local, so it may. The outer promise
    // reads no captures of its own (the use of `a` belongs to the inner promise's CFG).
    assertFalse(
        hasErrors(
            """
            () -+> v1(I) {
              a: v1(I) = box< I --> v1(I) >(1);
              pout: p(v1(I) -) = prom<v1(I) ->{
                pin: p(v1(I) -) = prom-<v1(I) ->{ return a; };
                ri: v1(I) = force pin;
                return ri;
              };
              r: v1(I) = force pout;
              return r;
            }
            """),
        "a local inner promise may read a capture; the non-local outer promise reads none itself");
  }

  private static boolean hasErrors(@Language("FIR") String source) {
    var abstraction = ParseUtil.parseAbstraction(source);
    var checker = new CaptureChecker();
    checker.run(null, abstraction);
    if (checker.hasErrors()) {
      // Print for debugging visibility on failure.
      System.err.println("Errors in:\n" + Printer.toString(abstraction));
    }
    return checker.hasErrors();
  }
}
