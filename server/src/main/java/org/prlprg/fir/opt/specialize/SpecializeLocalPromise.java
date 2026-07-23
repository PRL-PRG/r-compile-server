package org.prlprg.fir.opt.specialize;

import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.Statement;

/// Optimization that marks [Promise]s as [local][Promise#local] when feedback indicates their
/// promises never escaped (outlived the stack frame they were created in, then got forced
/// afterwards).
///
/// A local promise reads its captures directly from the (still-alive) stack frame; if the
/// speculation is wrong and it does escape, forcing it after the frame exited crashes at runtime
/// (see the runtime's `Fir_GloballyEscaped` and the interpreter's escape tracking).
public record SpecializeLocalPromise(int threshold) implements SpecializeOptimization {
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
    if (!(statement.expression()
            instanceof Promise(var valueType, var effects, var code, var local))
        || local) {
      return Result.UNCHANGED;
    }

    // Only specialize if we have feedback that specifies this promise didn't escape.
    // Without enough recorded calls, the absence of a recorded escape isn't reliable.
    if (feedback.numCalls() < threshold || feedback.escapingPromises.contains(statement)) {
      return Result.UNCHANGED;
    }

    return new Result.SetExpression(new Promise(valueType, effects, code, true));
  }
}
