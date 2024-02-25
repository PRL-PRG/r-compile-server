package org.prlprg.ir;

import org.prlprg.ir.type.RType;
import org.prlprg.sexp.SEXP;

/**
 * IR node which corresponds to a runtime value ({@link SEXP}), including {@link Instr}s which
 * return a value.
 */
public interface RValue extends Node {
  /** The type of the value or return type of the instruction. */
  RType type();
}
