package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.parseprint.Printer;

class DeferIntoPromiseTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new DeferIntoPromise();
  }

  @Test
  void pureInstructionUsedOnlyInPromise_deferred() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg n:R) -~> R {
              nb: v1(R) = box< R --> v1(R) >(n);
              p: p(v1(R) -) = prom<v1(R) ->{
                return nb;
              };
              st p = p;
              return n;
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    // nb should be inside the promise now
    assertTrue(
        printed.contains("prom<v1(R) ->{\n") || printed.indexOf("box") > printed.indexOf("prom"),
        "box should be inside the promise; printed:\n" + printed);
    // The box should not appear before the promise
    var promIdx = printed.indexOf("prom<");
    var boxIdx = printed.indexOf("box<");
    assertTrue(boxIdx > promIdx, "box should appear after prom (inside it); printed:\n" + printed);
  }

  @Test
  void unusedPromise_notDeferredIntoItself() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg n:R) -~> R {
              p: p(v1(R) -) = prom<v1(R) ->{
                return <real 1.0>;
              };
              return n;
            }
            """);

    // `p` is pure and has no uses at all, so nothing disqualifies the `prom` itself from being a
    // deferral candidate -- and moving it into its own body nests it inside itself, which makes
    // the recursive walk descend into the same CFG forever.
    assertDoesNotThrow(() -> run(abstraction));
  }

  @Test
  void impureInstruction_notDeferred() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg n:p(R +)) -+> R {
              nb: R = force n;
              p: p(R +) = prom<R +>{
                return nb;
              };
              st p = p;
              return nb;
            }
            """);

    assertFalse(run(abstraction), "impure instruction should not be deferred");
  }

  @Test
  void instructionUsedOutsidePromise_notDeferred() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg n:R) -~> R {
              nb: v1(R) = box< R --> v1(R) >(n);
              p: p(v1(R) -) = prom<v1(R) ->{
                return nb;
              };
              st p = p;
              x: R = unbox< v1(R) --> R >(nb);
              return x;
            }
            """);

    assertFalse(run(abstraction), "instruction used outside promise should not be deferred");
  }

  @Test
  void instructionUsedInTwoPromises_notDeferred() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg n:R) -~> R {
              nb: v1(R) = box< R --> v1(R) >(n);
              p1: p(v1(R) -) = prom<v1(R) ->{
                return nb;
              };
              st p1 = p1;
              p2: p(v1(R) -) = prom<v1(R) ->{
                return nb;
              };
              st p2 = p2;
              return n;
            }
            """);

    assertFalse(run(abstraction), "instruction used in two promises should not be deferred");
  }

  @Test
  void chainOfPureInstructions_allDeferred() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg n:R) -~> R {
              nb: v1(R) = box< R --> v1(R) >(n);
              nc: v1(R) = dup nb;
              p: p(v1(R) -) = prom<v1(R) ->{
                return nc;
              };
              st p = p;
              return n;
            }
            """);

    assertTrue(run(abstraction), "chain should be deferred");

    var printed = Printer.toString(abstraction);
    var promIdx = printed.indexOf("prom<");
    var boxIdx = printed.indexOf("box<");
    var dupIdx = printed.indexOf("dup ");
    assertTrue(boxIdx > promIdx, "box should be inside the promise; printed:\n" + printed);
    assertTrue(dupIdx > promIdx, "dup should be inside the promise; printed:\n" + printed);
  }

  @Test
  void chainBrokenByOutsideUse_partialDefer() {
    // nb is used by both nc (movable) and outside (st nb = nb). nc is used only in the promise.
    // nb can't move, but nc can still move because its dependency (nb) is in the outer scope
    // which is readable from within the promise.
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg n:R) -~> R {
              nb: v1(R) = box< R --> v1(R) >(n);
              nc: v1(R) = dup nb;
              p: p(v1(R) -) = prom<v1(R) ->{
                return nc;
              };
              st nb = nb;
              st p = p;
              return n;
            }
            """);

    assertTrue(run(abstraction), "nc should still be deferred even if nb can't be");

    var printed = Printer.toString(abstraction);
    var promIdx = printed.indexOf("prom<");
    var boxIdx = printed.indexOf("box<");
    var dupIdx = printed.indexOf("dup ");
    assertTrue(boxIdx < promIdx, "box should remain outside the promise; printed:\n" + printed);
    assertTrue(dupIdx > promIdx, "dup should be inside the promise; printed:\n" + printed);
  }

  @Test
  void noAssignee_notDeferred() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg n:R) -~> R {
              noop;
              p: p(R -) = prom<R ->{
                return n;
              };
              return p;
            }
            """);

    assertFalse(run(abstraction), "statement without assignee should not be deferred");
  }

  @Test
  void deeplyNestedPromise_innerPromiseAlsoOptimized() {
    // The outer promise has a box that's only used in a nested inner promise.
    // streamCfgs processes all CFGs, so the inner promise should also be optimized.
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg n:R) -~> R {
              p: p(V -) = prom<V ->{
                nb: v1(R) = box< R --> v1(R) >(n);
                q: p(v1(R) -) = prom<v1(R) ->{
                  return nb;
                };
                return q;
              };
              return p;
            }
            """);

    assertTrue(run(abstraction), "deeply nested promise should also be optimized");

    var printed = Printer.toString(abstraction);
    // The box should be inside the inner promise
    var innerPromIdx = printed.lastIndexOf("prom<v1(R) ->");
    var boxIdx = printed.indexOf("box<");
    assertTrue(
        boxIdx > innerPromIdx, "box should be inside the inner promise; printed:\n" + printed);
  }

  @Test
  void multiplePromises_eachGetsOwnInstructions() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg n:R) -~> R {
              nb: v1(R) = box< R --> v1(R) >(n);
              p1: p(v1(R) -) = prom<v1(R) ->{
                return nb;
              };
              st p1 = p1;
              nc: v1(R) = dup n;
              p2: p(v1(R) -) = prom<v1(R) ->{
                return nc;
              };
              st p2 = p2;
              return p1;
            }
            """);

    assertTrue(run(abstraction), "multiple promises should each get their own instructions");

    var printed = Printer.toString(abstraction);
    // Both box and dup should be inside their respective promises
    var prom1Idx = printed.indexOf("prom<");
    var prom2Idx = printed.lastIndexOf("prom<");
    var boxIdx = printed.indexOf("box<");
    var dupIdx = printed.indexOf("dup ");
    assertTrue(
        boxIdx > prom1Idx && boxIdx < prom2Idx,
        "box should be inside first promise; printed:\n" + printed);
    assertTrue(dupIdx > prom2Idx, "dup should be inside second promise; printed:\n" + printed);
  }

  /* This test is made irrelevant (unrepresentable?) because registers can't be used before they're created
  @Test
  void instructionAfterPromise_notDeferred() {
    // Even if the register is only used inside the promise, if it's defined AFTER
    // the promise, don't move it (it wouldn't be before the promise).
    // This can't really happen in valid SSA (use before def), but let's verify the
    // optimization doesn't try to look at statements after the promise.
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg n:R) -~> R {
              p: p(v1(R) -) = prom<v1(R) ->{
                return n;
              };
              st p = p;
              nb: v1(R) = box< R --> v1(R) >(n);
              return p;
            }
            """);

    System.out.println(Printer.toString(abstraction));
    var result = run(abstraction);
    System.out.println(Printer.toString(abstraction));
    assertFalse(result, "instruction after promise should not be deferred");
  }
   */

  @Test
  void mkenvBeforePromise_notDeferred() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg n:R) -+> R {
              mkenv;
              p: p(R +) = prom<R +>{
                return n;
              };
              popenv;
              st p = p;
              return p;
            }
            """);

    assertFalse(run(abstraction), "mkenv is impure and should not be deferred");
  }

  @Test
  void secondRunIdempotent() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg n:R) -~> R {
              nb: v1(R) = box< R --> v1(R) >(n);
              p: p(v1(R) -) = prom<v1(R) ->{
                return nb;
              };
              st p = p;
              return p;
            }
            """);

    assertTrue(run(abstraction), "first run should make a change");
    assertFalse(run(abstraction), "second run should be idempotent");
  }

  @Test
  void instructionInPredecessorBlock_deferred() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg n:R) -~> R {
              nb: v1(R) = box< R --> v1(R) >(n);
              goto L0();
            L0():
              p: p(v1(R) -) = prom<v1(R) ->{
                return nb;
              };
              st p = p;
              return p;
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    var promIdx = printed.indexOf("prom<");
    var boxIdx = printed.indexOf("box<");
    assertTrue(boxIdx > promIdx, "box should be inside the promise; printed:\n" + printed);
  }

  @Test
  void promiseInDeoptBlock_deferred() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg n:R) -~> R {
              nb: v1(R) = box< R --> v1(R) >(n);
              check L0() else D0();
            L0():
              return n;
            D0():
              mkenv;
              p: p(v1(R) -) = prom<v1(R) ->{
                return nb;
              };
              st p = p;
              deopt 0 [];
            }
            """);

    assertTrue(run(abstraction), "box should be deferred into the promise in the deopt block");

    var printed = Printer.toString(abstraction);
    var promIdx = printed.indexOf("prom<");
    var boxIdx = printed.indexOf("box<");
    assertTrue(boxIdx > promIdx, "box should be inside the promise; printed:\n" + printed);
  }

  @Test
  void complicatedCfgPartialDefer() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg n:R) -~> R {
              na: v1(R) = box< R --> v1(R) >(n);
              nb: v1(R) = dup na;
              check L0() else D0();
            L0():
              x: R = unbox< v1(R) --> R >(na);
              return x;
            D0():
              mkenv;
              p: p(v1(R) -) = prom<v1(R) ->{
                return nb;
              };
              st p = p;
              deopt 0 [];
            }
            """);

    assertTrue(run(abstraction), "nb should be deferred even though na can't be");

    var printed = Printer.toString(abstraction);
    var promIdx = printed.indexOf("prom<");
    var boxIdx = printed.indexOf("box<");
    var dupIdx = printed.indexOf("dup ");
    assertTrue(boxIdx < promIdx, "box should remain outside the promise; printed:\n" + printed);
    assertTrue(dupIdx > promIdx, "dup should be inside the promise; printed:\n" + printed);
  }

  @Test
  void promiseWithNoMovablePredecessors_unchanged() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg n:R) -~> R {
              p: p(R -) = prom<R ->{
                return n;
              };
              st p = p;
              return n;
            }
            """);

    assertFalse(run(abstraction), "nothing to defer should report no change");
  }

  @Test
  void keptInstructionReadingARegisterThatDoesNotReachThePromise_notDeferred() {
    // `dead`'s assignee has no uses at all, so the prune keeps it -- being kept says nothing about
    // where it sits. It reads `other`, which is an `unbox` (never a candidate, so it stays put) in
    // a block the promise doesn't follow. Moving `dead` into the body would read a register that
    // isn't assigned there.
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg n:R, reg c:B) -~> R {
              nb: v1(R) = box< R --> v1(R) >(n);
              p: p(v1(R) -) = prom<v1(R) ->{
                return nb;
              };
              st p = p;
              if c then L0() else L1();
            L0():
              other: R = unbox< v1(R) --> R >(nb);
              dead: v1(R) = box< R --> v1(R) >(other);
              goto L1();
            L1():
              return n;
            }
            """);

    assertFalse(
        run(abstraction),
        "nothing should move into the promise:\n" + Printer.toString(abstraction));
  }
}
