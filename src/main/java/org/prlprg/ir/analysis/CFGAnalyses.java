package org.prlprg.ir.analysis;

import org.prlprg.ir.cfg.CFG;

public interface CFGAnalyses {
  // These both get overridden in `CFG`, but providing a default implementation here lets us use
  // `DomTree::new` and `DefUseAnalysis::new` without exposing them outside the package, so that
  // outside code has to use `CFG#domTree()` and `CFG#defUses()`, which both cache.
  /**
   * Gets or computes a dominator tree. It lets you query for which nodes are guaranteed to be run
   * before other nodes.
   *
   * <p>The returned analysis is cached until the CFG is mutated. Be careful, because mutating the
   * CFG won't update the already-returned analysis (meaning it may have inaccuracies), and will
   * recompute the analysis if the method is called again.
   */
  default DomTree domTree() {
    return new DomTree((CFG) this);
  }

  /**
   * Get or compute uses (<a href="https://en.wikipedia.org/wiki/Use-define_chain">DU-chain</a>) of
   * every local node.
   *
   * <p>The returned analysis is cached until the CFG is mutated. Be careful, because mutating the
   * CFG won't update the already-returned analysis (meaning it may have inaccuracies), and will
   * recompute the analysis if the method is called again.
   */
  default DefUses defUses() {
    return new DefUses((CFG) this);
  }

  /** Get or find loops in the control-flow graph. */
  default Loops loops() {
    return new Loops((CFG) this);
  }

  /** Get or compute the context stack at every position in the control-flow graph. */
  default Contexts contexts() {
    return new Contexts((CFG) this);
  }
}
