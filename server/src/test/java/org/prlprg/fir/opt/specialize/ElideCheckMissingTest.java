package org.prlprg.fir.opt.specialize;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.opt.AbstractionOptimization;
import org.prlprg.fir.opt.AbstractionOptimizationUnitTest;
import org.prlprg.fir.opt.Specialize;
import org.prlprg.parseprint.Printer;

class ElideCheckMissingTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new Specialize(new ElideCheckMissing());
  }

  @Test
  void nonMissingType_elided() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:I) -~> I { |
              checkMissing< V -~> V >(x);
              return x;
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertFalse(
        printed.contains("checkMissing"),
        "checkMissing should be elided for integer type; printed:\n" + printed);
  }

  @Test
  void anyValueType_notElided() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:V) -~> V { |
              checkMissing< V -~> V >(x);
              return x;
            }
            """);

    run(abstraction);

    var printed = Printer.toString(abstraction);
    assertTrue(
        printed.contains("checkMissing"),
        "checkMissing should remain for any-value type; printed:\n" + printed);
  }

  @Test
  void missingType_notElided() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:miss) -~> V { |
              checkMissing< V -~> V >(x);
              return x;
            }
            """);

    run(abstraction);

    var printed = Printer.toString(abstraction);
    assertTrue(
        printed.contains("checkMissing"),
        "checkMissing should remain for missing type; printed:\n" + printed);
  }
}
