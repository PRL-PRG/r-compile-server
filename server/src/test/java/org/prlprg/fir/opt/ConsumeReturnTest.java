package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.parseprint.Printer;

class ConsumeReturnTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new ConsumeReturn();
  }

  @Test
  void returnsOwnedVector_consumes() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg rv:v(I)o) --> v(I) {
              rv[0] = 1;
              return rv;
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("return consume rv"), "the return should consume:\n" + printed);
  }

  @Test
  void returnsOwnedVectorOnEveryPath_consumesEach() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg rv:v(I)o, reg cond:B) --> v(I) {
              if cond then L0() else L1();
            L0():
              rv[0] = 1;
              return rv;
            L1():
              rv[1] = 2;
              return rv;
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertEquals(
        2,
        printed.split("return consume rv", -1).length - 1,
        "both returns should consume:\n" + printed);
  }

  @Test
  void returnsSharedVector_unchanged() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg rv:v(I)) --> v(I) {
              return rv;
            }
            """);

    assertFalse(run(abstraction), "a shared vector can't be consumed");
  }

  @Test
  void returnsVectorCapturedByPromise_unchanged() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg rv:v(I)o) -~> v(I) {
              p: p(I -) = prom<I ->{
                r1: I = rv[0];
                return r1;
              };
              r2: I = force p;
              return rv;
            }
            """);

    assertFalse(run(abstraction), "a captured vector can't be consumed");
  }

  @Test
  void alreadyConsumed_unchanged() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg rv:v(I)o) --> v(I)f {
              rv[0] = 1;
              return consume rv;
            }
            """);

    assertFalse(run(abstraction), "the return already consumes");
  }
}
