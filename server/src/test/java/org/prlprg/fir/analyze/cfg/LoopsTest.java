package org.prlprg.fir.analyze.cfg;

import static org.junit.jupiter.api.Assertions.*;
import static org.prlprg.fir.ir.ParseUtil.parseModule;

import java.util.Objects;
import java.util.Set;
import java.util.stream.Collectors;
import org.intellij.lang.annotations.Language;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.analyze.cfg.Loops.Loop;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.variable.Variable;

class LoopsTest {
  private static CFG cfgOf(@Language("FIR") String firText) {
    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline();
    return Objects.requireNonNull(main.cfg());
  }

  private static Loops loopsOf(CFG cfg) {
    return new Loops(cfg, new CfgDominatorTree(cfg));
  }

  private static BB bb(CFG cfg, String label) {
    return Objects.requireNonNull(cfg.bb(label), () -> "no block labelled '" + label + "'");
  }

  private static Set<String> labels(java.util.Collection<BB> bbs) {
    return bbs.stream().map(BB::label).collect(Collectors.toSet());
  }

  /// The single loop whose header is `headerLabel`, failing if there isn't exactly one.
  private static Loop loopHeadedBy(Loops loops, String headerLabel) {
    var matching =
        loops.getLoops().stream().filter(l -> l.getHeader().label().equals(headerLabel)).toList();
    assertEquals(
        1,
        matching.size(),
        () ->
            "expected exactly one loop headed by "
                + headerLabel
                + ", got "
                + matching.size()
                + " (all loops: "
                + loops.getLoops()
                + ")");
    return matching.getFirst();
  }

  @Test
  void straightLineCodeHasNoLoops() {
    var cfg =
        cfgOf(
            """
        fun main() {
          (reg n:I) --> I {
            r0: I = dup n;
            return r0;
          }
        }
        """);

    var loops = loopsOf(cfg);

    assertTrue(loops.getLoops().isEmpty());
    assertFalse(loops.isLoopHeader(cfg.entry()));
    assertNull(loops.getInnermostLoop(cfg.entry()));
    assertTrue(loops.getLoopsContaining(cfg.entry()).isEmpty());
  }

  @Test
  void branchingWithoutBackEdgesHasNoLoops() {
    var cfg =
        cfgOf(
            """
        fun main() {
          (reg n:I) --> I {
            if n then A() else B();
          A():
            return n;
          B():
            return n;
          }
        }
        """);

    var loops = loopsOf(cfg);

    assertTrue(loops.getLoops().isEmpty());
    for (var bb : cfg.bbs()) {
      assertFalse(loops.isLoopHeader(bb), () -> bb.label() + " should not be a header");
      assertNull(loops.getInnermostLoop(bb));
    }
  }

  @Test
  void simpleLoop() {
    var cfg =
        cfgOf(
            """
        fun main() {
          (reg n:I) --> I {
            goto Head(n);
          Head(i: I):
            if i then Body() else Exit();
          Body():
            i2: I = dup i;
            goto Head(i2);
          Exit():
            return n;
          }
        }
        """);

    var loops = loopsOf(cfg);

    assertEquals(1, loops.getLoops().size());
    var loop = loopHeadedBy(loops, "Head");
    assertEquals(Set.of("Head", "Body"), labels(loop.getBlocks()));
    assertEquals(Set.of("Body"), labels(loop.getBackEdges()));

    assertTrue(loops.isLoopHeader(bb(cfg, "Head")));
    assertFalse(loops.isLoopHeader(bb(cfg, "Body")));

    // The pre-header and the exit block are outside the loop.
    assertFalse(loop.contains(cfg.entry()));
    assertFalse(loop.contains(bb(cfg, "Exit")));
    assertNull(loops.getInnermostLoop(cfg.entry()));
    assertNull(loops.getInnermostLoop(bb(cfg, "Exit")));
    assertSame(loop, loops.getInnermostLoop(bb(cfg, "Body")));
  }

  @Test
  void selfLoopIsItsOwnLatch() {
    var cfg =
        cfgOf(
            """
        fun main() {
          (reg n:I) --> I {
            goto Head();
          Head():
            if n then Head() else Exit();
          Exit():
            return n;
          }
        }
        """);

    var loops = loopsOf(cfg);

    assertEquals(1, loops.getLoops().size());
    var loop = loopHeadedBy(loops, "Head");
    assertEquals(Set.of("Head"), labels(loop.getBlocks()));
    assertEquals(Set.of("Head"), labels(loop.getBackEdges()));
  }

  @Test
  void loopBodyWithBranchesIsFullyIncluded() {
    var cfg =
        cfgOf(
            """
        fun main() {
          (reg n:I) --> I {
            goto Head();
          Head():
            if n then Left() else Exit();
          Left():
            if n then Then() else Else();
          Then():
            goto Latch();
          Else():
            goto Latch();
          Latch():
            goto Head();
          Exit():
            return n;
          }
        }
        """);

    var loops = loopsOf(cfg);

    var loop = loopHeadedBy(loops, "Head");
    assertEquals(Set.of("Head", "Left", "Then", "Else", "Latch"), labels(loop.getBlocks()));
    assertEquals(Set.of("Latch"), labels(loop.getBackEdges()));
    assertFalse(loop.contains(bb(cfg, "Exit")));
  }

  @Test
  void multipleBackEdgesToOneHeaderFormOneLoop() {
    var cfg =
        cfgOf(
            """
        fun main() {
          (reg n:I) --> I {
            goto Head();
          Head():
            if n then L1() else L2();
          L1():
            if n then Head() else Exit();
          L2():
            if n then Head() else Exit();
          Exit():
            return n;
          }
        }
        """);

    var loops = loopsOf(cfg);

    assertEquals(1, loops.getLoops().size());
    var loop = loopHeadedBy(loops, "Head");
    assertEquals(Set.of("Head", "L1", "L2"), labels(loop.getBlocks()));
    assertEquals(Set.of("L1", "L2"), labels(loop.getBackEdges()));
  }

  @Test
  void headerWithSelfEdgeAndAnOuterBackEdge() {
    var cfg =
        cfgOf(
            """
        fun main() {
          (reg n:I) --> I {
            goto Head();
          Head():
            if n then Head() else L1();
          L1():
            if n then Head() else Exit();
          Exit():
            return n;
          }
        }
        """);

    var loops = loopsOf(cfg);

    assertEquals(1, loops.getLoops().size());
    var loop = loopHeadedBy(loops, "Head");
    assertEquals(Set.of("Head", "L1"), labels(loop.getBlocks()));
    assertEquals(Set.of("Head", "L1"), labels(loop.getBackEdges()));
  }

  @Test
  void nestedLoops() {
    var cfg =
        cfgOf(
            """
        fun main() {
          (reg n:I) --> I {
            goto Outer();
          Outer():
            goto Inner();
          Inner():
            if n then Inner() else OuterLatch();
          OuterLatch():
            if n then Outer() else Exit();
          Exit():
            return n;
          }
        }
        """);

    var loops = loopsOf(cfg);

    assertEquals(2, loops.getLoops().size());

    var inner = loopHeadedBy(loops, "Inner");
    assertEquals(Set.of("Inner"), labels(inner.getBlocks()));
    assertEquals(Set.of("Inner"), labels(inner.getBackEdges()));

    var outer = loopHeadedBy(loops, "Outer");
    assertEquals(Set.of("Outer", "Inner", "OuterLatch"), labels(outer.getBlocks()));
    assertEquals(Set.of("OuterLatch"), labels(outer.getBackEdges()));

    // The outer loop contains the inner one, so the inner one is innermost for its blocks.
    assertTrue(outer.getBlocks().containsAll(inner.getBlocks()));
    assertEquals(Set.of(inner, outer), loops.getLoopsContaining(bb(cfg, "Inner")));
    assertSame(inner, loops.getInnermostLoop(bb(cfg, "Inner")));
    assertSame(outer, loops.getInnermostLoop(bb(cfg, "OuterLatch")));
    assertSame(outer, loops.getInnermostLoop(bb(cfg, "Outer")));
  }

  @Test
  void disjointLoopsAreSeparate() {
    var cfg =
        cfgOf(
            """
        fun main() {
          (reg n:I) --> I {
            goto H1();
          H1():
            if n then H1() else Mid();
          Mid():
            goto H2();
          H2():
            if n then H2() else Exit();
          Exit():
            return n;
          }
        }
        """);

    var loops = loopsOf(cfg);

    assertEquals(2, loops.getLoops().size());
    var first = loopHeadedBy(loops, "H1");
    var second = loopHeadedBy(loops, "H2");
    assertEquals(Set.of("H1"), labels(first.getBlocks()));
    assertEquals(Set.of("H2"), labels(second.getBlocks()));

    assertEquals(Set.of(first), loops.getLoopsContaining(bb(cfg, "H1")));
    assertEquals(Set.of(second), loops.getLoopsContaining(bb(cfg, "H2")));
    assertTrue(loops.getLoopsContaining(bb(cfg, "Mid")).isEmpty());
  }

  @Test
  void irreducibleCfgHasNoNaturalLoop() {
    // A and B jump to each other, but neither dominates the other because the entry can branch
    // into either, so there's no back edge and hence no natural loop.
    var cfg =
        cfgOf(
            """
        fun main() {
          (reg n:I) --> I {
            if n then A() else B();
          A():
            if n then B() else Exit();
          B():
            if n then A() else Exit();
          Exit():
            return n;
          }
        }
        """);

    var loops = loopsOf(cfg);

    assertTrue(
        loops.getLoops().isEmpty(),
        () -> "irreducible CFG should report no loops: " + loops.getLoops());
  }

  @Test
  void loopWithNoPathToAnExitIsStillFound() {
    var cfg =
        cfgOf(
            """
        fun main() {
          (reg n:I) --> I {
            if n then Spin() else Exit();
          Spin():
            goto Spin();
          Exit():
            return n;
          }
        }
        """);

    var loops = loopsOf(cfg);

    var loop = loopHeadedBy(loops, "Spin");
    assertEquals(Set.of("Spin"), labels(loop.getBlocks()));
    assertEquals(Set.of("Spin"), labels(loop.getBackEdges()));
  }

  @Test
  void loopExitingOnlyViaDeoptIsFound() {
    var cfg =
        cfgOf(
            """
        fun main() {
          (reg n:I) --> I {
            goto Head();
          Head():
            if n then Head() else Bail();
          Bail():
            deopt 0 [];
          }
        }
        """);

    var loops = loopsOf(cfg);

    var loop = loopHeadedBy(loops, "Head");
    assertEquals(Set.of("Head"), labels(loop.getBlocks()));
    assertFalse(loop.contains(bb(cfg, "Bail")));
  }

  @Test
  void rejectsBlocksFromAnotherCfg() {
    var cfg =
        cfgOf(
            """
        fun main() {
          (reg n:I) --> I {
            goto Head();
          Head():
            if n then Head() else Exit();
          Exit():
            return n;
          }
        }
        """);
    var other =
        cfgOf(
            """
        fun main() {
          (reg n:I) --> I {
            return n;
          }
        }
        """);

    var loops = loopsOf(cfg);
    var foreign = other.entry();

    assertThrows(IllegalArgumentException.class, () -> loops.getLoopsContaining(foreign));
    assertThrows(IllegalArgumentException.class, () -> loops.isLoopHeader(foreign));
    assertThrows(IllegalArgumentException.class, () -> loops.getInnermostLoop(foreign));
  }

  @SuppressWarnings("DataFlowIssue")
  @Test
  void exposedCollectionsAreUnmodifiable() {
    var cfg =
        cfgOf(
            """
        fun main() {
          (reg n:I) --> I {
            goto Head();
          Head():
            if n then Head() else Exit();
          Exit():
            return n;
          }
        }
        """);

    var loops = loopsOf(cfg);
    var loop = loopHeadedBy(loops, "Head");
    var exit = bb(cfg, "Exit");

    assertThrows(UnsupportedOperationException.class, () -> loops.getLoops().clear());
    assertThrows(UnsupportedOperationException.class, () -> loop.getBlocks().add(exit));
    assertThrows(UnsupportedOperationException.class, () -> loop.getBackEdges().add(exit));
    assertThrows(
        UnsupportedOperationException.class,
        () -> loops.getLoopsContaining(bb(cfg, "Head")).clear());
  }

  /// A long chain exercises the depth-first back-edge search and the backwards walk over the
  /// loop's blocks at a size where an off-by-one or a premature stop would show up.
  @Test
  void longChainLoop() {
    var blockCount = 200;
    var firText = new StringBuilder("fun main() {\n  (reg n:I) --> I {\n    goto B0();\n");
    for (var i = 0; i < blockCount; i++) {
      firText.append("  B").append(i).append("():\n    goto B").append(i + 1).append("();\n");
    }
    // The last block branches back to B0, making the whole chain one natural loop.
    firText
        .append("  B")
        .append(blockCount)
        .append("():\n    if n then B0() else Exit();\n")
        .append("  Exit():\n    return n;\n  }\n}\n");

    var loops = loopsOf(cfgOf(firText.toString()));

    assertEquals(1, loops.getLoops().size());
    var loop = loopHeadedBy(loops, "B0");
    assertEquals(blockCount + 1, loop.getBlocks().size());
    assertEquals(Set.of("B" + blockCount), labels(loop.getBackEdges()));
    assertFalse(loop.getBlocks().contains(cfg(loop).entry()));
  }

  /// The CFG a loop's blocks belong to.
  private static CFG cfg(Loop loop) {
    return Objects.requireNonNull(loop.getHeader().owner());
  }
}
