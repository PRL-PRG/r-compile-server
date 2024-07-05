package org.prlprg.ir.cfg;

import java.util.Collection;
import java.util.HashSet;
import org.prlprg.ir.type.RType;

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
  RValuePhiImpl(CFG cfg, NodeId<? extends Phi<?>> id, Collection<? extends Input<?>> inputs) {
    super(RValue.class, cfg, id, inputs);
  }

  @Override
  public RType type() {
    return type(new HashSet<>());
  }

  private RType type(HashSet<RValuePhiImpl> encountered) {
    if (!encountered.add(this)) {
      return RTypes.NOTHING;
    }
    return RTypes.union(
        inputNodes().stream()
            .map(node -> node instanceof RValuePhiImpl r ? r.type(encountered) : node.type()));
  }

  @Override
  public NodeId<RValuePhi> id() {
    return uncheckedCastId();
  }
}
