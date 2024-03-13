package org.prlprg.ir;

import com.google.common.collect.ImmutableList;

/**
 * IR instruction which isn't the final instruction of a basic block and doesn't affect control
 * flow.
 *
 * @see Instr
 */
public non-sealed interface Stmt extends Instr {
  @Override
  Data<?> data();

  sealed interface Data<I extends Stmt> extends Instr.Data<I> permits RValueStmt.Data, Stmts.Void {}
}

abstract non-sealed class StmtImpl<D extends Stmt.Data<?>> extends InstrImpl<D> implements Stmt {
  StmtImpl(Class<D> dataClass, CFG cfg, D data) {
    super(dataClass, cfg, data);
  }
}

/** {@link Stmt} (IR instruction) which doesn't produce anything. */
final class VoidStmtImpl extends StmtImpl<Stmts.Void> {
  VoidStmtImpl(CFG cfg, Stmts.Void data) {
    super(Stmts.Void.class, cfg, data);
  }

  @Override
  public ImmutableList<Node> returns() {
    return ImmutableList.of();
  }
}
