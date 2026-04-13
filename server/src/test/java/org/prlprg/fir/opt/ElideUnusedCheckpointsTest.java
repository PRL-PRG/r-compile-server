package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.parseprint.Printer;

class ElideUnusedCheckpointsTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new ElideUnusedCheckpoints();
  }

  @Test
  void noAssumptions_checkpointRemoved() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg r:I) --> I { |
              check L1() else L2();
            L1():
              return r;
            L2():
              mkenv;
              deopt 5 [];
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
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
              () --> I { ... }
              () --> I { reg r:B |
                r = blackBox< B -~> B >(TRUE);
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
              (reg x:B) -~> B { ... }
            }
            """);

    assertFalse(run(module), "checkpoint with assumptions should not be removed");

    var printed = Printer.toString(module);
    assertTrue(printed.contains("check"), "checkpoint should remain");
  }

  @Test
  void successBBWithStatements_noAssumptions_inlined() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg r:I) --> I { reg s:I |
              check L1() else L2();
            L1():
              s = `+`< I,I --> I >(r, r);
              return s;
            L2():
              mkenv;
              deopt 5 [];
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertFalse(printed.contains("check"), "checkpoint should be removed");
    assertTrue(printed.contains("`+`< I,I --> I >(r, r)"), "inlined statement should be preserved");
    assertTrue(printed.contains("return s"), "return should be preserved");
  }
}
