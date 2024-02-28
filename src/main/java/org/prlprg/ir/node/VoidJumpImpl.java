package org.prlprg.ir.node;

import com.google.common.collect.ImmutableList;
import com.pushtorefresh.javac_warning_annotation.Warning;
import org.prlprg.ir.BB;

/** {@link Jump} which doesn't return anything. */
@Warning("Only exposed for BB.setJump, use that instead.")
public final class VoidJumpImpl<D extends Jumps.Void> extends JumpImpl<D> {
  VoidJumpImpl(BB bb, D data) {
    super(bb, data);
  }

  @Override
  public ImmutableList<Node> returns() {
    return ImmutableList.of();
  }
}
