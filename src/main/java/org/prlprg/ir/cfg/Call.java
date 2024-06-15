package org.prlprg.ir.cfg;

import org.prlprg.ir.cfg.StmtData.Call_;

/**
 * {@linkplain RValueStmt Value-producing statement} (IR instruction) which calls a function.
 *
 * <p>IR node which calls a function. But currently these are only statements. If there are any
 * {@link Phi}s, we'll need to extract a {@link Node} interface and rename this to {@code CallStmt}.
 */
public interface Call extends RValueStmt {
  @Override
  NodeId<? extends Call> id();

  @Override
  Call_<?> data();
}

final class CallImpl extends AbstractRValueStmtImpl<Call_<?>> implements Call {
  // Idk how Java generics work, is there a potential issue from casting `Class<Call_>` to
  // `Class<Call_<?>>`?
  @SuppressWarnings("unchecked")
  CallImpl(CFG cfg, TokenToCreateNewInstr token, Call_<?> data) {
    super((Class<Call_<?>>) (Object) Call_.class, cfg, token, data);
  }

  @Override
  public NodeId<? extends Call> id() {
    return uncheckedCastId();
  }
}
