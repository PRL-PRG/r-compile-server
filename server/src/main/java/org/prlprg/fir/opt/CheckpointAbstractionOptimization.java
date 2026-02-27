package org.prlprg.fir.opt;

import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.ir.module.Function;

interface CheckpointAbstractionOptimization extends AbstractionOptimization {
  @Override
  default boolean run(ModuleFeedback feedback, Function function) {
    // Don't run on the baseline, because its checkpoints are used by optimized versions.
    var changed = false;
    for (var version : function.versions()) {
      if (version == function.baseline()) {
        continue;
      }
      changed |= run(feedback.get(version), version);
    }
    return changed;
  }
}
