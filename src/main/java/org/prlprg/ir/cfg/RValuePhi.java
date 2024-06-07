package org.prlprg.ir.cfg;

import java.util.HashSet;
import java.util.SequencedCollection;
import javax.annotation.Nullable;
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
  RValuePhiImpl(
      CFG cfg, @Nullable NodeId<?> presetId, SequencedCollection<? extends Input<?>> inputs) {
    super(RValue.class, cfg, presetId, inputs);
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
