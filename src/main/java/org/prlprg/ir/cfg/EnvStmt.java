package org.prlprg.ir.cfg;

import javax.annotation.Nullable;
import org.prlprg.sexp.SEXP;

/** {@link Stmt} (IR instruction) which produces an {@link Env}. */
public interface EnvStmt extends Stmt, Env {
  @Override
  NodeId<? extends EnvStmt> id();

  @Override
  StmtData.MkEnv data();
}

final class EnvStmtImpl extends SelfReturningStmtImpl<StmtData.MkEnv> implements EnvStmt {
  EnvStmtImpl(CFG cfg, String name, StmtData.MkEnv data) {
    super(StmtData.MkEnv.class, cfg, name, data);
  }

  @Override
  public Env parent() {
    return data().lexicalEnv();
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
