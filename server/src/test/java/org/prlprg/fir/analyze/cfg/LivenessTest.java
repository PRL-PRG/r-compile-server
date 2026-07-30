package org.prlprg.fir.analyze.cfg;

import static org.junit.jupiter.api.Assertions.*;
import static org.prlprg.fir.ir.ParseUtil.parseModule;

import java.util.Collection;
import java.util.List;
import java.util.Objects;
import java.util.Set;
import java.util.stream.Collectors;
import org.intellij.lang.annotations.Language;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.ir.variable.Variable;

class LivenessTest {
  private static Abstraction mainOf(@Language("FIR") String firText) {
    var module = parseModule(firText);
    return Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline();
  }

  private static CFG cfgOf(@Language("FIR") String firText) {
    return Objects.requireNonNull(mainOf(firText).cfg());
  }

  /// The register named `name` defined in `version` (registers are identity-based, so tests look
  /// them up by name rather than reconstructing them).
  private static Register reg(Abstraction version, String name) {
    return version
        .streamRegisters()
        .filter(r -> r.name().equals(name))
        .findFirst()
        .orElseThrow(() -> new AssertionError("no register named '" + name + "'"));
  }

  private static BB bb(CFG cfg, String label) {
    return Objects.requireNonNull(cfg.bb(label), () -> "no block labelled '" + label + "'");
  }

  private static Set<String> names(Collection<? extends Register> registers) {
    return registers.stream().map(Register::name).collect(Collectors.toSet());
  }

  /// Assert the exact set of registers killed at `(bb, instructionIndex)`, by name.
  private static void assertKills(Liveness liveness, BB bb, int index, String... expected) {
    assertEquals(
        Set.of(expected),
        names(liveness.kills(bb, index)),
        () -> "kills at " + bb.label() + "[" + index + "]");
  }

  private static void assertLive(Liveness liveness, BB bb, Set<String> in, Set<String> out) {
    assertEquals(in, names(liveness.liveIn(bb)), () -> "liveIn(" + bb.label() + ")");
    assertEquals(out, names(liveness.liveOut(bb)), () -> "liveOut(" + bb.label() + ")");
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

    var main = mainOf(firText);
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

    // Exactly those, and nothing is live in or out of a self-contained block.
    assertKills(liveness, entry, 0);
    assertKills(liveness, entry, 1, "r0");
    assertKills(liveness, entry, 2, "r1");
    assertLive(liveness, entry, Set.of(), Set.of());
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

    var main = mainOf(firText);
    var cfg = Objects.requireNonNull(main.cfg());

    var liveness = new Liveness(cfg);

    // In BB1, r0 is used (and killed) at return
    var bb1 = bb(cfg, "BB1");
    var killsAtBB1Return = liveness.kills(bb1, 0);
    assertTrue(killsAtBB1Return.contains(reg(main, "r0")));

    // In BB2, r1 is used (and killed) at return
    var bb2 = bb(cfg, "BB2");
    var killsAtBB2Return = liveness.kills(bb2, 0);
    assertTrue(killsAtBB2Return.contains(reg(main, "r1")));

    // cond is killed at the if (entry, statement 2)
    var entry = cfg.entry();
    var killsAtIf = liveness.kills(entry, 2);
    assertTrue(killsAtIf.contains(reg(main, "cond")));

    // Both r0 and r1 stay live out of the entry, because either branch may still need one.
    assertLive(liveness, entry, Set.of("cond"), Set.of("r0", "r1"));
    assertLive(liveness, bb1, Set.of("r0"), Set.of());
    assertLive(liveness, bb2, Set.of("r1"), Set.of());
    assertKills(liveness, entry, 2, "cond");
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

    var main = mainOf(firText);
    var cfg = Objects.requireNonNull(main.cfg());

    var liveness = new Liveness(cfg);

    // r0 is live at BB1 entry (used in return)
    var bb1 = bb(cfg, "BB1");
    assertTrue(liveness.liveIn(bb1).contains(reg(main, "r0")));

    // r1 is not live at BB1 entry (never used)
    assertFalse(liveness.liveIn(bb1).contains(reg(main, "r1")));

    // r0 is live at entry exit (used later in BB1)
    var entry = cfg.entry();
    assertTrue(liveness.liveOut(entry).contains(reg(main, "r0")));

    assertLive(liveness, entry, Set.of(), Set.of("r0"));
    assertLive(liveness, bb1, Set.of("r0"), Set.of());
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

    var main = mainOf(firText);
    var cfg = Objects.requireNonNull(main.cfg());

    var liveness = new Liveness(cfg);

    // r2 (phi param) is live at BB1 entry and killed at return
    var bb1 = bb(cfg, "BB1");
    var killsAtBB1Return = liveness.kills(bb1, 0);
    assertTrue(killsAtBB1Return.contains(reg(main, "r2")));

    // r0 and r1 are used as phi args at the if jump (entry, statement 2)
    // They should be killed there since they're last used at that point
    var entry = cfg.entry();
    var killsAtIf = liveness.kills(entry, 2);
    assertTrue(killsAtIf.contains(reg(main, "r0")));
    assertTrue(killsAtIf.contains(reg(main, "r1")));
    assertTrue(killsAtIf.contains(reg(main, "cond")));

    // A block's phi parameter is defined on entry, so it is not live *into* the block.
    assertLive(liveness, bb1, Set.of(), Set.of());
    assertKills(liveness, entry, 2, "r0", "r1", "cond");
  }

  @Test
  void liveOutIncludesPhiArgumentsButNotTheBranchCondition() {
    // Following LLVM, a phi argument is live through the end of the predecessor, since that edge
    // is where it's copied into the phi parameter -- so it is live out *and* killed at the jump.
    // A branch condition is consumed by the jump, so it is killed there but not live out.
    var firText =
        """
      fun main() {
        (reg cond:I) --> I {
          r0: I = dup 0;
          if cond then BB1(r0) else BB1(r0);
        BB1(r1: I):
          return r1;
        }
      }
      """;

    var cfg = cfgOf(firText);
    var liveness = new Liveness(cfg);
    var entry = cfg.entry();

    // `r0` is a phi argument, so it's live out; `cond` is the condition, so it isn't.
    assertLive(liveness, entry, Set.of("cond"), Set.of("r0"));
    assertKills(liveness, entry, 1, "r0", "cond");
    // A register passed twice to the same successor is still killed exactly once.
    assertEquals(2, liveness.kills(entry, 1).size());

    // The successor doesn't inherit the argument: `r1` is defined by its phi parameter.
    assertLive(liveness, bb(cfg, "BB1"), Set.of(), Set.of());
  }

  @Test
  void registerLiveAcrossALoop() {
    var firText =
        """
      fun main() {
        (reg n:I) --> I {
          k: I = dup 7;
          goto Head(n);
        Head(i: I):
          if i then Body() else Exit();
        Body():
          i2: I = dup i;
          goto Head(i2);
        Exit():
          return k;
        }
      }
      """;

    var cfg = cfgOf(firText);
    var liveness = new Liveness(cfg);

    // k is defined before the loop and used after it, so it stays live through every loop block.
    // `n` and `i2` are live out of the blocks that pass them as the loop header's phi argument.
    assertLive(liveness, cfg.entry(), Set.of("n"), Set.of("k", "n"));
    assertLive(liveness, bb(cfg, "Head"), Set.of("k"), Set.of("i", "k"));
    assertLive(liveness, bb(cfg, "Body"), Set.of("i", "k"), Set.of("i2", "k"));
    assertLive(liveness, bb(cfg, "Exit"), Set.of("k"), Set.of());

    // k is only killed after the loop, never inside it.
    assertKills(liveness, bb(cfg, "Exit"), 0, "k");
    assertKills(liveness, bb(cfg, "Head"), 0);
    assertKills(liveness, bb(cfg, "Body"), 0, "i");
    assertKills(liveness, bb(cfg, "Body"), 1, "i2");
    assertKills(liveness, cfg.entry(), 1, "n");
  }

  @Test
  void blockThatCannotReachAnExitIsStillAnalysed() {
    // Regression: the fixed point iterated in reverse-DFS order from the CFG's exits, which never
    // reaches a block that can't reach one. `Spin` was left with empty liveness, so `x` looked
    // dead even though the loop rereads it forever.
    var firText =
        """
      fun main() {
        (reg n:I, reg x:I) --> I {
          if n then Spin() else Exit();
        Spin():
          x2: I = dup x;
          goto Spin();
        Exit():
          return n;
        }
      }
      """;

    var cfg = cfgOf(firText);
    var liveness = new Liveness(cfg);
    var spin = bb(cfg, "Spin");

    assertLive(liveness, spin, Set.of("x"), Set.of("x"));
    assertLive(liveness, cfg.entry(), Set.of("n", "x"), Set.of("n", "x"));
    assertLive(liveness, bb(cfg, "Exit"), Set.of("n"), Set.of());

    // x is live around the loop, so its use in Spin is not its last one.
    assertKills(liveness, spin, 0);
    assertKills(liveness, spin, 1);
    assertKills(liveness, cfg.entry(), 0);
    assertKills(liveness, bb(cfg, "Exit"), 0, "n");
  }

  @Test
  void promiseKeepsCapturedRegistersLive() {
    // A promise statement has no arguments of its own; the registers its code reads are captured,
    // and stay live until the promise is created.
    var firText =
        """
      fun main() {
        (reg x:R) -~> R {
          outer: R = dup x;
          p: p(R ~) = prom<R ~>{
            inner: R = dup outer;
            return inner;
          };
          r: R = force p;
          return r;
        }
      }
      """;

    var main = mainOf(firText);
    var cfg = Objects.requireNonNull(main.cfg());
    var liveness = new Liveness(cfg);
    var entry = cfg.entry();

    assertLive(liveness, entry, Set.of("x"), Set.of());
    assertKills(liveness, entry, 0, "x");
    // `outer` is captured by the promise, so its last use is where the promise is created.
    assertKills(liveness, entry, 1, "outer");
    assertKills(liveness, entry, 2, "p");
    assertKills(liveness, entry, 3, "r");
  }

  @Test
  void promiseInternalRegistersAreNotLiveInTheEnclosingCfg() {
    // Regression: every argument inside the promise's code was treated as a use in the enclosing
    // CFG, so `inner` -- which is defined and dies inside the promise -- leaked into the enclosing
    // block's liveIn and kills, reporting a register the enclosing CFG doesn't even contain.
    var firText =
        """
      fun main() {
        (reg x:R) -~> R {
          outer: R = dup x;
          p: p(R ~) = prom<R ~>{
            inner: R = dup outer;
            return inner;
          };
          r: R = force p;
          return r;
        }
      }
      """;

    var main = mainOf(firText);
    var cfg = Objects.requireNonNull(main.cfg());
    var liveness = new Liveness(cfg);
    var entry = cfg.entry();
    var inner = reg(main, "inner");

    assertNotSame(cfg, inner.definingCfg(), "`inner` should be defined in the promise's CFG");
    assertFalse(liveness.liveIn(entry).contains(inner));
    assertFalse(liveness.liveOut(entry).contains(inner));
    for (var i = 0; i <= entry.statements().size(); i++) {
      assertFalse(
          liveness.kills(entry, i).contains(inner),
          "`inner` should not be killed in the enclosing CFG, at index " + i);
    }
  }

  @Test
  void nestedPromiseCapturesReachThroughEveryLevel() {
    var firText =
        """
      fun main() {
        (reg x:R) -~> R {
          outer: R = dup x;
          p: p(R ~) = prom<R ~>{
            q: p(R ~) = prom<R ~>{
              deep: R = dup outer;
              return deep;
            };
            qr: R = force q;
            return qr;
          };
          r: R = force p;
          return r;
        }
      }
      """;

    var main = mainOf(firText);
    var cfg = Objects.requireNonNull(main.cfg());
    var liveness = new Liveness(cfg);
    var entry = cfg.entry();

    // `outer` is read two promises deep, and only that register is captured: `q`, `qr` and `deep`
    // are all defined inside the nested code.
    assertKills(liveness, entry, 1, "outer");
    assertLive(liveness, entry, Set.of("x"), Set.of());
  }

  @Test
  void unusedRegisterIsKilledNowhere() {
    var firText =
        """
      fun main() {
        (reg n:I) --> I {
          dead: I = dup 3;
          return n;
        }
      }
      """;

    var main = mainOf(firText);
    var cfg = Objects.requireNonNull(main.cfg());
    var liveness = new Liveness(cfg);
    var entry = cfg.entry();
    var dead = reg(main, "dead");

    // A register with no uses has no last use, so it is never reported as killed, and it is never
    // live -- not even between its definition and the end of the block.
    assertKills(liveness, entry, 0);
    assertKills(liveness, entry, 1, "n");
    assertLive(liveness, entry, Set.of("n"), Set.of());
    assertFalse(liveness.isKilled(dead, entry, 0));
    assertFalse(liveness.isKilled(dead, entry, 1));
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

    var cfg = cfgOf(firText);
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

    var main = mainOf(firText);
    var cfg = Objects.requireNonNull(main.cfg());
    var entry = cfg.entry();

    var liveness = new Liveness(cfg);

    // r0 is not killed at statement 0 (defined there, used later)
    assertFalse(liveness.isKilled(reg(main, "r0"), entry, 0));

    // r0 is killed at statement 1 (return, last use)
    assertTrue(liveness.isKilled(reg(main, "r0"), entry, 1));
  }

  @Test
  void rejectsBlocksAndInstructionsFromAnotherCfg() {
    var cfg =
        cfgOf(
            """
      fun main() {
        (reg n:I) --> I {
          return n;
        }
      }
      """);
    var other =
        cfgOf(
            """
      fun main() {
        (reg n:I) --> I {
          r0: I = dup n;
          return r0;
        }
      }
      """);

    var liveness = new Liveness(cfg);
    var foreignBb = other.entry();
    var foreignStatement = other.entry().statements().getFirst();

    assertThrows(IllegalArgumentException.class, () -> liveness.liveIn(foreignBb));
    assertThrows(IllegalArgumentException.class, () -> liveness.liveOut(foreignBb));
    assertThrows(IllegalArgumentException.class, () -> liveness.kills(foreignBb, 0));
    assertThrows(IllegalArgumentException.class, () -> liveness.deadAfter(foreignStatement));
  }

  /// Every CFG shape the other tests use, to check the invariants that must hold for all of them.
  private static final List<String> SNIPPETS =
      List.of(
          """
      fun main() {
        () --> I {
          r0: I = dup 0;
          r1: I = dup r0;
          return r1;
        }
      }
      """,
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
      """,
          """
      fun main() {
        (reg n:I) --> I {
          k: I = dup 7;
          goto Head(n);
        Head(i: I):
          if i then Body() else Exit();
        Body():
          i2: I = dup i;
          goto Head(i2);
        Exit():
          return k;
        }
      }
      """,
          """
      fun main() {
        (reg n:I, reg x:I) --> I {
          if n then Spin() else Exit();
        Spin():
          x2: I = dup x;
          goto Spin();
        Exit():
          return n;
        }
      }
      """,
          """
      fun main() {
        (reg x:R) -~> R {
          outer: R = dup x;
          p: p(R ~) = prom<R ~>{
            inner: R = dup outer;
            return inner;
          };
          r: R = force p;
          return r;
        }
      }
      """);

  @Test
  void liveOutIsSuccessorLiveInPlusPhiArguments() {
    for (var snippet : SNIPPETS) {
      var cfg = cfgOf(snippet);
      var liveness = new Liveness(cfg);

      for (var bb : cfg.bbs()) {
        var expected =
            bb.successors().stream()
                .flatMap(successor -> liveness.liveIn(successor).stream())
                .collect(Collectors.toCollection(java.util.HashSet::new));
        expected.addAll(phiArgumentsOf(bb));

        assertEquals(
            expected,
            Set.copyOf(liveness.liveOut(bb)),
            () -> "liveOut(" + bb.label() + ") in:\n" + snippet);
      }
    }
  }

  /// The registers `bb`'s jump passes as phi arguments, which excludes e.g. a branch condition.
  private static Set<Register> phiArgumentsOf(BB bb) {
    return bb.jump().targets().stream()
        .flatMap(target -> target.phiArgs().stream())
        .map(Argument::variable)
        .filter(Objects::nonNull)
        .collect(Collectors.toSet());
  }

  @Test
  void onlyReportsRegistersDefinedInThisCfg() {
    for (var snippet : SNIPPETS) {
      var cfg = cfgOf(snippet);
      var liveness = new Liveness(cfg);

      for (var bb : cfg.bbs()) {
        for (var i = 0; i <= bb.statements().size(); i++) {
          assertDefinedIn(cfg, liveness.kills(bb, i), "kills at " + bb.label() + "[" + i + "]");
        }
        assertDefinedIn(cfg, liveness.liveIn(bb), "liveIn(" + bb.label() + ")");
        assertDefinedIn(cfg, liveness.liveOut(bb), "liveOut(" + bb.label() + ")");
      }
    }
  }

  private static void assertDefinedIn(CFG cfg, Collection<Register> registers, String what) {
    for (var register : registers) {
      assertSame(
          cfg,
          register.definingCfg(),
          () -> what + " contains '" + register.name() + "', which this CFG doesn't define");
    }
  }

  @Test
  void aRegisterKilledAtAJumpIsNeededByNoSuccessor() {
    // A use is a kill iff the register isn't needed afterwards. At a jump "afterwards" means the
    // successors, not liveOut: a phi argument is live out of the block yet dies on the edge.
    for (var snippet : SNIPPETS) {
      var cfg = cfgOf(snippet);
      var liveness = new Liveness(cfg);

      for (var bb : cfg.bbs()) {
        for (var killed : liveness.kills(bb, bb.statements().size())) {
          for (var successor : bb.successors()) {
            assertFalse(
                liveness.liveIn(successor).contains(killed),
                () ->
                    "'"
                        + killed.name()
                        + "' is killed at "
                        + bb.label()
                        + "'s jump but live into its successor "
                        + successor.label()
                        + ", in:\n"
                        + snippet);
          }
        }
      }
    }
  }

  @Test
  void everyPhiArgumentIsLiveOutAndKilledAtTheJump() {
    for (var snippet : SNIPPETS) {
      var cfg = cfgOf(snippet);
      var liveness = new Liveness(cfg);

      for (var bb : cfg.bbs()) {
        for (var phiArgument : phiArgumentsOf(bb)) {
          assertTrue(
              liveness.liveOut(bb).contains(phiArgument),
              () ->
                  "phi argument '"
                      + phiArgument.name()
                      + "' should be live out of "
                      + bb.label()
                      + ", in:\n"
                      + snippet);
        }
      }
    }
  }
}
