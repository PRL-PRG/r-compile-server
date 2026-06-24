package org.prlprg.fir.opt.specialize;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.opt.AbstractionOptimization;
import org.prlprg.fir.opt.AbstractionOptimizationUnitTest;
import org.prlprg.fir.opt.Specialize;
import org.prlprg.parseprint.Printer;

class ElideRedundantAssumeLoadTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new Specialize(new ElideRedundantAssumeLoad());
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
              () --> v1(I) { |
                return <int 7>;
              }
            }
            """);

    assertTrue(run(module), "optimization should report a change");

    var printed = Printer.toString(module);
    assertEquals(
        1,
        ParseUtil.countOccurrences(printed, "ldf target ?- target"),
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
              () --> v1(I) { |
                return <int 7>;
              }
            }
            """);

    run(module);

    var printed = Printer.toString(module);
    assertEquals(
        2,
        ParseUtil.countOccurrences(printed, "ldf target ?- target"),
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
              () --> v1(I) { |
                return <int 7>;
              }
            }
            """);

    run(module);

    var printed = Printer.toString(module);
    assertEquals(
        2,
        ParseUtil.countOccurrences(printed, "ldf target ?- target"),
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
              () --> v1(I) { |
                return <int 7>;
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
              () --> v1(I) { |
                return <int 7>;
              }
            }
            """);

    assertTrue(run(module), "optimization should report a change");

    var printed = Printer.toString(module);
    assertEquals(
        1,
        ParseUtil.countOccurrences(printed, "ldf target ?- target"),
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
              () --> v1(I) { |
                return <int 7>;
              }
            }
            """);

    run(module);

    var printed = Printer.toString(module);
    assertEquals(
        2,
        ParseUtil.countOccurrences(printed, "ldf target ?- target"),
        "one branch invalidated: both AssumeLoadFun should remain; printed:\n" + printed);
  }

  @Test
  void var_dominatedSameVariable_elided() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { ... }
              () --> I { var target:* |
                mkenv;
                st target = <int 7>;
                check BB1() else BBdeopt1();
              BB1():
                ld target ?= <int 7>;
                check BB2() else BBdeopt2();
              BB2():
                ld target ?= <int 7>;
                popenv;
                return 7;
              BBdeopt1():
                deopt 0 [];
              BBdeopt2():
                deopt 0 [];
              }
            }
            """);

    assertTrue(run(module), "optimization should report a change");

    var printed = Printer.toString(module);
    assertEquals(
        1,
        ParseUtil.countOccurrences(printed, "ld target ?= <int 7>"),
        "second AssumeLoadVar should be elided; printed:\n" + printed);
  }

  @Test
  void var_storeInvalidates_notElided() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { ... }
              () --> I { var target:* |
                mkenv;
                st target = <int 7>;
                check BB1() else BBdeopt1();
              BB1():
                ld target ?= <int 7>;
                st target = <int 7>;
                check BB2() else BBdeopt2();
              BB2():
                ld target ?= <int 7>;
                popenv;
                return 7;
              BBdeopt1():
                deopt 0 [];
              BBdeopt2():
                deopt 0 [];
              }
            }
            """);

    run(module);

    var printed = Printer.toString(module);
    assertEquals(
        2,
        ParseUtil.countOccurrences(printed, "ld target ?= <int 7>"),
        "store invalidates: both AssumeLoadVar should remain; printed:\n" + printed);
  }

  @Test
  void var_reflectiveInvalidates_notElided() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { ... }
              () -+> I { reg g:V, var target:* |
                mkenv;
                st target = <int 7>;
                check BB1() else BBdeopt1();
              BB1():
                ld target ?= <int 7>;
                g = ldf g;
                check BB2() else BBdeopt2();
              BB2():
                ld target ?= <int 7>;
                popenv;
                return 7;
              BBdeopt1():
                deopt 0 [];
              BBdeopt2():
                deopt 0 [];
              }
            }
            """);

    run(module);

    var printed = Printer.toString(module);
    assertEquals(
        2,
        ParseUtil.countOccurrences(printed, "ld target ?= <int 7>"),
        "reflective invalidates: both AssumeLoadVar should remain; printed:\n" + printed);
  }

  @Test
  void var_differentConstant_notElided() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { ... }
              () --> I { var target:* |
                mkenv;
                st target = <int 7>;
                check BB1() else BBdeopt1();
              BB1():
                ld target ?= <int 7>;
                check BB2() else BBdeopt2();
              BB2():
                ld target ?= <int 8>;
                popenv;
                return 7;
              BBdeopt1():
                deopt 0 [];
              BBdeopt2():
                deopt 0 [];
              }
            }
            """);

    run(module);

    var printed = Printer.toString(module);
    assertTrue(
        printed.contains("ld target ?= <int 7>"),
        "different constant: first AssumeLoadVar should remain; printed:\n" + printed);
    assertTrue(
        printed.contains("ld target ?= <int 8>"),
        "different constant: second AssumeLoadVar should remain; printed:\n" + printed);
  }

  @Test
  void var_branchThenMerge_elided() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(cond) {
              (reg cond:L) --> I { ... }
              (reg cond:L) --> I { var target:* |
                mkenv;
                st target = <int 7>;
                check BB1() else BBdeopt1();
              BB1():
                ld target ?= <int 7>;
                if cond then L1() else L2();
              L1():
                goto LMerge();
              L2():
                goto LMerge();
              LMerge():
                check BB3() else BBdeopt2();
              BB3():
                ld target ?= <int 7>;
                popenv;
                return 7;
              BBdeopt1():
                deopt 0 [];
              BBdeopt2():
                deopt 0 [];
              }
            }
            """);

    assertTrue(run(module), "optimization should report a change");

    var printed = Printer.toString(module);
    assertEquals(
        1,
        ParseUtil.countOccurrences(printed, "ld target ?= <int 7>"),
        "second AssumeLoadVar should be elided after branch merge; printed:\n" + printed);
  }
}
