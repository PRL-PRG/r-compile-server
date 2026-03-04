package org.prlprg.fir.opt.specialize;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.opt.Optimization;
import org.prlprg.fir.opt.OptimizationUnitTest;
import org.prlprg.fir.opt.Specialize;
import org.prlprg.parseprint.Printer;

class ElideCheckMissingTest implements OptimizationUnitTest {
  @Override
  public Optimization optimization() {
    return new Specialize(new ElideCheckMissing());
  }

  @Test
  void nonMissingType_elided() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(x) {
              (reg x:I) --> I { |
                checkMissing.0(x);
                return x;
              }
            }
            """);

    assertTrue(run(module), "optimization should report a change");

    var printed = Printer.toString(module);
    assertFalse(
        printed.contains("checkMissing"),
        "checkMissing should be elided for integer type; printed:\n" + printed);
  }

  @Test
  void anyValueType_notElided() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(x) {
              (reg x:V) --> V { |
                checkMissing.0(x);
                return x;
              }
            }
            """);

    run(module);

    var printed = Printer.toString(module);
    assertTrue(
        printed.contains("checkMissing"),
        "checkMissing should remain for any-value type; printed:\n" + printed);
  }

  @Test
  void missingType_notElided() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(x) {
              (reg x:M) --> V { |
                checkMissing.0(x);
                return x;
              }
            }
            """);

    run(module);

    var printed = Printer.toString(module);
    assertTrue(
        printed.contains("checkMissing"),
        "checkMissing should remain for missing type; printed:\n" + printed);
  }
}
