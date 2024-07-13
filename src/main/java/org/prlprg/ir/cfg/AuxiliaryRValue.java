package org.prlprg.ir.cfg;

import javax.annotation.Nonnull;

/**
 * {@link ISexp} produced by an instruction which isn't a value itself.
 *
 * @see AuxiliaryNodeIdImpl
 */
abstract class AuxiliaryISexp implements ISexp {
  private final InstrOrPhi origin;
  private final NodeId<? extends ISexp> id;

  AuxiliaryISexp(InstrOrPhi origin, int auxiliaryIndex) {
    this.origin = origin;
    id = new AuxiliaryNodeIdImpl<>(origin.id(), auxiliaryIndex);
  }

  @Override
  public NodeId<? extends ISexp> id() {
    return id;
  }

  @Override
  public CFG cfg() {
    return origin.cfg();
  }

  @Override
  public @Nonnull InstrOrPhi origin() {
    return origin;
  }
}
