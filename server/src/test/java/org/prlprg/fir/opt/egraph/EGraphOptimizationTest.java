package org.prlprg.fir.opt.egraph;

import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.opt.AbstractionOptimization;
import org.prlprg.fir.opt.AbstractionOptimizationUnitTest;
import org.prlprg.parseprint.Printer;

class EGraphOptimizationTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new EGraphOptimization();
  }

  @Test
  void duplicatePureCallInSameBlock_reusesFirstResult() {
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
    assertTrue(printed.contains("return r1;"), "duplicate call should reuse r1; got:\n" + printed);
    assertFalse(printed.contains("return r2;"), "duplicate call should not return r2:\n" + printed);
  }

  @Test
  void duplicatePureCallInDominatedBlock_reusesDominatorResult() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:I) --> v1(I) { reg r1:v1(I), reg r2:v1(I) |
              r1 = box< I --> v1(I) >(x);
              goto L1();
            L1():
              r2 = box< I --> v1(I) >(x);
              return r2;
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertTrue(
        printed.contains("return r1;"), "dominated duplicate should reuse r1; got:\n" + printed);
    assertFalse(
        printed.contains("return r2;"), "dominated duplicate should not return r2:\n" + printed);
  }

  @Test
  void duplicatePureCallsInSiblingBranches_areNotMerged() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:I, reg cond:B) --> v1(I) { reg r1:v1(I), reg r2:v1(I), reg out:v1(I) |
              if cond then L1() else L2();
            L1():
              r1 = box< I --> v1(I) >(x);
              goto L3(r1);
            L2():
              r2 = box< I --> v1(I) >(x);
              goto L3(r2);
            L3(out):
              return out;
            }
            """);

    assertFalse(run(abstraction), "sibling definitions do not dominate each other");

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("goto L3(r1);"), "L1 should still pass r1; got:\n" + printed);
    assertTrue(printed.contains("goto L3(r2);"), "L2 should still pass r2; got:\n" + printed);
  }

  @Test
  void zeroCostAliasEnablesCascadedDuplicateDiscovery() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:I) --> v1(I) { reg alias:I, reg r1:v1(I), reg r2:v1(I) |
              r1 = box< I --> v1(I) >(x);
              alias = x;
              r2 = box< I --> v1(I) >(alias);
              return r2;
            }
            """);

    assertTrue(run(abstraction), "alias-canonicalized duplicate should change");

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("return r1;"), "duplicate should reuse r1; got:\n" + printed);
    assertFalse(printed.contains("return r2;"), "duplicate should not return r2:\n" + printed);
  }
}
