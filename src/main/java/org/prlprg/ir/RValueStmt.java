package org.prlprg.ir;

import com.google.common.collect.ImmutableList;
import org.prlprg.ir.type.RType;

/** {@link Stmt} (IR instruction) which produces an {@link RValue}. */
public interface RValueStmt extends Stmt, RValue {
  @Override
  NodeId<? extends RValueStmt> id();

  @Override
  Data data();

  sealed interface Data extends Stmt.Data<RValueStmt> permits Stmts.RValue_ {
    /** Compute the type from arguments. */
    RType computeType();
  }
}

final class RValueStmtImpl extends StmtImpl<Stmts.RValue_> implements RValueStmt {
  private final ImmutableList<Node> returns = ImmutableList.of(this);

  // It gets initialized in `verify` which is called from the constructor
  @SuppressWarnings("NotNullFieldNotInitialized")
  private RType type;

  RValueStmtImpl(CFG cfg, String name, Stmts.RValue_ data) {
    super(Stmts.RValue_.class, cfg, name, data);
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

  @Override
  public NodeId<? extends RValueStmt> id() {
    return uncheckedCastId();
  }
}
