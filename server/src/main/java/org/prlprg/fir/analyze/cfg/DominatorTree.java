package org.prlprg.fir.analyze.cfg;

import java.util.Objects;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.AnalysisConstructor;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.instruction.Deopt;
import org.prlprg.fir.ir.instruction.Instruction;
import org.prlprg.fir.ir.variable.AssigneeOf;
import org.prlprg.fir.ir.variable.BlockParameter;
import org.prlprg.fir.ir.variable.FunctionParameter;
import org.prlprg.fir.ir.variable.Register;

/// Dominator tree that can check if instructions and blocks in promise [CFG]s dominate or are
/// dominated by those outside or in other promises.
///
/// Specifically, an instruction or block in a promise never dominates any outside (we don't
/// analyze guaranteed forces, because in practice they'll be inlined). However, an instruction
/// or block in a promise is dominated by instructions outside that dominate the promise's
/// definition instruction (those in the same [CFG] and, if the promise is nested, those in
/// outer promises' [CFG]s that dominate their respective definition instructions).
public final class DominatorTree extends GenDominatorTree<CfgDominatorTree> {
  private final CfgHierarchy hierarchy;
  private final @Nullable CFG mainCfg;

  public DominatorTree(Abstraction scope) {
    this(scope, new CfgHierarchy(scope));
  }

  @AnalysisConstructor
  public DominatorTree(Abstraction scope, CfgHierarchy hierarchy) {
    super(scope, CfgDominatorTree::new);
    this.hierarchy = hierarchy;
    mainCfg = scope.cfg();
  }

  /// CFG-specific dominator tree
  public CfgDominatorTree cfg(CFG cfg) {
    return tree(cfg);
  }

  /// Check if `dominator` dominates `dominee`.
  public boolean dominates(Instruction dominator, Instruction dominee) {
    return dominates(
        Objects.requireNonNull(dominator.parentBB()),
        dominator.indexInBB(),
        Objects.requireNonNull(dominee.parentBB()),
        dominee.indexInBB());
  }

  /// Check if `definition`'s definition site dominates `use`, across promise scopes.
  ///
  /// The definition must be attached to a CFG (for an [AssigneeOf], its statement must be in a
  /// block).
  public boolean dominates(Register definition, Instruction use) {
    var useBb = Objects.requireNonNull(use.parentBB());
    var useIdx = use.indexInBB();
    return switch (definition) {
      case FunctionParameter param -> {
        var owner = Objects.requireNonNull(param.owner());
        var entry = Objects.requireNonNull(owner.cfg()).entry();
        yield dominates(entry, -1, useBb, useIdx);
      }
      case BlockParameter phi -> dominates(Objects.requireNonNull(phi.owner()), -1, useBb, useIdx);
      case AssigneeOf assignee -> {
        var defStmt = assignee.statement();
        var defBb = Objects.requireNonNull(defStmt.parentBB());
        yield dominates(defBb, defStmt.indexInBB(), useBb, useIdx);
      }
    };
  }

  /// Check if `dominatorBb`/`dominatorIndex` dominates `domineeBb`/`domineeIndex`.
  public boolean dominates(BB dominatorBb, int dominatorIndex, BB domineeBb, int domineeIndex) {
    if (!contains(dominatorBb.owner())) {
      throw new IllegalArgumentException("Dominator BB not in scope");
    }
    if (!contains(domineeBb.owner())) {
      throw new IllegalArgumentException("Dominee BB not in scope");
    }

    while (true) {
      if (dominatorBb.owner() == domineeBb.owner()) {
        return tree(dominatorBb.owner())
            .dominates(dominatorBb, dominatorIndex, domineeBb, domineeIndex);
      }

      var domineeParent = hierarchy.parentPromise(domineeBb.owner());
      if (domineeParent == null) {
        return false;
      }

      domineeBb = Objects.requireNonNull(domineeParent.parentBB());
      domineeIndex = domineeParent.indexInBB();
    }
  }

  /// Check if `instruction` is guaranteed to run before the [Abstraction] returns: it dominates
  /// every exit of the body except the ones that [Deopt].
  ///
  /// Deopts are excluded because they don't return, they abandon this version and resume in GNU-R's
  /// bytecode interpreter. An instruction that only a deopt skips still runs on every path that
  /// this version itself completes, which is what callers of this care about.
  ///
  /// This is a stronger guarantee than dominating the instructions before an exit: a block that
  /// spins forever never reaches one, so the instruction may never run even though it dominates
  /// every exit. It's also weaker than
  /// [PostDominatorTree#postDominatesEntry], which counts deopts and divergence as ways of not
  /// running.
  ///
  /// An instruction in a promise never qualifies, since it doesn't dominate anything outside the
  /// promise (the promise may never be forced). Neither does any instruction when the body has no
  /// non-deopt exit at all, since then it never returns.
  ///
  /// @throws IllegalArgumentException If `instruction` isn't in this analysis' scope.
  public boolean dominatesNonDeoptExits(Instruction instruction) {
    var bb = Objects.requireNonNull(instruction.parentBB());
    if (!contains(bb.owner())) {
      throw new IllegalArgumentException("Instruction not in scope");
    }
    if (mainCfg == null) {
      return false;
    }

    var nonDeoptExits =
        mainCfg.exits().stream()
            .filter(exit -> !(exit.jump().expression() instanceof Deopt))
            .toList();
    return !nonDeoptExits.isEmpty()
        && nonDeoptExits.stream().allMatch(exit -> dominates(instruction, exit.jump()));
  }

  /// Check if `dominator` dominates `dominee`.
  public boolean dominates(BB dominator, BB dominee) {
    if (!contains(dominator.owner())) {
      throw new IllegalArgumentException("Dominator BB not in scope");
    }
    if (!contains(dominee.owner())) {
      throw new IllegalArgumentException("Dominee BB not in scope");
    }

    while (true) {
      if (dominator.owner() == dominee.owner()) {
        return tree(dominator.owner()).dominates(dominator, dominee);
      }

      var domineeParent = hierarchy.parentPromise(dominee.owner());
      if (domineeParent == null) {
        return false;
      }

      // This works even though we forget the parent's instruction index.
      dominee = Objects.requireNonNull(domineeParent.parentBB());
    }
  }
}
