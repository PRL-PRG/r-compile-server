package org.prlprg.ir.node;

import com.google.common.collect.ImmutableList;
import org.prlprg.ir.CFG;

/**
 * IR instruction which isn't the final instruction of a basic block and doesn't affect control
 * flow.
 */
public interface Stmt extends Instr {
  @Override
  Data<?> data();

  sealed interface Data<I extends Stmt> extends Instr.Data<I> permits RValueStmt.Data, Stmts.Void {}
}

abstract class StmtImpl<D extends Stmt.Data<?>> extends InstrImpl<D> implements Stmt {
  StmtImpl(CFG cfg, D data) {
    super(cfg, data);
  }
}

/** {@link Stmt} (IR instruction) which doesn't produce anything. */
final class VoidStmtImpl extends StmtImpl<Stmts.Void> {
  VoidStmtImpl(CFG cfg, Stmts.Void data) {
    super(cfg, data);
  }

  @Override
  public ImmutableList<Node> returns() {
    return ImmutableList.of();
  }
}
