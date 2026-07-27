package org.prlprg.fir.analyze.cfg;

import static org.junit.jupiter.api.Assertions.*;
import static org.prlprg.fir.ir.ParseUtil.parseModule;

import java.util.Objects;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.ir.variable.Variable;

class LivenessTest {
  /// The register named `name` defined in `version` (registers are identity-based, so tests look
  /// them up by name rather than reconstructing them).
  private static Register reg(Abstraction version, String name) {
    return version
        .streamRegisters()
        .filter(r -> r.name().equals(name))
        .findFirst()
        .orElseThrow(() -> new AssertionError("no register named '" + name + "'"));
  }

  // Note: These tests use 'dup' to keep the registers materialized past the parser, since if they
  // just evaluate to constants, the new parser will just forward the constant to the usage sites.
  // It's a little hacky, but whatever.
  @Test
  void killsAtLastUseInLinearCode() {
    var firText =
        """
      fun main() {
        () --> I {
          r0: I = dup 0;
          r1: I = dup r0;
          return r1;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline();
    var cfg = Objects.requireNonNull(main.cfg());
    var entry = cfg.entry();

    var liveness = new Liveness(cfg);

    // r0 is used twice in statement 1, killed there (last use)
    var killsAt1 = liveness.kills(entry, 1);
    assertTrue(killsAt1.contains(reg(main, "r0")));

    // r1 is used in the return (statement 2), killed there
    var killsAt2 = liveness.kills(entry, 2);
    assertTrue(killsAt2.contains(reg(main, "r1")));

    // Nothing killed at statement 0 (r0 is defined, used later)
    var killsAt0 = liveness.kills(entry, 0);
    assertFalse(killsAt0.contains(reg(main, "r0")));
  }

  @Test
  void killsInBranchingCode() {
    var firText =
        """
      fun main() {
        (reg cond:I) --> I {
          r0: I = dup 0;
          r1: I = dup 1;
          if cond then BB1() else BB2();
        BB1():
          return r0;
        BB2():
          return r1;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline();
    var cfg = Objects.requireNonNull(main.cfg());

    var liveness = new Liveness(cfg);

    // In BB1, r0 is used (and killed) at return
    var bb1 = Objects.requireNonNull(cfg.bb("BB1"));
    var killsAtBB1Return = liveness.kills(bb1, 0);
    assertTrue(killsAtBB1Return.contains(reg(main, "r0")));

    // In BB2, r1 is used (and killed) at return
    var bb2 = Objects.requireNonNull(cfg.bb("BB2"));
    var killsAtBB2Return = liveness.kills(bb2, 0);
    assertTrue(killsAtBB2Return.contains(reg(main, "r1")));

    // cond is killed at the if (entry, statement 2)
    var entry = cfg.entry();
    var killsAtIf = liveness.kills(entry, 2);
    assertTrue(killsAtIf.contains(reg(main, "cond")));
  }

  @Test
  void liveInAndLiveOut() {
    var firText =
        """
      fun main() {
        () --> I {
          r0: I = dup 0;
          r1: I = dup 1;
          goto BB1();
        BB1():
          return r0;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline();
    var cfg = Objects.requireNonNull(main.cfg());

    var liveness = new Liveness(cfg);

    // r0 is live at BB1 entry (used in return)
    var bb1 = Objects.requireNonNull(cfg.bb("BB1"));
    assertTrue(liveness.liveIn(bb1).contains(reg(main, "r0")));

    // r1 is not live at BB1 entry (never used)
    assertFalse(liveness.liveIn(bb1).contains(reg(main, "r1")));

    // r0 is live at entry exit (used later in BB1)
    var entry = cfg.entry();
    assertTrue(liveness.liveOut(entry).contains(reg(main, "r0")));
  }

  @Test
  void phiParametersHandledCorrectly() {
    var firText =
        """
      fun main() {
        (reg cond:I) --> I {
          r0: I = dup 0;
          r1: I = dup 1;
          if cond then BB1(r0) else BB1(r1);
        BB1(r2: I):
          return r2;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline();
    var cfg = Objects.requireNonNull(main.cfg());

    var liveness = new Liveness(cfg);

    // r2 (phi param) is live at BB1 entry and killed at return
    var bb1 = Objects.requireNonNull(cfg.bb("BB1"));
    var killsAtBB1Return = liveness.kills(bb1, 0);
    assertTrue(killsAtBB1Return.contains(reg(main, "r2")));

    // r0 and r1 are used as phi args at the if jump (entry, statement 2)
    // They should be killed there since they're last used at that point
    var entry = cfg.entry();
    var killsAtIf = liveness.kills(entry, 2);
    assertTrue(killsAtIf.contains(reg(main, "r0")));
    assertTrue(killsAtIf.contains(reg(main, "r1")));
    assertTrue(killsAtIf.contains(reg(main, "cond")));
  }

  @Test
  void deadAfterMatchesKills() {
    var firText =
        """
      fun main() {
        () --> I {
          r0: I = dup 0;
          r1: I = dup r0;
          return r1;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline();
    var cfg = Objects.requireNonNull(main.cfg());
    var entry = cfg.entry();

    var liveness = new Liveness(cfg);

    // deadAfter should match kills for each instruction
    var stmt1 = entry.statements().get(1);
    assertEquals(liveness.kills(entry, 1), liveness.deadAfter(stmt1));

    var jump = entry.jump();
    assertEquals(liveness.kills(entry, 2), liveness.deadAfter(jump));
  }

  @Test
  void isKilledMethod() {
    var firText =
        """
      fun main() {
        () --> I {
          r0: I = dup 0;
          return r0;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline();
    var cfg = Objects.requireNonNull(main.cfg());
    var entry = cfg.entry();

    var liveness = new Liveness(cfg);

    // r0 is not killed at statement 0 (defined there, used later)
    assertFalse(liveness.isKilled(reg(main, "r0"), entry, 0));

    // r0 is killed at statement 1 (return, last use)
    assertTrue(liveness.isKilled(reg(main, "r0"), entry, 1));
  }
}
