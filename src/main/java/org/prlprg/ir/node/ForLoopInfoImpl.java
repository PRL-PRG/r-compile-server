package org.prlprg.ir.node;

import org.prlprg.ir.BB;
import org.prlprg.ir.type.RType;
import org.prlprg.ir.type.RTypes;
import org.prlprg.sexp.SEXPType;

record ForLoopInfoImpl(@Override BB bb, @Override ForLoopJump<?> origin) implements RValue {
  @Override
  public RType type() {
    return RTypes.simple(SEXPType.RAW);
  }
}
