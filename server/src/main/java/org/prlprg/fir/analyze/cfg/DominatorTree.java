package org.prlprg.fir.analyze.cfg;

import java.util.Map;
import java.util.stream.Collectors;
import org.prlprg.fir.analyze.Analysis;
import org.prlprg.fir.analyze.AnalysisConstructor;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;

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

      var domineeParentPos = hierarchy.parent(domineeBb.owner());
      if (domineeParentPos == null) {
        return false;
      }

      domineeBb = domineeParentPos.bb();
      domineeIndex = domineeParentPos.instructionIndex();
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

      var domineeParentPos = hierarchy.parent(dominee.owner());
      if (domineeParentPos == null) {
        return false;
      }

      // This works even though we forget `domineeParentPos.instructionIndex`.
      dominee = domineeParentPos.bb();
    }
  }
}
