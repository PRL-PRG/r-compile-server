package org.prlprg.fir.opt;

import java.util.List;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.Deopt;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Effects;

/// Replaces promises that have been created at least [#threshold] times and never forced with
/// an empty body that immediately deoptimizes. The promise's effect annotation is set to
/// [Effects#NONE].
public record ElideUnforcedPromise(int threshold) implements AbstractionOptimization {
  @Override
  public boolean runWithoutRecording(
      @Nullable Function function, AbstractionFeedback feedback, Abstraction abstraction) {
    return abstraction.cfg() != null && run(feedback, abstraction, abstraction.cfg());
  }

  private boolean run(AbstractionFeedback feedback, Abstraction scope, CFG cfg) {
    var changed = false;
    for (var bb : cfg.bbs()) {
      for (int i = 0; i < bb.statements().size(); i++) {
        var stmt = bb.statements().get(i);
        var assignee = stmt.assignee();
        if (!(stmt.expression() instanceof Promise(var valueType, var effects, var code))) {
          continue;
        }

        if (assignee != null
            && (feedback.times(assignee) >= threshold && feedback.forceCount(assignee) == 0)) {
          // Promise was never forced, so replace with immedidate deopt to elide effects
          if (effects == Effects.NONE
              && code.bbs().size() == 1
              && code.entry().statements().isEmpty()
              && code.entry().jump().equals(new Deopt(0, List.of()))) {
            // It's already elided
            continue;
          }

          var newCode = new CFG(scope);
          newCode.entry().setJump(new Deopt(0, List.of()));
          var newPromise = new Promise(valueType, Effects.NONE, newCode);
          bb.replaceStatementAt(i, new Statement(stmt.comments(), stmt.assignee(), newPromise));
          changed = true;
          continue;
        }

        // Recurse into promise body for nested promises
        changed |= run(feedback, scope, code);
      }
    }
    return changed;
  }
}
