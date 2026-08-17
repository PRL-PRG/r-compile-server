package org.prlprg.fir.opt.specialize;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.opt.AbstractionOptimization;
import org.prlprg.fir.opt.AbstractionOptimizationUnitTest;
import org.prlprg.fir.opt.Specialize;
import org.prlprg.parseprint.Printer;

class SpecializeEmptyDotsTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new Specialize(new SpecializeEmptyDots());
  }

  @Test
  void emptyDotsToBuiltin_becomesMissing() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg rv:v(I), reg ri:v1(I), reg rval:v1(I)) -+> V {
              ddd: dots = dots[];
              r: V = `[<-`< v(I),v1(I),v1(I),dots -+> V >(rv, ri, rval, ddd);
              return r;
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertTrue(
        printed.contains("(rv, ri, rval, <missing>)"),
        "the empty dots should be passed as missing; printed:\n" + printed);
  }

  @Test
  void nonEmptyDots_unchanged() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg rv:v(I), reg ri:v1(I), reg rval:v1(I)) -+> V {
              ddd: dots = dots[ri];
              r: V = `[<-`< v(I),v1(I),v1(I),dots -+> V >(rv, ri, rval, ddd);
              return r;
            }
            """);

    assertFalse(run(abstraction), "a non-empty `...` is a real argument");

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("(rv, ri, rval, ddd)"), "the dots should remain:\n" + printed);
  }

  @Test
  void builtinWithoutMissingVersionAtThatPosition_unchanged() {
    // No `sum` version takes `miss` where the `...` goes, so its empty `...` is a real argument (an
    // empty vector to sum), like `c()`'s.
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            () -+> V {
              ddd: dots = dots[];
              r: V = sum< dots,*@! -+> V >(ddd, <missing>);
              return r;
            }
            """);

    assertFalse(run(abstraction), "an empty `...` is only absent where a version says it can be");

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("(ddd, <missing>)"), "the dots should remain:\n" + printed);
  }

  @Test
  void emptyDotsToLocalFunction_unchanged() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () -+> V { ... }
              () -+> V {
                ddd: dots = dots[];
                r: V = f< dots -+> V >(ddd);
                return r;
              }
            }

            fun f(`...`) {
              (reg ddd:dots) -+> V { ... }
              (reg ddd:dots) -+> V {
                return <int 1>;
              }
            }
            """);

    assertFalse(run(module), "an R closure reads its `...` back as a dots vector");

    var printed = Printer.toString(module);
    assertTrue(printed.contains("f< dots -+> V >(ddd)"), "the dots should remain:\n" + printed);
  }
}
