package org.prlprg.fir.opt.specialize;

import static org.junit.jupiter.api.Assertions.*;

import java.util.Objects;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.interpret.internal.MockModuleFeedback;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.position.CfgPosition;
import org.prlprg.fir.opt.Specialize;
import org.prlprg.parseprint.Printer;

class SpecializeLocalPromiseTest {
  private final Specialize optimization = new Specialize(new SpecializeLocalPromise(1));

  private static final String SOURCE =
      """
      () -+> v1(I) { reg p:p(v1(I) -), reg r:v1(I) |
        p = prom<v1(I) ->{ return <int 1>; };
        r = force p;
        return r;
      }
      """;

  @Test
  void notEscapingInFeedback_marked() {
    var abstraction = ParseUtil.parseAbstraction(SOURCE);
    var feedback = recordedFeedback(abstraction);

    assertTrue(
        optimization.run(null, feedback, abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("prom-<"), "promise should be local; printed:\n" + printed);
  }

  @Test
  void escapingInFeedback_notMarked() {
    var abstraction = ParseUtil.parseAbstraction(SOURCE);
    var feedback = recordedFeedback(abstraction);
    feedback.escapingPromises.add(promisePosition(abstraction));

    assertFalse(
        optimization.run(null, feedback, abstraction), "escaping promise should not be marked");

    var printed = Printer.toString(abstraction);
    assertFalse(
        printed.contains("prom-<"), "promise should remain non-local; printed:\n" + printed);
  }

  @Test
  void noFeedback_notMarked() {
    var abstraction = ParseUtil.parseAbstraction(SOURCE);
    // No recorded calls: the absence of a recorded escape doesn't specify anything.
    var feedback = new MockModuleFeedback().get(abstraction);

    assertFalse(
        optimization.run(null, feedback, abstraction),
        "without feedback, the promise should not be marked");

    var printed = Printer.toString(abstraction);
    assertFalse(
        printed.contains("prom-<"), "promise should remain non-local; printed:\n" + printed);
  }

  private static AbstractionFeedback recordedFeedback(Abstraction abstraction) {
    var feedback = new MockModuleFeedback().get(abstraction);
    feedback.recordCall();
    return feedback;
  }

  private static CfgPosition promisePosition(Abstraction abstraction) {
    var cfg = Objects.requireNonNull(abstraction.cfg());
    for (var bb : cfg.bbs()) {
      var statements = bb.statements();
      for (var i = 0; i < statements.size(); i++) {
        if (statements.get(i).expression() instanceof Promise) {
          return new CfgPosition(bb, i);
        }
      }
    }
    throw new AssertionError("no promise in abstraction:\n" + Printer.toString(abstraction));
  }
}
