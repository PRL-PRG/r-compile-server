package org.prlprg.ir.cfg;

/** Location of an instruction i.e. its basic block and index (simple struct). */
public record InstrPosition(BB bb, int instrIdx) {
  public InstrPosition {
    if (instrIdx < 0 || instrIdx >= bb.numInstrs()) {
      throw new IllegalArgumentException(
          "Instruction index is out of range in its BB: BB = " + bb.id() + ", index = " + instrIdx);
    }
  }

  public Instr instr() {
    return bb.instr(instrIdx);
  }
}
