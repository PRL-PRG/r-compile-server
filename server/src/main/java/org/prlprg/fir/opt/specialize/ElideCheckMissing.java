package org.prlprg.fir.opt.specialize;

import static org.prlprg.fir.GlobalModules.INTRINSICS;

import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.type.InferType;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.type.Type;

/// Optimization that removes calls to the `checkMissing` intrinsic when the argument's type
/// statically guarantees it can't be missing.
public record ElideCheckMissing() implements SpecializeOptimization {
  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes(InferType.class);
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
    if (!(statement.expression() instanceof Call(var callee)
        && callee instanceof StaticFnCallee(var functionRef, var isDispatch, _)
        && !isDispatch
        && statement.arg(0).equals(Constant.ELIDED_CLOSURE)
        && functionRef.get().owner() == INTRINSICS
        && functionRef.get().name().name().equals("checkMissing")
        && statement.argCount() == 2)) {
      return Result.UNCHANGED;
    }

    var arg = statement.arg(1);
    var argType = analyses.get(InferType.class).of(arg);
    if (argType == null || Type.MISSING.isSubtypeOf(argType)) {
      return Result.UNCHANGED;
    }

    // Elide
    return Result.REMOVE;
  }
}
