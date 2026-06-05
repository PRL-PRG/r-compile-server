package org.prlprg.fir.opt.egraph;

import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.type.InferType;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Aea;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Force;
import org.prlprg.fir.ir.variable.Register;

/// Rewrite that converts maybe-[Force]s whose arguments are statically known to be promises into
/// definite-[Force]s, and statically known to be values into (no-op) assignments.
///
/// e-graph equivalent of [org.prlprg.fir.opt.specialize.DefiniteForce].
public record DefiniteForce() implements RewriteOptimization {
  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes(InferType.class);
  }

  @Override
  public Expression rewrite(
      BB bb,
      int index,
      @Nullable Register assignee,
      Expression expression,
      Abstraction scope,
      AbstractionFeedback feedback,
      Analyses analyses,
      DeferredInsertions defer) {
    if (!(expression instanceof Force(var isMaybe, var value) && isMaybe)) {
      return expression;
    }

    var argType = analyses.get(InferType.class).of(value);
    if (argType == null) {
      return expression;
    }

    return argType.isValue()
        ? new Aea(value)
        : argType.isPromise() ? new Force(true, value) : expression;
  }
}
