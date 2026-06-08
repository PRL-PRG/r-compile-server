package org.prlprg.fir.analyze.cfg;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.LinkedList;
import java.util.Map;
import java.util.Objects;
import java.util.Set;
import java.util.function.Function;
import org.jetbrains.annotations.Unmodifiable;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.AnalysisConstructor;
import org.prlprg.fir.analyze.CfgAnalysis;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.cfg.iterator.BBIterator;
import org.prlprg.fir.ir.position.CfgPosition;
import org.prlprg.fir.ir.position.ScopePosition;
import org.prlprg.util.NotImplementedError;

/// Organizes the blocks in a control-flow graph into a tree, where each parent is the immediate
/// dominator of its children.
public final class CfgDominatorTree implements CfgAnalysis {
  private final CFG cfg;
  private final Map<BB, BB> immediateDominators = new HashMap<>();
  private final Map<BB, Set<BB>> immediateDominees = new HashMap<>();
  private final Map<BB, Set<BB>> dominators = new HashMap<>();

  /// Determine whether a [ScopePosition] dominates another using [CfgDominatorTree] instead of
  /// [DominatorTree].
  public static boolean dominates(
      Function<CFG, CfgDominatorTree> getDomTree, ScopePosition dominator, ScopePosition dominee) {
    var localDominator = dominator.inInnermostCfg();
    var localDominee = dominee.inCfg(localDominator.cfg());

    if (localDominee == null) {
      // Use is in a sibling or outer promise
      return false;
    }

    var dominatorTree = getDomTree.apply(localDominator.cfg());

    return dominatorTree.dominates(localDominator, localDominee);
  }

  @AnalysisConstructor
  public CfgDominatorTree(CFG cfg) {
    this.cfg = cfg;
    run();
  }

  /// Get the immediate dominator of a basic block.
  ///
  /// Returns `null` for the entry block.
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

  /// Get all dominators of a basic block (including itself).
  public @Unmodifiable Set<BB> dominators(BB bb) {
    if (bb.owner() != cfg) {
      throw new IllegalArgumentException("BB not in CFG");
    }
    return Collections.unmodifiableSet(Objects.requireNonNull(dominators.get(bb)));
  }

  /// Check if `dominator` dominates `dominee`.
  public boolean dominates(CfgPosition dominator, CfgPosition dominee) {
    return dominates(
        dominator.bb(), dominator.instructionIndex(), dominee.bb(), dominee.instructionIndex());
  }

  /// Check if `dominatorBb`/`dominatorIndex` dominates `domineeBb`/`domineeIndex`.
  public boolean dominates(BB dominatorBb, int dominatorIndex, BB domineeBb, int domineeIndex) {
    return dominatorBb == domineeBb
        ? dominatorIndex <= domineeIndex
        : dominates(dominatorBb, domineeBb);
  }

  /// Check if `dominator` dominates `dominee`.
  public boolean dominates(BB dominator, BB dominee) {
    return dominators(dominee).contains(dominator);
  }

  /// Yields dominators before dominees, outer promises before inner
  public Iterable<BB> iterable() {
    return this::iterator;
  }

  /// Yields dominators before dominees
  public BBIterator iterator() {
    // TODO(ai)
    throw new NotImplementedError();
  }

  /// Sorts dominators before dominees. Specifically, sorts each node by its depth in a
  /// dominator tree.
  ///
  /// Sorts unreachable blocks or blocks outside the tree last.
  public Comparator<BB> comparator() {
    // Get the depth of each node in a dominator tree
    var depth = new HashMap<BB, Integer>();
    depth.put(cfg.entry(), 0);
    var queue = new LinkedList<BB>();
    queue.add(cfg.entry());
    while (!queue.isEmpty()) {
      var bb = queue.removeFirst();
      var bbDepth = depth.get(bb);
      for (var dominee : immediateDominees(bb)) {
        depth.put(dominee, bbDepth + 1);
        queue.add(dominee);
      }
    }

    return Comparator.comparingInt(bb -> depth.getOrDefault(bb, Integer.MAX_VALUE));
  }

  private void run() {
    var bbs = cfg.bbs();
    var entry = cfg.entry();

    // Initialize dominator sets
    for (var bb : bbs) {
      dominators.put(bb, bb == entry ? Set.of(bb) : new LinkedHashSet<>(bbs));
      immediateDominees.put(bb, new HashSet<>());
    }

    // Iterative dataflow algorithm
    var changed = true;
    while (changed) {
      changed = false;
      for (var bb : bbs) {
        if (bb == entry) continue;

        var newDominators = new LinkedHashSet<BB>();

        // Intersection of dominators of all predecessors
        var first = true;
        for (var pred : bb.predecessors()) {
          if (first) {
            newDominators.addAll(dominators.get(pred));
            first = false;
          } else {
            newDominators.retainAll(dominators.get(pred));
          }
        }

        // A block always dominates itself
        newDominators.add(bb);

        if (!newDominators.equals(dominators.get(bb))) {
          dominators.put(bb, newDominators);
          changed = true;
        }
      }
    }

    // Compute immediate dominators
    for (var bb : bbs) {
      if (bb == entry) continue;

      var dominators = new ArrayList<>(dominators(bb));
      dominators.remove(bb); // Remove self

      // Find immediate dominator (dominator closest to bb in the dominator tree)
      BB immediateDominator = null;
      for (var candidate : dominators) {
        var isImmediate = true;
        for (var other : dominators) {
          if (other != candidate && dominates(candidate, other)) {
            isImmediate = false;
            break;
          }
        }
        if (isImmediate) {
          immediateDominator = candidate;
          break;
        }
      }

      if (immediateDominator != null) {
        immediateDominators.put(bb, immediateDominator);
        immediateDominees.get(immediateDominator).add(bb);
      }
    }
  }
}
