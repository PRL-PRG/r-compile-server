package org.prlprg.fir.opt.specialize;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.opt.AbstractionOptimization;
import org.prlprg.fir.opt.AbstractionOptimizationUnitTest;
import org.prlprg.fir.opt.Specialize;
import org.prlprg.parseprint.Printer;

class SpecializeRealIndexTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new Specialize(new SpecializeRealIndex());
  }

  @Test
  void realIndexRegister_coercedWithAsInteger() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg rv:v(I)b, reg ri:R) --> I {
              r: I = `[`< v(I)b,R,miss,miss --> I >(rv, ri, <missing>, <missing>);
              return r;
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertTrue(
        printed.contains("idx: I = `as.integer`< R,miss --> I >(ri, <missing>)"),
        "the subscript should be coerced; printed:\n" + printed);
    assertTrue(
        printed.contains("`[`< v(I)b,I,miss,miss --> I >(rv, idx, <missing>, <missing>)"),
        "the integer-subscript version should be called; printed:\n" + printed);
  }

  @Test
  void realIndexConstant_coercedInPlace() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg rv:v(I)b) --> I {
              r: I = `[`< v(I)b,R,miss,miss --> I >(rv, <real 2.0>, <missing>, <missing>);
              return r;
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertFalse(printed.contains("as.integer"), "a constant needs no call; printed:\n" + printed);
    assertTrue(
        printed.contains("`[`< v(I)b,I,miss,miss --> I >(rv, 2, <missing>, <missing>)"),
        "the constant should be coerced in place; printed:\n" + printed);
  }

  @Test
  void fractionalRealIndexConstant_truncated() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg rv:v(I)b) --> I {
              r: I = `[`< v(I)b,R,miss,miss --> I >(rv, <real 2.7>, <missing>, <missing>);
              return r;
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertTrue(
        printed.contains("(rv, 2, <missing>, <missing>)"),
        "GNU-R truncates a subscript toward zero; printed:\n" + printed);
  }

  @Test
  void boxedRealIndex_staysBoxed() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg rv:v(I)b, reg ri:v1(R)) --> v1(I) {
              r: v1(I) = `[`< v(I)b,v1(R),miss,miss --> v1(I) >(rv, ri, <missing>, <missing>);
              return r;
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertTrue(
        printed.contains("`as.integer`< v1(R),miss --> v1(I) >(ri, <missing>)"),
        "the coercion should keep the subscript's representation; printed:\n" + printed);
    assertTrue(
        printed.contains("`[`< v(I)b,v1(I),miss,miss --> v1(I) >"),
        "the boxed integer-subscript version should be called; printed:\n" + printed);
  }

  @Test
  void integerIndex_unchanged() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg rv:v(I)b, reg ri:I) --> I {
              r: I = `[`< v(I)b,I,miss,miss --> I >(rv, ri, <missing>, <missing>);
              return r;
            }
            """);

    assertFalse(run(abstraction), "an integer subscript needs no coercion");

    var printed = Printer.toString(abstraction);
    assertFalse(printed.contains("as.integer"), "nothing should be coerced; printed:\n" + printed);
  }
}
