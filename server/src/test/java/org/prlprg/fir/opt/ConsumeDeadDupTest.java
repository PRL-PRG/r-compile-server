package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.parseprint.Printer;

class ConsumeDeadDupTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new ConsumeDeadDup();
  }

  @Test
  void dupOfDeadOwnedVector_consumes() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg rv:v(I)o) --> v(I)f {
              d: v(I)o = dup rv;
              d[0] = 1;
              return consume d;
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("dup consume rv"), "the dup should consume:\n" + printed);
  }

  @Test
  void dupOfLaterUsedOwnedVector_unchanged() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg rv:v(I)o) --> I {
              d: v(I)o = dup rv;
              d[0] = 1;
              r: I = rv[0];
              return r;
            }
            """);

    assertFalse(run(abstraction), "the vector is read after the dup");

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("dup rv"), "the dup shouldn't consume:\n" + printed);
  }

  @Test
  void dupOfBorrowedVector_unchanged() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg rv:v(I)b) --> v(I)f {
              d: v(I)o = dup rv;
              d[0] = 1;
              return consume d;
            }
            """);

    assertFalse(run(abstraction), "a borrowed vector can't be consumed");

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("dup rv"), "the dup shouldn't consume:\n" + printed);
  }

  @Test
  void dupOfVectorCapturedByPromise_unchanged() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg rv:v(I)o) -~> v(I)f {
              p: p(I -) = prom<I ->{
                r1: I = rv[0];
                return r1;
              };
              d: v(I)o = dup rv;
              d[0] = 1;
              r2: I = force p;
              return consume d;
            }
            """);

    assertFalse(run(abstraction), "a captured vector can't be consumed");

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("dup rv"), "the dup shouldn't consume:\n" + printed);
  }

  @Test
  void dupInLoop_unchanged() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg rv:v(I)o, reg cond:B) --> v(I)f {
              goto Loop();
            Loop():
              d: v(I)o = dup rv;
              d[0] = 1;
              if cond then Loop() else Done();
            Done():
              return consume d;
            }
            """);

    assertFalse(run(abstraction), "the next iteration reads the vector again");

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("dup rv"), "the dup shouldn't consume:\n" + printed);
  }
}
