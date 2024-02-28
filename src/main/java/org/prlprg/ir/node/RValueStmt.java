package org.prlprg.ir.node;

import org.prlprg.ir.type.RType;

/** {@link Stmt} (IR instruction) which produces an {@link RValue}. */
public interface RValueStmt<D extends RValueStmt.Data> extends Instr<D>, RValue {
  sealed interface Data extends Stmt.Data permits Stmts.RValue_ {
    /** Compute the type from arguments. */
    RType computeType();
  }
}
