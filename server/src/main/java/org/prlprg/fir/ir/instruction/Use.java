package org.prlprg.fir.ir.instruction;

import org.prlprg.fir.ir.argument.Argument;

/// A single occurrence where a [org.prlprg.fir.ir.variable.Register]'s value is used: the
/// [#index]-th argument slot of [#instruction].
///
/// A Register tracks the set of its [Use]s, so replacing every use of a register
/// ([org.prlprg.fir.ir.variable.Register#substUsesWith]) is a local operation, and def-use
/// information stays accurate as the
public record Use(Instruction instruction, int index) {
  /// The argument currently in this slot.
  public Argument argument() {
    return instruction.arg(index);
  }

  /// Replace the argument in this slot, updating def-use links on both the old and new argument.
  public void replaceWith(Argument argument) {
    instruction.setArg(index, argument);
  }
}
