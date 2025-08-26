package org.prlprg.fir.opt.specialize;

import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.type.InferType;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Force;
import org.prlprg.fir.ir.expression.MaybeForce;
import org.prlprg.fir.ir.type.Kind;

/// Optimization that converts [MaybeForce]s whose arguments are statically known to be promises
/// into [Force]s.
public record DefiniteForce() implements SpecializeOptimization {
  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes(InferType.class);
  }

  @Override
  public Expression run(Expression expression, Abstraction scope, Analyses analyses) {
    if (!(expression instanceof MaybeForce(var value))) {
      return expression;
    }

    var argType = analyses.get(InferType.class).of(value);
    if (argType == null || !argType.isDefinitely(Kind.Promise.class)) {
      return expression;
    }

    return new Force(value);
  }
}
