package org.prlprg.ir.cfg;

import org.prlprg.ir.cfg.StmtData.FrameState;

/**
 * {@link Stmt} (IR instruction) which produces a {@linkplain org.prlprg.ir.cfg.FrameState
 * frame-state} (snapshot of the current stack top).
 */
public interface FrameStateStmt extends Stmt, org.prlprg.ir.cfg.FrameState {
  @Override
  NodeId<? extends FrameStateStmt> id();

  @Override
  FrameState data();
}

final class FrameStateStmtImpl extends SelfReturningStmtImpl<FrameState> implements FrameStateStmt {
  FrameStateStmtImpl(CFG cfg, String name, FrameState data) {
    super(FrameState.class, cfg, name, data);
  }

  @Override
  public NodeId<? extends FrameStateStmt> id() {
    return uncheckedCastId();
  }
}
