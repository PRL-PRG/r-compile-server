package org.prlprg.fir.analyze;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.Map;
import java.util.Set;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;

/// Organizes the blocks in a control-flow graph into a tree, where each parent is the immediate
/// dominator of its children.
public class DominatorTree {
  private final CFG cfg;
  private final Map<BB, BB> immediateDominators;
  private final Map<BB, Set<BB>> dominatedBlocks;
  private final Map<BB, Set<BB>> dominatorSets;

  public DominatorTree(CFG cfg) {
    this.cfg = cfg;
    this.immediateDominators = new HashMap<>();
    this.dominatedBlocks = new HashMap<>();
    this.dominatorSets = new HashMap<>();
    computeDominators();
  }

  /// Get the immediate dominator of a basic block.
  /// Returns null for the entry block.
  public BB getImmediateDominator(BB bb) {
    return immediateDominators.get(bb);
  }

  /// Get all blocks immediately dominated by this block.
  public Set<BB> getDominatedBlocks(BB bb) {
    return dominatedBlocks.getOrDefault(bb, Set.of());
  }

  /// Check if block 'dominator' dominates block 'bb'.
  public boolean dominates(BB dominator, BB bb) {
    var dominators = dominatorSets.get(bb);
    return dominators != null && dominators.contains(dominator);
  }

  /// Get all dominators of a basic block (including itself).
  public Set<BB> getDominators(BB bb) {
    return dominatorSets.getOrDefault(bb, Set.of());
  }

  private void computeDominators() {
    var bbs = new ArrayList<>(cfg.bbs());
    var entry = cfg.entry();

    // Initialize dominator sets
    for (var bb : bbs) {
      if (bb == entry) {
        dominatorSets.put(bb, Set.of(bb));
      } else {
        dominatorSets.put(bb, new LinkedHashSet<>(bbs));
      }
      dominatedBlocks.put(bb, new HashSet<>());
    }

    // Iterative dataflow algorithm
    var changed = true;
    while (changed) {
      changed = false;
      for (var bb : bbs) {
        if (bb == entry) continue;

        var newDominators = new LinkedHashSet<BB>();
        newDominators.add(bb); // A block always dominates itself

        // Intersection of dominators of all predecessors
        var first = true;
        for (var pred : bb.predecessors()) {
          if (first) {
            newDominators.addAll(dominatorSets.get(pred));
            first = false;
          } else {
            newDominators.retainAll(dominatorSets.get(pred));
          }
        }

        // If no predecessors (unreachable), keep current dominators
        if (bb.predecessors().isEmpty()) {
          newDominators = new LinkedHashSet<>(dominatorSets.get(bb));
        }

        if (!newDominators.equals(dominatorSets.get(bb))) {
          dominatorSets.put(bb, newDominators);
          changed = true;
        }
      }
    }

    // Compute immediate dominators
    for (var bb : bbs) {
      if (bb == entry) continue;

      var dominators = new ArrayList<>(getDominators(bb));
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
        dominatedBlocks.get(immediateDominator).add(bb);
      }
    }
  }
}
