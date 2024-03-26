package org.prlprg.ir.cfg;

import org.prlprg.ir.type.RType;
import org.prlprg.sexp.SEXP;

/**
 * IR node which corresponds to a runtime value ({@link SEXP}), including {@link Instr}s which
 * return a value.
 */
public interface RValue extends Node {
  /** The type of the value or return type of the instruction. */
  RType type();

  @Override
  NodeId<? extends RValue> id();

  /**
   * Is this value's type a subtype of the given type?
   *
   * @see RType#isSubsetOf(RType)
   */
  default boolean isInstanceOf(RType type) {
    return type().isSubsetOf(type);
  }
}
