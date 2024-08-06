package org.prlprg.ir.cfg;

import javax.annotation.Nonnull;

/**
 * {@link RValue} produced by an instruction which isn't a value itself.
 *
 * @see AuxiliaryNodeIdImpl
 */
abstract class AuxiliaryRValue implements RValue {
  private final InstrOrPhi origin;
  private final NodeId<? extends RValue> id;

  AuxiliaryRValue(InstrOrPhi origin, int auxiliaryIndex) {
    this.origin = origin;
    id = new AuxiliaryNodeIdImpl<>(origin.id(), auxiliaryIndex);
  }

  @Override
  public NodeId<? extends RValue> id() {
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
