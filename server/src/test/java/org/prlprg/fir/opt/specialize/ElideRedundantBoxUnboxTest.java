package org.prlprg.fir.opt.specialize;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.opt.AbstractionOptimization;
import org.prlprg.fir.opt.AbstractionOptimizationUnitTest;
import org.prlprg.parseprint.Printer;

class ElideRedundantBoxUnboxTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new ElideRedundantBoxUnbox();
  }

  @Test
  void exampleBoxThenUnbox_reusesOriginal() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:I) --> I { reg r1:v1(I), reg r2:I |
              r1 = box< I --> v1(I) >(x);
              r2 = unbox< v1(I) --> I >(r1);
              return r2;
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("return x;"), "box/unbox chain should return x; got:\n" + printed);
    assertFalse(
        printed.contains("return r2;"), "box/unbox chain should not return r2; got:\n" + printed);
  }

  @Test
  void exampleDuplicateBox_reusesFirstBox() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:I) --> v1(I) { reg r1:v1(I), reg r2:v1(I) |
              r1 = box< I --> v1(I) >(x);
              r2 = box< I --> v1(I) >(x);
              return r2;
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("return r1;"), "duplicate box should return r1; got:\n" + printed);
    assertFalse(
        printed.contains("return r2;"), "duplicate box should not return r2; got:\n" + printed);
  }

  @Test
  void unboxThenBox_reusesOriginal() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:I) --> v1(I) { reg r1:v1(I), reg r2:I, reg r3:v1(I) |
              r1 = box< I --> v1(I) >(x);
              r2 = unbox< v1(I) --> I >(r1);
              r3 = box< I --> v1(I) >(r2);
              return r3;
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertTrue(
        printed.contains("return r1;"), "unbox/box chain should return r1; got:\n" + printed);
    assertFalse(
        printed.contains("return r3;"), "unbox/box chain should not return r3; got:\n" + printed);
  }

  @Test
  void duplicateUnbox_elidesToEquivalentValue() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:I) --> I { reg boxed:v1(I), reg r1:I, reg r2:I |
              boxed = box< I --> v1(I) >(x);
              r1 = unbox< v1(I) --> I >(boxed);
              r2 = unbox< v1(I) --> I >(boxed);
              return r2;
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertTrue(
        printed.contains("return x;"),
        "duplicate unbox should return x after folding; got:\n" + printed);
    assertFalse(
        printed.contains("return r2;"), "duplicate unbox should not return r2; got:\n" + printed);
  }
}
