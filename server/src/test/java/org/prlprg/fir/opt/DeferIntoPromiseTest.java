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
            (reg n:R) -~> R { reg nb:v1(R), reg p:p(v1(R) -), var p:* |
              nb = box< R --> v1(R) >(n);
              p = prom<v1(R) ->{
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
  void instructionUsedOutsidePromise_notDeferred() {
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

    assertFalse(run(abstraction), "instruction used outside promise should not be deferred");
  }

  @Test
  void instructionUsedInTwoPromises_notDeferred() {
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

    assertFalse(run(abstraction), "instruction used in two promises should not be deferred");
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
            (reg n:R) -~> R { reg nb:v1(R), var nb:*, reg nc:v1(R), reg p:p(v1(R) -), var p:* |
              nb = box< R --> v1(R) >(n);
              nc = dup nb;
              p = prom<v1(R) ->{
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
            (reg n:R) -~> R { reg p:p(R -) |
              noop;
              p = prom<R ->{
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
            (reg n:R) -~> R { reg p:p(V -), reg q:p(v1(R) -), reg nb:v1(R) |
              p = prom<V ->{
                nb = box< R --> v1(R) >(n);
                q = prom<v1(R) ->{
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
            (reg n:R) -~> R { reg nb:v1(R), reg nc:v1(R), reg p1:p(v1(R) -), var p1:*, reg p2:p(v1(R) -), var p2:* |
              nb = box< R --> v1(R) >(n);
              p1 = prom<v1(R) ->{
                return nb;
              };
              st p1 = p1;
              nc = dup n;
              p2 = prom<v1(R) ->{
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

  @Test
  void instructionAfterPromise_notDeferred() {
    // Even if the register is only used inside the promise, if it's defined AFTER
    // the promise, don't move it (it wouldn't be before the promise).
    // This can't really happen in valid SSA (use before def), but let's verify the
    // optimization doesn't try to look at statements after the promise.
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg n:R) -~> R { reg nb:v1(R), reg p:p(v1(R) -), var p:* |
              p = prom<v1(R) ->{
                return n;
              };
              st p = p;
              nb = box< R --> v1(R) >(n);
              return p;
            }
            """);

    assertFalse(run(abstraction), "instruction after promise should not be deferred");
  }

  @Test
  void mkenvBeforePromise_notDeferred() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg n:R) -+> R { reg p:p(R +), var p:* |
              mkenv;
              p = prom<R +>{
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
            (reg n:R) -~> R { reg nb:v1(R), reg p:p(v1(R) -), var p:* |
              nb = box< R --> v1(R) >(n);
              p = prom<v1(R) ->{
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
            (reg n:R) -~> R { reg nb:v1(R), reg p:p(v1(R) -), var p:* |
              nb = box< R --> v1(R) >(n);
              goto L0();
            L0():
              p = prom<v1(R) ->{
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
            (reg n:R) -~> R { reg nb:v1(R), reg p:p(v1(R) -), var p:* |
              nb = box< R --> v1(R) >(n);
              check L0() else D0();
            D0():
              mkenv;
              p = prom<v1(R) ->{
                return nb;
              };
              st p = p;
              deopt 0 [];
            L0():
              return n;
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
            (reg n:R) -~> R { reg na:v1(R), reg nb:v1(R), reg p:p(v1(R) -), var p:*, reg x:R |
              na = box< R --> v1(R) >(n);
              nb = dup na;
              check L0() else D0();
            D0():
              mkenv;
              p = prom<v1(R) ->{
                return nb;
              };
              st p = p;
              deopt 0 [];
            L0():
              x = unbox< v1(R) --> R >(na);
              return x;
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
            (reg n:R) -~> R { reg p:p(R -), var p:* |
              p = prom<R ->{
                return n;
              };
              st p = p;
              return n;
            }
            """);

    assertFalse(run(abstraction), "nothing to defer should report no change");
  }
}
