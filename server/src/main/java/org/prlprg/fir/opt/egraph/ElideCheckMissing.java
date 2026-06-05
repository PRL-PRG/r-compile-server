package org.prlprg.fir.opt.egraph;

import static org.prlprg.fir.GlobalModules.INTRINSICS;

import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.type.InferType;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Noop;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.Register;

/// Rewrite that removes calls to the `checkMissing` intrinsic when the argument's type statically
/// guarantees it can't be missing.
///
/// e-graph equivalent of [org.prlprg.fir.opt.specialize.ElideCheckMissing].
public record ElideCheckMissing() implements RewriteOptimization {
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
    if (!(expression instanceof Call(var callee, var callArguments)
        && callee instanceof StaticFnCallee(var functionRef, var isDispatch, var closureWithEnv, _)
        && !isDispatch
        && closureWithEnv.equals(Constant.ELIDED_CLOSURE)
        && functionRef.get().owner() == INTRINSICS
        && functionRef.get().name().name().equals("checkMissing")
        && callArguments.size() == 1)) {
      return expression;
    }

    var arg = callArguments.getFirst();
    var argType = analyses.get(InferType.class).of(arg);
    if (argType == null || Type.MISSING.isSubtypeOf(argType)) {
      return expression;
    }

    // Elide
    return new Noop();
  }
}
