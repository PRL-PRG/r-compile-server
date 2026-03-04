package org.prlprg.fir.ir.instruction.iterator;

import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.cfg.iterator.BbDfs;

public final class InstructionDfs extends Abstract {
  public InstructionDfs(CFG cfg) {
    super(new BbDfs(cfg));
  }

  public InstructionDfs(BB bb) {
    super(new BbDfs(bb));
  }

  public InstructionDfs(BB bb, int instructionIndex) {
    super(new BbDfs(bb));

    if (instructionIndex < 0 || instructionIndex >= bb.instructions().size()) {
      throw new IndexOutOfBoundsException(
          "Instruction index out of range: "
              + instructionIndex
              + " in "
              + bb.label()
              + "\n"
              + bb.owner());
    }
    this.instructionIndex = instructionIndex;
  }

  @Override
  protected boolean isAtEndOfBB() {
    return bb().statements().size() < instructionIndex;
  }

  @Override
  protected void startInstructionIndex() {
    instructionIndex = 0;
  }

  @Override
  protected void advanceInstructionIndex() {
    instructionIndex++;
  }
}
