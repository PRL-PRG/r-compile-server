package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.parseprint.Printer;

class CallOwnedVersionTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new CallOwnedVersion();
  }

  @Test
  void subAssignWithBorrowedVector_dupsAndCallsOwnedVersion() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg rv:v(I)b, reg ri:I, reg rval:I) -~> v(I)f {
              r: v(I)o = `[<-`< v(I)b,I,I,miss -~> v(I)f >(rv, ri, rval, <missing>);
              return consume r;
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("= dup rv"), "the vector should be duplicated:\n" + printed);
    assertTrue(
        printed.contains("`[<-`< v(I)o,I,I,miss -~> v(I)f >"),
        "the owned version should be called:\n" + printed);
    assertTrue(printed.contains("(consume "), "the duplicate should be consumed:\n" + printed);
  }

  @Test
  void subAssignWithFreshVector_onlyCallsOwnedVersion() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg rv:v(I)o, reg ri:I, reg rval:I) -~> v(I)f {
              r: v(I)o = `[<-`< v(I)b,I,I,miss -~> v(I)f >(consume rv, ri, rval, <missing>);
              return consume r;
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertFalse(
        printed.contains("dup"), "an already-fresh vector needn't be duplicated:\n" + printed);
    assertTrue(
        printed.contains("`[<-`< v(I)o,I,I,miss -~> v(I)f >"),
        "the owned version should be called:\n" + printed);
  }

  @Test
  void extract_unchanged() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg rv:v(I)b, reg ri:I) -~> I {
              r: I = `[[`< v(I)b,I,miss,miss -~> I >(rv, ri, <missing>, <missing>);
              return r;
            }
            """);

    assertFalse(run(abstraction), "`[[` has no version that owns its vector");

    var printed = Printer.toString(abstraction);
    assertFalse(printed.contains("dup"), "nothing should be duplicated:\n" + printed);
  }

  @Test
  void alreadyOwnedVersion_unchanged() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg rv:v(I)o, reg ri:I, reg rval:I) -~> v(I)f {
              r: v(I)o = `[<-`< v(I)o,I,I,miss -~> v(I)f >(consume rv, ri, rval, <missing>);
              return consume r;
            }
            """);

    assertFalse(run(abstraction), "the called version already owns its vector");

    var printed = Printer.toString(abstraction);
    assertFalse(printed.contains("dup"), "nothing should be duplicated:\n" + printed);
  }
}
