package org.prlprg.ir.cfg;

/** A {@link BBId} and instruction index, which identifies an {@link Instr} locally within a
 * {@link CFG}.
 *
 * <p>"Locally within" = every instruction in a CFG has a different position, but the same position
 * in one CFG may refer to an entirely different instruction in another CFG.
  */
public record InstrPos(BBId bb, int index) implements InstrOrPhiId {}
