package org.prlprg.fir.analyze.cfg;

import java.util.Collection;
import java.util.Comparator;
import java.util.List;
import java.util.Objects;
import java.util.Set;
import org.jetbrains.annotations.Unmodifiable;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.AnalysisConstructor;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.instruction.Instruction;
import org.prlprg.fir.ir.instruction.Statement;

/// Organizes the blocks in a control-flow graph into a tree, where each parent is the immediate
/// dominator of its children.
///
/// `a` dominates `b` iff every path from the entry to `b` goes through `a`, i.e. `a` is guaranteed
/// to have run whenever `b` runs.
///
/// @see PostCfgDominatorTree `PostCfgDominatorTree`: the same tree on the reversed graph.
public final class CfgDominatorTree extends GenCfgDominatorTree {
  @AnalysisConstructor
  public CfgDominatorTree(CFG cfg) {
    super(cfg);
    run();
  }

  @Override
  protected Collection<BB> roots() {
    return List.of(cfg.entry());
  }

  @Override
  protected Collection<BB> predecessorsOf(BB bb) {
    return bb.predecessors();
  }

  @Override
  protected Collection<BB> successorsOf(BB bb) {
    return bb.successors();
  }

  @Override
  protected boolean unreachedBlocksAreRoots() {
    // A block unreachable from the entry never runs, so it doesn't dominate anything it flows
    // into; it's an isolated tree of its own.
    return false;
  }

  /// Get the immediate dominator of a basic block.
  ///
  /// Returns `null` for the entry block, and for a block unreachable from it.
  public @Nullable BB immediateDominator(BB bb) {
    return immediateAncestor(bb);
  }

  /// Get all blocks immediately dominated by this block.
  public @Unmodifiable Set<BB> immediateDominees(BB bb) {
    return immediateDescendants(bb);
  }

  /// Get all dominators of a basic block (including itself), outermost first.
  ///
  /// A block unreachable from the entry has no dominator but itself, since no path reaches it at
  /// all; callers use that (a size of 1 for a non-entry block) to detect unreachable blocks.
  ///
  /// This walks and caches the block's path to the root, so prefer [#dominates] where it applies:
  /// that answers the same question without materializing a set per block.
  public @Unmodifiable Set<BB> dominators(BB bb) {
    return ancestors(bb);
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
    return isAncestor(dominator, dominee);
  }

  /// Sorts dominators before dominees. Specifically, sorts each node by its depth in a
  /// dominator tree.
  ///
  /// Sorts unreachable blocks or blocks outside the tree last.
  public Comparator<BB> comparator() {
    return depthComparator();
  }

  /// [#comparator()] for [BB]s, breaks ties via instruction index
  public Comparator<Statement> positionComparator() {
    return Comparator.comparing(Statement::parentBB, comparator())
        .thenComparingInt(Statement::indexInBB);
  }
}
