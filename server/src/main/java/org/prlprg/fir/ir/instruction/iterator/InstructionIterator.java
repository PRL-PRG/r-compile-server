package org.prlprg.fir.ir.instruction.iterator;

import java.util.Iterator;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.instruction.Instruction;

/// Abstract iterator over a [CFG](org.prlprg.fir.ir.cfg.CFG)'s instructions.
///
/// It doesn't support [Iterator#remove()]. It supports concurrent modification, and only queues
/// elements when [#next()] is called.
public interface InstructionIterator extends Iterator<Instruction> {
  /// BB of the last yielded instruction.
  ///
  /// @throws IllegalStateException if [#next()] has not been called yet
  BB bb();

  /// Index of the last yielded instruction.
  ///
  /// @throws IllegalStateException if [#next()] has not been called yet
  int instructionIndex();

  /// Don't iterate successors (or predecessors if this is reverse) of the previously-yielded
  /// instruction.
  ///
  /// Can't call [#bb()] or [#instructionIndex()] after this until after [#next()]
  void prune();
}
