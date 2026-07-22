package org.prlprg.fir.analyze.cfg;

import java.util.Map;
import java.util.Objects;
import java.util.stream.Collectors;
import org.prlprg.fir.analyze.Analysis;
import org.prlprg.fir.analyze.AnalysisConstructor;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
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
public final class DominatorTree implements Analysis {
  private final Map<CFG, CfgDominatorTree> cfgs;
  private final CfgHierarchy hierarchy;

  public DominatorTree(Abstraction scope) {
    this(scope, new CfgHierarchy(scope));
  }

  @AnalysisConstructor
  public DominatorTree(Abstraction scope, CfgHierarchy hierarchy) {
    cfgs = scope.streamCfgs().collect(Collectors.toMap(c -> c, CfgDominatorTree::new));
    this.hierarchy = hierarchy;
  }

  /// Check if `dominator` dominates `dominee`, across promise scopes.
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
    if (!cfgs.containsKey(dominatorBb.owner())) {
      throw new IllegalArgumentException("Dominator BB not in scope");
    }
    if (!cfgs.containsKey(domineeBb.owner())) {
      throw new IllegalArgumentException("Dominee BB not in scope");
    }

    while (true) {
      if (dominatorBb.owner() == domineeBb.owner()) {
        return cfgs.get(dominatorBb.owner())
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

  /// Check if `dominator` dominates `dominee`.
  public boolean dominates(BB dominator, BB dominee) {
    if (!cfgs.containsKey(dominator.owner())) {
      throw new IllegalArgumentException("Dominator BB not in scope");
    }
    if (!cfgs.containsKey(dominee.owner())) {
      throw new IllegalArgumentException("Dominee BB not in scope");
    }

    while (true) {
      if (dominator.owner() == dominee.owner()) {
        return cfgs.get(dominator.owner()).dominates(dominator, dominee);
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
