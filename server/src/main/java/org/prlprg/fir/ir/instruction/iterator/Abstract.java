package org.prlprg.fir.ir.instruction.iterator;

import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.iterator.BBIterator;
import org.prlprg.fir.ir.instruction.Instruction;

/// Abstract iterator over a [CFG](org.prlprg.fir.ir.cfg.CFG)'s instructions.
///
/// It doesn't support [Iterator#remove()]. It supports concurrent modification, and only queues
/// elements when [#next()] is called.
abstract class Abstract implements InstructionIterator {
  private final BBIterator bbIterator;
  private @Nullable BB bb;
  protected int instructionIndex = -1;

  protected Abstract(BBIterator bbIterator) {
    this.bbIterator = bbIterator;
  }

  @Override
  public boolean hasNext() {
    return (bb != null && !isAtEndOfBB()) || bbIterator.hasNext();
  }

  @Override
  public Instruction next() {
    // Advance
    if (bb != null && isAtEndOfBB()) {
      bb = null;
      instructionIndex = -1;
    }
    if (bb == null) {
      bb = bbIterator.next();
    }
    if (instructionIndex == -1) {
      startInstructionIndex();
    } else {
      advanceInstructionIndex();
    }

    // Return current
    return bb.instructions().get(instructionIndex);
  }

  @Override
  public BB bb() {
    if (bb == null) {
      throw new IllegalStateException("`next()` has not been called yet");
    }
    return bb;
  }

  @Override
  public int instructionIndex() {
    if (bb == null) {
      throw new IllegalStateException("`next()` has not been called yet");
    }
    return instructionIndex;
  }

  public void prune() {
    bbIterator.prune();
    bb = null;
    instructionIndex = -1;
  }

  protected abstract boolean isAtEndOfBB();

  protected abstract void startInstructionIndex();

  protected abstract void advanceInstructionIndex();
}
