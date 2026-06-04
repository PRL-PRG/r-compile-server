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

  // region GVN/CSE

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

  // endregion GVN/CSE

  // region ElideRedundantBoxUnbox

  @Test
  void boxThenUnbox_reusesOriginal() {
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

  // endregion ElideRedundantBoxUnbox

  // region SchedulePure: defer / hoist

  @Test
  void pureInstructionDeferredIntoDominatedBlock() {
    // The box is in entry but its only use is in L0. We expect the scheduler to push it into L0
    // so the branch that doesn't use it doesn't pay for it.
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:I, reg c:B) --> v1(I) { reg boxed:v1(I) |
              boxed = box< I --> v1(I) >(x);
              if c then L0() else L1();
            L0():
              return boxed;
            L1():
              return <int 0>;
            }
            """);

    assertTrue(run(abstraction), "box should move out of entry into its sole using branch");

    var printed = Printer.toString(abstraction);
    assertOrder(printed, "L0():", "boxed = box< I --> v1(I) >(x);");
    assertOrder(printed, "boxed = box< I --> v1(I) >(x);", "return boxed;");
  }

  @Test
  void pureInstructionInEntry_duplicatedAcrossSiblingBranches() {
    // The box is in entry and used in both branches; CSE has nothing to merge here, but since
    // neither branch dominates the other, each branch's use becomes its own "leaf". The
    // shareable box gets duplicated into both, so the never-taken side of any given run doesn't
    // pay for the conversion.
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:I, reg c:B) --> v1(I) { reg boxed:v1(I), reg other:v1(I) |
              boxed = box< I --> v1(I) >(x);
              if c then L0() else L1();
            L0():
              return boxed;
            L1():
              other = box< I --> v1(I) >(boxed);
              return other;
            }
            """);

    assertTrue(run(abstraction), "shareable pure should be duplicated into each sibling branch");

    var printed = Printer.toString(abstraction);
    var entryBoxIdx = printed.indexOf("$ENTRY:");
    var afterEntry = entryBoxIdx < 0 ? 0 : printed.indexOf("if c then", entryBoxIdx);
    // The original box should no longer sit in entry (it moved into the branches).
    assertFalse(
        printed.substring(0, afterEntry).contains("box< I --> v1(I) >(x)"),
        "box should have left the entry block; got:\n" + printed);

    var l0Start = printed.indexOf("L0():");
    var l0EndAndL1Start = printed.indexOf("L1():", l0Start);
    var l1End = printed.indexOf('}', l0EndAndL1Start);
    assertTrue(
        printed.substring(l0Start, l0EndAndL1Start).contains("box< I --> v1(I) >(x)"),
        "L0 branch should have its own copy of the box; got:\n" + printed);
    assertTrue(
        printed.substring(l0EndAndL1Start, l1End).contains("box< I --> v1(I) >(x)"),
        "L1 branch should have its own copy of the box; got:\n" + printed);
  }

  @Test
  void pureInPromiseWithOuterOperand_stays() {
    // SchedulePure used to hoist this unbox above the promise (so multiple unboxes could be
    // CSE'd against the box). With the egraph doing CSE up front, there's nothing to gain from
    // running the unbox eagerly — and keeping it inside the promise means we only pay for it
    // when the promise is forced. So it should stay.
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:v(I)) -~> p(I -) { reg boxed:v1(I), reg p:p(I -), reg unboxed:I |
              boxed = x as v1(I);
              p = prom<I ->{
                unboxed = unbox< v1(I) --> I >(boxed);
                return unboxed;
              };
              return p;
            }
            """);

    assertFalse(run(abstraction), "pure inside the promise should stay inside");

    var printed = Printer.toString(abstraction);
    assertOrder(printed, "p = prom<I ->{", "unboxed = unbox< v1(I) --> I >(boxed);");
  }

  @Test
  void pureInsidePromiseWithOperandInsideIsLeftAlone() {
    // Both the box and its operand live inside the promise body: there's nowhere to hoist to and
    // nothing to defer past.
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:I) -~> p(I -) { reg p:p(I -), reg boxed:v1(I), reg unboxed:I |
              p = prom<I ->{
                boxed = box< I --> v1(I) >(x);
                unboxed = unbox< v1(I) --> I >(boxed);
                return unboxed;
              };
              return p;
            }
            """);

    assertTrue(run(abstraction), "unbox(box(x)) should fold inside the promise");

    var printed = Printer.toString(abstraction);
    // After the box/unbox fold, the promise body should just `return x;`.
    assertTrue(printed.contains("return x;"), "fold should reach `return x;`; got:\n" + printed);
  }

  // endregion SchedulePure

  // region DeferIntoPromise

  @Test
  void pureInstructionUsedOnlyInPromise_deferred() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg n:R) -~> R { reg nb:v1(R), reg p:p(v1(R) -), var p:* |
              nb = box< R --> v1(R) >(n);
              p = prom<v1(R) ->{
                return nb;
              };
              st p = p;
              return n;
            }
            """);

    assertTrue(run(abstraction), "box used only in the promise should be deferred");

    var printed = Printer.toString(abstraction);
    var promIdx = printed.indexOf("prom<");
    var boxIdx = printed.indexOf("box<");
    assertTrue(boxIdx > promIdx, "box should appear after prom (inside it); got:\n" + printed);
  }

  @Test
  void impureInstruction_notDeferred() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg n:p(R +)) -+> R { reg nb:R, reg p:p(R +), var p:* |
              nb = force n;
              p = prom<R +>{
                return nb;
              };
              st p = p;
              return nb;
            }
            """);

    assertFalse(run(abstraction), "impure instruction should not be deferred");
  }

  @Test
  void instructionUsedOutsidePromise_foldsButNotDeferred() {
    // The outer `unbox(nb)` folds to `n`, so `return x` becomes `return n` and the unbox's
    // assignee disappears. But the unbox statement itself remains as a (now-dead) use of `nb`
    // until [Cleanup][org.prlprg.fir.opt.Cleanup] picks it up; while it's there, `nb` still has
    // a use outside the promise, so the box mustn't be deferred in.
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg n:R) -~> R { reg nb:v1(R), reg p:p(v1(R) -), var p:*, reg x:R |
              nb = box< R --> v1(R) >(n);
              p = prom<v1(R) ->{
                return nb;
              };
              st p = p;
              x = unbox< v1(R) --> R >(nb);
              return x;
            }
            """);

    assertTrue(run(abstraction), "fold should fire; box stays outside the promise");

    var printed = Printer.toString(abstraction);
    var promIdx = printed.indexOf("prom<");
    var boxIdx = printed.indexOf("box<");
    assertTrue(boxIdx < promIdx, "box should remain before the promise; got:\n" + printed);
    assertTrue(printed.contains("return n;"), "outer use should fold to n; got:\n" + printed);
  }

  @Test
  void chainOfPureInstructions_allDeferred() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg n:R) -~> R { reg nb:v1(R), reg nc:v1(R), reg p:p(v1(R) -), var p:* |
              nb = box< R --> v1(R) >(n);
              nc = dup nb;
              p = prom<v1(R) ->{
                return nc;
              };
              st p = p;
              return n;
            }
            """);

    assertTrue(run(abstraction), "chain of pure instructions should follow the use inward");

    var printed = Printer.toString(abstraction);
    var promIdx = printed.indexOf("prom<");
    var boxIdx = printed.indexOf("box<");
    var dupIdx = printed.indexOf("dup ");
    assertTrue(boxIdx > promIdx, "box should be inside the promise; got:\n" + printed);
    assertTrue(dupIdx > promIdx, "dup should be inside the promise; got:\n" + printed);
  }

  @Test
  void instructionInTwoPromises_notDeferred() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg n:R) -~> R { reg nb:v1(R), reg p1:p(v1(R) -), var p1:*, reg p2:p(v1(R) -), var p2:* |
              nb = box< R --> v1(R) >(n);
              p1 = prom<v1(R) ->{
                return nb;
              };
              st p1 = p1;
              p2 = prom<v1(R) ->{
                return nb;
              };
              st p2 = p2;
              return n;
            }
            """);

    assertFalse(run(abstraction), "common ancestor is the outer CFG, so box stays outside");
  }

  // endregion DeferIntoPromise

  // region combined scenarios

  @Test
  void duplicateBoxesAreDedupedAndDeferred() {
    // GVN + defer in one run: two boxes are CSE'd, then the surviving box moves into its only
    // (now post-CSE) using branch.
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:I, reg c:B) --> v1(I) { reg r1:v1(I), reg r2:v1(I) |
              r1 = box< I --> v1(I) >(x);
              if c then L0() else L1();
            L0():
              r2 = box< I --> v1(I) >(x);
              return r2;
            L1():
              return <int 0>;
            }
            """);

    assertTrue(run(abstraction), "CSE + defer should both fire");

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("return r1;"), "post-CSE return should be r1; got:\n" + printed);
    assertFalse(printed.contains("return r2;"), "r2 should be gone; got:\n" + printed);
    assertOrder(printed, "L0():", "r1 = box< I --> v1(I) >(x);");
  }

  @Test
  void boxAndUnboxFold_throughPromise() {
    // The promise body unboxes a value boxed in the outer scope; box/unbox folds to the original.
    // Locals must be declared in the enclosing scope's header — promise bodies don't have a
    // `reg ... |` of their own.
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg n:I) -~> I { reg nb:v1(I), reg u:I, reg p:p(I -), var p:* |
              nb = box< I --> v1(I) >(n);
              p = prom<I ->{
                u = unbox< v1(I) --> I >(nb);
                return u;
              };
              st p = p;
              return n;
            }
            """);

    assertTrue(run(abstraction), "unbox(box(n)) should fold inside the promise");

    var printed = Printer.toString(abstraction);
    var promIdx = printed.indexOf("prom<");
    assertTrue(promIdx >= 0, "promise should still be present; got:\n" + printed);
    assertTrue(
        printed.indexOf("return n;", promIdx) > promIdx,
        "promise body should return n after folding; got:\n" + printed);
  }

  @Test
  void secondRunIsIdempotent() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:I, reg c:B) --> I { reg boxed:v1(I), reg r:I |
              boxed = box< I --> v1(I) >(x);
              if c then L0() else L1();
            L0():
              r = unbox< v1(I) --> I >(boxed);
              return r;
            L1():
              return x;
            }
            """);

    assertTrue(run(abstraction), "first run should fold/defer");
    assertFalse(run(abstraction), "second run should be a no-op");
  }

  // endregion combined scenarios

  private static void assertOrder(String printed, String first, String second) {
    var firstIndex = printed.indexOf(first);
    var secondIndex = printed.indexOf(second);
    assertTrue(firstIndex >= 0, "missing `" + first + "` in:\n" + printed);
    assertTrue(secondIndex >= 0, "missing `" + second + "` in:\n" + printed);
    assertTrue(
        firstIndex < secondIndex,
        "expected order `" + first + "` before `" + second + "` in:\n" + printed);
  }
}
