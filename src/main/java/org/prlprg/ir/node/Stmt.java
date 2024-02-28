package org.prlprg.ir.node;

import org.prlprg.ir.BB;

/**
 * IR instruction which isn't the final instruction of a basic block and doesn't affect control
 * flow.
 */
public interface Stmt<D extends Stmt.Data> extends Instr<D> {
  // This has no fields that Instr/Jump don't

  sealed interface Data extends Instr.Data permits RValueStmt.Data, Stmts.Void {}
}

abstract class StmtImpl<D extends Stmt.Data> extends InstrImpl<D> implements Stmt<D> {
  StmtImpl(BB bb, D data) {
    super(bb, data);
  }
}
