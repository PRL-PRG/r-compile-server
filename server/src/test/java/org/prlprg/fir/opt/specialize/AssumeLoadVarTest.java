package org.prlprg.fir.opt.specialize;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.opt.AbstractionOptimization;
import org.prlprg.fir.opt.AbstractionOptimizationUnitTest;
import org.prlprg.fir.opt.MergeAssumeLoadVar;
import org.prlprg.parseprint.Printer;

class AssumeLoadVarTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new MergeAssumeLoadVar();
  }

  @Test
  void mergesLoadVarAndAssumeConstant() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { ... }
              () --> I { reg x:*, var target:* |
                mkenv;
                st target = <int 7>;
                check BB1() else BBdeopt1();
              BB1():
                x = ld target;
                check BB2() else BBdeopt2();
              BB2():
                x ?= <int 7>;
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
    assertTrue(
        printed.contains("ld target ?= <int 7>"),
        "Load + AssumeConstant should be merged into AssumeLoadVar; printed:\n" + printed);
    assertFalse(
        printed.contains("= ld target"),
        "the original Load should be removed; printed:\n" + printed);
  }

  @Test
  void mergesLoadFunAndAssumeFunction() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { ... }
              () --> I { reg c:*, reg x:*, var target:* |
                mkenv;
                c = clos target;
                st target = c;
                check BB1() else BBdeopt1();
              BB1():
                x = ldf target;
                check BB2() else BBdeopt2();
              BB2():
                x ?- target;
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
    assertTrue(
        printed.contains("ldf target ?- target"),
        "Load + AssumeFunction should be merged into AssumeLoadFun; printed:\n" + printed);
    assertFalse(
        printed.contains("= ldf target"),
        "the original Load should be removed; printed:\n" + printed);
  }

  @Test
  void doesNotMergeLoadFunAndAssumeConstant() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { ... }
              () --> I { reg c:*, reg x:*, var target:* |
                mkenv;
                c = clos target;
                st target = c;
                check BB1() else BBdeopt1();
              BB1():
                x = ldf target;
                check BB2() else BBdeopt2();
              BB2():
                x ?= <int 7>;
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

    assertFalse(run(module), "Load(LOCAL_FUN) + AssumeConstant should not be merged");

    var printed = Printer.toString(module);
    assertTrue(printed.contains("= ldf target"), "Load should remain; printed:\n" + printed);
    assertTrue(
        printed.contains("?= <int 7>"), "AssumeConstant should remain; printed:\n" + printed);
  }

  @Test
  void doesNotMergeLoadVarAndAssumeFunction() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { ... }
              () --> I { reg x:*, var target:* |
                mkenv;
                st target = <int 7>;
                check BB1() else BBdeopt1();
              BB1():
                x = ld target;
                check BB2() else BBdeopt2();
              BB2():
                x ?- target;
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

    assertFalse(run(module), "Load(LOCAL_VAR) + AssumeFunction should not be merged");

    var printed = Printer.toString(module);
    assertTrue(printed.contains("= ld target"), "Load should remain; printed:\n" + printed);
    assertTrue(printed.contains("?- target"), "AssumeFunction should remain; printed:\n" + printed);
  }
}
