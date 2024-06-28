package org.prlprg.ir.cfg;

/**
 * Auxillary {@link Node} representing a boolean which must be true in a {@link Checkpoint} for it
 * to not branch into a deoptimization {@link BB}.
 */
public sealed interface Assumption extends LocalNode permits AssumptionImpl {
  Checkpoint checkpoint();

  @Override
  NodeId<? extends Assumption> id();
}

record AssumptionImpl(@Override Checkpoint checkpoint, int index) implements Assumption {
  @Override
  public CFG cfg() {
    return checkpoint.cfg();
  }

  @Override
  public InstrOrPhi origin() {
    return checkpoint;
  }

  @Override
  public NodeId<? extends Assumption> id() {
    return new AuxiliaryNodeIdImpl<>(InstrOrPhiIdImpl.cast(checkpoint.id()), index);
  }
}
