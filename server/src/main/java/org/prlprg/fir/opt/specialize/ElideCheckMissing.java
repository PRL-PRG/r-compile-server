package org.prlprg.fir.opt.specialize;

import static org.prlprg.fir.GlobalModules.INTRINSICS;

import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.type.InferType;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.assumption.AssumeType;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Cast;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.AssigneeOf;

/// Optimization that removes calls to the `checkMissing` intrinsic when the argument's type
/// statically guarantees it can't be missing (looking through type assumptions and casts).
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

    // A type assumption or cast doesn't change the SEXP, so the argument isn't missing if any
    // value in the chain of assumptions and casts it comes from has a type without missing.
    var inferType = analyses.get(InferType.class);
    for (var arg = statement.arg(1); ; ) {
      if (inferType.of(arg) instanceof Type argType && !Type.MISSING.isSubtypeOf(argType)) {
        return Result.REMOVE;
      }
      if (!(arg instanceof Read(AssigneeOf a)
          && (a.statement().expression() instanceof Assume(AssumeType _)
              || a.statement().expression() instanceof Cast))) {
        return Result.UNCHANGED;
      }
      arg = a.statement().arg(0);
    }
  }
}
