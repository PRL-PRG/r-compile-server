package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.check.Checker;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.opt.specialize.DefiniteForce;
import org.prlprg.fir.opt.specialize.ElideBuiltinClosure;
import org.prlprg.parseprint.Printer;

/// How [Specialize] applies its sub-optimizations' results to the uses of a statement's assignee.
class SpecializeTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new Specialize("specialize", new ElideBuiltinClosure(), new DefiniteForce());
  }

  private void assertRunTypeChecks(Abstraction abstraction) {
    assertTrue(Checker.checkAll(abstraction), "the input should type-check");
    assertTrue(run(abstraction), "optimization should report a change");
    var printed = Printer.toString(abstraction);
    assertTrue(Checker.checkAll(abstraction), "the output should type-check:\n" + printed);
  }

  @Test
  void replace_keepsConsumeOfAssignee() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (clo:cls, v:v(I)b) -~> v(I)f {
              r: v(I)o = `[<-`@clo< v(I)b,I,I,miss -~> v(I)f >(v, 1, 42, <missing>);
              return consume r;
            }
            """);

    assertRunTypeChecks(abstraction);
  }

  @Test
  void forwardConsumeToOwned_keepsEachUse() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (v:v(I)b) -~> v(I)f {
              d: v(I)o = dup v;
              r: v(I)o = force? consume d;
              r[0] = 9;
              return consume r;
            }
            """);

    assertRunTypeChecks(abstraction);
    var printed = Printer.toString(abstraction);
    assertFalse(printed.contains("consume d[0]"), "the write was lost:\n" + printed);
  }

  @Test
  void forwardConsumeToShared_consumesOnce() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (v:v(I)b) -~> v(I)f {
              d: v(I)o = dup v;
              r: v(I) = force? consume d;
              a: I = r[1];
              e: v(I)o = dup r;
              e[0] = a;
              return consume e;
            }
            """);

    assertRunTypeChecks(abstraction);
  }
}
