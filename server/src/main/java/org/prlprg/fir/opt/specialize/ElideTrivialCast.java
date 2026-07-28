package org.prlprg.fir.opt.specialize;

import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.type.InferType;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Cast;
import org.prlprg.fir.ir.instruction.Statement;

/// Optimization that removes [Cast]s that statically succeed.
public record ElideTrivialCast() implements SpecializeOptimization {
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
    if (!(statement.expression() instanceof Cast(var type))) {
      return Result.UNCHANGED;
    }

    var value = statement.arg(0);
    var valueType = analyses.get(InferType.class).of(value);
    if (valueType == null || !valueType.isSubtypeOf(type)) {
      return Result.UNCHANGED;
    }

    return new Result.ForwardResult(value);
  }
}
