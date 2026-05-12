package org.prlprg.fir.opt.specialize;

import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.cfg.ActiveAssumeLoadAnalysis;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.assumption.AssumeLoadFun;
import org.prlprg.fir.ir.assumption.AssumeLoadVar;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Noop;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Register;

/// Optimization that removes [AssumeLoadFun]/[AssumeLoadVar] instructions that are dominated by an
/// identical assumption with no intervening reflective instruction or `Store`/`SuperStore` to the
/// same variable on any path between them.
public record ElideRedundantAssumeLoad() implements SpecializeOptimization {
  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes(ActiveAssumeLoadAnalysis.class);
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
    if (!(expression instanceof Assume(var assumption))) {
      return expression;
    }

    NamedVariable variable;
    Object value;
    switch (assumption) {
      case AssumeLoadFun(var v, var functionRef) -> {
        variable = v;
        value = functionRef.get();
      }
      case AssumeLoadVar(var v, var constant) -> {
        variable = v;
        value = constant;
      }
      default -> {
        return expression;
      }
    }

    var analysis = analyses.get(bb.owner(), ActiveAssumeLoadAnalysis.class);
    if (!analysis.isRedundant(bb, index, variable, value)) {
      return expression;
    }

    return new Noop();
  }
}
