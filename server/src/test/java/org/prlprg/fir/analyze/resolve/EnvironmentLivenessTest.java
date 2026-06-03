package org.prlprg.fir.analyze.resolve;

import static org.junit.jupiter.api.Assertions.*;
import static org.prlprg.fir.ir.ParseUtil.parseModule;

import java.util.Objects;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.variable.Variable;

class EnvironmentLivenessTest {
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
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);
    var cfg = Objects.requireNonNull(main.cfg());
    var entry = cfg.entry();

    var analysis = new EnvironmentLiveness(main);

    assertTrue(analysis.hasEnvironmentAt(entry, 0));
    assertTrue(analysis.hasEnvironmentAt(entry, 1));
    assertFalse(analysis.hasEnvironmentAt(entry, 2));
  }

  @Test
  void handlesInvalid() {
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
          popenv;
          return r2;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);
    var cfg = Objects.requireNonNull(main.cfg());

    var analysis = new EnvironmentLiveness(main);

    var entry = cfg.entry();
    assertTrue(analysis.hasEnvironmentAt(entry, 0));
    assertTrue(analysis.hasEnvironmentAt(entry, 1));

    var bb1 = Objects.requireNonNull(cfg.bb("BB1"));
    assertFalse(analysis.hasEnvironmentAt(bb1, 0));
  }
}
