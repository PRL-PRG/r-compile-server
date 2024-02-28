package org.prlprg.ir.node;

import com.google.common.collect.ImmutableList;
import com.pushtorefresh.javac_warning_annotation.Warning;
import org.prlprg.ir.BB;

@Warning("Only exposed for BB.setJump, use that instead.")
public final class ForLoopJumpImpl<D extends ForLoopJump.Data> extends JumpImpl<D>
    implements ForLoopJump<D> {
  private final RValue forLoopInfo;
  private final RValue forLoopVar;
  private final ImmutableList<Node> returns;

  ForLoopJumpImpl(BB bb, D data) {
    super(bb, data);
    forLoopInfo = new ForLoopInfoImpl(bb, this);
    forLoopVar = new ForLoopVarImpl(bb, this);
    returns = ImmutableList.of(forLoopInfo, forLoopVar);
  }

  @Override
  public RValue loopInfo() {
    return forLoopInfo;
  }

  @Override
  public RValue loopVar() {
    return forLoopVar;
  }

  @Override
  public ImmutableList<Node> returns() {
    return returns;
  }
}
