package org.prlprg.fir.opt.specialize;

import static org.prlprg.fir.GlobalModules.BUILTINS;
import static org.prlprg.fir.GlobalModules.INTRINSICS;

import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.variable.Register;

/// Removes the closure-with-environment argument from static calls to builtins and intrinsics,
/// since those functions don't have a closure environment.
public record ElideBuiltinClosure() implements SpecializeOptimization {
  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes();
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
    if (!(expression instanceof Call(var callee, var callArguments)
        && callee instanceof StaticFnCallee staticCallee
        && !staticCallee.closureWithEnv().equals(Constant.ELIDED_CLOSURE))) {
      return expression;
    }

    var owner = staticCallee.function().owner();
    if (owner != BUILTINS && owner != INTRINSICS) {
      return expression;
    }

    return new Call(
        new StaticFnCallee(
            staticCallee.functionRef(),
            staticCallee.isDispatch(),
            Constant.ELIDED_CLOSURE,
            staticCallee.signature()),
        callArguments);
  }
}
