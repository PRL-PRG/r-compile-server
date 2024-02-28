package org.prlprg.ir.node;

import com.google.common.collect.ImmutableList;
import com.pushtorefresh.javac_warning_annotation.Warning;
import org.prlprg.ir.BB;

/** {@link Stmt} (IR instruction) which doesn't produce anything. */
@Warning("Only exposed for BB.insert, use that instead.")
public final class VoidStmtImpl<D extends Stmts.Void> extends StmtImpl<D> {
  VoidStmtImpl(BB bb, D data) {
    super(bb, data);
  }

  @Override
  public ImmutableList<Node> returns() {
    return ImmutableList.of();
  }
}
