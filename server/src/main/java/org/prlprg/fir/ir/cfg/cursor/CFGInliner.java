package org.prlprg.fir.ir.cfg.cursor;

import static org.prlprg.fir.ir.cfg.cursor.CFGCopier.copyFrom;

import com.google.common.collect.ImmutableList;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.instruction.Goto;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.fir.ir.position.CfgPosition;

/// Utility for inlining CFGs at specific instruction positions.
public final class CFGInliner {
  /// Inlines a CFG at a particular instruction location.
  ///
  /// The instruction at that location is removed, the basic block containing that
  /// instruction is split, and the inlinee is copied/appended to the split predecessor,
  /// where each [Return] is replaced with a [Goto] to the split successor.
  ///
  /// If the original instruction has an assignee, it becomes a phi parameter of the split
  /// successor and stores the inlinee's return. Otherwise, the return is discarded.
  public static void inline(CFG inlinee, CfgPosition position) {
    var bb = position.bb();
    var instructionIndex = position.instructionIndex();
    var instruction = position.instruction();

    if (!(instruction instanceof Statement(var assignee, var _))) {
      throw new IllegalArgumentException("Can only inline at statement");
    }

    // Split, remove statement at inline position, and add phi parameter for assignee if needed.
    var successor = BBSplitter.splitNewSuccessor(bb, instructionIndex + 1);
    bb.removeStatementAt(instructionIndex);
    if (assignee != null) {
      successor.appendParameter(assignee);
    }

    // Inlining a CFG is the same as copying it into another, except the source entry block's
    // instructions are inserted at the inline position, not destination entry, and `Return`s
    // are replaced with `Goto`s to the split successor.
    copyFrom(
        bb,
        inlinee,
        value ->
            new Goto(
                new Target(
                    successor, assignee == null ? ImmutableList.of() : ImmutableList.of(value))));
  }

  private CFGInliner() {}
}
