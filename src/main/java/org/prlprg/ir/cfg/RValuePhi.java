package org.prlprg.ir.cfg;

import java.util.SequencedCollection;
import org.jetbrains.annotations.Nullable;
import org.prlprg.ir.type.RType;
import org.prlprg.ir.type.RTypes;

/**
 * {@link Phi} (<a
 * href="https://mapping-high-level-constructs-to-llvm-ir.readthedocs.io/en/latest/control-structures/ssa-phi.html">SSA
 * φ-node.</a>) of {@link RValue}s.
 */
public interface RValuePhi extends Phi<RValue>, RValue {
  @Override
  NodeId<RValuePhi> id();
}

final class RValuePhiImpl extends PhiImpl<RValue> implements RValuePhi {
  RValuePhiImpl(CFG cfg, @Nullable String name, SequencedCollection<? extends Input<?>> inputs) {
    super(RValue.class, cfg, name, inputs);
  }

  @Override
  public RType type() {
    return RTypes.union(inputNodes().stream().map(RValue::type));
  }

  @Override
  public NodeId<RValuePhi> id() {
    return uncheckedCastId();
  }
}
