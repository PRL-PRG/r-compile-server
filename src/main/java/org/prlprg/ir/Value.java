package org.prlprg.ir;

/**
 * Intermediate representation node which corresponds to a runtime value, including {@link Instr}s
 * which return a value. This means that is has a {@link ValueType}.
 */
public interface Value extends Node {
  /** The type of the value or return type of the instruction. */
  ValueType type();
}
