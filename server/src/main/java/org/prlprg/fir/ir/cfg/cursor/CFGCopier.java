package org.prlprg.fir.ir.cfg.cursor;

import java.util.HashMap;
import java.util.Map;
import java.util.Objects;
import java.util.function.BiFunction;
import org.prlprg.fir.ir.Comments;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.util.Lists;

public final class CFGCopier {
  /// Assuming `dst` is empty, makes it a copy of `inner` (except [CFG#scope()]).
  public static void copyTo(CFG dst, CFG inner) {
    copyTo(dst.entry(), inner, Return::new);
  }

  /// Appends instructions from `inner`'s entry block into `dstBb`, and copies all other blocks.
  static void copyTo(BB dstBb, CFG inner, BiFunction<Comments, Argument, Jump> replaceReturn) {
    var dst = dstBb.owner();

    var substitutedBbLabels = new HashMap<BB, String>();
    for (var bb : inner.bbs()) {
      if (!bb.isEntry()) {
        // Use BB's existing label if possible, otherwise create a new one.
        // In that case, we must also substitute occurrences in `inner`'s jumps.
        var bbLabel = bb.label();
        if (dst.bb(bbLabel) != null) {
          bbLabel = dst.nextLabel();
          substitutedBbLabels.put(bb, bbLabel);
        }

        // Add BB
        dst.addBB(bbLabel);
      }
    }

    for (var bb : inner.bbs()) {
      var bbLabel = substitutedBbLabels.getOrDefault(bb, bb.label());

      var bbCopy = bb.isEntry() ? dstBb : dst.bb(bbLabel);
      assert bbCopy != null;
      bbCopy.appendPhiParameters(bb.phiParameters());
      bbCopy.appendStatements(Lists.mapLazy(bb.statements(), s -> copy(s, dst.scope())));
      bbCopy.setJump(
          bb.jump() instanceof Return(var comments, var value)
              ? replaceReturn.apply(comments, value)
              : substLabels(dst, bb.jump(), substitutedBbLabels));
    }
  }

  /// If the statement contains a [Promise], copies the promise's [CFG] and ensures it's in
  /// `newScope`.
  ///
  /// Otherwise, returns the statement as-is (non-promise statement are immutable so they can be
  /// reused, but promises contain mutable CFGs so they can't).
  public static Statement copy(Statement stmt, Abstraction newScope) {
    if (!(stmt.expression() instanceof Promise(var innerType, var effects, var code))) {
      return stmt;
    }

    var newCode = new CFG(newScope);
    copyTo(newCode, code);
    return new Statement(
        stmt.comments().copy(), stmt.assignee(), new Promise(innerType, effects, newCode));
  }

  private static Jump substLabels(CFG dst, Jump jump, Map<BB, String> substitutedBbLabels) {
    return jump.mapTargets(t -> substLabels(dst, t, substitutedBbLabels));
  }

  private static Target substLabels(CFG dst, Target target, Map<BB, String> substitutedBbLabels) {
    var substitutedLabel = substitutedBbLabels.getOrDefault(target.bb(), target.bb().label());
    var substitutedBb =
        Objects.requireNonNull(
            dst.bb(substitutedLabel),
            "In CFGCopier#copy, encountered BB with target outside `self`");
    return new Target(substitutedBb, target.phiArgs());
  }

  private CFGCopier() {}
}
