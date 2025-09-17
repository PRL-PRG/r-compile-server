package org.prlprg.fir.analyze.resolve;

import static org.junit.jupiter.api.Assertions.*;
import static org.prlprg.fir.ir.ParseUtil.parseModule;

import java.util.Objects;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.analyze.resolve.EnvironmentCount.Range;
import org.prlprg.fir.ir.cfg.BB;

class EnvironmentCountTest {
  @Test
  void countsEnvironmentsInSequence() {
    var firText =
        """
      fun main() {
        () --> I { reg r0:I |
          mkenv;
          r0 = 0;
          popenv;
          return r0;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.lookupFunction("main")).version(0);
    var cfg = Objects.requireNonNull(main.cfg());
    BB entry = cfg.entry();

    var analysis = new EnvironmentCount(main);

    assertEquals(new Range(1, 1), analysis.rangeAt(entry, 0));
    assertEquals(new Range(1, 1), analysis.rangeAt(entry, 1));
    assertEquals(new Range(0, 0), analysis.rangeAt(entry, 2));

    assertTrue(analysis.hasEnvironmentAt(entry, 0));
    assertFalse(analysis.hasEnvironmentAt(entry, 2));
  }

  @Test
  void mergesBranchesIntoRange() {
    var firText =
        """
      fun main() {
        (reg cond:I) --> I { reg r0:I, reg r1:I |
          mkenv;
          r0 = 0;
          if cond then BB1() else BB2();
        BB1():
          popenv;
          goto BB3(r0);
        BB2():
          r1 = 1;
          goto BB3(r1);
        BB3(r2):
          return r2;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.lookupFunction("main")).version(0);
    var cfg = Objects.requireNonNull(main.cfg());

    var analysis = new EnvironmentCount(main);

    var entry = cfg.entry();
    assertEquals(new Range(1, 1), analysis.rangeAt(entry, 0));
    assertEquals(new Range(1, 1), analysis.rangeAt(entry, 1));

    var bb1 = Objects.requireNonNull(cfg.bb("BB1"));
    assertEquals(new Range(0, 0), analysis.rangeAt(bb1, 0));

    var bb3 = Objects.requireNonNull(cfg.bb("BB3"));
    assertEquals(new Range(0, 1), analysis.rangeAt(bb3, 0));
  }
}
