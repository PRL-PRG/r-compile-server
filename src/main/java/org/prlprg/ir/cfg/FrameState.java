package org.prlprg.ir.cfg;

import org.prlprg.ir.cfg.StmtData.FrameState_;

/**
 * {@link Stmt} (IR instruction) which produces a frame-state (snapshot of the current stack top).
 *
 * <p>IR node which corresponds to a runtime context. But currently there is only one, which is this
 * instruction type. If more need to be added, we'll need to extract a {@link Node} interface and
 * rename this to {@code FrameStateStmt}.
 */
public interface FrameState extends Stmt {
  @Override
  NodeId<? extends FrameState> id();

  @Override
  FrameState_ data();
}

final class FrameStateImpl extends SelfReturningStmtImpl<FrameState_> implements FrameState {
  FrameStateImpl(CFG cfg, String name, FrameState_ data) {
    super(FrameState_.class, cfg, name, data);
  }

  @Override
  public NodeId<? extends FrameState> id() {
    return uncheckedCastId();
  }
}
