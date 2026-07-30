package org.prlprg.fir.analyze.cfg;

import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Objects;
import java.util.Set;
import org.jetbrains.annotations.Unmodifiable;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.AnalysisConstructor;
import org.prlprg.fir.analyze.CfgAnalysis;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.instruction.Instruction;
import org.prlprg.fir.ir.instruction.Statement;

/// Organizes the blocks in a control-flow graph into a tree, where each parent is the immediate
/// dominator of its children.
///
/// Built with the Cooper-Harvey-Kennedy algorithm ("A Simple, Fast Dominance Algorithm"), since
/// in practice, the naive approach took significant time.
public final class CfgDominatorTree implements CfgAnalysis {
  private final CFG cfg;
  private final Map<BB, BB> immediateDominators = new HashMap<>();
  private final Map<BB, Set<BB>> immediateDominees = new HashMap<>();
  /// Depth-first entry/exit numbers over the dominator tree, so [#dominates] is a range check.
  private final Map<BB, Interval> intervals = new HashMap<>();
  /// Depth in the dominator tree, for [#comparator].
  private final Map<BB, Integer> depths = new HashMap<>();
  /// Filled in on demand by [#dominators], which most callers never need.
  private final Map<BB, Set<BB>> dominators = new HashMap<>();

  @AnalysisConstructor
  public CfgDominatorTree(CFG cfg) {
    this.cfg = cfg;
    run();
  }

  /// Get the immediate dominator of a basic block.
  ///
  /// Returns `null` for the entry block, and for a block unreachable from it.
  public @Nullable BB immediateDominator(BB bb) {
    if (bb.owner() != cfg) {
      throw new IllegalArgumentException("BB not in CFG");
    }
    return immediateDominators.get(bb);
  }

  /// Get all blocks immediately dominated by this block.
  public @Unmodifiable Set<BB> immediateDominees(BB bb) {
    if (bb.owner() != cfg) {
      throw new IllegalArgumentException("BB not in CFG");
    }
    return Collections.unmodifiableSet(Objects.requireNonNull(immediateDominees.get(bb)));
  }

  /// Get all dominators of a basic block (including itself), outermost first.
  ///
  /// A block unreachable from the entry has no dominator but itself, since no path reaches it at
  /// all; callers use that (a size of 1 for a non-entry block) to detect unreachable blocks.
  ///
  /// This walks and caches the block's path to the root, so prefer [#dominates] where it applies:
  /// that answers the same question without materializing a set per block.
  public @Unmodifiable Set<BB> dominators(BB bb) {
    if (bb.owner() != cfg) {
      throw new IllegalArgumentException("BB not in CFG");
    }
    return Collections.unmodifiableSet(dominators.computeIfAbsent(bb, this::pathToRoot));
  }

  /// Check if `dominator` dominates `dominee`. Both must be in this [CFG].
  public boolean dominates(Instruction dominator, Instruction dominee) {
    return dominates(
        Objects.requireNonNull(dominator.parentBB()),
        dominator.indexInBB(),
        Objects.requireNonNull(dominee.parentBB()),
        dominee.indexInBB());
  }

  /// Check if `dominatorBb`/`dominatorIndex` dominates `domineeBb`/`domineeIndex`.
  public boolean dominates(BB dominatorBb, int dominatorIndex, BB domineeBb, int domineeIndex) {
    return dominatorBb == domineeBb
        ? dominatorIndex <= domineeIndex
        : dominates(dominatorBb, domineeBb);
  }

  /// Check if `dominator` dominates `dominee`.
  public boolean dominates(BB dominator, BB dominee) {
    if (dominator.owner() != cfg || dominee.owner() != cfg) {
      throw new IllegalArgumentException("BB not in CFG");
    }

    // `dominator` dominates exactly the blocks in its dominator-tree subtree, which is exactly the
    // blocks whose entry number falls within its own entry/exit range.
    var dominatorInterval = Objects.requireNonNull(intervals.get(dominator));
    var domineeInterval = Objects.requireNonNull(intervals.get(dominee));
    return dominatorInterval.enter <= domineeInterval.enter
        && domineeInterval.enter <= dominatorInterval.exit;
  }

  /// Sorts dominators before dominees. Specifically, sorts each node by its depth in a
  /// dominator tree.
  ///
  /// Sorts unreachable blocks or blocks outside the tree last.
  public Comparator<BB> comparator() {
    return Comparator.comparingInt(bb -> depths.getOrDefault(bb, Integer.MAX_VALUE));
  }

  /// [#comparator()] for [BB]s, breaks ties via instruction index
  public Comparator<Statement> positionComparator() {
    return Comparator.comparing(Statement::parentBB, comparator())
        .thenComparingInt(Statement::indexInBB);
  }

  private void run() {
    var postorder = postorderFromEntry();
    var immediateDominatorsByPostorder = computeImmediateDominators(postorder);

    for (var bb : cfg.bbs()) {
      immediateDominees.put(bb, new LinkedHashSet<>());
    }

    var entry = cfg.entry();
    for (var bb : cfg.bbs()) {
      // The entry has no dominator, and neither does a block no path from the entry reaches.
      if (bb == entry) {
        continue;
      }
      var immediateDominator = immediateDominatorsByPostorder.get(bb);
      if (immediateDominator == null) {
        continue;
      }

      immediateDominators.put(bb, immediateDominator);
      immediateDominees.get(immediateDominator).add(bb);
    }

    numberTree();
  }

  /// The blocks reachable from the entry, in depth-first postorder.
  ///
  /// Reversing this is the order the fixed point below converges fastest in, because a block's
  /// predecessors mostly come before it.
  private List<BB> postorderFromEntry() {
    var postorder = new ArrayList<BB>(cfg.bbs().size());
    var visited = new HashSet<BB>();
    var stack = new ArrayDeque<Frame>();

    var entry = cfg.entry();
    visited.add(entry);
    stack.push(new Frame(entry, entry.successors().iterator()));

    while (!stack.isEmpty()) {
      var frame = stack.peek();

      if (frame.children.hasNext()) {
        var successor = frame.children.next();
        if (visited.add(successor)) {
          stack.push(new Frame(successor, successor.successors().iterator()));
        }
      } else {
        postorder.add(frame.bb);
        stack.pop();
      }
    }

    return postorder;
  }

  /// The Cooper-Harvey-Kennedy fixed point: repeatedly set each block's immediate dominator to the
  /// intersection of its already-processed predecessors, until nothing changes.
  private Map<BB, BB> computeImmediateDominators(List<BB> postorder) {
    var postorderNumbers = new HashMap<BB, Integer>(postorder.size());
    for (var i = 0; i < postorder.size(); i++) {
      postorderNumbers.put(postorder.get(i), i);
    }

    var entry = cfg.entry();
    var idom = new HashMap<BB, BB>(postorder.size());
    // The entry is its own dominator while iterating, which is what terminates the walks in
    // `intersect`. `run` drops it again, since the entry has no immediate dominator.
    idom.put(entry, entry);

    var changed = true;
    while (changed) {
      changed = false;

      // Reverse postorder.
      for (var i = postorder.size() - 1; i >= 0; i--) {
        var bb = postorder.get(i);
        if (bb == entry) {
          continue;
        }

        BB newImmediateDominator = null;
        for (var pred : bb.predecessors()) {
          // Unprocessed on this pass (a back edge's source), or unreachable, so it can't
          // constrain the intersection yet.
          if (!idom.containsKey(pred)) {
            continue;
          }
          newImmediateDominator =
              newImmediateDominator == null
                  ? pred
                  : intersect(pred, newImmediateDominator, idom, postorderNumbers);
        }

        if (newImmediateDominator != null && idom.get(bb) != newImmediateDominator) {
          idom.put(bb, newImmediateDominator);
          changed = true;
        }
      }
    }

    idom.remove(entry);
    return idom;
  }

  /// The nearest common ancestor of `a` and `b` in the partly-built dominator tree, found by
  /// walking whichever is deeper (lower postorder number) up towards the entry.
  private static BB intersect(BB a, BB b, Map<BB, BB> idom, Map<BB, Integer> postorderNumbers) {
    while (a != b) {
      while (postorderNumbers.get(a) < postorderNumbers.get(b)) {
        a = Objects.requireNonNull(idom.get(a));
      }
      while (postorderNumbers.get(b) < postorderNumbers.get(a)) {
        b = Objects.requireNonNull(idom.get(b));
      }
    }
    return a;
  }

  /// Assign each block a depth and a depth-first entry/exit range over the dominator tree, so that
  /// [#dominates] is a range check instead of a set lookup.
  ///
  /// The entry is the tree's root; each block unreachable from it is an isolated root of its own,
  /// so nothing dominates it but itself.
  private void numberTree() {
    var counter = 0;
    var enters = new HashMap<BB, Integer>();
    var entry = cfg.entry();

    for (var root : roots()) {
      // Only the entry's tree gets depths: `comparator` sorts blocks with no depth last, which is
      // where unreachable blocks belong. (They're childless, so no descendant misses out.)
      if (root == entry) {
        depths.put(root, 0);
      }

      var stack = new ArrayDeque<Frame>();
      enters.put(root, counter++);
      stack.push(new Frame(root, immediateDominees.get(root).iterator()));

      while (!stack.isEmpty()) {
        var frame = stack.peek();

        if (frame.children.hasNext()) {
          var child = frame.children.next();
          depths.put(child, depths.get(frame.bb) + 1);
          enters.put(child, counter++);
          stack.push(new Frame(child, immediateDominees.get(child).iterator()));
        } else {
          intervals.put(frame.bb, new Interval(enters.get(frame.bb), counter++));
          stack.pop();
        }
      }
    }
  }

  /// The entry, plus every block unreachable from it (each its own isolated dominator-tree root).
  private List<BB> roots() {
    var roots = new ArrayList<BB>();
    var entry = cfg.entry();
    roots.add(entry);

    for (var bb : cfg.bbs()) {
      if (bb != entry && !immediateDominators.containsKey(bb)) {
        roots.add(bb);
      }
    }

    return roots;
  }

  /// The blocks from the dominator tree's root down to `bb`, which are exactly its dominators.
  private Set<BB> pathToRoot(BB bb) {
    var path = new ArrayList<BB>();

    // Terminates at the entry, or at `bb` itself if it's unreachable: neither has an entry in
    // `immediateDominators`.
    for (BB current = bb; current != null; current = immediateDominators.get(current)) {
      path.add(current);
    }

    Collections.reverse(path);
    return new LinkedHashSet<>(path);
  }

  private record Interval(int enter, int exit) {}

  private record Frame(BB bb, Iterator<BB> children) {}
}
