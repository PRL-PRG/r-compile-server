package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.parseprint.Printer;

class ElideEnvTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new ElideEnv();
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
    assertFalse(printed.contains("mkenv"), "mkenv should be elided; printed:\n" + printed);
    assertFalse(printed.contains("popenv"), "popenv should be elided; printed:\n" + printed);
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

    assertFalse(run(abstraction), "optimization should not elide env with store");

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("mkenv"), "mkenv should remain; printed:\n" + printed);
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

    assertFalse(run(abstraction), "optimization should not elide env with super store");

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("mkenv"), "mkenv should remain; printed:\n" + printed);
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

    assertFalse(run(abstraction), "optimization should not elide env with reflective op");

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("mkenv"), "mkenv should remain; printed:\n" + printed);
    assertTrue(printed.contains("popenv"), "popenv should remain; printed:\n" + printed);
  }

  @Test
  void checkpointWithDeopt_elidedAndMkEnvPrepended() {
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
    assertFalse(printed.contains("popenv"), "popenv should be elided; printed:\n" + printed);
    // The deopt branch should have mkenv prepended
    assertTrue(printed.contains("mkenv"), "deopt branch should have mkenv; printed:\n" + printed);
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
    assertFalse(printed.contains("popenv"), "popenv should be elided; printed:\n" + printed);
    assertTrue(printed.contains("mkenv"), "deopt branch should have mkenv; printed:\n" + printed);
  }

  @Test
  void multipleCheckpoints_allDeoptBranchesGetMkEnv() {
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
    assertFalse(printed.contains("popenv"), "popenv should be elided; printed:\n" + printed);
    // Both deopt branches should have mkenv
    assertTrue(printed.contains("D1"), "D1 should still exist; printed:\n" + printed);
    assertTrue(printed.contains("D2"), "D2 should still exist; printed:\n" + printed);
    // Count mkenv occurrences: should be 2 (one per deopt branch)
    var mkenvCount = printed.split("mkenv", -1).length - 1;
    assertEquals(2, mkenvCount, "both deopt branches should have mkenv; printed:\n" + printed);
  }
}
