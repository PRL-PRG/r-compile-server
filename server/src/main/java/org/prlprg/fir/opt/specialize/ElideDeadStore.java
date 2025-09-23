package org.prlprg.fir.opt.specialize;

import javax.annotation.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.cfg.Loads;
import org.prlprg.fir.analyze.cfg.Reachability;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Store;
import org.prlprg.fir.ir.variable.Register;

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
      BB bb,
      int index,
      @Nullable Register assignee,
      Expression expression,
      Abstraction scope,
      Analyses analyses,
      NonLocalSpecializations nonLocal,
      DeferredInsertions defer) {
    if (!(expression instanceof Store(var variable, var _))) {
      return expression;
    }

    var cfg = bb.owner();
    var loads = analyses.get(Loads.class);
    var reachability = analyses.get(cfg, Reachability.class);
    if (loads.get(variable).stream()
        .anyMatch(
            scopePos -> {
              var cfgPos = scopePos.inCfg(cfg);
              return cfgPos != null
                  && reachability.isReachable(bb, index, cfgPos.bb(), cfgPos.instructionIndex());
            })) {
      return expression;
    }

    return Expression.NOOP;
  }
}
