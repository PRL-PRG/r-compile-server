package org.prlprg.fir.opt.specialize;

import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.resolve.OriginAnalysis;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.callee.DispatchCallee;
import org.prlprg.fir.ir.callee.DynamicCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Closure;
import org.prlprg.fir.ir.expression.Expression;

/// Replaces [DynamicCallee]s that statically resolve to [Closure]s.
public record ResolveDynamicCallee() implements SpecializeOptimization {
  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes(OriginAnalysis.class);
  }

  @Override
  public Expression run(
      BB bb, int index, Expression expression, Abstraction scope, Analyses analyses) {
    if (!(expression instanceof Call call)) {
      return expression;
    }
    if (!(call.callee() instanceof DynamicCallee(var callee, var names)) || !names.isEmpty()) {
      return expression;
    }
    if (!(analyses.get(OriginAnalysis.class).resolveExpression(callee)
        instanceof Closure closure)) {
      return expression;
    }
    var newCallee = new DispatchCallee(closure.code(), null);
    return new Call(newCallee, call.callArguments());
  }
}
