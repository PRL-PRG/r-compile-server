package org.prlprg.ir.cfg;

import java.util.SequencedCollection;
import org.jetbrains.annotations.Nullable;

/**
 * {@link Phi} (<a
 * href="https://mapping-high-level-constructs-to-llvm-ir.readthedocs.io/en/latest/control-structures/ssa-phi.html">SSA
 * φ-node.</a>) of {@link DeoptReason}s.
 */
public interface DeoptReasonPhi extends Phi<DeoptReason>, DeoptReason {
  @Override
  NodeId<DeoptReasonPhi> id();
}

final class DeoptReasonPhiImpl extends PhiImpl<DeoptReason> implements DeoptReasonPhi {
  DeoptReasonPhiImpl(
      CFG cfg, @Nullable String name, SequencedCollection<? extends Input<?>> inputs) {
    super(DeoptReason.class, cfg, name, inputs);
  }

  @Override
  public NodeId<DeoptReasonPhi> id() {
    return uncheckedCastId();
  }
}
