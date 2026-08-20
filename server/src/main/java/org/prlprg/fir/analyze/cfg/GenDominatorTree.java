package org.prlprg.fir.analyze.cfg;

import java.util.Map;
import java.util.function.Function;
import java.util.stream.Collectors;
import org.prlprg.fir.analyze.Analysis;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.CFG;

/// A [GenCfgDominatorTree] for every [CFG] in an [Abstraction], its promises' included, and the
/// lookup that [DominatorTree] and [PostDominatorTree] answer cross-[CFG] queries with.
///
/// The trees themselves don't know about promises: relating instructions in different [CFG]s is
/// each subclass' job, and they answer it differently, because a promise runs when it's forced,
/// which is somewhere after its definition, but may also be never.
public abstract sealed class GenDominatorTree<T extends GenCfgDominatorTree> implements Analysis
    permits DominatorTree, PostDominatorTree {
  private final Map<CFG, T> cfgs;

  protected GenDominatorTree(Abstraction scope, Function<CFG, T> newCfgTree) {
    cfgs = scope.streamCfgs().collect(Collectors.toMap(c -> c, newCfgTree));
  }

  /// The tree for `cfg`.
  ///
  /// @throws IllegalArgumentException If `cfg` isn't in this analysis' scope.
  protected final T tree(CFG cfg) {
    var tree = cfgs.get(cfg);
    if (tree == null) {
      throw new IllegalArgumentException("CFG not in scope");
    }
    return tree;
  }

  /// Whether `cfg` is in this analysis' scope, so [#tree] returns a tree for it.
  protected final boolean contains(CFG cfg) {
    return cfgs.containsKey(cfg);
  }
}
