package org.prlprg.ir.cfg;

import javax.annotation.Nullable;
import org.prlprg.sexp.SEXP;

/** {@link Stmt} (IR instruction) which produces an {@link Env}. */
public interface EnvStmt extends RValueStmt, Env {
  @Override
  NodeId<? extends EnvStmt> id();

  @Override
  StmtData.Env_ data();
}

final class EnvStmtImpl extends SelfReturningStmtImpl<StmtData.Env_> implements EnvStmt {
  EnvStmtImpl(CFG cfg, String name, StmtData.Env_ data) {
    super(StmtData.Env_.class, cfg, name, data);
  }

  @Override
  public @Nullable Env parent() {
    return data().parent();
  }

  @Override
  public @Nullable SEXP sexp() {
    return null;
  }

  @Override
  public NodeId<? extends EnvStmt> id() {
    return uncheckedCastId();
  }
}
