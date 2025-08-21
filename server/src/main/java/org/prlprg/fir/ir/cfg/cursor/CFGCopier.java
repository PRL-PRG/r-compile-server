package org.prlprg.fir.ir.cfg.cursor;

import java.util.Objects;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.instruction.Goto;
import org.prlprg.fir.ir.instruction.If;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.instruction.Unreachable;
import org.prlprg.fir.ir.phi.Target;

public class CFGCopier {
  /// Assuming `copy` is empty, makes it a shallow copy of `self`.
  public static void copyFrom(CFG copy, CFG self) {
    for (var bb : self.bbs()) {
      if (!bb.isEntry()) {
        copy.addBB(bb.label());
      }
    }

    for (var bb : self.bbs()) {
      var bbCopy = copy.bb(bb.label());
      assert bbCopy != null;
      bbCopy.appendParameters(bb.phiParameters());
      bbCopy.appendStatements(bb.statements());
      bbCopy.setJump(replacingTargetBBs(copy, bb.jump()));
    }
  }

  private static Jump replacingTargetBBs(CFG copy, Jump jump) {
    return switch (jump) {
      case Goto(var next) -> new Goto(replacingTargetBBs(copy, next));
      case If(var condition, var ifTrue, var ifFalse) ->
          new If(condition, replacingTargetBBs(copy, ifTrue), replacingTargetBBs(copy, ifFalse));
      case Return(var value) -> new Return(value);
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
