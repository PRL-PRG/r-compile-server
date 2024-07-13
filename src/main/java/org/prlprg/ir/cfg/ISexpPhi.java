package org.prlprg.ir.cfg;

import java.util.Collection;
import java.util.HashSet;
import org.prlprg.ir.type.RType;

/**
 * {@link Phi} (<a
 * href="https://mapping-high-level-constructs-to-llvm-ir.readthedocs.io/en/latest/control-structures/ssa-phi.html">SSA
 * φ-node.</a>) of {@link ISexp}s.
 */
public interface ISexpPhi extends Phi<ISexp>, ISexp {
  @Override
  NodeId<ISexpPhi> id();
}

final class ISexpPhiImpl extends PhiImpl<ISexp> implements ISexpPhi {
  ISexpPhiImpl(CFG cfg, NodeId<? extends Phi<?>> id, Collection<? extends Input<?>> inputs) {
    super(ISexp.class, cfg, id, inputs);
  }

  @Override
  public RType type() {
    return type(new HashSet<>());
  }

  private RType type(HashSet<ISexpPhiImpl> encountered) {
    if (!encountered.add(this)) {
      return RType.NOTHING;
    }
    return inputNodes().stream()
        .map(node -> node instanceof ISexpPhiImpl r ? r.type(encountered) : node.type())
        .collect(RType.toUnion());
  }

  @Override
  public NodeId<ISexpPhi> id() {
    return uncheckedCastId();
  }
}
