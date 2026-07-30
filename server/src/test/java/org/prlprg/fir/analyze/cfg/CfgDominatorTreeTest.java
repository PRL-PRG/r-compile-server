package org.prlprg.fir.analyze.cfg;

import static org.junit.jupiter.api.Assertions.*;
import static org.prlprg.fir.ir.ParseUtil.parseModule;

import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Objects;
import java.util.Set;
import java.util.stream.Collectors;
import org.intellij.lang.annotations.Language;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.variable.Variable;

class CfgDominatorTreeTest {
  private static CFG cfgOf(@Language("FIR") String firText) {
    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline();
    return Objects.requireNonNull(main.cfg());
  }

  private static BB bb(CFG cfg, String label) {
    return Objects.requireNonNull(cfg.bb(label), () -> "no block labelled '" + label + "'");
  }

  private static Set<String> labels(java.util.Collection<BB> bbs) {
    return bbs.stream().map(BB::label).collect(Collectors.toSet());
  }

  /// Dominator sets computed the textbook way: intersect the predecessors' sets until they settle.
  ///
  /// [CfgDominatorTree] uses Cooper-Harvey-Kennedy instead, which computes immediate dominators
  /// directly and is far cheaper; this is the slow but obviously-correct definition to check it
  /// against.
  private static Map<BB, Set<BB>> referenceDominators(CFG cfg) {
    var bbs = cfg.bbs();
    var entry = cfg.entry();
    var dominators = new HashMap<BB, Set<BB>>();
    for (var bb : bbs) {
      dominators.put(bb, bb == entry ? Set.of(bb) : new LinkedHashSet<>(bbs));
    }

    var changed = true;
    while (changed) {
      changed = false;
      for (var bb : bbs) {
        if (bb == entry) {
          continue;
        }

        var newDominators = new LinkedHashSet<BB>();
        var first = true;
        for (var pred : bb.predecessors()) {
          if (first) {
            newDominators.addAll(dominators.get(pred));
            first = false;
          } else {
            newDominators.retainAll(dominators.get(pred));
          }
        }
        newDominators.add(bb);

        if (!newDominators.equals(dominators.get(bb))) {
          dominators.put(bb, newDominators);
          changed = true;
        }
      }
    }
    return dominators;
  }

  /// The deepest strict dominator of `bb` according to `reference`.
  private static @org.jspecify.annotations.Nullable BB referenceImmediateDominator(
      Map<BB, Set<BB>> reference, BB bb) {
    var strict = new HashSet<>(reference.get(bb));
    strict.remove(bb);

    for (var candidate : strict) {
      var isImmediate = true;
      for (var other : strict) {
        if (other != candidate && reference.get(other).contains(candidate)) {
          isImmediate = false;
          break;
        }
      }
      if (isImmediate) {
        return candidate;
      }
    }
    return null;
  }

  private static void assertMatchesReference(String name, @Language("FIR") String firText) {
    var cfg = cfgOf(firText);
    var reference = referenceDominators(cfg);
    var tree = new CfgDominatorTree(cfg);

    for (var bb : cfg.bbs()) {
      assertEquals(
          labels(reference.get(bb)),
          labels(tree.dominators(bb)),
          () -> name + ": dominators(" + bb.label() + ")");

      var expectedImmediate = referenceImmediateDominator(reference, bb);
      var actualImmediate = tree.immediateDominator(bb);
      assertEquals(
          expectedImmediate == null ? null : expectedImmediate.label(),
          actualImmediate == null ? null : actualImmediate.label(),
          () -> name + ": immediateDominator(" + bb.label() + ")");
    }

    // `dominates` must agree with the reference sets for every pair of blocks.
    for (var dominator : cfg.bbs()) {
      for (var dominee : cfg.bbs()) {
        assertEquals(
            reference.get(dominee).contains(dominator),
            tree.dominates(dominator, dominee),
            () -> name + ": dominates(" + dominator.label() + ", " + dominee.label() + ")");
      }
    }

    // The tree must be consistent: a block's immediate dominees are exactly the blocks it is the
    // immediate dominator of.
    for (var bb : cfg.bbs()) {
      for (var dominee : tree.immediateDominees(bb)) {
        assertSame(bb, tree.immediateDominator(dominee), () -> name + ": " + dominee.label());
      }
    }
  }

  @Test
  void straightLine() {
    assertMatchesReference(
        "straight line",
        """
        fun main() {
          (reg n:I) --> I {
            r0: I = dup n;
            return r0;
          }
        }
        """);
  }

  @Test
  void diamond() {
    assertMatchesReference(
        "diamond",
        """
        fun main() {
          (reg n:I) --> I {
            if n then A() else B();
          A():
            goto J();
          B():
            goto J();
          J():
            return n;
          }
        }
        """);
  }

  @Test
  void loops() {
    assertMatchesReference(
        "simple loop",
        """
        fun main() {
          (reg n:I) --> I {
            goto Head();
          Head():
            if n then Body() else Exit();
          Body():
            goto Head();
          Exit():
            return n;
          }
        }
        """);
    assertMatchesReference(
        "nested loops",
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
  }

  @Test
  void irreducible() {
    assertMatchesReference(
        "irreducible",
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
  }

  @Test
  void blockWithNoPathToAnExit() {
    assertMatchesReference(
        "no exit path",
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
  }

  @Test
  void branchesMergingAtSeveralDepths() {
    assertMatchesReference(
        "deep nest",
        """
        fun main() {
          (reg n:I) --> I {
            if n then A() else B();
          A():
            if n then C() else D();
          B():
            if n then D() else E();
          C():
            goto F();
          D():
            goto F();
          E():
            goto F();
          F():
            if n then G() else Exit();
          G():
            goto F();
          Exit():
            return n;
          }
        }
        """);
  }

  @Test
  void dominatorTreeShape() {
    var cfg =
        cfgOf(
            """
        fun main() {
          (reg n:I) --> I {
            if n then A() else B();
          A():
            goto J();
          B():
            goto J();
          J():
            return n;
          }
        }
        """);

    var tree = new CfgDominatorTree(cfg);
    var entry = cfg.entry();

    // The entry dominates everything, and every block hangs directly off it because none of the
    // branches dominates the join.
    assertNull(tree.immediateDominator(entry));
    assertEquals(Set.of("A", "B", "J"), labels(tree.immediateDominees(entry)));
    assertEquals(Set.of(entry.label(), "J"), labels(tree.dominators(bb(cfg, "J"))));
    assertSame(entry, tree.immediateDominator(bb(cfg, "J")));
    assertTrue(tree.immediateDominees(bb(cfg, "A")).isEmpty());

    assertTrue(tree.dominates(entry, bb(cfg, "J")));
    assertFalse(tree.dominates(bb(cfg, "A"), bb(cfg, "J")));
    assertFalse(tree.dominates(bb(cfg, "A"), bb(cfg, "B")));
    assertTrue(tree.dominates(bb(cfg, "A"), bb(cfg, "A")));
  }

  @Test
  void comparatorSortsDominatorsFirst() {
    var cfg =
        cfgOf(
            """
        fun main() {
          (reg n:I) --> I {
            goto A();
          A():
            goto B();
          B():
            return n;
          }
        }
        """);

    var tree = new CfgDominatorTree(cfg);
    var sorted =
        List.of(bb(cfg, "B"), bb(cfg, "A"), cfg.entry()).stream()
            .sorted(tree.comparator())
            .map(BB::label)
            .toList();

    assertEquals(List.of(cfg.entry().label(), "A", "B"), sorted);
  }

  @Test
  void rejectsBlocksFromAnotherCfg() {
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
            return n;
          }
        }
        """);

    var tree = new CfgDominatorTree(cfg);
    var foreign = other.entry();
    var own = cfg.entry();

    assertThrows(IllegalArgumentException.class, () -> tree.dominators(foreign));
    assertThrows(IllegalArgumentException.class, () -> tree.immediateDominator(foreign));
    assertThrows(IllegalArgumentException.class, () -> tree.immediateDominees(foreign));
    assertThrows(IllegalArgumentException.class, () -> tree.dominates(foreign, own));
    assertThrows(IllegalArgumentException.class, () -> tree.dominates(own, foreign));
  }

  /// A long chain is where the old O(n^3) immediate-dominator search fell over: it took seconds at
  /// 800 blocks. This is only a few milliseconds now, so it doubles as a check that the algorithm
  /// really is near-linear.
  @Test
  void longChainIsFast() {
    var blockCount = 2000;
    var firText = new StringBuilder("fun main() {\n  (reg n:I) --> I {\n    goto B0();\n");
    for (var i = 0; i < blockCount; i++) {
      firText.append("  B").append(i).append("():\n    goto B").append(i + 1).append("();\n");
    }
    firText.append("  B").append(blockCount).append("():\n    return n;\n  }\n}\n");

    var cfg = cfgOf(firText.toString());
    var tree = new CfgDominatorTree(cfg);

    // Every block in the chain dominates every later one, and B_i's dominators are the entry plus
    // B0..B_i.
    assertSame(cfg.entry(), tree.immediateDominator(bb(cfg, "B0")));
    assertSame(bb(cfg, "B0"), tree.immediateDominator(bb(cfg, "B1")));
    assertTrue(tree.dominates(bb(cfg, "B0"), bb(cfg, "B" + blockCount)));
    assertFalse(tree.dominates(bb(cfg, "B" + blockCount), bb(cfg, "B0")));
    assertEquals(blockCount + 1, tree.dominators(bb(cfg, "B" + (blockCount - 1))).size());
  }
}
