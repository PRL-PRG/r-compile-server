package org.prlprg.fir.opt.specialize;

import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.cfg.StrictnessAnalysis;
import org.prlprg.fir.analyze.type.InferEffects;
import org.prlprg.fir.analyze.type.InferType;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.type.Ownership;
import org.prlprg.fir.ir.variable.Register;

/// Optimization that infers and improves the explicit return type and effects of [Promise]s,
/// then improves the explicit return type, effects, and strictness of the target [Abstraction].
public record ImproveSignatures() implements SpecializeOptimization {
  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes(InferType.class, InferEffects.class, StrictnessAnalysis.class);
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
    if (!(expression instanceof Promise(var oldType, _, var code))) {
      return expression;
    }

    var newType = analyses.get(InferType.class).of(code);
    newType = newType == null ? null : newType.withOwnership(Ownership.SHARED);
    var newEffects = analyses.get(InferEffects.class).ofNonRecursive(code);

    return new Promise(newType == null ? oldType : newType, newEffects, code);
  }

  @Override
  public boolean finish(Abstraction scope, Analyses analyses) {
    if (scope.cfg() == null) {
      return false;
    }

    var changed = false;
    var newReturnType = analyses.get(InferType.class).of(scope.cfg());
    var newEffects = analyses.get(InferEffects.class).ofNonRecursive(scope.cfg());
    var strictParams = analyses.get(scope.cfg(), StrictnessAnalysis.class).strictParameters();

    if (newReturnType != null && !newReturnType.equals(scope.returnType())) {
      scope.setReturnType(newReturnType);
      changed = true;
    }

    if (!newEffects.equals(scope.effects())) {
      scope.setEffects(newEffects);
      changed = true;
    }

    for (var param : scope.parameters()) {
      if (!param.strict() && strictParams.contains(param.variable())) {
        scope.setParameterStrict(param.variable());
        changed = true;
      }
    }

    return changed;
  }
}
