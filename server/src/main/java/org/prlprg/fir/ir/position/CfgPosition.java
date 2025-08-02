package org.prlprg.fir.ir.position;

import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.cfg.cursor.CFGCursor;
import org.prlprg.fir.ir.instruction.Instruction;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// Location of an [Instruction] within a [CFG][org.prlprg.fir.ir.cfg.CFG].
public record CfgPosition(BB bb, int instructionIndex, Instruction instruction) {
  public CFG cfg() {
    return bb.owner();
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.print(new CFGCursor(bb, instructionIndex));
  }
}
