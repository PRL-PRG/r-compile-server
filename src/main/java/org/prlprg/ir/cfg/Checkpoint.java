package org.prlprg.ir.cfg;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import org.prlprg.ir.cfg.JumpData.Checkpoint_;

/**
 * Branch ({@link Jump} IR instruction) which contains a set of assumptions. If all of those
 * assumptions pass, it will branch into the "fastpath" {@link BB}, otherwise it branches into a
 * basic block which deoptimizes.
 */
public interface Checkpoint extends Jump {
  @Override
  NodeId<? extends Checkpoint> id();

  @Override
  Checkpoint_ data();
}

final class CheckpointImpl extends JumpImpl<Checkpoint_> implements Checkpoint {
  private final List<Assumption> assumptions = new ArrayList<>();

  CheckpointImpl(CFG cfg, String name, Checkpoint_ data) {
    super(Checkpoint_.class, cfg, name, data);
  }

  @Override
  public void verify() throws InstrVerifyException {
    super.verify();

    if (assumptions.size() > data().numAssumptions()) {
      assumptions.subList(data().numAssumptions(), assumptions.size()).clear();
    }
    while (assumptions.size() < data().numAssumptions()) {
      assumptions.add(new AssumptionImpl(this, assumptions.size()));
    }
  }

  @Override
  public List<Node> returns() {
    return Collections.unmodifiableList(assumptions);
  }

  @Override
  public NodeId<? extends Checkpoint> id() {
    return uncheckedCastId();
  }
}
