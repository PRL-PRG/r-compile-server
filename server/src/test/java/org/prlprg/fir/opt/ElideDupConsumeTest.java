package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.parseprint.Printer;

public class ElideDupConsumeTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new ElideDupConsume();
  }

  @Test
  void ElideOwned() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
      (reg x: v1(I)o) --> v1(I)o {
        x_dup: v1(I)o = dup consume x;
        return x_dup;
      }
    """);

    assertTrue(run(abstraction), "'return x_dup' should be 'return x'");
    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("return x"));
  }

  @Test
  void noElideBorrowed() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
      (reg x: v1(I)b) --> v1(I)o {
        x_dup : v1(I)o = dup consume x;
        return x_dup;
      }
    """);

    assertFalse(run(abstraction), "x is borrowed, the duplication is necessary");
    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("return x_dup"));
  }

  @Test
  void noElideShared() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
      (reg x: v1(I)s) --> v1(I)o {
        x_dup : v1(I)o = dup consume x;
        return x_dup;
      }
    """);

    assertFalse(run(abstraction), "x is shared, the duplication is necessary");
    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("return x_dup"));
  }
}
