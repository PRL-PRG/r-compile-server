package org.prlprg.fir.analyze.cfg;

import static org.junit.jupiter.api.Assertions.*;
import static org.prlprg.fir.ir.ParseUtil.parseModule;

import java.util.Objects;
import java.util.Set;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.variable.Variable;

class LivenessTest {
  @Test
  void killsAtLastUseInLinearCode() {
    var firText =
        """
      fun main() {
        () --> I { reg r0:I, reg r1:I |
          r0 = 0;
          r1 = r0;
          return r1;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);
    var cfg = Objects.requireNonNull(main.cfg());
    var entry = cfg.entry();

    var liveness = new Liveness(cfg);

    // r0 is used twice in statement 1, killed there (last use)
    var killsAt1 = liveness.kills(entry, 1);
    assertTrue(killsAt1.contains(Variable.register("r0")));

    // r1 is used in the return (statement 2), killed there
    var killsAt2 = liveness.kills(entry, 2);
    assertTrue(killsAt2.contains(Variable.register("r1")));

    // Nothing killed at statement 0 (r0 is defined, used later)
    var killsAt0 = liveness.kills(entry, 0);
    assertFalse(killsAt0.contains(Variable.register("r0")));
  }

  @Test
  void killsInBranchingCode() {
    var firText =
        """
      fun main() {
        (reg cond:I) --> I { reg r0:I, reg r1:I |
          r0 = 0;
          r1 = 1;
          if cond then BB1() else BB2();
        BB1():
          return r0;
        BB2():
          return r1;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);
    var cfg = Objects.requireNonNull(main.cfg());

    var liveness = new Liveness(cfg);

    // In BB1, r0 is used (and killed) at return
    var bb1 = Objects.requireNonNull(cfg.bb("BB1"));
    var killsAtBB1Return = liveness.kills(bb1, 0);
    assertTrue(killsAtBB1Return.contains(Variable.register("r0")));

    // In BB2, r1 is used (and killed) at return
    var bb2 = Objects.requireNonNull(cfg.bb("BB2"));
    var killsAtBB2Return = liveness.kills(bb2, 0);
    assertTrue(killsAtBB2Return.contains(Variable.register("r1")));

    // cond is killed at the if (entry, statement 2)
    var entry = cfg.entry();
    var killsAtIf = liveness.kills(entry, 2);
    assertTrue(killsAtIf.contains(Variable.register("cond")));
  }

  @Test
  void liveInAndLiveOut() {
    var firText =
        """
      fun main() {
        () --> I { reg r0:I, reg r1:I |
          r0 = 0;
          r1 = 1;
          goto BB1();
        BB1():
          return r0;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);
    var cfg = Objects.requireNonNull(main.cfg());

    var liveness = new Liveness(cfg);

    // r0 is live at BB1 entry (used in return)
    var bb1 = Objects.requireNonNull(cfg.bb("BB1"));
    assertTrue(liveness.liveIn(bb1).contains(Variable.register("r0")));

    // r1 is not live at BB1 entry (never used)
    assertFalse(liveness.liveIn(bb1).contains(Variable.register("r1")));

    // r0 is live at entry exit (used later in BB1)
    var entry = cfg.entry();
    assertTrue(liveness.liveOut(entry).contains(Variable.register("r0")));
  }

  @Test
  void phiParametersHandledCorrectly() {
    var firText =
        """
      fun main() {
        (reg cond:I) --> I { reg r0:I, reg r1:I |
          r0 = 0;
          r1 = 1;
          if cond then BB1(r0) else BB1(r1);
        BB1(r2):
          return r2;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);
    var cfg = Objects.requireNonNull(main.cfg());

    var liveness = new Liveness(cfg);

    // r2 (phi param) is live at BB1 entry and killed at return
    var bb1 = Objects.requireNonNull(cfg.bb("BB1"));
    var killsAtBB1Return = liveness.kills(bb1, 0);
    assertTrue(killsAtBB1Return.contains(Variable.register("r2")));

    // r0 and r1 are used as phi args at the if jump (entry, statement 2)
    // They should be killed there since they're last used at that point
    var entry = cfg.entry();
    var killsAtIf = liveness.kills(entry, 2);
    assertTrue(killsAtIf.contains(Variable.register("r0")));
    assertTrue(killsAtIf.contains(Variable.register("r1")));
    assertTrue(killsAtIf.contains(Variable.register("cond")));
  }

  @Test
  void deadAfterMatchesKills() {
    var firText =
        """
      fun main() {
        () --> I { reg r0:I, reg r1:I |
          r0 = 0;
          r1 = r0;
          return r1;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);
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
        () --> I { reg r0:I |
          r0 = 0;
          return r0;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);
    var cfg = Objects.requireNonNull(main.cfg());
    var entry = cfg.entry();

    var liveness = new Liveness(cfg);

    var pos0 = new org.prlprg.fir.ir.position.CfgPosition(entry, 0);
    var pos1 = new org.prlprg.fir.ir.position.CfgPosition(entry, 1);

    // r0 is not killed at statement 0 (defined there, used later)
    assertFalse(liveness.isKilled(Variable.register("r0"), pos0));

    // r0 is killed at statement 1 (return, last use)
    assertTrue(liveness.isKilled(Variable.register("r0"), pos1));
  }
}
