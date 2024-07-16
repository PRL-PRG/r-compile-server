package org.prlprg.ir.cfg;

import org.prlprg.ir.type.RType;

public final class ISexpParam extends ParamImpl implements ISexp {
  public RType type;

  public ISexpParam(CFG cfg, NodeId<? extends InstrOrPhi> id, RType type) {
    super(cfg, id);
    this.type = type;
  }

  @Override
  public RType type() {
    return type;
  }

  @Override
  public NodeId<? extends ISexpParam> id() {
    return uncheckedCastId();
  }
}
