package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.interpret.internal.MockModuleFeedback;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.parseprint.Parser;

class ElideUnusedVersionsTest implements OptimizationUnitTest {
  @Override
  public Optimization optimization() {
    return new ElideUnusedVersions(10);
  }

  private MockModuleFeedback parseFeedback(
      org.prlprg.fir.ir.module.Module module, String feedbackText) {
    return Parser.fromString(
        feedbackText, MockModuleFeedback.class, new MockModuleFeedback.ParseContext(module));
  }

  @Test
  void removesUnusedNonBaseline() {
    var module =
        ParseUtil.parseModule(
            """
            fun f(x) {
              (reg x:*) --> * { | return x; }
              (reg x:I) --> I { | return x; }
            }
            """);

    var feedback =
        parseFeedback(
            module,
            """
            feedback {
              f< * --> * > = 15x []
              f< I --> I > = 0x []
            }
            """);

    assertTrue(optimization().run(feedback, module));

    var f = module.localFunctions().iterator().next();
    assertEquals(1, f.versions().size(), "unused specialized version should be removed");
  }

  @Test
  void keepsUsedNonBaseline() {
    var module =
        ParseUtil.parseModule(
            """
            fun f(x) {
              (reg x:*) --> * { | return x; }
              (reg x:I) --> I { | return x; }
            }
            """);

    var feedback =
        parseFeedback(
            module,
            """
            feedback {
              f< * --> * > = 5x []
              f< I --> I > = 10x []
            }
            """);

    assertFalse(optimization().run(feedback, module));

    var f = module.localFunctions().iterator().next();
    assertEquals(2, f.versions().size(), "both versions should remain");
  }

  @Test
  void belowThreshold_noChange() {
    var module =
        ParseUtil.parseModule(
            """
            fun f(x) {
              (reg x:*) --> * { | return x; }
              (reg x:I) --> I { | return x; }
            }
            """);

    var feedback =
        parseFeedback(
            module,
            """
            feedback {
              f< * --> * > = 5x []
              f< I --> I > = 0x []
            }
            """);

    assertFalse(optimization().run(feedback, module));

    var f = module.localFunctions().iterator().next();
    assertEquals(2, f.versions().size(), "below threshold, no versions should be removed");
  }

  @Test
  void neverRemovesBaseline() {
    var module =
        ParseUtil.parseModule(
            """
            fun f(x) {
              (reg x:*) --> * { | return x; }
              (reg x:I) --> I { | return x; }
            }
            """);

    var feedback =
        parseFeedback(
            module,
            """
            feedback {
              f< * --> * > = 0x []
              f< I --> I > = 15x []
            }
            """);

    assertFalse(optimization().run(feedback, module));

    var f = module.localFunctions().iterator().next();
    assertEquals(2, f.versions().size(), "baseline should never be removed even with 0 calls");
  }
}
