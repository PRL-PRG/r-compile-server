package org.prlprg.fir.opt.egraph;

import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Consume;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Noop;
import org.prlprg.fir.ir.expression.SubscriptWrite;
import org.prlprg.fir.ir.variable.Register;

/// Rewrite that removes [SubscriptWrite]s on used values, since those values are consumed after
/// being mutated.
///
/// e-graph equivalent of [org.prlprg.fir.opt.specialize.ElideUseSubscriptWrite].
public record ElideUseSubscriptWrite() implements RewriteOptimization {
  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes();
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
    if (!(expression instanceof SubscriptWrite(var target, _, _)) || !(target instanceof Consume)) {
      return expression;
    }

    return new Noop();
  }
}
