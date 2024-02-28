package org.prlprg.ir.node;

import java.util.Objects;
import org.prlprg.ir.BB;
import org.prlprg.ir.type.RType;
import org.prlprg.ir.type.RTypes;
import org.prlprg.ir.type.Troolean;
import org.prlprg.sexp.SEXPs;

record ForLoopVarImpl(@Override BB bb, @Override ForLoopJump<?> origin) implements RValue {
  @Override
  public RType type() {
    var seqType = origin().data().seq().type().base();
    if (seqType == null) {
      return RTypes.NOTHING;
    }
    return switch (seqType.isPrimitiveVector()) {
      case Troolean.NO -> RTypes.of(SEXPs.NULL);
      case Troolean.YES -> RTypes.simple(Objects.requireNonNull(seqType.sexpType()));
      case Troolean.MAYBE -> RTypes.SIMPLE_ANY;
    };
  }
}
