package org.prlprg.fir.opt;

import static org.prlprg.fir.ir.abstraction.AbstractionCopier.copy2;

import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.ir.module.Function;

/// If a version with the same signature as baseline doesn't already exist, copies it by copying
/// baseline
///
/// Said version, unlike baseline, can have speculations
///
/// Doesn't apply if the baseline is a stub
public record CopyBaseline() implements Optimization {
  @Override
  public boolean runWithoutRecording(ModuleFeedback feedback, Function function) {
    if (function.guess(function.baseline().signature()) != function.baseline()
        || function.baseline().isStub()) {
      return false;
    }

    copy2(feedback, function, function.baseline(), function.baseline().parameters());
    return true;
  }
}
