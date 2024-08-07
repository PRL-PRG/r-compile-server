package org.prlprg.ir.cfg;

import java.util.Collection;

/**
 * {@link Phi} (<a
 * href="https://mapping-high-level-constructs-to-llvm-ir.readthedocs.io/en/latest/control-structures/ssa-phi.html">SSA
 * φ-node.</a>) of {@link FrameState}s.
 */
public interface FrameStatePhi extends Phi<FrameState>, FrameState {
  @Override
  NodeId<FrameStatePhi> id();
}

final class FrameStatePhiImpl extends PhiImpl<FrameState> implements FrameStatePhi {
  FrameStatePhiImpl(CFG cfg, NodeId<? extends Phi<?>> id, Collection<? extends Input<?>> inputs) {
    super(FrameState.class, cfg, id, inputs);
  }

  @Override
  public NodeId<FrameStatePhi> id() {
    return uncheckedCastId();
  }
}
