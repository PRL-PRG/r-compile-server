package org.prlprg.fir.opt.specialize;

import java.util.Objects;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.cfg.CfgHierarchy;
import org.prlprg.fir.analyze.cfg.CfgReachability;
import org.prlprg.fir.analyze.cfg.Loads;
import org.prlprg.fir.analyze.resolve.TopEnvironmentLiveness;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.MkEnv.MkEnvType;
import org.prlprg.fir.ir.expression.Noop;
import org.prlprg.fir.ir.expression.Store;
import org.prlprg.fir.ir.expression.Store.StoreType;
import org.prlprg.fir.ir.instruction.Deopt;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.variable.Register;

/// Optimization that removes [Store]s in non-reflective contexts which are never loaded after.
///
/// When eliding a store, puts it in deopt branches reachable from the store.
public record ElideDeadStore() implements SpecializeOptimization {
  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes(
        CfgHierarchy.class, CfgReachability.class, Loads.class, TopEnvironmentLiveness.class);
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
    if (!(expression instanceof Store(var storeType, var variable, _))
        || storeType != StoreType.LOCAL_VAR) {
      return expression;
    }

    // Don't elide in deopt branch
    if (bb.jump() instanceof Deopt) {
      return expression;
    }

    // Don't elide in reflective env
    // (If env is elided, don't elide because the CFG is invalid because this store exists)
    var topEnv = analyses.get(TopEnvironmentLiveness.class).topEnvAt(bb, index);
    if (topEnv == null || topEnv.type() != MkEnvType.NON_REFLECTIVE) {
      return expression;
    }

    // Don't elide if a load is reachable
    var cfg = bb.owner();
    var loads = analyses.get(Loads.class);
    if (loads.get(variable).stream()
        .anyMatch(
            loadScopePos -> {
              var commonCfg =
                  Objects.requireNonNull(
                      analyses
                          .get(CfgHierarchy.class)
                          .commonAncestor(cfg, loadScopePos.innermostCfg()),
                      "both are in the same scope, so at worst their ancestor is the scope's CFG");
              var storePos =
                  Objects.requireNonNull(
                      analyses.get(CfgHierarchy.class).scopePos(bb, index).inCfg(commonCfg));
              var loadPos = Objects.requireNonNull(loadScopePos.inCfg(commonCfg));

              return analyses.get(commonCfg, CfgReachability.class).isReachable(storePos, loadPos);
            })) {
      return expression;
    }

    // Put the store in reachable deopt branches
    for (var reachableBb : analyses.get(cfg, CfgReachability.class).maySucceed(bb)) {
      if (!(reachableBb.jump() instanceof Deopt)) {
        continue;
      }
      defer.stage(() -> reachableBb.appendStatement(new Statement(expression)));
    }

    return new Noop();
  }
}
