package org.prlprg.ir.analysis;

import java.util.Collection;
import java.util.Collections;
import java.util.HashMap;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.ir.cfg.BB;
import org.prlprg.ir.cfg.CFG;
import org.prlprg.ir.cfg.Instr;
import org.prlprg.ir.cfg.InstrOrPhi;
import org.prlprg.ir.cfg.Node;
import org.prlprg.util.SmallSet;

public class DefUseAnalysis {
  private final CFG cfg;
  private final HashMap<Node, DuChain> duChains = new HashMap<>();

  private record DuChain(BB originBB, SmallSet<InstrOrPhi> uses) {
    DuChain(BB originBb) {
      this(originBb, new SmallSet<>());
    }
  }

  /**
   * Computes uses of local nodes in the given CFG.
   *
   * @see CFG#defUses()
   */
  DefUseAnalysis(CFG cfg) {
    this.cfg = cfg;

    // Populate du-chains
    for (var bb : cfg.iter()) {
      for (var instrOrPhi : bb) {
        for (var ret : instrOrPhi.returns()) {
          duChains.put(ret, new DuChain(bb));
        }
      }
    }
    for (var bb : cfg.iter()) {
      for (var instrOrPhi : bb) {
        for (var arg : instrOrPhi.args()) {
          if (arg.cfg() != null) {
            assert arg.cfg() == cfg;

            var duChain = duChains.get(arg);
            if (duChain == null) {
              throw new IllegalStateException(
                  "node used that isn't defined anywhere in the CFG: " + arg + " in " + cfg);
            }
            duChain.uses.add(instrOrPhi);
          }
        }
      }
    }
  }

  /** Does the given node have any uses? */
  public boolean isUsed(Node node) {
    requireDuChainFor(node);
    return !duChains.get(node).uses.isEmpty();
  }

  /** Does the given node have no uses? */
  public boolean isUnused(Node node) {
    requireDuChainFor(node);
    return duChains.get(node).uses.isEmpty();
  }

  /** The basic block containing the definition of the given node. */
  public @UnmodifiableView BB originBB(Node node) {
    requireDuChainFor(node);
    return duChains.get(node).originBB;
  }

  /**
   * (A view of) the uses of the given node.
   *
   * <p>Be careful, mutating the CFG won't update the analysis.
   */
  public @UnmodifiableView Collection<Node> uses(Node node) {
    requireDuChainFor(node);
    return Collections.unmodifiableCollection(duChains.get(node).uses);
  }

  /** Throw an exception if the DU-chain isn't computed for the given node. */
  private void requireDuChainFor(Node node) {
    if (!duChains.containsKey(node)) {
      if (node.cfg() == null) {
        throw new IllegalArgumentException(
            "node is global, so it doesn't have a DU-chain or origin block: " + node);
      } else if (node.cfg() != cfg) {
        throw new IllegalArgumentException("node not in CFG: " + node);
      } else if (node instanceof Instr i && !i.returns().contains(i)) {
        throw new IllegalStateException(
            "instruction doesn't return itself so this analysis doesn't record it: " + node);
      } else {
        throw new IllegalStateException("node created after DefUseAnalysis was run: " + node);
      }
    }
  }
}
