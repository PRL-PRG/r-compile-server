package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.parseprint.Printer;

class ElideUnusedCheckpointsTest {
  private static final ElideUnusedCheckpoints OPT = new ElideUnusedCheckpoints();

  private static boolean run(Module module) {
    var changed = false;
    for (var fn : module.localFunctions()) {
      for (var version : fn.versions()) {
        if (OPT.run(new AbstractionFeedback(), version)) {
          changed = true;
        }
      }
    }
    return changed;
  }

  @Test
  void noAssumptions_checkpointRemoved() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { reg r:I |
                r = 0;
                check L1() else L2();
              L1():
                return r;
              L2():
                mkenv;
                deopt 5 [];
              }
            }
            """);

    assertTrue(run(module), "optimization should report a change");

    var printed = Printer.toString(module);
    assertFalse(printed.contains("check"), "checkpoint should be removed");
    assertFalse(printed.contains("L1"), "success BB should be inlined");
    assertFalse(printed.contains("L2"), "deopt BB should be removed");
    assertTrue(printed.contains("return r"), "return should be preserved");
  }

  @Test
  void withAssumptions_checkpointKept() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { reg r:L |
                r = blackBox(TRUE);
                check L1() else L2();
              L1():
                r ?= TRUE;
                return 0;
              L2():
                mkenv;
                deopt 5 [];
              }
            }
            fun blackBox(x) {
              (reg x:L) --> L { ... }
            }
            """);

    assertFalse(run(module), "checkpoint with assumptions should not be removed");

    var printed = Printer.toString(module);
    assertTrue(printed.contains("check"), "checkpoint should remain");
  }

  @Test
  void successBBWithStatements_noAssumptions_inlined() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { reg r:I, reg s:I |
                r = 0;
                check L1() else L2();
              L1():
                s = `+`.0(r, r);
                return s;
              L2():
                mkenv;
                deopt 5 [];
              }
            }
            fun `+`(a, b) {
              (reg a:I, reg b:I) --> I { ... }
            }
            """);

    assertTrue(run(module), "optimization should report a change");

    var printed = Printer.toString(module);
    assertFalse(printed.contains("check"), "checkpoint should be removed");
    assertTrue(printed.contains("`+`.0(r, r)"), "inlined statement should be preserved");
    assertTrue(printed.contains("return s"), "return should be preserved");
  }
}
