package org.prlprg.fir.opt.specialize;

import javax.annotation.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.type.InferType;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Aea;
import org.prlprg.fir.ir.expression.Cast;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.variable.Register;

/// Optimization that removes [Cast]s that statically succeed.
public record ElideTrivialCast() implements SpecializeOptimization {
  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes(InferType.class);
  }

  @Override
  public Expression run(
      BB bb,
      int index,
      @Nullable Register assignee,
      Expression expression,
      Abstraction scope,
      Analyses analyses,
      DeferredInsertions defer) {
    if (!(expression instanceof Cast(var value, var type))) {
      return expression;
    }

    var valueType = analyses.get(InferType.class).of(value);
    if (valueType == null || !valueType.isSubtypeOf(type)) {
      return expression;
    }

    return new Aea(value);
  }
}
