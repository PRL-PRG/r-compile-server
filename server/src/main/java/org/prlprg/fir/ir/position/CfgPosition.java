package org.prlprg.fir.ir.position;

import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.cfg.cursor.CFGCursor;
import org.prlprg.fir.ir.instruction.Instruction;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// Location of an [Instruction] within a [CFG][org.prlprg.fir.ir.cfg.CFG].
public record CfgPosition(BB bb, int instructionIndex, Instruction instruction) {
  public CFG cfg() {
    return bb.owner();
  }

  /// @throws IllegalArgumentException If `replacement` is a [Statement] and this is a [Jump],
  /// or vice versa.
  public void replaceWith(Instruction replacement) {
    switch (replacement) {
      case Statement _ when instruction instanceof Jump ->
          throw new IllegalArgumentException(
              "Cannot replace a jump with a statement: " + replacement);
      case Jump _ when instruction instanceof Statement ->
          throw new IllegalArgumentException(
              "Cannot replace a statement with a jump: " + replacement);
      case Jump _ when instructionIndex != bb.statements().size() ->
          throw new IllegalArgumentException(
              "CFGPosition is outdated so can't be replaced: it's a jump at position "
                  + instructionIndex
                  + ", but BB doesn't have "
                  + instructionIndex
                  + " statements anymore");
      case Statement s -> bb.replaceStatementAt(instructionIndex, s);
      case Jump j -> bb.setJump(j);
    }
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
