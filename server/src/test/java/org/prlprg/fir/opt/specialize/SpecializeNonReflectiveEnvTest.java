package org.prlprg.fir.opt.specialize;

import static org.junit.jupiter.api.Assertions.*;

import java.util.Objects;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.analyze.cfg.CfgHierarchy;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.interpret.internal.MockModuleFeedback;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.expression.MkEnv;
import org.prlprg.fir.ir.position.CfgPosition;
import org.prlprg.fir.ir.position.ScopePosition;
import org.prlprg.fir.opt.Specialize;
import org.prlprg.parseprint.Printer;

class SpecializeNonReflectiveEnvTest {
  private final Specialize optimization = new Specialize(new SpecializeNonReflectiveEnv(1));

  @Test
  void notReflectiveInFeedback_marked() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            () --> I { reg r:I |
              mkenv;
              r = 0;
              popenv;
              return r;
            }
            """);
    var feedback = recordedFeedback(abstraction);

    assertTrue(
        optimization.run(null, feedback, abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("mkenv~"), "mkenv should be non-reflective; printed:\n" + printed);
  }

  @Test
  void reflectiveInFeedback_notMarked() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            () --> I { reg r:I |
              mkenv;
              r = 0;
              popenv;
              return r;
            }
            """);
    var feedback = recordedFeedback(abstraction);
    feedback.reflectiveEnvs.add(mkEnvPosition(abstraction));

    assertFalse(
        optimization.run(null, feedback, abstraction),
        "reflectively-accessed env should not be marked");

    var printed = Printer.toString(abstraction);
    assertFalse(printed.contains("mkenv~"), "mkenv should remain regular; printed:\n" + printed);
  }

  @Test
  void belowThreshold_notMarked() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            () --> I { reg r:I |
              mkenv;
              r = 0;
              popenv;
              return r;
            }
            """);
    var thresholdOptimization = new Specialize(new SpecializeNonReflectiveEnv(2));
    var feedback = recordedFeedback(abstraction);

    assertFalse(
        thresholdOptimization.run(null, feedback, abstraction),
        "below the threshold, the env should not be marked");

    var printed = Printer.toString(abstraction);
    assertFalse(printed.contains("mkenv~"), "mkenv should remain regular; printed:\n" + printed);

    // A second recorded call reaches the threshold.
    feedback.recordCall();

    assertTrue(
        thresholdOptimization.run(null, feedback, abstraction),
        "at the threshold, the optimization should report a change");

    printed = Printer.toString(abstraction);
    assertTrue(printed.contains("mkenv~"), "mkenv should be non-reflective; printed:\n" + printed);
  }

  @Test
  void noFeedback_notMarked() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            () --> I { reg r:I |
              mkenv;
              r = 0;
              popenv;
              return r;
            }
            """);
    // No recorded calls: the absence of a reflective access doesn't specify anything.
    var feedback = new MockModuleFeedback().get(abstraction);

    assertFalse(
        optimization.run(null, feedback, abstraction),
        "without feedback, the env should not be marked");

    var printed = Printer.toString(abstraction);
    assertFalse(printed.contains("mkenv~"), "mkenv should remain regular; printed:\n" + printed);
  }

  private static AbstractionFeedback recordedFeedback(Abstraction abstraction) {
    var feedback = new MockModuleFeedback().get(abstraction);
    feedback.recordCall();
    return feedback;
  }

  private static ScopePosition mkEnvPosition(Abstraction abstraction) {
    var cfg = Objects.requireNonNull(abstraction.cfg());
    for (var bb : cfg.bbs()) {
      var statements = bb.statements();
      for (var i = 0; i < statements.size(); i++) {
        if (statements.get(i).expression() instanceof MkEnv) {
          return new CfgHierarchy(abstraction).scopePos(new CfgPosition(bb, i));
        }
      }
    }
    throw new AssertionError("no mkenv in abstraction:\n" + Printer.toString(abstraction));
  }
}
