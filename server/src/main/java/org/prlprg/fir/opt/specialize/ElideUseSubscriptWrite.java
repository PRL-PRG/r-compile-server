package org.prlprg.fir.opt.specialize;

import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Use;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.SubscriptWrite;

/// Optimization that removes [SubscriptWrite]s on used values, since those values are consumed
/// after being mutated.
public record ElideUseSubscriptWrite() implements SpecializeOptimization {
  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes();
  }

  @Override
  public Expression run(
      BB bb, int index, Expression expression, Abstraction scope, Analyses analyses) {
    if (!(expression instanceof SubscriptWrite(var target, var _, var _))
        || !(target instanceof Use)) {
      return expression;
    }

    return Expression.NOOP;
  }
}
