package org.prlprg.fir.ir.cfg.cursor;

import static org.prlprg.fir.ir.cfg.cursor.CFGCopier.copyTo;

import com.google.common.collect.ImmutableList;
import java.util.Map;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.BBRef;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.instruction.Goto;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.variable.BlockParameter;
import org.prlprg.fir.ir.variable.Register;

/// Utility for inlining CFGs at specific instruction positions.
public final class CFGInliner {
  /// Inlines a CFG *after* the instruction at `index` (e.g. pass `-1` to inline at start).
  ///
  /// The basic block containing that instruction is split, and the inlinee is copied/appended
  /// to the split predecessor. When the inlinee is copied, each [Return][
  /// org.prlprg.fir.ir.instruction.Return] is replaced with a [Goto] to the split successor.
  ///
  /// If `returnDestination` is non-null, it becomes a phi parameter of the split successor and
  /// stores the inlinee's return. Otherwise, the return is discarded.
  ///
  /// @return The split successor, which runs after the inlined code (is an actual successor of
  ///  `bb` only iff the inlined code returns).
  /// @throws IndexOutOfBoundsException if `index < -1 || index >= bb.statements.size()`
  public static BB inline(
      CFG inlinee, BB bb, int index, @Nullable BlockParameter returnDestination) {
    return inline(inlinee, bb, index, returnDestination, Map.of());
  }

  /// As [#inline(CFG, BB, int, BlockParameter)], but each register in `substitutions` is replaced
  /// with its argument as the code is copied in.
  ///
  /// This is how a call's arguments reach an inlined callee body: the callee's
  /// [parameters][org.prlprg.fir.ir.variable.FunctionParameter] have no counterpart in
  /// `bb`'s scope, so they're substituted rather than renamed. The substituted arguments must be
  /// valid in `bb`'s scope, and `inlinee` is left untouched.
  public static BB inline(
      CFG inlinee,
      BB bb,
      int index,
      @Nullable BlockParameter returnDestination,
      Map<Register, Argument> substitutions) {
    if (index < -1 || index >= bb.statements().size()) {
      throw new IndexOutOfBoundsException("Instruction index out of bounds");
    }

    // Split
    var successor = BBSplitter.splitNewSuccessor(bb, index + 1);

    // Add `returnDestination` as phi parameter if needed
    if (returnDestination != null) {
      successor.appendPhiParameter(returnDestination);
    }

    // Inlining a CFG is the same as copying it into another, except the source entry block's
    // instructions are inserted at the inline position, not destination entry, and `Return`s
    // are replaced with `Goto`s to the split successor.
    copyTo(
        bb,
        inlinee,
        substitutions,
        (comments, value) ->
            new Jump(
                comments,
                new Goto(new BBRef(successor)),
                returnDestination == null ? ImmutableList.of() : ImmutableList.of(value)));

    return successor;
  }

  private CFGInliner() {}
}
