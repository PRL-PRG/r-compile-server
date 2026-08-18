package org.prlprg.fir.opt.specialize;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.opt.AbstractionOptimization;
import org.prlprg.fir.opt.AbstractionOptimizationUnitTest;
import org.prlprg.fir.opt.Specialize;
import org.prlprg.parseprint.Printer;

class ImproveSignaturesTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new Specialize(new ImproveSignatures());
  }

  @Test
  void returnsOwnedRegister_returnTypeIsShared() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:v(I)b) --> V {
              r: v(I)o = dup x;
              return r;
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertTrue(
        printed.contains("--> v(I) {"),
        "an owned return type matches no call, so it must be shared; printed:\n" + printed);
  }

  @Test
  void returnsConsumedRegister_returnTypeStaysFresh() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:v(I)b) --> V {
              r: v(I)o = dup x;
              return consume r;
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertTrue(
        printed.contains("--> v(I)f {"),
        "a consumed return is fresh, which is a valid return type; printed:\n" + printed);
  }
}
