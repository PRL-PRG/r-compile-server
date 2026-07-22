package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.opt.specialize.ImproveSignatures;
import org.prlprg.parseprint.Printer;

class StrictifySignatureTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new Specialize(new ImproveSignatures());
  }

  @Test
  void simpleForce_marksStrict() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:p(I -)) --> I {
              r: I = force x;
              return r;
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("@!"), "parameter should be marked strict");
  }

  @Test
  void noForce_notStrict() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:p(I -)) --> I {
              return 42;
            }
            """);

    assertFalse(run(abstraction), "optimization should report no change");

    var printed = Printer.toString(abstraction);
    assertFalse(printed.contains("@!"), "parameter should not be marked strict");
  }

  @Test
  void forceOnOneBranch_notStrict() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:p(I -), reg cond:L) --> I {
              if cond then L1() else L2();
            L1():
              r: I = force x;
              return r;
            L2():
              return 0;
            }
            """);

    assertFalse(run(abstraction), "optimization should report no change");

    var printed = Printer.toString(abstraction);
    assertFalse(printed.contains("@!"), "parameter should not be marked strict");
  }

  @Test
  void forceOnBothBranches_isStrict() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:p(I -), reg cond:L) --> I {
              if cond then L1() else L2();
            L1():
              r: I = force x;
              return r;
            L2():
              r2: I = force x;
              return r2;
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("@!"), "parameter should be marked strict");
  }

  @Test
  void valueParam_notChanged() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:I) --> I {
              return x;
            }
            """);

    assertFalse(run(abstraction), "optimization should report no change");

    var printed = Printer.toString(abstraction);
    assertFalse(printed.contains("@!"), "value parameter should not be marked strict");
  }

  @Test
  void reflectiveBeforeForce_notStrict() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:p(I -)) -+> I {
              g: cls = ldf g;
              r: I = force x;
              return r;
            }
            """);

    assertFalse(run(abstraction), "optimization should report no change");

    var printed = Printer.toString(abstraction);
    assertFalse(printed.contains("@!"), "parameter should not be marked strict");
  }

  @Test
  void forceBeforeReflective_isStrict() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:p(I -)) -+> I {
              r: I = force x;
              g: V = ldf g;
              return r;
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("@!"), "parameter should be marked strict");
  }

  @Test
  void maybeForce_countsAsForce() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:p?(I -)) --> I {
              r: I = force? x;
              return r;
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("@!"), "parameter should be marked strict");
  }

  @Test
  void deoptPath_ignored() {
    var module =
        ParseUtil.parseModule(
            """
            fun f(x) {
              (reg x:p(I -)) --> I { ... }
              (reg x:p(I -)) --> I {
                c: B = blackBox< B --> B >(TRUE);
                check L1() else L2();
              L1():
                c ?= TRUE;
                r: I = force x;
                return r;
              L2():
                mkenv;
                deopt 0 [];
              }
            }

            fun blackBox(x) {
              (reg x:B) --> B { ... }
            }
            """);

    assertTrue(run(module), "optimization should report a change");

    var printed = Printer.toString(module);
    assertTrue(printed.contains("@!"), "parameter should be marked strict (deopt path ignored)");
  }
}
