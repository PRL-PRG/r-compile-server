package org.prlprg.fir.analyze.cfg;

import java.util.Collection;
import java.util.Comparator;
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
/// post-dominator of its children.
///
/// `a` post-dominates `b` iff every path from `b` to an exit goes through `a`, i.e. reaching `b`
/// guarantees `a` runs (at or after `b`). This is [CfgDominatorTree] on the reversed graph: it
/// starts at the [CFG]'s exits and walks predecessors instead of successors.
///
/// A [CFG] may have many exits, and then a block is post-dominated only by the blocks on every
/// path to *every* exit. A block that reaches no exit at all (one in an infinite loop, say) ends
/// control flow like an exit does: it's post-dominated by nothing but itself, and a block that can
/// branch into it isn't post-dominated by whatever comes after the loop, since control that
/// diverges never gets there.
///
/// Like every dominance analysis, this does assume that loops with an exit terminate: a block
/// after a loop post-dominates the loop, even though the loop may spin forever.
public final class PostCfgDominatorTree extends GenCfgDominatorTree {
  @AnalysisConstructor
  public PostCfgDominatorTree(CFG cfg) {
    super(cfg);
    run();
  }

  @Override
  protected Collection<BB> roots() {
    return cfg.exits();
  }

  @Override
  protected Collection<BB> predecessorsOf(BB bb) {
    return bb.successors();
  }

  @Override
  protected Collection<BB> successorsOf(BB bb) {
    return bb.predecessors();
  }

  @Override
  protected boolean unreachedBlocksAreRoots() {
    // A block that reaches no exit still runs, it just never returns, so it's an exit of its own:
    // otherwise a diverging path would count as if it flowed on to whatever comes after the loop.
    return true;
  }

  /// Get the immediate post-dominator of a basic block.
  ///
  /// Returns `null` for an exit block, for a block whose paths reach different exits, and for a
  /// block that reaches no exit at all.
  public @Nullable BB immediatePostDominator(BB bb) {
    return immediateAncestor(bb);
  }

  /// Get all blocks immediately post-dominated by this block.
  public @Unmodifiable Set<BB> immediatePostDominees(BB bb) {
    return immediateDescendants(bb);
  }

  /// Get all post-dominators of a basic block (including itself), outermost (closest to an exit)
  /// first.
  ///
  /// A block is post-dominated only by itself when its paths reach different exits, and when it
  /// reaches no exit at all.
  ///
  /// This walks and caches the block's path to the root, so prefer [#postDominates] where it
  /// applies: that answers the same question without materializing a set per block.
  public @Unmodifiable Set<BB> postDominators(BB bb) {
    return ancestors(bb);
  }

  /// Check if `postDominator` post-dominates `postDominee`. Both must be in this [CFG].
  public boolean postDominates(Instruction postDominator, Instruction postDominee) {
    return postDominates(
        Objects.requireNonNull(postDominator.parentBB()),
        postDominator.indexInBB(),
        Objects.requireNonNull(postDominee.parentBB()),
        postDominee.indexInBB());
  }

  /// Check if `postDominatorBb`/`postDominatorIndex` post-dominates
  /// `postDomineeBb`/`postDomineeIndex`.
  ///
  /// Within a block, an instruction post-dominates the ones at or before it, since a block runs
  /// to its end once it's entered.
  public boolean postDominates(
      BB postDominatorBb, int postDominatorIndex, BB postDomineeBb, int postDomineeIndex) {
    return postDominatorBb == postDomineeBb
        ? postDominatorIndex >= postDomineeIndex
        : postDominates(postDominatorBb, postDomineeBb);
  }

  /// Check if `postDominator` post-dominates `postDominee`.
  public boolean postDominates(BB postDominator, BB postDominee) {
    return isAncestor(postDominator, postDominee);
  }

  /// Sorts post-dominators before post-dominees. Specifically, sorts each node by its depth in a
  /// post-dominator tree, so exits come first.
  ///
  /// Sorts blocks that reach no exit, or blocks outside the tree, last.
  public Comparator<BB> comparator() {
    return depthComparator();
  }

  /// [#comparator()] for [BB]s, breaks ties via instruction index (later instructions first, since
  /// they post-dominate the earlier ones)
  public Comparator<Statement> positionComparator() {
    return Comparator.comparing(Statement::parentBB, comparator())
        .thenComparing(Comparator.comparingInt(Statement::indexInBB).reversed());
  }
}
