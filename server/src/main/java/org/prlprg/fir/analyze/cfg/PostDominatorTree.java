package org.prlprg.fir.analyze.cfg;

import java.util.Objects;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.AnalysisConstructor;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.instruction.Instruction;

/// Post-dominator tree that can check if instructions and blocks in promise [CFG]s post-dominate
/// or are post-dominated by those outside or in other promises.
///
/// `a` post-dominates `b` iff every path from `b` to an exit goes through `a`, i.e. reaching `b`
/// guarantees `a` runs (at or after `b`).
///
/// Across [CFG]s the answer is always `false`, unlike [DominatorTree], where an instruction in a
/// promise is dominated by the ones dominating the promise's definition. That direction doesn't
/// mirror: a promise runs when it's forced, and the force may never happen, may happen after the
/// instructions that dominate the definition already ran, or may not even be in this scope (the
/// promise can escape into a callee). So nothing outside a promise is guaranteed to run after its
/// body, and (since the force may never happen) nothing in the body is guaranteed to run at all.
public final class PostDominatorTree extends GenDominatorTree<PostCfgDominatorTree> {
  private final @Nullable CFG mainCfg;

  @AnalysisConstructor
  public PostDominatorTree(Abstraction scope) {
    super(scope, PostCfgDominatorTree::new);
    mainCfg = scope.cfg();
  }

  /// CFG-specific post-dominator tree
  public PostCfgDominatorTree cfg(CFG cfg) {
    return tree(cfg);
  }

  /// Check if `postDominator` post-dominates `postDominee`.
  public boolean postDominates(Instruction postDominator, Instruction postDominee) {
    return postDominates(
        Objects.requireNonNull(postDominator.parentBB()),
        postDominator.indexInBB(),
        Objects.requireNonNull(postDominee.parentBB()),
        postDominee.indexInBB());
  }

  /// Check if `postDominatorBb`/`postDominatorIndex` post-dominates
  /// `postDomineeBb`/`postDomineeIndex`.
  public boolean postDominates(
      BB postDominatorBb, int postDominatorIndex, BB postDomineeBb, int postDomineeIndex) {
    if (!contains(postDominatorBb.owner())) {
      throw new IllegalArgumentException("Post-dominator BB not in scope");
    }
    if (!contains(postDomineeBb.owner())) {
      throw new IllegalArgumentException("Post-dominee BB not in scope");
    }

    // Instructions in different `CFG`s are in different promise scopes, and nothing in one scope
    // is guaranteed to run after something in another.
    return postDominatorBb.owner() == postDomineeBb.owner()
        && tree(postDominatorBb.owner())
            .postDominates(postDominatorBb, postDominatorIndex, postDomineeBb, postDomineeIndex);
  }

  /// Check if `postDominator` post-dominates `postDominee`.
  public boolean postDominates(BB postDominator, BB postDominee) {
    if (!contains(postDominator.owner())) {
      throw new IllegalArgumentException("Post-dominator BB not in scope");
    }
    if (!contains(postDominee.owner())) {
      throw new IllegalArgumentException("Post-dominee BB not in scope");
    }

    return postDominator.owner() == postDominee.owner()
        && tree(postDominator.owner()).postDominates(postDominator, postDominee);
  }

  /// Check if `instruction` is guaranteed to run, i.e. it post-dominates the first instruction in
  /// the [Abstraction]'s body.
  ///
  /// An instruction in a promise is never guaranteed to run, because the promise may never be
  /// forced.
  ///
  /// @throws IllegalArgumentException If `instruction` isn't in this analysis' scope.
  public boolean postDominatesEntry(Instruction instruction) {
    var bb = Objects.requireNonNull(instruction.parentBB());
    var cfg = bb.owner();
    if (!contains(cfg)) {
      throw new IllegalArgumentException("Instruction not in scope");
    }
    if (cfg != mainCfg) {
      return false;
    }

    // -1 is the position before the entry block's first instruction, so an instruction in the
    // entry block itself always post-dominates it: the block runs to its end once it's entered.
    return tree(cfg).postDominates(bb, instruction.indexInBB(), cfg.entry(), -1);
  }
}
