package org.prlprg.ir.cfg;

import javax.annotation.Nullable;

/** A constant {@link org.prlprg.rshruntime.DeoptReason} node. */
public record ConstantDeoptReason(org.prlprg.rshruntime.DeoptReason deoptReason)
    implements DeoptReason {
  @Override
  public @Nullable CFG cfg() {
    return null;
  }

  @Override
  public @Nullable InstrOrPhi origin() {
    return null;
  }

  @Override
  public GlobalNodeId<? extends DeoptReason> id() {
    return new GlobalNodeIdImpl<>(this);
  }

  @Override
  public String toString() {
    return "{dr:" + deoptReason + "}";
  }
}
