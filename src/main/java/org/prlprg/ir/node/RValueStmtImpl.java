package org.prlprg.ir.node;

import com.google.common.collect.ImmutableList;
import com.pushtorefresh.javac_warning_annotation.Warning;
import org.prlprg.ir.BB;
import org.prlprg.ir.type.RType;

@Warning("Only exposed for BB.insert, use that instead.")
public final class RValueStmtImpl<D extends RValueStmt.Data> extends StmtImpl<D>
    implements RValueStmt<D> {
  private final ImmutableList<Node> returns = ImmutableList.of(this);

  // It gets initialized in `verify` which is called from the constructor
  @SuppressWarnings("NotNullFieldNotInitialized")
  private RType type;

  RValueStmtImpl(BB bb, D data) {
    super(bb, data);
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
    // different?
    //   or we will reconfigure all instructions during verification.
  }

  @Override
  public RType type() {
    return type;
  }
}
