package org.prlprg.fir.analyze;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.Map;
import java.util.Set;
import javax.annotation.Nullable;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;

/// Organizes the blocks in a control-flow graph into a tree, where each parent is the immediate
/// dominator of its children.
public class DominatorTree {
  private final CFG cfg;
  private final Map<BB, BB> immediateDominators;
  private final Map<BB, Set<BB>> immediateDominees;
  private final Map<BB, Set<BB>> dominators;

  public DominatorTree(CFG cfg) {
    this.cfg = cfg;
    this.immediateDominators = new HashMap<>();
    this.immediateDominees = new HashMap<>();
    this.dominators = new HashMap<>();
    compute();
  }

  /// Get the immediate dominator of a basic block.
  ///
  /// Returns `null` for the entry block.
  public @Nullable BB immediateDominator(BB bb) {
    return immediateDominators.get(bb);
  }

  /// Get all blocks immediately dominated by this block.
  public Set<BB> immediateDominees(BB bb) {
    return immediateDominees.getOrDefault(bb, Set.of());
  }

  /// Get all dominators of a basic block (including itself).
  public Set<BB> dominators(BB bb) {
    return dominators.getOrDefault(bb, Set.of());
  }

  /// Check if block `dominator` dominates block `bb`.
  public boolean dominates(BB dominator, BB bb) {
    return dominators(bb).contains(dominator);
  }

  private void compute() {
    var bbs = new ArrayList<>(cfg.bbs());
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
        newDominators.add(bb); // A block always dominates itself

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

        // If no predecessors (unreachable), keep current dominators
        if (bb.predecessors().isEmpty()) {
          newDominators = new LinkedHashSet<>(dominators.get(bb));
        }

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
