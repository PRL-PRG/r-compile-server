package org.prlprg.fir.opt.specialize;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.opt.AbstractionOptimization;
import org.prlprg.fir.opt.AbstractionOptimizationUnitTest;
import org.prlprg.fir.opt.Specialize;
import org.prlprg.parseprint.Printer;

class ElideEnvTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new Specialize(new ElideEnv());
  }

  @Test
  void noStoresNorReflective_elided() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            () --> I { reg r:I |
              mkenv;
              r = 0;
              popenv;
              return r;
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("mkenv-"), "mkenv should be elided; printed:\n" + printed);
    assertTrue(printed.contains("popenv"), "popenv should remain; printed:\n" + printed);
  }

  @Test
  void storePresent_notElided() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            () --> I { reg r:I, var x:I? |
              mkenv;
              r = 0;
              st x = r;
              popenv;
              return r;
            }
            """);

    run(abstraction);

    var printed = Printer.toString(abstraction);
    assertFalse(printed.contains("mkenv-"), "mkenv should not be elided; printed:\n" + printed);
    assertTrue(printed.contains("popenv"), "popenv should remain; printed:\n" + printed);
  }

  @Test
  void superStorePresent_notElided() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            () --> I { reg r:I, var x:I? |
              mkenv;
              r = 0;
              st-super x = r;
              popenv;
              return r;
            }
            """);

    run(abstraction);

    var printed = Printer.toString(abstraction);
    assertFalse(printed.contains("mkenv-"), "mkenv should not be elided; printed:\n" + printed);
    assertTrue(printed.contains("popenv"), "popenv should remain; printed:\n" + printed);
  }

  @Test
  void reflectivePresent_notElided() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            () -+> I { reg r:I, reg g:V |
              mkenv;
              r = 0;
              g = ldf g;
              popenv;
              return r;
            }
            """);

    run(abstraction);

    var printed = Printer.toString(abstraction);
    assertFalse(printed.contains("mkenv-"), "mkenv should not be elided; printed:\n" + printed);
    assertTrue(printed.contains("popenv"), "popenv should remain; printed:\n" + printed);
  }

  @Test
  void checkpointWithDeopt_elidedAndPopenvKept() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            () --> I { reg r:I |
              mkenv;
              r = 0;
              check L1() else L2();
            L1():
              popenv;
              return r;
            L2():
              deopt 5 [];
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("mkenv-"), "mkenv should be elided; printed:\n" + printed);
    assertTrue(printed.contains("popenv"), "popenv should remain; printed:\n" + printed);
    // The deopt branch should not get an extra mkenv: there's only the (elided) original.
    assertEquals(
        1,
        ParseUtil.countOccurrences(printed, "mkenv"),
        "no mkenv should be added; printed:\n" + printed);
  }

  @Test
  void storeInDeoptBranchOnly_elided() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            () --> I { reg r:I, var x:I? |
              mkenv;
              r = 0;
              check L1() else L2();
            L1():
              popenv;
              return r;
            L2():
              st x = r;
              deopt 5 [];
            }
            """);

    assertTrue(run(abstraction), "stores in deopt branches should be ignored");

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("mkenv-"), "mkenv should be elided; printed:\n" + printed);
    assertTrue(printed.contains("popenv"), "popenv should remain; printed:\n" + printed);
    assertEquals(
        1,
        ParseUtil.countOccurrences(printed, "mkenv"),
        "no mkenv should be added; printed:\n" + printed);
  }

  @Test
  void multipleCheckpoints_elidedWithoutAddedMkEnvs() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            () --> I { reg r:I |
              mkenv;
              r = 0;
              check L1() else D1();
            L1():
              check L2() else D2();
            L2():
              popenv;
              return r;
            D1():
              deopt 5 [];
            D2():
              deopt 6 [];
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("mkenv-"), "mkenv should be elided; printed:\n" + printed);
    assertTrue(printed.contains("D1"), "D1 should still exist; printed:\n" + printed);
    assertTrue(printed.contains("D2"), "D2 should still exist; printed:\n" + printed);
    // No mkenv should be added to the deopt branches: only the (elided) original remains.
    assertEquals(
        1,
        ParseUtil.countOccurrences(printed, "mkenv"),
        "no mkenv should be added; printed:\n" + printed);
  }
}
