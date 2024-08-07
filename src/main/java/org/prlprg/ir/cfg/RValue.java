package org.prlprg.ir.cfg;

import javax.annotation.Nullable;
import org.prlprg.ir.type.RType;
import org.prlprg.ir.type.RTypes;
import org.prlprg.ir.type.lattice.Troolean;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPType;

/**
 * IR node which corresponds to a runtime value ({@link SEXP}), including {@link Instr}s which
 * return a value.
 */
public interface RValue extends Node {
  /** The type of the value or return type of the instruction. */
  RType type();

  /** Additional information if this is an environment. */
  default @Nullable EnvAux envAux() {
    return null;
  }

  @Override
  NodeId<? extends RValue> id();

  /** Is this guaranteed to be an environment? */
  default Troolean isEnv() {
    if (type().isSubsetOf(RTypes.simple(SEXPType.ENV))) {
      return Troolean.YES;
    } else if (RTypes.simple(SEXPType.ENV).isSubsetOf(type())) {
      return Troolean.MAYBE;
    } else {
      return Troolean.NO;
    }
  }

  /**
   * Is this value's type a subtype of the given type?
   *
   * @see RType#isSubsetOf(RType)
   */
  default boolean isInstanceOf(RType type) {
    return type().isSubsetOf(type);
  }
}
