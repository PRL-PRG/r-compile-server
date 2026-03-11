package org.prlprg.fir.opt.specialize;

import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.cfg.ActiveAssumeLoadFunAnalysis;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Noop;
import org.prlprg.fir.ir.assumption.AssumeLoadFun;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.variable.Register;

/// Optimization that removes [AssumeLoadFun] instructions that are dominated by an identical
/// [AssumeLoadFun] with no intervening reflective instruction or `Store`/`SuperStore` to the same
/// variable on any path between them.
public record ElideRedundantAssumeLoadFun() implements SpecializeOptimization {
  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes(ActiveAssumeLoadFunAnalysis.class);
  }

  @Override
  public Expression run(
      BB bb,
      int index,
      @Nullable Register assignee,
      Expression expression,
      Abstraction scope,
      AbstractionFeedback feedback,
      Analyses analyses,
      NonLocalSpecializations nonLocal,
      DeferredInsertions defer) {
    if (!(expression instanceof AssumeLoadFun a)) {
      return expression;
    }

    var analysis = analyses.get(bb.owner(), ActiveAssumeLoadFunAnalysis.class);
    if (analysis.isRedundant(bb, index, a.variable(), a.function())) {
      return new Noop();
    }

    return expression;
  }
}
