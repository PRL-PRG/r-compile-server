package org.prlprg.fir.opt.specialize;

import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.cfg.Loads;
import org.prlprg.fir.analyze.cfg.Reachability;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Store;

/// Optimization that removes [Store]s in non-reflective contexts which are never loaded after.
public record ElideDeadStore() implements SpecializeOptimization {
  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes(Loads.class, Reachability.class);
  }

  @Override
  public boolean shouldRun(Abstraction scope, Analyses analyses) {
    return !scope.effects().reflect();
  }

  @Override
  public Expression run(
      BB bb, int index, Expression expression, Abstraction scope, Analyses analyses) {
    if (!(expression instanceof Store(var variable, var _))) {
      return expression;
    }

    var cfg = bb.owner();
    var loads = analyses.get(cfg, Loads.class);
    var reachability = analyses.get(cfg, Reachability.class);
    if (loads.get(variable).stream()
        .anyMatch(p -> reachability.isReachable(bb, index, p.bb(), p.instructionIndex()))) {
      return expression;
    }

    return Expression.NOOP;
  }
}
