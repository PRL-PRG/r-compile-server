package org.prlprg.ir.node;

import org.prlprg.ir.CFG;
import org.prlprg.ir.type.RType;
import org.prlprg.ir.type.RTypes;

/**
 * {@link Phi} (<a
 * href="https://mapping-high-level-constructs-to-llvm-ir.readthedocs.io/en/latest/control-structures/ssa-phi.html">SSA
 * φ-node.</a>) of {@link RValue}s.
 */
public interface RValuePhi extends Phi, RValue {}

final class RValuePhiImpl extends PhiImpl<RValue> implements RValuePhi {
  RValuePhiImpl(CFG cfg) {
    super(RValue.class, cfg);
  }

  @Override
  public RType type() {
    return RTypes.union(inputNodes().map(RValue::type));
  }
}
