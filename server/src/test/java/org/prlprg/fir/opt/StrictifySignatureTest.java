package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.opt.specialize.ImproveSignatures;
import org.prlprg.parseprint.Printer;

class StrictifySignatureTest implements OptimizationUnitTest {
  @Override
  public Optimization optimization() {
    return new Specialize(new ImproveSignatures());
  }

  @Test
  void simpleForce_marksStrict() {
    var module =
        ParseUtil.parseModule(
            """
            fun f(x) {
              (reg x:p(I -)) --> I { reg r:I |
                r = force x;
                return r;
              }
            }
            """);

    assertTrue(run(module), "optimization should report a change");

    var printed = Printer.toString(module);
    assertTrue(printed.contains("@!"), "parameter should be marked strict");
  }

  @Test
  void noForce_notStrict() {
    var module =
        ParseUtil.parseModule(
            """
            fun f(x) {
              (reg x:p(I -)) --> I { |
                return 42;
              }
            }
            """);

    assertFalse(run(module), "optimization should report no change");

    var printed = Printer.toString(module);
    assertFalse(printed.contains("@!"), "parameter should not be marked strict");
  }

  @Test
  void forceOnOneBranch_notStrict() {
    var module =
        ParseUtil.parseModule(
            """
            fun f(x, cond) {
              (reg x:p(I -), reg cond:L) --> I { reg r:I |
                if cond then L1() else L2();
              L1():
                r = force x;
                return r;
              L2():
                return 0;
              }
            }
            """);

    assertFalse(run(module), "optimization should report no change");

    var printed = Printer.toString(module);
    assertFalse(printed.contains("@!"), "parameter should not be marked strict");
  }

  @Test
  void forceOnBothBranches_isStrict() {
    var module =
        ParseUtil.parseModule(
            """
            fun f(x, cond) {
              (reg x:p(I -), reg cond:L) --> I { reg r:I, reg r2:I |
                if cond then L1() else L2();
              L1():
                r = force x;
                return r;
              L2():
                r2 = force x;
                return r2;
              }
            }
            """);

    assertTrue(run(module), "optimization should report a change");

    var printed = Printer.toString(module);
    assertTrue(printed.contains("@!"), "parameter should be marked strict");
  }

  @Test
  void valueParam_notChanged() {
    var module =
        ParseUtil.parseModule(
            """
            fun f(x) {
              (reg x:I) --> I { |
                return x;
              }
            }
            """);

    assertFalse(run(module), "optimization should report no change");

    var printed = Printer.toString(module);
    assertFalse(printed.contains("@!"), "value parameter should not be marked strict");
  }

  @Test
  void reflectiveBeforeForce_notStrict() {
    var module =
        ParseUtil.parseModule(
            """
            fun f(x) {
              (reg x:p(I -)) -+> I { reg r:I, reg g:cls |
                g = ldf g;
                r = force x;
                return r;
              }
            }
            """);

    assertFalse(run(module), "optimization should report no change");

    var printed = Printer.toString(module);
    assertFalse(printed.contains("@!"), "parameter should not be marked strict");
  }

  @Test
  void forceBeforeReflective_isStrict() {
    var module =
        ParseUtil.parseModule(
            """
            fun f(x) {
              (reg x:p(I -)) -+> I { reg r:I, reg g:V |
                r = force x;
                g = ldf g;
                return r;
              }
            }
            """);

    assertTrue(run(module), "optimization should report a change");

    var printed = Printer.toString(module);
    assertTrue(printed.contains("@!"), "parameter should be marked strict");
  }

  @Test
  void maybeForce_countsAsForce() {
    var module =
        ParseUtil.parseModule(
            """
            fun f(x) {
              (reg x:p?(I -)) --> I { reg r:I |
                r = force? x;
                return r;
              }
            }
            """);

    assertTrue(run(module), "optimization should report a change");

    var printed = Printer.toString(module);
    assertTrue(printed.contains("@!"), "parameter should be marked strict");
  }

  @Test
  void deoptPath_ignored() {
    var module =
        ParseUtil.parseModule(
            """
            fun f(x) {
              (reg x:p(I -)) --> I { reg r:I, reg c:B |
                c = blackBox< B --> B >(TRUE);
                check L1() else L2();
              L1():
                c ?= TRUE;
                r = force x;
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
