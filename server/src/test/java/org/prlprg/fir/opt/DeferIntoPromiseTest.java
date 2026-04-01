package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.parseprint.Printer;

class DeferIntoPromiseTest implements OptimizationUnitTest {
  @Override
  public Optimization optimization() {
    return new DeferIntoPromise();
  }

  @Test
  void pureInstructionUsedOnlyInPromise_deferred() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              (reg n:R) --> R { reg nb:v1(R), reg p:p(v1(R) -) |
                nb = box< R --> v1(R) >(n);
                p = prom<v1(R) ->{
                  return nb;
                };
                return p;
              }
            }
            """);

    assertTrue(run(module), "optimization should report a change");

    var printed = Printer.toString(module);
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
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              (reg n:p(R +)) -+> R { reg nb:R, reg p:p(R +) |
                nb = force n;
                p = prom<R +>{
                  return nb;
                };
                return p;
              }
            }
            """);

    assertFalse(run(module), "impure instruction should not be deferred");
  }

  @Test
  void instructionUsedOutsidePromise_notDeferred() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              (reg n:R) --> R { reg nb:v1(R), reg p:p(v1(R) -), reg x:v1(R) |
                nb = box< R --> v1(R) >(n);
                p = prom<v1(R) ->{
                  return nb;
                };
                x = nb;
                return x;
              }
            }
            """);

    assertFalse(run(module), "instruction used outside promise should not be deferred");
  }

  @Test
  void instructionUsedInTwoPromises_notDeferred() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              (reg n:R) --> R { reg nb:v1(R), reg p1:p(v1(R) -), reg p2:p(v1(R) -) |
                nb = box< R --> v1(R) >(n);
                p1 = prom<v1(R) ->{
                  return nb;
                };
                p2 = prom<v1(R) ->{
                  return nb;
                };
                return p1;
              }
            }
            """);

    assertFalse(run(module), "instruction used in two promises should not be deferred");
  }

  @Test
  void chainOfPureInstructions_allDeferred() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              (reg n:R) --> R { reg nb:v1(R), reg nc:v1(R), reg p:p(v1(R) -) |
                nb = box< R --> v1(R) >(n);
                nc = dup nb;
                p = prom<v1(R) ->{
                  return nc;
                };
                return p;
              }
            }
            """);

    assertTrue(run(module), "chain should be deferred");

    var printed = Printer.toString(module);
    var promIdx = printed.indexOf("prom<");
    var boxIdx = printed.indexOf("box<");
    var dupIdx = printed.indexOf("dup ");
    assertTrue(boxIdx > promIdx, "box should be inside the promise; printed:\n" + printed);
    assertTrue(dupIdx > promIdx, "dup should be inside the promise; printed:\n" + printed);
  }

  @Test
  void chainBrokenByOutsideUse_partialDefer() {
    // nb is used by both nc (movable) and outside (x = nb). nc is used only in the promise.
    // nb can't move, but nc can still move because its dependency (nb) is in the outer scope
    // which is readable from within the promise.
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              (reg n:R) --> R { reg nb:v1(R), reg nc:v1(R), reg p:p(v1(R) -), reg x:v1(R) |
                nb = box< R --> v1(R) >(n);
                nc = dup nb;
                p = prom<v1(R) ->{
                  return nc;
                };
                x = nb;
                return x;
              }
            }
            """);

    assertTrue(run(module), "nc should still be deferred even if nb can't be");

    var printed = Printer.toString(module);
    var promIdx = printed.indexOf("prom<");
    var boxIdx = printed.indexOf("box<");
    var dupIdx = printed.indexOf("dup ");
    assertTrue(boxIdx < promIdx, "box should remain outside the promise; printed:\n" + printed);
    assertTrue(dupIdx > promIdx, "dup should be inside the promise; printed:\n" + printed);
  }

  @Test
  void noAssignee_notDeferred() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              (reg n:R) --> R { reg p:p(R -) |
                noop;
                p = prom<R ->{
                  return n;
                };
                return p;
              }
            }
            """);

    assertFalse(run(module), "statement without assignee should not be deferred");
  }

  @Test
  void deeplyNestedPromise_innerPromiseAlsoOptimized() {
    // The outer promise has a box that's only used in a nested inner promise.
    // streamCfgs processes all CFGs, so the inner promise should also be optimized.
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              (reg n:R) --> R { reg p:p(V -), reg q:p(v1(R) -), reg nb:v1(R) |
                p = prom<V ->{
                  nb = box< R --> v1(R) >(n);
                  q = prom<v1(R) ->{
                    return nb;
                  };
                  return q;
                };
                return p;
              }
            }
            """);

    assertTrue(run(module), "deeply nested promise should also be optimized");

    var printed = Printer.toString(module);
    // The box should be inside the inner promise
    var innerPromIdx = printed.lastIndexOf("prom<v1(R) ->");
    var boxIdx = printed.indexOf("box<");
    assertTrue(
        boxIdx > innerPromIdx, "box should be inside the inner promise; printed:\n" + printed);
  }

  @Test
  void multiplePromises_eachGetsOwnInstructions() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              (reg n:R) --> R { reg nb:v1(R), reg nc:v1(R), reg p1:p(v1(R) -), reg p2:p(v1(R) -) |
                nb = box< R --> v1(R) >(n);
                p1 = prom<v1(R) ->{
                  return nb;
                };
                nc = dup n;
                p2 = prom<v1(R) ->{
                  return nc;
                };
                return p1;
              }
            }
            """);

    assertTrue(run(module), "multiple promises should each get their own instructions");

    var printed = Printer.toString(module);
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
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              (reg n:R) --> R { reg nb:v1(R), reg p:p(v1(R) -) |
                p = prom<v1(R) ->{
                  return n;
                };
                nb = box< R --> v1(R) >(n);
                return p;
              }
            }
            """);

    assertFalse(run(module), "instruction after promise should not be deferred");
  }

  @Test
  void mkenvBeforePromise_notDeferred() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              (reg n:R) -+> R { reg p:p(R +) |
                mkenv;
                p = prom<R +>{
                  return n;
                };
                popenv;
                return p;
              }
            }
            """);

    assertFalse(run(module), "mkenv is impure and should not be deferred");
  }

  @Test
  void secondRunIdempotent() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              (reg n:R) --> R { reg nb:v1(R), reg p:p(v1(R) -) |
                nb = box< R --> v1(R) >(n);
                p = prom<v1(R) ->{
                  return nb;
                };
                return p;
              }
            }
            """);

    assertTrue(run(module), "first run should make a change");
    assertFalse(run(module), "second run should be idempotent");
  }

  @Test
  void promiseWithNoMovablePredecessors_unchanged() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              (reg n:R) --> R { reg p:p(R -) |
                p = prom<R ->{
                  return n;
                };
                return p;
              }
            }
            """);

    assertFalse(run(module), "nothing to defer should report no change");
  }
}
