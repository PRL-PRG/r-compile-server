package org.prlprg.fir.opt.specialize;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.opt.AbstractionOptimization;
import org.prlprg.fir.opt.AbstractionOptimizationUnitTest;
import org.prlprg.fir.opt.OptimizationUnitTest;
import org.prlprg.fir.opt.Specialize;
import org.prlprg.parseprint.Printer;

class ElideBuiltinClosureTest implements AbstractionOptimizationUnitTest, OptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new Specialize(new ElideBuiltinClosure());
  }

  @Test
  void intrinsic_withClosure_elidesClosureWithEnv() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg clo:cls, reg x:V) -~> V { |
              checkMissing@clo< V -~> V >(x);
              return x;
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertFalse(
        printed.contains("@clo"),
        "closure-with-env should be elided for intrinsic; printed:\n" + printed);
    assertTrue(
        printed.contains("checkMissing<"), "call should still be present; printed:\n" + printed);
  }

  @Test
  void builtin_withClosure_elidesClosureWithEnv() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg clo:cls, reg x:B, reg y:B) -~> B { reg r:B |
              r = xor@clo< B, B --> B >(x, y);
              return r;
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertFalse(
        printed.contains("@clo"),
        "closure-with-env should be elided for builtin; printed:\n" + printed);
    assertTrue(printed.contains("xor<"), "call should still be present; printed:\n" + printed);
  }

  @Test
  void builtin_alreadyElided_noChange() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:B, reg y:B) -~> B { reg r:B |
              r = xor< B, B --> B >(x, y);
              return r;
            }
            """);

    assertFalse(run(abstraction), "optimization should report no change when already elided");
  }

  @Test
  void userFunction_withClosure_doesNotElideClosure() {
    var module =
        ParseUtil.parseModule(
            """
            fun target(x) {
              (reg x:B) --> B { ... }
            }

            fun main(clo, x) {
              (reg clo:cls, reg x:B) --> B { reg r:B |
                r = target@clo< B --> B >(x);
                return r;
              }
            }
            """);

    run(module);

    var printed = Printer.toString(module);
    assertTrue(
        printed.contains("@clo"),
        "closure-with-env should remain for user function; printed:\n" + printed);
  }
}
