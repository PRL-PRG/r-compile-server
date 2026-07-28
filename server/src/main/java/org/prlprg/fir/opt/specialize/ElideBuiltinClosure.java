package org.prlprg.fir.opt.specialize;

import static org.prlprg.fir.GlobalModules.BUILTINS;
import static org.prlprg.fir.GlobalModules.INTRINSICS;

import java.util.ArrayList;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.instruction.Statement;

/// Removes the closure-with-environment argument from static calls to builtins and intrinsics,
/// since those functions don't have a closure environment.
public record ElideBuiltinClosure() implements SpecializeOptimization {
  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes();
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
        && callee instanceof StaticFnCallee staticCallee
        // The closure-with-env is the call's argument at index 0.
        && !statement.arg(0).equals(Constant.ELIDED_CLOSURE))) {
      return Result.UNCHANGED;
    }

    var owner = staticCallee.function().owner();
    if (owner != BUILTINS && owner != INTRINSICS) {
      return Result.UNCHANGED;
    }

    // Replace the closure-with-env argument (index 0) with the elided closure.
    var newArgs = new ArrayList<Argument>(statement.args());
    newArgs.set(0, Constant.ELIDED_CLOSURE);
    return new Result.Replace(statement.expression(), newArgs);
  }
}
