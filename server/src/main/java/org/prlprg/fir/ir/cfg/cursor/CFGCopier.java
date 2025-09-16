package org.prlprg.fir.ir.cfg.cursor;

import java.util.Objects;
import java.util.function.Function;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.instruction.Checkpoint;
import org.prlprg.fir.ir.instruction.Deopt;
import org.prlprg.fir.ir.instruction.Goto;
import org.prlprg.fir.ir.instruction.If;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.instruction.Unreachable;
import org.prlprg.fir.ir.phi.Target;

public class CFGCopier {
  /// Assuming `target` is empty, makes it a copy of `inner`.
  public static void copyFrom(CFG target, CFG inner) {
    copyFrom(target.entry(), inner, Return::new);
  }

  /// Appends instructions from `inner`'s entry block into `target`, and copies all other blocks.
  static void copyFrom(BB targetBb, CFG inner, Function<Argument, Jump> replaceReturn) {
    var target = targetBb.owner();

    for (var bb : inner.bbs()) {
      if (!bb.isEntry()) {
        target.addBB(bb.label());
      }
    }

    for (var bb : inner.bbs()) {
      var bbCopy = bb.isEntry() ? targetBb : target.bb(bb.label());
      assert bbCopy != null;
      bbCopy.appendParameters(bb.phiParameters());
      bbCopy.appendStatements(bb.statements());
      bbCopy.setJump(replacingTargetBBs(target, bb.jump(), replaceReturn));
    }
  }

  private static Jump replacingTargetBBs(
      CFG copy, Jump jump, Function<Argument, Jump> replaceReturn) {
    return switch (jump) {
      case Goto(var next) -> new Goto(replacingTargetBBs(copy, next));
      case If(var condition, var ifTrue, var ifFalse) ->
          new If(condition, replacingTargetBBs(copy, ifTrue), replacingTargetBBs(copy, ifFalse));
      case Checkpoint(var success, var deopt) ->
          new Checkpoint(replacingTargetBBs(copy, success), replacingTargetBBs(copy, deopt));
      case Return(var value) -> replaceReturn.apply(value);
      case Deopt(var pc, var stack) -> new Deopt(pc, stack);
      case Unreachable() -> new Unreachable();
    };
  }

  private static Target replacingTargetBBs(CFG copy, Target target) {
    return new Target(
        Objects.requireNonNull(
            copy.bb(target.bb().label()),
            "In CFGCopier#copy, encountered BB with target outside `self`"),
        target.phiArgs());
  }

  private CFGCopier() {}
}
