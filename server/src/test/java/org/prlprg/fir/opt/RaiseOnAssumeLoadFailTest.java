package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;

import java.util.Objects;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.parseprint.Printer;

class RaiseOnAssumeLoadFailTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new RaiseOnAssumeLoadFail();
  }

  /// FIŘ module with a `main` function whose non-baseline version has a checkpoint guarded only by
  /// `AssumeLoadVar`/`AssumeLoadFun` assumptions, deopting to a block that does some work and then
  /// `deopt`s.
  private static final String MODULE =
      """
      fun main() {
        () --> I { ... }
        () --> I { reg c:*, var x:*, var g:* |
          mkenv;
          st x = <int 7>;
          c = clos g;
          st g = c;
          check BB1() else BBdeopt();
        BB1():
          ld x ?= <int 7>;
          ldf g ?- g;
          popenv;
          return 7;
        BBdeopt():
          mkenv;
          deopt 0 [];
        }
      }
      fun g() {
        () --> v1(I) { |
          return <int 7>;
        }
      }
      """;

  private static void setRaiseOnAssumeLoadFail(Module module) {
    Objects.requireNonNull(module.localFunction(Variable.named("main")))
        .userProperties()
        .setRaiseOnAssumeLoadFail(true);
  }

  @Test
  void loadAssumptions_deoptReplacedWithRaise() {
    var module = ParseUtil.parseModule(MODULE);
    setRaiseOnAssumeLoadFail(module);

    assertTrue(run(module), "optimization should report a change");

    var printed = Printer.toString(module);
    assertFalse(printed.contains("deopt 0 []"), "deopt should be replaced; printed:\n" + printed);
    assertTrue(
        printed.contains("raise \"Variable assumption(s) failed: x, g\""),
        "deopt should become a raise listing the assumed variables; printed:\n" + printed);
    // The other instruction in the deopt block ("mkenv") should have been removed. There's still
    // the entry-block "mkenv", so we check there's only one left.
    assertEquals(
        1,
        countMkenvOccurrences(printed),
        "deopt block's mkenv should be removed; got:\n" + printed);
    // The success-side assumptions are untouched.
    assertTrue(
        printed.contains("ld x ?= <int 7>"), "success assumptions kept; printed:\n" + printed);
    assertTrue(printed.contains("ldf g ?- g"), "success assumptions kept; printed:\n" + printed);
  }

  @Test
  void propertyNotSet_noChange() {
    var module = ParseUtil.parseModule(MODULE);

    assertFalse(run(module), "optimization should not run when raiseOnAssumeLoadFail is unset");

    var printed = Printer.toString(module);
    assertTrue(printed.contains("deopt 0 []"), "deopt should remain; printed:\n" + printed);
    assertFalse(printed.contains("raise"), "no raise should be inserted; printed:\n" + printed);
  }

  @Test
  void nonLoadAssumption_noChange() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { ... }
              () --> I { reg r:B |
                r = TRUE;
                check BB1() else BBdeopt();
              BB1():
                r ?= TRUE;
                return 0;
              BBdeopt():
                deopt 0 [];
              }
            }
            """);
    setRaiseOnAssumeLoadFail(module);

    assertFalse(
        run(module), "optimization should not run when assumptions aren't all load assumptions");

    var printed = Printer.toString(module);
    assertTrue(printed.contains("deopt 0 []"), "deopt should remain; printed:\n" + printed);
    assertFalse(printed.contains("raise"), "no raise should be inserted; printed:\n" + printed);
  }

  @Test
  void noAssumptions_noChange() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { ... }
              () --> I { |
                check BB1() else BBdeopt();
              BB1():
                return 0;
              BBdeopt():
                deopt 0 [];
              }
            }
            """);
    setRaiseOnAssumeLoadFail(module);

    assertFalse(run(module), "optimization should not run when there are no assumptions");

    var printed = Printer.toString(module);
    assertTrue(printed.contains("deopt 0 []"), "deopt should remain; printed:\n" + printed);
  }

  private static int countMkenvOccurrences(String text) {
    int count = 0;
    int idx = 0;
    while ((idx = text.indexOf("mkenv", idx)) != -1) {
      count++;
      idx += "mkenv".length();
    }
    return count;
  }
}
