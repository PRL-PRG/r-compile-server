package org.prlprg.fir.opt.specialize;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.opt.AbstractionOptimization;
import org.prlprg.fir.opt.AbstractionOptimizationUnitTest;
import org.prlprg.fir.opt.Specialize;
import org.prlprg.parseprint.Printer;

class ElideRedundantAssumeLoadFunTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new Specialize(new ElideRedundantAssumeLoadFun());
  }

  @Test
  void dominatedSameVariable_elided() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { ... }
              () --> I { reg c:*, var target:* |
                mkenv;
                c = clos target;
                st target = c;
                check BB1() else BBdeopt1();
              BB1():
                ldf target ?- target;
                check BB2() else BBdeopt2();
              BB2():
                ldf target ?- target;
                popenv;
                return 7;
              BBdeopt1():
                deopt 0 [];
              BBdeopt2():
                deopt 0 [];
              }
            }
            fun target() {
              () --> I { |
                return 7;
              }
            }
            """);

    assertTrue(run(module), "optimization should report a change");

    var printed = Printer.toString(module);
    assertEquals(
        1,
        countLdfTargetOccurrences(printed),
        "second AssumeLoadFun should be elided; printed:\n" + printed);
  }

  @Test
  void storeInvalidates_notElided() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { ... }
              () --> I { reg c:*, var target:* |
                mkenv;
                c = clos target;
                st target = c;
                check BB1() else BBdeopt1();
              BB1():
                ldf target ?- target;
                st target = c;
                check BB2() else BBdeopt2();
              BB2():
                ldf target ?- target;
                popenv;
                return 7;
              BBdeopt1():
                deopt 0 [];
              BBdeopt2():
                deopt 0 [];
              }
            }
            fun target() {
              () --> I { |
                return 7;
              }
            }
            """);

    run(module);

    var printed = Printer.toString(module);
    assertEquals(
        2,
        countLdfTargetOccurrences(printed),
        "store invalidates: both AssumeLoadFun should remain; printed:\n" + printed);
  }

  @Test
  void reflectiveInvalidates_notElided() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { ... }
              () -+> I { reg c:*, reg g:V, var target:* |
                mkenv;
                c = clos target;
                st target = c;
                check BB1() else BBdeopt1();
              BB1():
                ldf target ?- target;
                g = ldf g;
                check BB2() else BBdeopt2();
              BB2():
                ldf target ?- target;
                popenv;
                return 7;
              BBdeopt1():
                deopt 0 [];
              BBdeopt2():
                deopt 0 [];
              }
            }
            fun target() {
              () --> I { |
                return 7;
              }
            }
            """);

    run(module);

    var printed = Printer.toString(module);
    assertEquals(
        2,
        countLdfTargetOccurrences(printed),
        "reflective invalidates: both AssumeLoadFun should remain; printed:\n" + printed);
  }

  @Test
  void differentFunction_notElided() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { ... }
              () --> I { reg c:*, var target:* |
                mkenv;
                c = clos target;
                st target = c;
                check BB1() else BBdeopt1();
              BB1():
                ldf target ?- target;
                check BB2() else BBdeopt2();
              BB2():
                ldf target ?- other;
                popenv;
                return 7;
              BBdeopt1():
                deopt 0 [];
              BBdeopt2():
                deopt 0 [];
              }
            }
            fun target() {
              () --> I { |
                return 7;
              }
            }
            fun other() {
              () --> I { |
                return 8;
              }
            }
            """);

    run(module);

    var printed = Printer.toString(module);
    assertTrue(
        printed.contains("ldf target ?- target"),
        "different function: first AssumeLoadFun should remain; printed:\n" + printed);
    assertTrue(
        printed.contains("ldf target ?- other"),
        "different function: second AssumeLoadFun should remain; printed:\n" + printed);
  }

  @Test
  void branchThenMerge_elided() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(cond) {
              (reg cond:L) --> I { ... }
              (reg cond:L) --> I { reg c:*, var target:* |
                mkenv;
                c = clos target;
                st target = c;
                check BB1() else BBdeopt1();
              BB1():
                ldf target ?- target;
                if cond then L1() else L2();
              L1():
                goto LMerge();
              L2():
                goto LMerge();
              LMerge():
                check BB3() else BBdeopt2();
              BB3():
                ldf target ?- target;
                popenv;
                return 7;
              BBdeopt1():
                deopt 0 [];
              BBdeopt2():
                deopt 0 [];
              }
            }
            fun target() {
              () --> I { |
                return 7;
              }
            }
            """);

    assertTrue(run(module), "optimization should report a change");

    var printed = Printer.toString(module);
    assertEquals(
        1,
        countLdfTargetOccurrences(printed),
        "second AssumeLoadFun should be elided after branch merge; printed:\n" + printed);
  }

  @Test
  void oneBranchInvalidated_notElided() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(cond) {
              (reg cond:L) --> I { ... }
              (reg cond:L) --> I { reg c:*, var target:* |
                mkenv;
                c = clos target;
                st target = c;
                check BB1() else BBdeopt1();
              BB1():
                ldf target ?- target;
                if cond then L1() else L2();
              L1():
                goto LMerge();
              L2():
                st target = c;
                goto LMerge();
              LMerge():
                check BB3() else BBdeopt2();
              BB3():
                ldf target ?- target;
                popenv;
                return 7;
              BBdeopt1():
                deopt 0 [];
              BBdeopt2():
                deopt 0 [];
              }
            }
            fun target() {
              () --> I { |
                return 7;
              }
            }
            """);

    run(module);

    var printed = Printer.toString(module);
    assertEquals(
        2,
        countLdfTargetOccurrences(printed),
        "one branch invalidated: both AssumeLoadFun should remain; printed:\n" + printed);
  }

  private static int countLdfTargetOccurrences(String text) {
    int count = 0;
    int idx = 0;
    while ((idx = text.indexOf("ldf target ?- target", idx)) != -1) {
      count++;
      idx += "ldf target ?- target".length();
    }
    return count;
  }
}
