package org.prlprg.fir.opt;

import java.util.List;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.cfg.Liveness;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.*;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.variable.Register;

public final class MarkConsume implements AbstractionOptimization {
  @Override
  public boolean runWithoutRecording(
      @Nullable Function function, AbstractionFeedback feedback, Abstraction scope) {
    var cfg = scope.cfg();
    if (cfg == null) {
      return false;
    }

    boolean changed = false;

    var liveness = new Liveness(cfg);

    for (var block : cfg.bbs()) {
      int i = 0;
      for (var inst : block.instructions()) {
        int arg_i = 0;
        for (var arg : inst.args()) {
          var reg = arg.variable();
          if (reg == null) {
            continue;
          }

          // only mark consume if this is used one time
          if (liveness.isKilled(reg, block, i) && arg_used_once(inst.args(), reg)) {
            inst.setArg(arg_i, new Consume(reg));
            changed = true;
          }
          arg_i++;
        }
        i++;
      }
    }

    return changed;
  }

  private boolean arg_used_once(List<Argument> args, Register reg) {
    boolean used = false;
    for (var a : args) {
      var r = a.variable();
      if (r == null) {
        continue;
      }
      if (r.equals(reg)) {
        if (used) {
          return false;
        } else {
          used = true;
        }
      }
    }
    return used;
  }
}
