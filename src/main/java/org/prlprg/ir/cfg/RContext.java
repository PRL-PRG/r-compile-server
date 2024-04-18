package org.prlprg.ir.cfg;

import org.prlprg.ir.cfg.StmtData.PushContext;

/**
 * {@link Stmt} (IR instruction) which produces an R context ({@link org.prlprg.bc.Context
 * Context}).
 *
 * <p>IR node which corresponds to a runtime context. But there is only one, which is this
 * instruction type. If more need to be added (or there can be {@link Phi}s), we'll need to extract
 * a {@link Node} interface and rename this to {@code RContextStmt}.
 */
public interface RContext extends Stmt {
  @Override
  NodeId<? extends RContext> id();

  @Override
  PushContext data();
}

final class RContextImpl extends SelfReturningStmtImpl<PushContext> implements RContext {
  RContextImpl(CFG cfg, String name, PushContext data) {
    super(PushContext.class, cfg, name, data);
  }

  @Override
  public NodeId<? extends RContext> id() {
    return uncheckedCastId();
  }
}
