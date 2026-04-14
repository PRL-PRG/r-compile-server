package org.prlprg.fir.opt.specialize;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.opt.AbstractionOptimization;
import org.prlprg.fir.opt.AbstractionOptimizationUnitTest;
import org.prlprg.parseprint.Printer;

class UnboxPhiTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new UnboxPhi();
  }

  @Test
  void phiWithV1Type_unboxed() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:v1(I)) --> v1(I) { reg y:v1(I) |
              goto L0(x);
            L0(y):
              return y;
            }
            """);

    assertTrue(run(abstraction), "should unbox v1(I) phi parameter");

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("unbox<"), "should insert unbox in predecessor; got:\n" + printed);
    assertTrue(
        printed.contains("box<"), "should insert box at target block entry; got:\n" + printed);
  }

  @Test
  void phiWithNonV1Type_notUnboxed() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:I) --> I { reg y:I |
              goto L0(x);
            L0(y):
              return y;
            }
            """);

    assertFalse(run(abstraction), "scalar phi should not be unboxed");
  }

  @Test
  void phiWithVectorType_notUnboxed() {
    // v(I) is a non-scalar vector, not v1(I).
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:v(I)) --> v(I) { reg y:v(I) |
              goto L0(x);
            L0(y):
              return y;
            }
            """);

    assertFalse(run(abstraction), "non-scalar vector phi should not be unboxed");
  }

  @Test
  void multiplePredecessors_eachGetsUnbox() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg c:B, reg x:v1(I), reg z:v1(I)) --> v1(I) { reg y:v1(I) |
              if c then L0(x) else L0(z);
            L0(y):
              return y;
            }
            """);

    assertTrue(run(abstraction), "should unbox phi with multiple predecessors");

    var printed = Printer.toString(abstraction);
    assertEquals(
        2, countUnboxOccurrences(printed), "should insert one unbox per target; got:\n" + printed);
    assertTrue(printed.contains("box<"), "should insert box at target entry; got:\n" + printed);
  }

  @Test
  void idempotent_afterUnbox_noFurtherChange() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:v1(I)) --> v1(I) { reg y:v1(I) |
              goto L0(x);
            L0(y):
              return y;
            }
            """);

    assertTrue(run(abstraction), "first run should unbox");
    assertFalse(run(abstraction), "second run should be a no-op");
  }

  @Test
  void phiArgumentReused_isPreserved() {
    // The phi receives the same boxed argument `x` from an if-both-branches target; the
    // optimization should still insert a single unbox per distinct argument (implementation
    // detail: per (pred, arg) pair, not per target).
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg c:B, reg x:v1(I)) --> v1(I) { reg y:v1(I) |
              if c then L0(x) else L0(x);
            L0(y):
              return y;
            }
            """);

    assertTrue(run(abstraction), "should unbox phi");

    var printed = Printer.toString(abstraction);
    // One distinct arg => one unbox in the predecessor.
    assertEquals(
        1,
        countUnboxOccurrences(printed),
        "should insert one unbox for a shared arg; got:\n" + printed);
  }

  private static int countUnboxOccurrences(String text) {
    var count = 0;
    var idx = 0;
    while ((idx = text.indexOf("unbox<", idx)) != -1) {
      count++;
      idx += "unbox<".length();
    }
    return count;
  }
}
