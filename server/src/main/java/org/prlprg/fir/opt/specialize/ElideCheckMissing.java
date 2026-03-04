package org.prlprg.fir.opt.specialize;

import static org.prlprg.fir.GlobalModules.INTRINSICS;
import static org.prlprg.fir.ir.expression.Expression.NOOP;

import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.type.InferType;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.Register;

/// Optimization that removes calls to the `checkMissing` intrinsic when the argument's type
/// statically guarantees it can't be missing.
public record ElideCheckMissing() implements SpecializeOptimization {
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
      AbstractionFeedback feedback,
      Analyses analyses,
      NonLocalSpecializations nonLocal,
      DeferredInsertions defer) {
    if (!(expression instanceof Call call)) {
      return expression;
    }

    var function = call.callee().function();
    if (function == null
        || function.owner() != INTRINSICS
        || !function.name().name().equals("checkMissing")
        || call.callArguments().size() != 1) {
      return expression;
    }

    var arg = call.callArguments().getFirst();
    var argType = analyses.get(InferType.class).of(arg);
    if (argType == null || Type.MISSING.isSubtypeOf(argType)) {
      return expression;
    }

    // Elide
    return NOOP;
  }
}
