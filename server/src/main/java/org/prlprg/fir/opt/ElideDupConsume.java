package org.prlprg.fir.opt;

import org.jspecify.annotations.Nullable;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Consume;
import org.prlprg.fir.ir.expression.Dup;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Ownership;

public class ElideDupConsume implements AbstractionOptimization {
  @Override
  public boolean runWithoutRecording(
      @Nullable Function function, AbstractionFeedback feedback, Abstraction scope) {
    var cfg = scope.cfg();
    if (cfg == null) {
      return false;
    }

    var changed = false;
    for (var block : cfg.bbs()) {
      for (var inst : block.statements()) {
        // recognize `x = dup consume y` where `y: (T)o` or `y: (T)f`
        var expr = inst.expression();
        if (!(expr instanceof Dup)) {
          continue;
        }
        var arg = inst.arg(0);
        if (!(arg instanceof Consume)) {
          continue;
        }
        var reg = arg.variable();
        var regtype = scope.typeOf(reg);
        if (regtype.ownership() == Ownership.BORROWED || regtype.ownership() == Ownership.SHARED) {
          continue;
        }

        // for `x = dup consume y`, replace all instances of `x` with `y`
        var assignee = inst.assignee();
        assert assignee != null;
        assignee.substUsesWith(reg);
        changed = true;
      }
    }

    return changed;
  }
}
