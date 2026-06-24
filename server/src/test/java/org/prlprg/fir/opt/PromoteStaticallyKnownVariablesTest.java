package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.parseprint.Printer;

class PromoteStaticallyKnownVariablesTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new PromoteStaticallyKnownVariables();
  }

  @Test
  void branchMerge_promotesVariableIntoPhi() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg cond:B) --> I { var x:I, reg x1:I, reg x2:I |
              mkenv;
              if cond then L1() else L2();
            L1():
              st x = 1;
              goto L3();
            L2():
              st x = 2;
              goto L3();
            L3():
              x1 = ld x;
              return x1;
            }
            """);

    assertTrue(run(abstraction), "branch merge should be promoted");

    var printed = Printer.toString(abstraction);
    assertNoVariableTraffic(printed, "x");
    assertFalse(printed.contains("var x:"), "named variable should be removed:\n" + printed);
    assertTrue(printed.contains("L3("), "merge block should receive a phi parameter:\n" + printed);
    assertTrue(printed.contains("goto L3("), "predecessors should pass phi arguments:\n" + printed);
  }

  @Test
  void repeatedMerges_insertPhiAtEachMergePoint() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg cond1:B, reg cond2:B) --> I { var x:I, reg x1:I |
              mkenv;
              st x = 0;
              if cond1 then L1() else L2();
            L1():
              st x = 1;
              goto L3();
            L2():
              st x = 2;
              goto L3();
            L3():
              if cond2 then L4() else L5();
            L4():
              st x = 3;
              goto L6();
            L5():
              goto L6();
            L6():
              x1 = ld x;
              return x1;
            }
            """);

    assertTrue(run(abstraction), "both merge points should be promoted");

    var printed = Printer.toString(abstraction);
    assertNoVariableTraffic(printed, "x");
    assertTrue(printed.contains("L3("), "first merge should have a phi:\n" + printed);
    assertTrue(printed.contains("L6("), "second merge should have a phi:\n" + printed);
    assertTrue(
        ParseUtil.countOccurrences(printed, "goto L3(") >= 2,
        "both predecessors should pass values into the first phi:\n" + printed);
    assertTrue(
        ParseUtil.countOccurrences(printed, "goto L6(") >= 2,
        "both predecessors should pass values into the second phi:\n" + printed);
  }

  @Test
  void loopHeader_getsPhiWhenBackedgeChangesValue() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg cond1:B, reg cond2:B) --> I { var x:I, reg x1:I |
              mkenv;
              st x = 0;
              goto Loop();
            Loop():
              if cond1 then Guard() else Exit();
            Guard():
              check Body() else Deopt();
            Body():
              st x = 1;
              if cond2 then Loop() else Exit();
            Exit():
              x1 = ld x;
              return x1;
            Deopt():
              deopt 0 [];
            }
            """);

    assertTrue(run(abstraction), "loop header should get a phi");

    var printed = Printer.toString(abstraction);
    assertNoVariableTraffic(printed, "x");
    assertTrue(printed.contains("Loop("), "loop header should have a phi parameter:\n" + printed);
    assertTrue(
        printed.contains("goto Loop("),
        "entry and backedge should pass phi arguments:\n" + printed);
  }

  @Test
  void reflectiveCfg_isLeftUnchanged() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            () -+> I { reg g:V, var x:I, reg x1:I |
              mkenv;
              st x = 0;
              g = ldf g;
              x1 = ld x;
              return x1;
            }
            """);

    assertFalse(run(abstraction), "reflective CFG should not be promoted");

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("var x:I"), "named variable should remain:\n" + printed);
    assertTrue(printed.contains("st x = 0"), "store should remain:\n" + printed);
    assertFalse(printed.contains("Exit("), "promotion should not insert phis:\n" + printed);
  }

  private static void assertNoVariableTraffic(String printed, String variable) {
    assertFalse(printed.contains("st " + variable + " ="), "store should be removed:\n" + printed);
    assertFalse(printed.contains("ld " + variable), "load should be removed:\n" + printed);
  }
}
