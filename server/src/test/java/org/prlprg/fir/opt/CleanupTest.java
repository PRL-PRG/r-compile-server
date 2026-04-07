package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;

import java.util.Objects;
import org.junit.jupiter.api.Nested;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.instruction.Goto;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.parseprint.Printer;

class CleanupTest implements OptimizationUnitTest {
  @Override
  public Optimization optimization() {
    return new Cleanup();
  }

  // region Remove unreachable blocks

  @Nested
  class RemoveUnreachableBlocks {
    @Test
    void unreachableBlock_removed() {
      var module =
          ParseUtil.parseModule(
              """
              fun main(x) {
                (reg x:I) --> I { |
                  return x;
                Unreachable():
                  return x;
                }
              }
              """);

      assertTrue(run(module), "should remove unreachable block");

      var printed = Printer.toString(module);
      assertFalse(
          printed.contains("Unreachable"), "unreachable block should be removed; got:\n" + printed);
    }

    @Test
    void allBlocksReachable_unchanged() {
      var module =
          ParseUtil.parseModule(
              """
              fun main(x) {
                (reg x:I) --> I { |
                  goto L0();
                L0():
                  return x;
                }
              }
              """);

      // Merge will fire, but let's just verify reachable blocks aren't removed
      run(module);

      var printed = Printer.toString(module);
      assertTrue(printed.contains("return x"), "return should remain; got:\n" + printed);
    }

    @Test
    void diamondWithDeadBranch_unreachableRemoved() {
      var module =
          ParseUtil.parseModule(
              """
              fun main(x) {
                (reg x:I) --> I { |
                  goto Reachable();
                Reachable():
                  return x;
                Dead():
                  return x;
                }
              }
              """);

      assertTrue(run(module));

      var printed = Printer.toString(module);
      assertFalse(printed.contains("Dead"), "dead block should be removed; got:\n" + printed);
    }
  }

  // endregion

  // region Constant-fold branches

  @Nested
  class ConstantFoldBranches {
    @Test
    void ifWithTrueCondition_becomesGoto() {
      var module =
          ParseUtil.parseModule(
              """
              fun main(x) {
                (reg x:I) --> I { |
                  if TRUE then L1() else L2();
                L1():
                  return x;
                L2():
                  return x;
                }
              }
              """);

      assertTrue(run(module), "should simplify constant-true if");

      var printed = Printer.toString(module);
      assertFalse(printed.contains("if "), "if should be replaced by goto; got:\n" + printed);
    }

    @Test
    void ifWithFalseCondition_becomesGoto() {
      var module =
          ParseUtil.parseModule(
              """
              fun main(x) {
                (reg x:I) --> I { |
                  if FALSE then L1() else L2();
                L1():
                  return x;
                L2():
                  return x;
                }
              }
              """);

      assertTrue(run(module), "should simplify constant-false if");

      var printed = Printer.toString(module);
      assertFalse(printed.contains("if "), "if should be replaced by goto; got:\n" + printed);
    }

    @Test
    void ifWithSameTargets_isHandledByConvergencePass() {
      var module =
          ParseUtil.parseModule(
              """
              fun main(x) {
                (reg x:I, reg c:B) --> I { |
                  if c then L1() else L1();
                L1():
                  return x;
                }
              }
              """);

      assertTrue(run(module), "should simplify if with same targets");

      var printed = Printer.toString(module);
      assertFalse(
          printed.contains("if "), "if with same targets should become goto; got:\n" + printed);
    }

    @Test
    void ifWithDifferentTargets_unchanged() {
      var module =
          ParseUtil.parseModule(
              """
              fun main(x) {
                (reg x:I, reg c:B) --> I { |
                  if c then L1() else L2();
                L1():
                  return x;
                L2():
                  return x;
                }
              }
              """);

      // Only merging might happen but the if should stay
      run(module);

      var printed = Printer.toString(module);
      assertTrue(
          printed.contains("if "), "if with different targets should remain; got:\n" + printed);
    }
  }

  // endregion

  // region Remove no-effect if jumps

  @Nested
  class RemoveNoEffectIfJumps {
    @Test
    void emptyBranchesThatImmediatelyConverge_becomeGoto() {
      var module =
          ParseUtil.parseModule(
              """
              fun main() {
                () --> I { reg keep:B, reg cond:B, reg side:B |
                  keep = blackBox< B --> B >(TRUE);
                  cond = blackBox< B --> B >(TRUE);
                  side = blackBox< B --> B >(TRUE);
                  if keep then L1() else L8();
                L1():
                  if cond then L2() else L3();
                L2():
                  goto L4();
                L3():
                  goto L4();
                L4():
                  return 0;
                L8():
                  if side then L4() else L9();
                L9():
                  return 1;
                }
              }
              fun blackBox(x) {
                (reg x:B) --> B { ... }
              }
              """);

      assertTrue(
          new Cleanup(false)
              .run(new org.prlprg.fir.interpret.internal.MockModuleFeedback(), module),
          "should remove no-effect if jump");

      var l1 = Objects.requireNonNull(cfg(module).bb("L1"));
      var l1Jump = assertInstanceOf(Goto.class, l1.jump());
      assertEquals("L4()", l1Jump.target().toString());
      assertNull(cfg(module).bb("L2"), "true branch should become unreachable");
      assertNull(cfg(module).bb("L3"), "false branch should become unreachable");
    }

    @Test
    void nestedEmptyBranchesThatConvergeThroughCycle_becomeGoto() {
      var module =
          ParseUtil.parseModule(
              """
              fun main() {
                () --> I { reg keep:B, reg cond:B, reg cond2:B, reg cond3:B, reg side:B, reg x2:I, reg x4:I, reg x5:I, reg x6:I |
                  keep = blackBox< B --> B >(TRUE);
                  cond = blackBox< B --> B >(TRUE);
                  cond2 = blackBox< B --> B >(TRUE);
                  cond3 = blackBox< B --> B >(TRUE);
                  side = blackBox< B --> B >(TRUE);
                  if keep then L1() else L8();
                L1():
                  if cond then L2(24) else L3();
                L2(x2):
                  if cond2 then L4(x2) else L5(x2);
                L3():
                  goto L5(24);
                L4(x4):
                  goto L6(x4);
                L5(x5):
                  if cond3 then L6(x5) else L2(24);
                L6(x6):
                  return x6;
                L8():
                  if side then L6(24) else L9();
                L9():
                  return 0;
                }
              }
              fun blackBox(x) {
                (reg x:B) --> B { ... }
              }
              """);

      assertTrue(
          new Cleanup(false)
              .run(new org.prlprg.fir.interpret.internal.MockModuleFeedback(), module),
          "should remove nested no-effect if jump");

      var l1 = Objects.requireNonNull(cfg(module).bb("L1"));
      var l1Jump = assertInstanceOf(Goto.class, l1.jump());
      assertEquals("L6(24)", l1Jump.target().toString());
      assertNull(cfg(module).bb("L2"), "cycle entry should become unreachable");
      assertNull(cfg(module).bb("L3"), "alternate branch should become unreachable");
      assertNull(cfg(module).bb("L4"), "intermediate goto should become unreachable");
      assertNull(cfg(module).bb("L5"), "nested if should become unreachable");
    }
  }

  // endregion

  // region Remove single-predecessor phi parameters

  @Nested
  class RemoveSinglePredecessorPhis {
    @Test
    void singlePredecessorPhi_substituted() {
      var module =
          ParseUtil.parseModule(
              """
              fun main(x) {
                (reg x:I) --> I { reg y:I |
                  goto L0(x);
                L0(y):
                  return y;
                }
              }
              """);

      assertTrue(run(module), "should remove single-predecessor phi");

      var printed = Printer.toString(module);
      // After phi removal and merging, y should be substituted with x
      assertTrue(printed.contains("return x"), "y should be substituted with x; got:\n" + printed);
    }
  }

  // endregion

  // region Merge blocks

  @Nested
  class MergeBlocks {
    @Test
    void linearChain_merged() {
      var module =
          ParseUtil.parseModule(
              """
              fun main(x) {
                (reg x:I) --> I { |
                  goto L0();
                L0():
                  goto L1();
                L1():
                  return x;
                }
              }
              """);

      assertTrue(run(module), "should merge linear chain");

      var printed = Printer.toString(module);
      assertFalse(
          printed.contains("goto "), "gotos should be eliminated by merging; got:\n" + printed);
      assertTrue(printed.contains("return x"), "return should remain; got:\n" + printed);
    }

    @Test
    void multipleSuccessors_notMerged() {
      var module =
          ParseUtil.parseModule(
              """
              fun main(x) {
                (reg x:I, reg c:B) --> I { |
                  if c then L1() else L2();
                L1():
                  return x;
                L2():
                  return x;
                }
              }
              """);

      run(module);

      var printed = Printer.toString(module);
      // The if should remain (multiple successors)
      assertTrue(printed.contains("if "), "if should remain; got:\n" + printed);
    }

    @Test
    void joinPointThatOnlyFunnelsIntoOneSuccessor_isRemoved() {
      var module =
          ParseUtil.parseModule(
              """
              fun main(x) {
                (reg x:I, reg c:B) --> I { |
                  if c then L1() else L2();
                L1():
                  goto L2();
                L2():
                  return x;
                }
              }
              """);

      run(module);

      var printed = Printer.toString(module);
      assertFalse(
          printed.contains("if "), "if should collapse to the join point; got:\n" + printed);
    }
  }

  // endregion

  // region Substitute with origins

  @Nested
  class SubstituteWithOrigins {
    @Test
    void registerAssignedToRegister_substituted() {
      var module =
          ParseUtil.parseModule(
              """
              fun main(x) {
                (reg x:I) --> I { reg y:I |
                  y = x;
                  return y;
                }
              }
              """);

      assertTrue(run(module), "should substitute y with x");

      var printed = Printer.toString(module);
      assertTrue(printed.contains("return x"), "y should be substituted with x; got:\n" + printed);
    }

    @Test
    void registerAssignedConstant_substituted() {
      var module =
          ParseUtil.parseModule(
              """
              fun main() {
                () --> I { reg x:I |
                  x = 42;
                  return x;
                }
              }
              """);

      assertTrue(run(module), "should substitute x with constant");

      var printed = Printer.toString(module);
      assertTrue(
          printed.contains("return 42"), "x should be substituted with 42; got:\n" + printed);
    }

    @Test
    void transitiveOrigin_substituted() {
      var module =
          ParseUtil.parseModule(
              """
              fun main(x) {
                (reg x:I) --> I { reg y:I, reg z:I |
                  y = x;
                  z = y;
                  return z;
                }
              }
              """);

      assertTrue(run(module), "should substitute transitively");

      var printed = Printer.toString(module);
      assertTrue(
          printed.contains("return x"),
          "z should be transitively substituted with x; got:\n" + printed);
    }

    @Test
    void disabledSubstituteWithOrigins_noSubstitution() {
      var module =
          ParseUtil.parseModule(
              """
              fun main(x) {
                (reg x:I) --> I { reg y:I |
                  y = x;
                  return y;
                }
              }
              """);

      // Use Cleanup with substituteWithOrigins=false
      new Cleanup(false).run(new org.prlprg.fir.interpret.internal.MockModuleFeedback(), module);

      var printed = Printer.toString(module);
      // y=x is a no-op (pure, no assignee after removing unused), but origin substitution
      // shouldn't happen. The return should still use y since we didn't substitute.
      // Actually, removeUnusedLocals still runs, but substituteWithOrigins doesn't.
      // Without origin substitution, y is still used (in return), so it won't be removed.
      assertTrue(
          printed.contains("return y"),
          "without substituteWithOrigins, y should not be substituted; got:\n" + printed);
    }
  }

  // endregion

  // region Remove unused locals

  @Nested
  class RemoveUnusedLocals {
    @Test
    void unusedAssignee_removed() {
      var module =
          ParseUtil.parseModule(
              """
              fun main(x) {
                (reg x:I) --> I { reg y:v1(I) |
                  y = box< I --> v1(I) >(x);
                  return x;
                }
              }
              """);

      assertTrue(run(module), "should remove unused assignee");

      var printed = Printer.toString(module);
      // y is unused, so the assignment should lose its assignee (become void statement)
      // Then the void box is a pure no-op and gets removed by removeEffectiveNoOps on next pass,
      // or the local y gets removed.
      assertFalse(printed.contains("reg y"), "unused local y should be removed; got:\n" + printed);
    }

    @Test
    void usedAssignee_kept() {
      var module =
          ParseUtil.parseModule(
              """
              fun main(x) {
                (reg x:I) --> I { reg y:v1(I) |
                  y = box< I --> v1(I) >(x);
                  return y;
                }
              }
              """);

      run(module);

      var printed = Printer.toString(module);
      assertTrue(printed.contains("box<"), "used box should remain; got:\n" + printed);
    }
  }

  // endregion

  // region Remove effective no-ops

  @Nested
  class RemoveEffectiveNoOps {
    @Test
    void pureExpressionWithoutAssignee_removed() {
      var module =
          ParseUtil.parseModule(
              """
              fun main(x) {
                (reg x:I) --> I { |
                  noop;
                  return x;
                }
              }
              """);

      assertTrue(run(module), "should remove noop");

      var printed = Printer.toString(module);
      assertFalse(printed.contains("noop"), "noop should be removed; got:\n" + printed);
    }

    @Test
    void pureExpressionDupWithoutAssignee_removed() {
      var module =
          ParseUtil.parseModule(
              """
              fun main(x) {
                (reg x:v1(I)) --> v1(I) { |
                  dup x;
                  return x;
                }
              }
              """);

      assertTrue(run(module), "should remove unassigned dup");

      var printed = Printer.toString(module);
      assertFalse(printed.contains("dup "), "unassigned dup should be removed; got:\n" + printed);
    }

    @Test
    void impureExpressionWithoutAssignee_kept() {
      var module =
          ParseUtil.parseModule(
              """
              fun main(x) {
                (reg x:I) -+> I { |
                  mkenv;
                  popenv;
                  return x;
                }
              }
              """);

      run(module);

      var printed = Printer.toString(module);
      assertTrue(printed.contains("mkenv"), "impure mkenv should remain; got:\n" + printed);
    }

    @Test
    void assumeWithoutAssignee_kept() {
      var module =
          ParseUtil.parseModule(
              """
              fun main(x) {
                (reg x:V) -~> V { |
                  x ?: I;
                  check L0() else D0();
                D0():
                  deopt 0 [];
                L0():
                  return x;
                }
              }
              """);

      run(module);

      var printed = Printer.toString(module);
      assertTrue(
          printed.contains("?: I"),
          "assume should not be removed (used by checkpoint); got:\n" + printed);
    }
  }

  // endregion

  // region Idempotency and combined

  @Test
  void secondRun_idempotent() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(x) {
              (reg x:I) --> I { reg y:I |
                y = x;
                noop;
                goto L0();
              L0():
                return y;
              }
            }
            """);

    assertTrue(run(module), "first run should make changes");
    assertFalse(run(module), "second run should be idempotent");
  }

  @Test
  void combinedCleanups_allApplied() {
    // Tests multiple cleanups in one pass:
    // - noop removed (effective no-op)
    // - y=x substituted with origin
    // - unreachable block removed
    // - goto merged
    var module =
        ParseUtil.parseModule(
            """
            fun main(x) {
              (reg x:I) --> I { reg y:I |
                noop;
                y = x;
                goto L0();
              L0():
                return y;
              Dead():
                return x;
              }
            }
            """);

    assertTrue(run(module), "combined cleanups should report a change");

    var printed = Printer.toString(module);
    assertFalse(printed.contains("noop"), "noop should be removed; got:\n" + printed);
    assertFalse(printed.contains("Dead"), "dead block should be removed; got:\n" + printed);
    assertFalse(printed.contains("goto "), "goto should be merged away; got:\n" + printed);
    assertTrue(printed.contains("return x"), "y should be substituted with x; got:\n" + printed);
  }

  @Test
  void constantFoldedIf_deadBranchRemoved() {
    // If with true condition -> goto -> dead else branch becomes unreachable -> removed
    var module =
        ParseUtil.parseModule(
            """
            fun main(x) {
              (reg x:I) --> I { |
                if TRUE then L1() else L2();
              L1():
                return x;
              L2():
                return x;
              }
            }
            """);

    assertTrue(run(module));

    var printed = Printer.toString(module);
    assertFalse(printed.contains("if "), "if should be simplified; got:\n" + printed);
    // L2 becomes unreachable after if -> goto L1, so it should be removed
    // (unless L2 is also reachable from somewhere else, which it isn't here)
  }

  private static CFG cfg(org.prlprg.fir.ir.module.Module module) {
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main")));
    return Objects.requireNonNull(main.baseline().cfg());
  }

  // endregion
}
