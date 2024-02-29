package org.prlprg.ir.node;

import org.prlprg.ir.CFG;

/**
 * {@link Phi} (<a
 * href="https://mapping-high-level-constructs-to-llvm-ir.readthedocs.io/en/latest/control-structures/ssa-phi.html">SSA
 * φ-node.</a>) of {@link ForLoopInfo}s.
 */
public interface ForLoopInfoPhi extends Phi, ForLoopInfo {}

final class ForLoopInfoPhiImpl extends PhiImpl<ForLoopInfo> implements ForLoopInfoPhi {
  ForLoopInfoPhiImpl(CFG cfg) {
    super(ForLoopInfo.class, cfg);
  }
}
