package org.prlprg.fir.opt.egraph;

import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.cfg.CfgReachability;
import org.prlprg.fir.analyze.cfg.Loads;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Noop;
import org.prlprg.fir.ir.expression.Store;
import org.prlprg.fir.ir.expression.Store.StoreType;
import org.prlprg.fir.ir.instruction.Deopt;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.variable.Register;

/// Rewrite that removes [Store]s in non-reflective contexts which are never loaded after.
///
/// When eliding a store, puts it in deopt branches reachable from the store.
///
/// e-graph equivalent of [org.prlprg.fir.opt.specialize.ElideDeadStore].
public record ElideDeadStore() implements RewriteOptimization {
  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes(Loads.class, CfgReachability.class);
  }

  @Override
  public boolean shouldRun(Abstraction scope, Analyses analyses) {
    return !scope.effects().reflect();
  }

  @Override
  public Expression rewrite(
      BB bb,
      int index,
      @Nullable Register assignee,
      Expression expression,
      Abstraction scope,
      AbstractionFeedback feedback,
      Analyses analyses,
      DeferredInsertions defer) {
    if (!(expression instanceof Store(var storeType, var variable, _))
        || storeType != StoreType.LOCAL_VAR) {
      return expression;
    }

    // Don't elide in deopt branch
    if (bb.jump() instanceof Deopt) {
      return expression;
    }

    var cfg = bb.owner();
    var loads = analyses.get(Loads.class);
    var reachability = analyses.get(cfg, CfgReachability.class);
    if (loads.get(variable).stream()
        .anyMatch(
            scopePos -> {
              var cfgPos = scopePos.inCfg(cfg);
              return cfgPos != null
                  && reachability.isReachable(bb, index, cfgPos.bb(), cfgPos.instructionIndex());
            })) {
      return expression;
    }

    // Put the store in reachable deopt branches
    for (var reachableBb : reachability.maySucceed(bb)) {
      if (!(reachableBb.jump() instanceof Deopt)) {
        continue;
      }
      defer.stage(() -> reachableBb.appendStatement(new Statement(expression)));
    }

    return new Noop();
  }
}
