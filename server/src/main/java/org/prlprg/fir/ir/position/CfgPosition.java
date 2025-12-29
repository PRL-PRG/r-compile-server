package org.prlprg.fir.ir.position;

import java.util.Objects;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.cfg.cursor.CFGCursor;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.instruction.Instruction;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// Location of an [Instruction] or phi group within a [CFG][org.prlprg.fir.ir.cfg.CFG].
public record CfgPosition(BB bb, int instructionIndex, @Nullable Instruction instruction)
    implements Comparable<CfgPosition> {
  /// Gets `instruction` from `bb` (not `null` unless it's a phi).
  public CfgPosition(BB bb, int instructionIndex) {
    this(
        bb,
        instructionIndex,
        instructionIndex == -1 ? null : bb.instructions().get(instructionIndex));
  }

  public CFG cfg() {
    return bb.owner();
  }

  /// @throws IllegalArgumentException If this is a phi group or [Jump].
  public void replaceWith(Expression replacement) {
    if (!(instruction instanceof Statement(var comments, var assignee, var _))) {
      throw new IllegalArgumentException("Can't replace a phi group or jump:\n" + this);
    }

    bb.replaceStatementAt(instructionIndex, new Statement(comments, assignee, replacement));
  }

  /// @throws IllegalArgumentException If this is a phi group, `replacement` is a [Statement]
  /// and this is a [Jump], or `replacement` is a [Jump] and this is a [Statement].
  public void replaceWith(Instruction replacement) {
    if (instruction == null) {
      throw new IllegalArgumentException("Can't replace a phi group:\n" + this);
    }

    switch (replacement) {
      case Statement _ when instruction instanceof Jump ->
          throw new IllegalArgumentException(
              "Can't replace a jump with a statement: " + replacement);
      case Jump _ when instruction instanceof Statement ->
          throw new IllegalArgumentException(
              "Can't replace a statement with a jump: " + replacement);
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
  public boolean equals(Object o) {
    if (!(o instanceof CfgPosition that)) {
      return false;
    }
    // Assuming neither is outdated, `instruction` entirely depends on `bb` and `instructionIndex`.
    return bb == that.bb && instructionIndex == that.instructionIndex;
  }

  @Override
  public int hashCode() {
    // Assuming neither is outdated, `instruction` entirely depends on `bb` and `instructionIndex`.
    return Objects.hash(bb, instructionIndex);
  }

  @Override
  public int compareTo(CfgPosition o) {
    // Assuming neither is outdated, `instruction` entirely depends on `bb` and `instructionIndex`.
    int bbCmp = bb.compareTo(o.bb);
    return bbCmp != 0 ? bbCmp : Integer.compare(instructionIndex, o.instructionIndex);
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
