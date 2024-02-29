package org.prlprg.ir.node;

import com.google.common.collect.ImmutableList;
import org.prlprg.ir.CFG;
import org.prlprg.ir.type.RType;

/** {@link Stmt} (IR instruction) which produces an {@link RValue}. */
public interface RValueStmt extends Stmt, RValue {
  @Override
  Data data();

  sealed interface Data extends Stmt.Data<RValueStmt> permits Stmts.RValue_ {
    /** Compute the type from arguments. */
    RType computeType();

    @Override
    default RValueStmt make(CFG cfg) {
      return new RValueStmtImpl(cfg, this);
    }
  }
}

final class RValueStmtImpl extends StmtImpl<RValueStmt.Data> implements RValueStmt {
  private final ImmutableList<Node> returns = ImmutableList.of(this);

  // It gets initialized in `verify` which is called from the constructor
  @SuppressWarnings("NotNullFieldNotInitialized")
  private RType type;

  RValueStmtImpl(CFG cfg, RValueStmt.Data data) {
    super(cfg, data);
  }

  @Override
  public ImmutableList<Node> returns() {
    return returns;
  }

  @Override
  public void verify() {
    super.verify();
    type = data().computeType();
    // TODO: perhaps trigger verify of all instructions containing this one if `type` is now
    //  different? or we will reconfigure all instructions during verification.
  }

  @Override
  public RType type() {
    return type;
  }
}
