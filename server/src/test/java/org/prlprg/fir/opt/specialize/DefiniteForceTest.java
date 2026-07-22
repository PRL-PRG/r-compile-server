package org.prlprg.fir.opt.specialize;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
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
            (reg p:p(v1(I) -)) -~> v1(I) {
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
            (reg x:v1(I)) -~> v1(I) {
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
            (reg p:p?(v1(I) -)) -~> v1(I) {
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
}
