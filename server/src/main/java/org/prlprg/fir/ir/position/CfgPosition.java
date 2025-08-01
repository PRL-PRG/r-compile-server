package org.prlprg.fir.ir.position;

import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.instruction.Instruction;

/// Location of an [Instruction] within a [CFG][org.prlprg.fir.ir.cfg.CFG].
public record CfgPosition(BB bb, int instructionIndex, Instruction instruction) {
  public CFG cfg() {
    return bb.owner();
  }
}
