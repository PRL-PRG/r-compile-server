package org.prlprg.ir.cfg;

import javax.annotation.Nullable;
import org.prlprg.ir.type.RType;
import org.prlprg.ir.type.lattice.Maybe;
import org.prlprg.sexp.SEXP;

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
  default Maybe isEnv() {
    if (type().isSubsetOf(RType.ANY_ENV)) {
      return Maybe.YES;
    } else if (RType.ANY_ENV.isSubsetOf(type())) {
      return Maybe.MAYBE;
    } else {
      return Maybe.NO;
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
