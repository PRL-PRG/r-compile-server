package org.prlprg.fir.opt;

import org.prlprg.fir.analyze.cfg.StrictnessAnalysis;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;

/// Marks parameters as strict if they are forced on all paths from entry to every `return`
/// or reflective operation (whichever comes first).
public record StrictnessOptimization() implements AbstractionOptimization {
  @Override
  public boolean run(AbstractionFeedback feedback, Abstraction scope) {
    var cfg = scope.cfg();
    if (cfg == null) {
      return false;
    }

    var strictParams = new StrictnessAnalysis(cfg).strictParameters();
    var params = scope.parameters();
    var changed = false;

    for (var param : params) {
      if (!param.strict() && strictParams.contains(param.variable())) {
        scope.setParameterStrict(param.variable());
        changed = true;
      }
    }

    return changed;
  }
}
