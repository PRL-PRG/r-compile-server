package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;

import java.util.List;
import java.util.Objects;
import org.jspecify.annotations.NonNull;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.interpret.internal.MockModuleFeedback;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.parseprint.Printer;

class ElideUnforcedPromiseTest {

  private static final int THRESHOLD = 10;

  private final ElideUnforcedPromise optimization = new ElideUnforcedPromise(THRESHOLD);

  @Test
  void unforcedPromise_bodyReplacedWithDeopt() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(x) {
              (reg x:V) -+> V { ... }
              (reg x:R) -+> R { reg p:p(R +) |
                p = prom<R +>{
                  mkenv;
                  popenv;
                  return x;
                };
                return x;
              }
            }
            """);

    var feedback = recordPromiseCreates(module, THRESHOLD, 0);

    assertTrue(optimization.run(feedback, module), "should elide unforced promise");

    var printed = Printer.toString(module);
    assertTrue(
        printed.contains("deopt 0 []"), "promise body should contain deopt; got:\n" + printed);
    assertTrue(
        printed.contains("prom<R ->"), "promise effects should be NONE (-); got:\n" + printed);
    assertFalse(printed.contains("mkenv"), "old promise body should be gone; got:\n" + printed);
  }

  @Test
  void forcedPromise_unchanged() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(x) {
              (reg x:V) -+> V { ... }
              (reg x:R) --> R { reg p:p(R -), reg r:R |
                p = prom<R ->{
                  return x;
                };
                r = force p;
                return r;
              }
            }
            """);

    var feedback = recordPromiseCreates(module, THRESHOLD, 5);

    assertFalse(optimization.run(feedback, module), "should not elide forced promise");

    var printed = Printer.toString(module);
    assertFalse(
        printed.contains("deopt 0 []"), "promise body should not contain deopt; got:\n" + printed);
    assertTrue(
        printed.contains("return x"), "original promise body should remain; got:\n" + printed);
  }

  @Test
  void belowThreshold_unchanged() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(x) {
              (reg x:V) -+> V { ... }
              (reg x:R) --> R { reg p:p(R -) |
                p = prom<R ->{
                  return x;
                };
                return x;
              }
            }
            """);

    // Create count is below threshold
    var feedback = recordPromiseCreates(module, THRESHOLD - 1, 0);

    assertFalse(optimization.run(feedback, module), "below threshold should not elide");
  }

  @Test
  void noFeedback_unchanged() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(x) {
              (reg x:V) -+> V { ... }
              (reg x:R) --> R { reg p:p(R -) |
                p = prom<R ->{
                  return x;
                };
                return x;
              }
            }
            """);

    var feedback = new MockModuleFeedback();

    assertFalse(optimization.run(feedback, module), "no feedback should not elide");
  }

  @Test
  void secondRun_idempotent() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(x) {
              (reg x:V) -+> V { ... }
              (reg x:R) --> R { reg p:p(R -) |
                p = prom<R ->{
                  return x;
                };
                return x;
              }
            }
            """);

    var feedback = recordPromiseCreates(module, THRESHOLD, 0);

    assertTrue(optimization.run(feedback, module), "first run should make changes");
    // After first run, the promise has been replaced. New promise has no feedback recorded.
    assertFalse(optimization.run(feedback, module), "second run should be idempotent");
  }

  @Test
  void multiplePromises_onlyUnforcedElided() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(x) {
              (reg x:V) -+> V { ... }
              (reg x:R) --> R { reg p1:p(R -), reg p2:p(R -), reg r:R |
                p1 = prom<R ->{
                  return x;
                };
                p2 = prom<R ->{
                  return x;
                };
                r = force p2;
                return r;
              }
            }
            """);

    var fn = Objects.requireNonNull(module.localFunction(Variable.named("main")));
    var version = List.copyOf(fn.versions()).get(1);
    var promiseAssignees = findPromiseAssignees(version);
    assertEquals(2, promiseAssignees.size());

    var feedback = new MockModuleFeedback();
    // p1: created many times, never forced
    for (int i = 0; i < THRESHOLD; i++) {
      feedback.get(version).recordCreate(promiseAssignees.getFirst());
      feedback.get(version).recordCreate(promiseAssignees.get(1));
    }
    // p2: also forced
    for (int i = 0; i < 5; i++) {
      feedback.get(version).recordForce(promiseAssignees.get(1));
    }

    assertTrue(optimization.run(feedback, module));

    var printed = Printer.toString(module);
    // p1 should be elided (deopt), p2 should remain (force p2 exists)
    assertTrue(
        printed.contains("deopt 0 []"), "p1 should be replaced with deopt; got:\n" + printed);
    assertTrue(printed.contains("force p2"), "p2 usage should remain; got:\n" + printed);
  }

  @Test
  void baseline_skipped() {
    // AbstractionOptimization skips baselines. Even if we record feedback for the baseline,
    // the optimization should not fire on it.
    var module =
        ParseUtil.parseModule(
            """
            fun main(x) {
              (reg x:R) --> R { reg p:p(R -) |
                p = prom<R ->{
                  return x;
                };
                return x;
              }
            }
            """);

    var fn = Objects.requireNonNull(module.localFunction(Variable.named("main")));
    var baseline = fn.baseline();
    var promiseAssignee = findPromiseAssignees(baseline).getFirst();

    var feedback = new MockModuleFeedback();
    for (int i = 0; i < THRESHOLD; i++) {
      feedback.get(baseline).recordCreate(promiseAssignee);
    }

    // Only one version (the baseline), so the optimization skips it
    assertFalse(optimization.run(feedback, module), "baseline should be skipped");
  }

  /// Record `createCount` creates and `forceCount` forces for the first promise in the
  /// first non-baseline version of the `main` function.
  private static MockModuleFeedback recordPromiseCreates(
      Module module, int createCount, int forceCount) {
    var fn = Objects.requireNonNull(module.localFunction(Variable.named("main")));
    var version = List.copyOf(fn.versions()).get(1);
    var promiseAssignee = findPromiseAssignees(version).getFirst();

    var feedback = new MockModuleFeedback();
    for (int i = 0; i < createCount; i++) {
      feedback.get(version).recordCreate(promiseAssignee);
    }
    for (int i = 0; i < forceCount; i++) {
      feedback.get(version).recordForce(promiseAssignee);
    }
    return feedback;
  }

  private static List<Register> findPromiseAssignees(Abstraction version) {
    return version
        .streamCfgs()
        .flatMap(cfg -> cfg.bbs().stream())
        .flatMap(bb -> bb.statements().stream())
        .filter(stmt -> stmt.assignee() != null && stmt.expression() instanceof Promise)
        .map(stmt -> (@NonNull Register) stmt.assignee())
        .toList();
  }
}
