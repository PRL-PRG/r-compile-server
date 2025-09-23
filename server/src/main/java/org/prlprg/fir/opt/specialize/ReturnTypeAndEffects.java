package org.prlprg.fir.opt.specialize;

import javax.annotation.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.type.InferEffects;
import org.prlprg.fir.analyze.type.InferType;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.type.Ownership;
import org.prlprg.fir.ir.variable.Register;

/// Optimization that infers the explicit return type and effects of [Promise]s and [Abstraction]s.
public record ReturnTypeAndEffects() implements SpecializeOptimization {
  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes(InferType.class, InferEffects.class);
  }

  @Override
  public Expression run(
      BB bb,
      int index,
      @Nullable Register assignee,
      Expression expression,
      Abstraction scope,
      Analyses analyses,
      NonLocalSpecializations nonLocal,
      DeferredInsertions defer) {
    if (!(expression instanceof Promise(var oldType, var _, var code))) {
      return expression;
    }

    var newType = analyses.get(InferType.class).of(code);
    newType = newType == null ? null : newType.withOwnership(Ownership.SHARED);
    var newEffects = analyses.get(InferEffects.class).of(code);

    return new Promise(newType == null ? oldType : newType, newEffects, code);
  }

  @Override
  public void finish(Abstraction scope, Analyses analyses) {
    if (scope.cfg() == null) {
      return;
    }

    var newReturnType = analyses.get(InferType.class).of(scope.cfg());
    var newEffects = analyses.get(InferEffects.class).of(scope.cfg());

    if (newReturnType != null) {
      scope.setReturnType(newReturnType);
    }
    scope.setEffects(newEffects);
  }
}
