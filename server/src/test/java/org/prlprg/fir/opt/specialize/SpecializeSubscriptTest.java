package org.prlprg.fir.opt.specialize;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.opt.AbstractionOptimization;
import org.prlprg.fir.opt.AbstractionOptimizationUnitTest;
import org.prlprg.fir.opt.Specialize;
import org.prlprg.parseprint.Printer;

class SpecializeSubscriptTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new Specialize(new SpecializeSubscript());
  }

  @Test
  void scalarExtract2_becomesFailingSubscriptRead() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg rv:v(I)b, reg ri:I) -~> I {
              r: I = `[[`< v(I)b,I,miss,miss -~> I >(rv, ri, <missing>, <missing>);
              return r;
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertTrue(
        printed.contains("idx: I = `-`< I,I --> I >(ri, 1)"),
        "the R index should be made 0-based; printed:\n" + printed);
    assertTrue(
        printed.contains("r: I = rv[[idx]]"),
        "`[[` should be the subscript read that fails out of range; printed:\n" + printed);
    assertFalse(printed.contains("`[[`<"), "call should be gone; printed:\n" + printed);
  }

  @Test
  void scalarExtract1_becomesNaSubscriptRead() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg rv:v(I)b, reg ri:I) --> I {
              r: I = `[`< v(I)b,I,miss,miss --> I >(rv, ri, <missing>, <missing>);
              return r;
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertTrue(
        printed.contains("r: I = rv[idx]"),
        "`[` should be the subscript read that gives `NA` out of range; printed:\n" + printed);
    assertFalse(printed.contains("`[`<"), "call should be gone; printed:\n" + printed);
  }

  @Test
  void constantIndex_folded() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg rv:v(I)b) -~> I {
              r: I = `[[`< v(I)b,I,miss,miss -~> I >(rv, 3, <missing>, <missing>);
              return r;
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertTrue(
        printed.contains("r: I = rv[[2]]"),
        "the constant index should be made 0-based in place; printed:\n" + printed);
    assertFalse(printed.contains("`-`"), "no decrement should be emitted; printed:\n" + printed);
  }

  @Test
  void ownedScalarSubAssign_becomesSubscriptWrite() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg rv:v(I)o, reg ri:I, reg rval:I) -~> v(I)f {
              r: v(I)o = `[<-`< v(I)o,I,I,miss -~> v(I)f >(consume rv, ri, rval, <missing>);
              return consume r;
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertTrue(
        printed.contains("idx: I = `-`< I,I --> I >(ri, 1)"),
        "the R index should be made 0-based; printed:\n" + printed);
    assertTrue(
        printed.contains("rv[idx] = rval"), "should be a subscript write; printed:\n" + printed);
    assertFalse(printed.contains("`[<-`"), "call should be gone; printed:\n" + printed);
    assertTrue(
        printed.contains("return consume rv"),
        "the result should forward to the mutated vector; printed:\n" + printed);
  }

  @Test
  void borrowedSubAssign_notSpecialized() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg rv:v(I)b, reg ri:I, reg rval:I) -~> v(I)f {
              r: v(I)o = `[<-`< v(I)b,I,I,miss -~> v(I)f >(rv, ri, rval, <missing>);
              return consume r;
            }
            """);

    assertFalse(run(abstraction), "a borrowed vector can't be mutated in place");

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("`[<-`"), "call should remain; printed:\n" + printed);
  }

  @Test
  void vectorIndexExtract_notSpecialized() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg rv:v(I)b, reg ri:v(I)) -~> v(I) {
              r: v(I) = `[`< v(I)b,v(I),miss,miss -~> v(I) >(rv, ri, <missing>, <missing>);
              return r;
            }
            """);

    assertFalse(run(abstraction), "a vector index isn't a single subscript");

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("`[`"), "call should remain; printed:\n" + printed);
  }

  @Test
  void dispatchExtract_notSpecialized() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg rv:v(I)b, reg ri:I) -~> I {
              r: I = `[[`%< v(I)b,I,miss,miss -~> I >(rv, ri, <missing>, <missing>);
              return r;
            }
            """);

    assertFalse(run(abstraction), "a dispatch call's version isn't known statically");

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("`[[`%"), "call should remain a dispatch; printed:\n" + printed);
  }
}
