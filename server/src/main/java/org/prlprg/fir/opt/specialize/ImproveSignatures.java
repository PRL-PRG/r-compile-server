package org.prlprg.fir.opt.specialize;

import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.cfg.StrictnessAnalysis;
import org.prlprg.fir.analyze.type.InferEffects;
import org.prlprg.fir.analyze.type.InferType;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.type.Ownership;

/// Optimization that infers and improves the explicit return type and effects of [Promise]s,
/// then improves the explicit return type, effects, and strictness of the target [Abstraction].
public record ImproveSignatures() implements SpecializeOptimization {
  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes(InferType.class, InferEffects.class, StrictnessAnalysis.class);
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
    if (!(statement.expression() instanceof Promise(var oldType, _, var code, var local))) {
      return Result.UNCHANGED;
    }

    var newType = analyses.get(InferType.class).of(code);
    newType = newType == null ? null : newType.withOwnership(Ownership.SHARED);
    var newEffects = analyses.get(InferEffects.class).ofNonRecursive(code);

    return new Result.SetExpression(
        new Promise(newType == null ? oldType : newType, newEffects, code, local));
  }

  @Override
  public boolean finish(Abstraction scope, Analyses analyses) {
    if (scope.cfg() == null) {
      return false;
    }

    var changed = false;
    var newReturnType = analyses.get(InferType.class).of(scope.cfg());
    // A return type can only be fresh or shared, but a `return` of an owned (or borrowed) register
    // infers as one, and declaring that leaves every call to this version unresolvable, because no
    // call signature's return type an owned one can be assigned to. Shared is the safe claim.
    if (newReturnType != null
        && newReturnType.ownership() != Ownership.FRESH
        && newReturnType.ownership() != Ownership.SHARED) {
      newReturnType = newReturnType.withOwnership(Ownership.SHARED);
    }
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
      if (!param.strict() && strictParams.contains(param)) {
        param.setStrict(true);
        changed = true;
      }
    }

    return changed;
  }
}
