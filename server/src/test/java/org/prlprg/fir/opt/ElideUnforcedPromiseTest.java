package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;

import java.util.List;
import org.jspecify.annotations.NonNull;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.interpret.internal.MockModuleFeedback;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.parseprint.Printer;

class ElideUnforcedPromiseTest {
  private static final int THRESHOLD = 10;

  private final ElideUnforcedPromise optimization = new ElideUnforcedPromise(THRESHOLD);

  @Test
  void unforcedPromise_bodyReplacedWithDeopt() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:R) -~> R { reg p:p(R +), var p:* |
              p = prom<R ~>{
                mkenv;
                popenv;
                return x;
              };
              st p = p;
              return x;
            }
            """);

    var feedback = recordPromiseCreates(abstraction, THRESHOLD, 0);

    assertTrue(optimization.run(null, feedback, abstraction), "should elide unforced promise");

    var printed = Printer.toString(abstraction);
    assertTrue(
        printed.contains("deopt 0 []"), "promise body should contain deopt; got:\n" + printed);
    assertTrue(
        printed.contains("prom<R ->"), "promise effects should be NONE (-); got:\n" + printed);
    assertFalse(printed.contains("mkenv"), "old promise body should be gone; got:\n" + printed);
  }

  @Test
  void forcedPromise_unchanged() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:R) -~> R { reg p:p(R ~), var p:*, reg r:R |
              p = prom<R ~>{
                mkenv;
                popenv;
                return x;
              };
              st p = p;
              r = force p;
              return r;
            }
            """);

    var feedback = recordPromiseCreates(abstraction, THRESHOLD, 5);

    assertFalse(optimization.run(null, feedback, abstraction), "should not elide forced promise");

    var printed = Printer.toString(abstraction);
    assertFalse(
        printed.contains("deopt 0 []"), "promise body should not contain deopt; got:\n" + printed);
    assertTrue(
        printed.contains("return x"), "original promise body should remain; got:\n" + printed);
  }

  @Test
  void belowThreshold_unchanged() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:R) -~> R { reg p:p(R ~), var p:* |
              p = prom<R ~>{
                mkenv;
                popenv;
                return x;
              };
              st p = p;
              return x;
            }
            """);

    // Create count is below threshold
    var feedback = recordPromiseCreates(abstraction, THRESHOLD - 1, 0);

    assertFalse(optimization.run(null, feedback, abstraction), "below threshold should not elide");
  }

  @Test
  void noFeedback_unchanged() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:R) -~> R { reg p:p(R ~), var p:* |
              p = prom<R ~>{
                mkenv;
                popenv;
                return x;
              };
              st p = p;
              return x;
            }
            """);

    var feedback = new MockModuleFeedback().get(abstraction);

    assertFalse(optimization.run(null, feedback, abstraction), "no feedback should not elide");
  }

  @Test
  void secondRun_idempotent() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:R) -~> R { reg p:p(R ~), var p:* |
              p = prom<R ~>{
                mkenv;
                popenv;
                return x;
              };
              st p = p;
              return x;
            }
            """);

    var feedback = recordPromiseCreates(abstraction, THRESHOLD, 0);

    assertTrue(optimization.run(null, feedback, abstraction), "first run should make changes");
    // After first run, the promise has been replaced. It shouldn't be replaced again
    assertFalse(optimization.run(null, feedback, abstraction), "second run should be idempotent");
  }

  @Test
  void multiplePromises_onlyUnforcedElided() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:R) -~> R { reg p1:p(R ~), var p1:*, reg p2:p(R ~), var p2:*, reg r:R |
              p1 = prom<R ~>{
                mkenv;
                popenv;
                return x;
              };
              st p1 = p1;
              p2 = prom<R ~>{
                mkenv;
                popenv;
                return x;
              };
              st p2 = p2;
              r = force p2;
              return r;
            }
            """);

    var promiseAssignees = findPromiseAssignees(abstraction);
    assertEquals(2, promiseAssignees.size());

    var feedback = new MockModuleFeedback().get(abstraction);
    // p1: created many times, never forced
    for (int i = 0; i < THRESHOLD; i++) {
      feedback.recordAssign(promiseAssignees.getFirst());
      feedback.recordAssign(promiseAssignees.get(1));
    }
    // p2: also forced
    for (int i = 0; i < 5; i++) {
      feedback.recordForce(promiseAssignees.get(1));
    }

    assertTrue(optimization.run(null, feedback, abstraction));

    var printed = Printer.toString(abstraction);
    // p1 should be elided (deopt), p2 should remain (force p2 exists)
    assertTrue(
        printed.contains("deopt 0 []"), "p1 should be replaced with deopt; got:\n" + printed);
    assertTrue(printed.contains("force p2"), "p2 usage should remain; got:\n" + printed);
  }

  /// Record `createCount` creates and `forceCount` forces for the first promise in the
  /// first non-baseline version of the `main` function.
  private static AbstractionFeedback recordPromiseCreates(
      Abstraction abstraction, int createCount, int forceCount) {
    var promiseAssignee = findPromiseAssignees(abstraction).getFirst();

    var feedback = new MockModuleFeedback().get(abstraction);
    for (int i = 0; i < createCount; i++) {
      feedback.recordAssign(promiseAssignee);
    }
    for (int i = 0; i < forceCount; i++) {
      feedback.recordForce(promiseAssignee);
    }
    return feedback;
  }

  private static List<Register> findPromiseAssignees(Abstraction abstraction) {
    return abstraction
        .streamCfgs()
        .flatMap(cfg -> cfg.bbs().stream())
        .flatMap(bb -> bb.statements().stream())
        .filter(stmt -> stmt.assignee() != null && stmt.expression() instanceof Promise)
        .map(stmt -> (@NonNull Register) stmt.assignee())
        .toList();
  }
}
