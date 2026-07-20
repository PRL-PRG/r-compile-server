package org.prlprg.fir.opt.specialize;

import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.cfg.CfgHierarchy;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.position.CfgPosition;
import org.prlprg.fir.ir.variable.Register;

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
    return new AnalysisTypes(CfgHierarchy.class);
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
    if (!(expression instanceof Promise(var valueType, var effects, var code, boolean local))
        || local) {
      return expression;
    }

    var pos = analyses.get(CfgHierarchy.class).scopePos(new CfgPosition(bb, index));

    // Only specialize if we have feedback that specifies this promise didn't escape.
    // Without enough recorded calls, the absence of a recorded escape isn't reliable.
    if (feedback.numCalls() < threshold || feedback.escapingPromises.contains(pos)) {
      return expression;
    }

    return new Promise(valueType, effects, code, true);
  }
}
