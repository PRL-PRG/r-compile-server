package org.prlprg.fir.analyze.cfg;

import static org.junit.jupiter.api.Assertions.*;
import static org.prlprg.fir.ir.ParseUtil.parseModule;

import java.util.ArrayDeque;
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

class PostCfgDominatorTreeTest {
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

  /// The blocks control flow ends at: the [CFG]'s exits, plus the blocks that reach no exit.
  ///
  /// The latter never return, so [PostCfgDominatorTree] treats them as exits of their own: nothing
  /// runs after them, so nothing post-dominates them.
  private static Set<BB> referenceRoots(CFG cfg) {
    var reachesAnExit = new HashSet<BB>();
    var worklist = new ArrayDeque<>(cfg.exits());
    while (!worklist.isEmpty()) {
      var bb = worklist.pop();
      if (reachesAnExit.add(bb)) {
        worklist.addAll(bb.predecessors());
      }
    }

    var roots = new LinkedHashSet<BB>(cfg.exits());
    for (var bb : cfg.bbs()) {
      if (!reachesAnExit.contains(bb)) {
        roots.add(bb);
      }
    }
    return roots;
  }

  /// Post-dominator sets computed the textbook way: intersect the successors' sets until they
  /// settle.
  ///
  /// [PostCfgDominatorTree] runs Cooper-Harvey-Kennedy on the reversed graph instead, which
  /// computes immediate post-dominators directly and is far cheaper; this is the slow but
  /// obviously-correct definition to check it against.
  private static Map<BB, Set<BB>> referencePostDominators(CFG cfg) {
    var bbs = cfg.bbs();
    var roots = referenceRoots(cfg);
    var postDominators = new HashMap<BB, Set<BB>>();
    for (var bb : bbs) {
      postDominators.put(bb, roots.contains(bb) ? Set.of(bb) : new LinkedHashSet<>(bbs));
    }

    var changed = true;
    while (changed) {
      changed = false;
      for (var bb : bbs) {
        if (roots.contains(bb)) {
          continue;
        }

        var newPostDominators = new LinkedHashSet<BB>();
        var first = true;
        for (var succ : bb.successors()) {
          if (first) {
            newPostDominators.addAll(postDominators.get(succ));
            first = false;
          } else {
            newPostDominators.retainAll(postDominators.get(succ));
          }
        }
        newPostDominators.add(bb);

        if (!newPostDominators.equals(postDominators.get(bb))) {
          postDominators.put(bb, newPostDominators);
          changed = true;
        }
      }
    }
    return postDominators;
  }

  /// The deepest strict post-dominator of `bb` according to `reference`.
  private static @org.jspecify.annotations.Nullable BB referenceImmediatePostDominator(
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
    var reference = referencePostDominators(cfg);
    var tree = new PostCfgDominatorTree(cfg);

    for (var bb : cfg.bbs()) {
      assertEquals(
          labels(reference.get(bb)),
          labels(tree.postDominators(bb)),
          () -> name + ": postDominators(" + bb.label() + ")");

      var expectedImmediate = referenceImmediatePostDominator(reference, bb);
      var actualImmediate = tree.immediatePostDominator(bb);
      assertEquals(
          expectedImmediate == null ? null : expectedImmediate.label(),
          actualImmediate == null ? null : actualImmediate.label(),
          () -> name + ": immediatePostDominator(" + bb.label() + ")");
    }

    // `postDominates` must agree with the reference sets for every pair of blocks.
    for (var postDominator : cfg.bbs()) {
      for (var postDominee : cfg.bbs()) {
        assertEquals(
            reference.get(postDominee).contains(postDominator),
            tree.postDominates(postDominator, postDominee),
            () ->
                name
                    + ": postDominates("
                    + postDominator.label()
                    + ", "
                    + postDominee.label()
                    + ")");
      }
    }

    // The tree must be consistent: a block's immediate post-dominees are exactly the blocks it is
    // the immediate post-dominator of.
    for (var bb : cfg.bbs()) {
      for (var postDominee : tree.immediatePostDominees(bb)) {
        assertSame(bb, tree.immediatePostDominator(postDominee), () -> name + ": " + bb.label());
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
  void severalExits() {
    assertMatchesReference(
        "several exits",
        """
        fun main() {
          (reg n:I) --> I {
            if n then A() else B();
          A():
            return 1;
          B():
            return 2;
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
    // The divergent region spans several blocks, so one of its blocks is reachable from another:
    // both are still roots, since which blocks reach no exit can't depend on where the walk starts.
    assertMatchesReference(
        "no exit path through several blocks",
        """
        fun main() {
          (reg n:I) --> I {
            if n then Spin() else Exit();
          Spin():
            goto Spin2();
          Spin2():
            goto Spin();
          Exit():
            return n;
          }
        }
        """);
    assertMatchesReference(
        "no exit path at all",
        """
        fun main() {
          (reg n:I) --> I {
            goto Spin();
          Spin():
            goto Spin();
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
  void postDominatorTreeShape() {
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

    var tree = new PostCfgDominatorTree(cfg);
    var entry = cfg.entry();

    // The join post-dominates everything, and every block hangs directly off it because none of
    // the branches is on the other's path to it.
    assertNull(tree.immediatePostDominator(bb(cfg, "J")));
    assertEquals(Set.of("A", "B", entry.label()), labels(tree.immediatePostDominees(bb(cfg, "J"))));
    assertEquals(Set.of("J", entry.label()), labels(tree.postDominators(entry)));
    assertSame(bb(cfg, "J"), tree.immediatePostDominator(entry));
    assertTrue(tree.immediatePostDominees(bb(cfg, "A")).isEmpty());

    assertTrue(tree.postDominates(bb(cfg, "J"), entry));
    assertFalse(tree.postDominates(bb(cfg, "A"), entry));
    assertFalse(tree.postDominates(bb(cfg, "A"), bb(cfg, "B")));
    assertTrue(tree.postDominates(bb(cfg, "A"), bb(cfg, "A")));
  }

  @Test
  void divergentBranchIsNotPostDominatedByTheOtherOne() {
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

    var tree = new PostCfgDominatorTree(cfg);

    // `Exit` isn't guaranteed to run after the entry, because the other branch never returns.
    assertFalse(tree.postDominates(bb(cfg, "Exit"), cfg.entry()));
    assertNull(tree.immediatePostDominator(cfg.entry()));
    assertEquals(Set.of(cfg.entry().label()), labels(tree.postDominators(cfg.entry())));
    // Nothing runs after a block that spins forever, not even itself twice over.
    assertEquals(Set.of("Spin"), labels(tree.postDominators(bb(cfg, "Spin"))));
  }

  @Test
  void instructionsWithinABlockPostDominateTheEarlierOnes() {
    var cfg =
        cfgOf(
            """
        fun main() {
          (reg n:I) --> I {
            r0: I = dup n;
            r1: I = dup r0;
            return r1;
          }
        }
        """);

    var tree = new PostCfgDominatorTree(cfg);
    var entry = cfg.entry();
    var first = entry.statements().getFirst();
    var second = entry.statements().get(1);

    assertTrue(tree.postDominates(second, first));
    assertFalse(tree.postDominates(first, second));
    assertTrue(tree.postDominates(first, first));
    assertTrue(tree.postDominates(entry.jump(), first));
  }

  @Test
  void comparatorSortsPostDominatorsFirst() {
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

    var tree = new PostCfgDominatorTree(cfg);
    var sorted =
        List.of(cfg.entry(), bb(cfg, "A"), bb(cfg, "B")).stream()
            .sorted(tree.comparator())
            .map(BB::label)
            .toList();

    assertEquals(List.of("B", "A", cfg.entry().label()), sorted);
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

    var tree = new PostCfgDominatorTree(cfg);
    var foreign = other.entry();
    var own = cfg.entry();

    assertThrows(IllegalArgumentException.class, () -> tree.postDominators(foreign));
    assertThrows(IllegalArgumentException.class, () -> tree.immediatePostDominator(foreign));
    assertThrows(IllegalArgumentException.class, () -> tree.immediatePostDominees(foreign));
    assertThrows(IllegalArgumentException.class, () -> tree.postDominates(foreign, own));
    assertThrows(IllegalArgumentException.class, () -> tree.postDominates(own, foreign));
  }

  /// The mirror of `CfgDominatorTreeTest#longChainIsFast`: a long chain is where an O(n^3)
  /// immediate-post-dominator search would fall over, and this stays a few milliseconds.
  @Test
  void longChainIsFast() {
    var blockCount = 2000;
    var firText = new StringBuilder("fun main() {\n  (reg n:I) --> I {\n    goto B0();\n");
    for (var i = 0; i < blockCount; i++) {
      firText.append("  B").append(i).append("():\n    goto B").append(i + 1).append("();\n");
    }
    firText.append("  B").append(blockCount).append("():\n    return n;\n  }\n}\n");

    var cfg = cfgOf(firText.toString());
    var tree = new PostCfgDominatorTree(cfg);

    // Every block in the chain post-dominates every earlier one, and B_i's post-dominators are
    // B_i..B_blockCount.
    assertSame(bb(cfg, "B0"), tree.immediatePostDominator(cfg.entry()));
    assertSame(bb(cfg, "B1"), tree.immediatePostDominator(bb(cfg, "B0")));
    assertTrue(tree.postDominates(bb(cfg, "B" + blockCount), bb(cfg, "B0")));
    assertFalse(tree.postDominates(bb(cfg, "B0"), bb(cfg, "B" + blockCount)));
    assertEquals(blockCount, tree.postDominators(bb(cfg, "B1")).size());
  }
}
