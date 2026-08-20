package org.prlprg.fir.analyze.cfg;

import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Collection;
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
import org.prlprg.fir.analyze.CfgAnalysis;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;

/// Organizes the blocks in a control-flow graph into a tree, where each parent is the immediate
/// dominator ([CfgDominatorTree]) or immediate post-dominator ([PostCfgDominatorTree]) of its
/// children.
///
/// Post-dominance is dominance on the reversed graph, so both trees are the same computation over
/// different edges: a subclass supplies the direction ([#roots], [#predecessorsOf],
/// [#successorsOf]) and the terminology, and everything else is here.
///
/// Built with the Cooper-Harvey-Kennedy algorithm ("A Simple, Fast Dominance Algorithm"), since
/// in practice, the naive approach took significant time.
///
/// A [CFG] has one entry but may have many exits, so the walk starts from a set of roots, as if a
/// single virtual root pointed at each of them. The result is a forest: a block whose nearest
/// common ancestor with its siblings is that virtual root gets no parent, and neither does a block
/// the walk never reaches, so each is the root of a tree of its own and nothing outside that tree
/// dominates it.
public abstract sealed class GenCfgDominatorTree implements CfgAnalysis
    permits CfgDominatorTree, PostCfgDominatorTree {
  protected final CFG cfg;
  private final Map<BB, BB> immediateAncestors = new HashMap<>();
  private final Map<BB, Set<BB>> immediateDescendants = new HashMap<>();
  /// Depth-first entry/exit numbers over the tree, so [#isAncestor] is a range check.
  private final Map<BB, Interval> intervals = new HashMap<>();
  /// Depth in the tree, for [#depthComparator].
  private final Map<BB, Integer> depths = new HashMap<>();
  /// Filled in on demand by [#ancestors], which most callers never need.
  private final Map<BB, Set<BB>> ancestors = new HashMap<>();

  /// Subclasses must call [#run] once they're constructed, since it calls their methods.
  protected GenCfgDominatorTree(CFG cfg) {
    this.cfg = cfg;
  }

  // --- Direction ------------------------------------------------------------------------------

  /// The blocks the walk starts from: the [CFG]'s entry, or every exit when post-dominating.
  protected abstract Collection<BB> roots();

  /// The blocks control flows into `bb` from: its predecessors, or its successors when
  /// post-dominating.
  protected abstract Collection<BB> predecessorsOf(BB bb);

  /// The blocks control flows from `bb` into: its successors, or its predecessors when
  /// post-dominating.
  protected abstract Collection<BB> successorsOf(BB bb);

  /// Whether every block that [#roots] don't reach becomes a root of its own.
  ///
  /// Dominating, it doesn't: a block unreachable from the entry never runs, so it must not
  /// constrain what dominates the blocks it flows into. Post-dominating, it does: a block that
  /// reaches no exit still runs, it just never returns, so it ends control flow like an exit does,
  /// and the blocks before it must not be treated as if that path flowed on past it.
  protected abstract boolean unreachedBlocksAreRoots();

  // --- Queries --------------------------------------------------------------------------------

  /// The block's parent in the tree: its immediate (post-)dominator.
  ///
  /// Returns `null` for a root, which is the entry (or an exit, post-dominating), a block whose
  /// only common ancestor with its siblings is the virtual root, or a block the walk doesn't
  /// reach.
  protected final @Nullable BB immediateAncestor(BB bb) {
    checkOwner(bb);
    return immediateAncestors.get(bb);
  }

  /// The block's children in the tree: the blocks whose immediate (post-)dominator it is.
  protected final @Unmodifiable Set<BB> immediateDescendants(BB bb) {
    checkOwner(bb);
    return Collections.unmodifiableSet(Objects.requireNonNull(immediateDescendants.get(bb)));
  }

  /// The blocks from the block's tree root down to and including itself: its (post-)dominators.
  ///
  /// A root has no ancestor but itself, since nothing outside its tree reaches it; callers use
  /// that (a size of 1) to detect such blocks.
  ///
  /// This walks and caches the block's path to the root, so prefer [#isAncestor] where it applies:
  /// that answers the same question without materializing a set per block.
  protected final @Unmodifiable Set<BB> ancestors(BB bb) {
    checkOwner(bb);
    return Collections.unmodifiableSet(ancestors.computeIfAbsent(bb, this::pathToRoot));
  }

  /// Whether `ancestor` is `descendant`'s ancestor in the tree, or `descendant` itself.
  protected final boolean isAncestor(BB ancestor, BB descendant) {
    checkOwner(ancestor);
    checkOwner(descendant);

    // `ancestor`'s descendants are exactly the blocks in its subtree, which are exactly the blocks
    // whose entry number falls within its own entry/exit range.
    var ancestorInterval = Objects.requireNonNull(intervals.get(ancestor));
    var descendantInterval = Objects.requireNonNull(intervals.get(descendant));
    return ancestorInterval.enter <= descendantInterval.enter
        && descendantInterval.enter <= ancestorInterval.exit;
  }

  /// Sorts ancestors before descendants. Specifically, sorts each node by its depth in the tree.
  ///
  /// Sorts blocks the walk doesn't reach, or blocks outside the tree, last.
  protected final Comparator<BB> depthComparator() {
    return Comparator.comparingInt(bb -> depths.getOrDefault(bb, Integer.MAX_VALUE));
  }

  private void checkOwner(BB bb) {
    if (bb.owner() != cfg) {
      throw new IllegalArgumentException("BB not in CFG");
    }
  }

  // --- Computation ----------------------------------------------------------------------------

  protected final void run() {
    var roots = new LinkedHashSet<>(roots());
    var postorder = postorderFrom(roots);
    var immediateAncestorsByPostorder = computeImmediateAncestors(roots, postorder);

    for (var bb : cfg.bbs()) {
      immediateDescendants.put(bb, new LinkedHashSet<>());
    }

    for (var bb : cfg.bbs()) {
      var immediateAncestor = immediateAncestorsByPostorder.get(bb);
      // A block whose parent is the virtual root (which `computeImmediateAncestors` encodes as a
      // self-loop) has no parent here, and neither does a block the walk didn't reach.
      if (immediateAncestor == null || immediateAncestor == bb) {
        continue;
      }

      immediateAncestors.put(bb, immediateAncestor);
      immediateDescendants.get(immediateAncestor).add(bb);
    }

    numberTrees(postorder);
  }

  /// The blocks reachable from `roots`, in depth-first postorder.
  ///
  /// Reversing this is the order the fixed point below converges fastest in, because a block's
  /// predecessors mostly come before it.
  ///
  /// If [#unreachedBlocksAreRoots], every block this doesn't reach is added to `roots` and walked
  /// from as well, so the result covers the whole [CFG].
  private List<BB> postorderFrom(Set<BB> roots) {
    var postorder = new ArrayList<BB>(cfg.bbs().size());
    var visited = new HashSet<BB>();

    for (var root : roots) {
      walkFrom(root, visited, postorder);
    }

    if (unreachedBlocksAreRoots()) {
      // Collect them all before walking, so that one of them being reachable from another doesn't
      // stop it from being a root: which blocks are roots mustn't depend on the iteration order.
      var unreached = cfg.bbs().stream().filter(bb -> !visited.contains(bb)).toList();
      roots.addAll(unreached);
      for (var bb : unreached) {
        walkFrom(bb, visited, postorder);
      }
    }

    return postorder;
  }

  /// Depth-first walk from `root`, appending each block to `postorder` once its children are done.
  private void walkFrom(BB root, Set<BB> visited, List<BB> postorder) {
    if (!visited.add(root)) {
      return;
    }

    var stack = new ArrayDeque<Frame>();
    stack.push(new Frame(root, successorsOf(root).iterator()));

    while (!stack.isEmpty()) {
      var frame = stack.peek();

      if (frame.children.hasNext()) {
        var successor = frame.children.next();
        if (visited.add(successor)) {
          stack.push(new Frame(successor, successorsOf(successor).iterator()));
        }
      } else {
        postorder.add(frame.bb);
        stack.pop();
      }
    }
  }

  /// The Cooper-Harvey-Kennedy fixed point: repeatedly set each block's immediate ancestor to the
  /// intersection of its already-processed predecessors, until nothing changes.
  ///
  /// A block whose intersection is the virtual root maps to itself, which is also how the roots
  /// themselves are encoded. [#run] turns both into blocks with no parent.
  private Map<BB, BB> computeImmediateAncestors(Set<BB> roots, List<BB> postorder) {
    var postorderNumbers = new HashMap<BB, Integer>(postorder.size());
    for (var i = 0; i < postorder.size(); i++) {
      postorderNumbers.put(postorder.get(i), i);
    }

    var idom = new HashMap<BB, BB>(postorder.size());
    // Each root is its own ancestor while iterating: it stands in for the virtual root, and is
    // what terminates the walks in `intersect`.
    for (var root : roots) {
      idom.put(root, root);
    }

    var changed = true;
    while (changed) {
      changed = false;

      // Reverse postorder.
      for (var i = postorder.size() - 1; i >= 0; i--) {
        var bb = postorder.get(i);
        if (roots.contains(bb)) {
          continue;
        }

        BB newImmediateAncestor = null;
        var anyProcessed = false;
        for (var pred : predecessorsOf(bb)) {
          // Unprocessed on this pass (a back edge's source), or unreached, so it can't
          // constrain the intersection yet.
          if (!idom.containsKey(pred)) {
            continue;
          }
          if (!anyProcessed) {
            anyProcessed = true;
            newImmediateAncestor = pred;
          } else if (newImmediateAncestor != null) {
            // A `null` intersection is the virtual root, and intersecting it with anything else
            // stays the virtual root, so there's nothing left to narrow.
            newImmediateAncestor = intersect(pred, newImmediateAncestor, idom, postorderNumbers);
          }
        }

        if (anyProcessed) {
          var resolved = newImmediateAncestor == null ? bb : newImmediateAncestor;
          if (idom.get(bb) != resolved) {
            idom.put(bb, resolved);
            changed = true;
          }
        }
      }
    }

    return idom;
  }

  /// The nearest common ancestor of `a` and `b` in the partly-built tree, found by walking
  /// whichever is deeper (lower postorder number) up towards its root.
  ///
  /// Returns `null` if that ancestor is the virtual root, i.e. one walk reached a root without
  /// meeting the other.
  private static @Nullable BB intersect(
      BB a, BB b, Map<BB, BB> idom, Map<BB, Integer> postorderNumbers) {
    while (a != b) {
      while (postorderNumbers.get(a) < postorderNumbers.get(b)) {
        var next = Objects.requireNonNull(idom.get(a));
        if (next == a) {
          return null;
        }
        a = next;
      }
      while (postorderNumbers.get(b) < postorderNumbers.get(a)) {
        var next = Objects.requireNonNull(idom.get(b));
        if (next == b) {
          return null;
        }
        b = next;
      }
    }
    return a;
  }

  /// Assign each block a depth and a depth-first entry/exit range over the tree, so that
  /// [#isAncestor] is a range check instead of a set lookup.
  ///
  /// Each block with no parent is a root of its own tree, so this numbers a forest.
  private void numberTrees(List<BB> postorder) {
    var reached = new HashSet<>(postorder);
    var counter = 0;
    var enters = new HashMap<BB, Integer>();

    for (var root : treeRoots()) {
      // Only blocks the walk reached get depths: `depthComparator` sorts blocks with no depth
      // last, which is where unreached blocks belong. (They're childless, since only a reached
      // block is ever another's immediate ancestor, so no descendant misses out.)
      if (reached.contains(root)) {
        depths.put(root, 0);
      }

      var stack = new ArrayDeque<Frame>();
      enters.put(root, counter++);
      stack.push(new Frame(root, immediateDescendants.get(root).iterator()));

      while (!stack.isEmpty()) {
        var frame = stack.peek();

        if (frame.children.hasNext()) {
          var child = frame.children.next();
          depths.put(child, depths.get(frame.bb) + 1);
          enters.put(child, counter++);
          stack.push(new Frame(child, immediateDescendants.get(child).iterator()));
        } else {
          intervals.put(frame.bb, new Interval(enters.get(frame.bb), counter++));
          stack.pop();
        }
      }
    }
  }

  /// Every block with no parent: each roots a tree of the forest.
  private List<BB> treeRoots() {
    var roots = new ArrayList<BB>();

    for (var bb : cfg.bbs()) {
      if (!immediateAncestors.containsKey(bb)) {
        roots.add(bb);
      }
    }

    return roots;
  }

  /// The blocks from `bb`'s tree root down to `bb`, which are exactly its (post-)dominators.
  private Set<BB> pathToRoot(BB bb) {
    var path = new ArrayList<BB>();

    // Terminates at the tree's root, which has no entry in `immediateAncestors`.
    for (BB current = bb; current != null; current = immediateAncestors.get(current)) {
      path.add(current);
    }

    Collections.reverse(path);
    return new LinkedHashSet<>(path);
  }

  private record Interval(int enter, int exit) {}

  private record Frame(BB bb, Iterator<BB> children) {}
}
