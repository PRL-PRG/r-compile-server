package org.prlprg.fir.opt;

import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.variable.FunctionParameter;

/// If a version with the same signature as baseline doesn't already exist, copies it by copying
/// baseline
///
/// Said version, unlike baseline, can have speculations
///
/// Doesn't apply if the baseline is a stub
public final class CopyBaseline extends Optimization {
  @Override
  public boolean runWithoutRecording(
      Optimization topLevel, ModuleFeedback feedback, Function function) {
    if (function.guess(function.baseline().signature()) != function.baseline()
        || function.baseline().isStub()) {
      return false;
    }

    LazyCopy.create(
        topLevel,
        feedback,
        function,
        function.baseline(),
        FunctionParameter.copyAll(function.baseline().parameters()),
        LazyCopy.Adapter.NONE);
    return true;
  }
}
