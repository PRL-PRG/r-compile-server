package org.prlprg.fir.opt.specialize;

import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.type.InferType;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Force;
import org.prlprg.fir.ir.instruction.Statement;

/// Optimization that converts maybe-[Force]s whose arguments are statically known to be
/// promises into definite-[Force]s, and statically known to be values into (no-op) assignments.
public record DefiniteForce() implements SpecializeOptimization {
  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes(InferType.class);
  }

  @Override
  public Result run(
      BB bb,
      int index,
      Statement statement,
      Abstraction scope,
      AbstractionFeedback feedback,
      Analyses analyses,
      NonLocalSpecializations nonLocal,
      DeferredInsertions defer) {
    if (!(statement.expression() instanceof Force(var isMaybe) && isMaybe)) {
      return Result.UNCHANGED;
    }

    var value = statement.arg(0);
    var argType = analyses.get(InferType.class).of(value);
    if (argType == null) {
      return Result.UNCHANGED;
    }

    return argType.isValue()
        ? new Result.ForwardResult(value)
        : argType.isPromise() ? new Result.SetExpression(new Force(false)) : Result.UNCHANGED;
  }
}
