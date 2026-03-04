package org.prlprg.fir.ir.instruction.iterator;

import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;

public final class Dfs extends Abstract {
  public Dfs(CFG cfg) {
    super(new org.prlprg.fir.ir.cfg.iterator.Dfs(cfg));
  }

  public Dfs(BB bb) {
    super(new org.prlprg.fir.ir.cfg.iterator.Dfs(bb));
  }

  public Dfs(BB bb, int instructionIndex) {
    super(new org.prlprg.fir.ir.cfg.iterator.Dfs(bb));

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
