package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.parseprint.Printer;

class ElideConsumedDupTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new ElideConsumedDup();
  }

  @Test
  void consumedDup_elided() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg rv:v(I)o) --> v(I)f {
              d: v(I)o = dup consume rv;
              d[0] = 1;
              return consume d;
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertFalse(printed.contains("dup"), "the dup should be gone:\n" + printed);
    assertTrue(printed.contains("rv[0] = 1"), "uses should be the consumed vector:\n" + printed);
    assertTrue(printed.contains("return consume rv"), "the `consume` should move:\n" + printed);
  }

  @Test
  void consumedDupUsedTwice_elided() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg rv:v(I)o) --> I {
              d: v(I)o = dup consume rv;
              d[0] = 1;
              r: I = d[0];
              return r;
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertFalse(printed.contains("dup"), "the dup should be gone:\n" + printed);
    assertTrue(printed.contains("rv[0] = 1"), "the write should be on the vector:\n" + printed);
    assertTrue(printed.contains("r: I = rv[0]"), "the read should be on the vector:\n" + printed);
  }

  @Test
  void unconsumedDup_unchanged() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg rv:v(I)o) --> I {
              d: v(I)o = dup rv;
              d[0] = 1;
              r: I = rv[0];
              return r;
            }
            """);

    assertFalse(run(abstraction), "the dup still copies, because the vector is read afterwards");

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("dup rv"), "the dup should remain:\n" + printed);
  }

  @Test
  void consumedDupIntoSharedRegister_unchanged() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg rv:v(I)o) --> v(I) {
              d: v(I) = dup consume rv;
              return d;
            }
            """);

    assertFalse(run(abstraction), "the assignee isn't owned, so its uses can't become `consume`s");

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("dup consume rv"), "the dup should remain:\n" + printed);
  }
}
