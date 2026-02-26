package org.prlprg.fir.opt;

import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.module.Function;

/// An optimization that runs on an [Abstraction].
public interface AbstractionOptimization extends Optimization {
  @Override
  default boolean run(ModuleFeedback feedback, Function function) {
    var changed = false;
    for (var version : function.versions()) {
      changed |= run(feedback.get(version), version);
    }
    return changed;
  }

  /// Returns `true` if it made progress.
  boolean run(AbstractionFeedback feedback, Abstraction abstraction);
}
