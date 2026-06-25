package org.prlprg.fir.opt.specialize;

import java.util.List;
import java.util.Objects;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.cfg.CfgHierarchy;
import org.prlprg.fir.analyze.cfg.CfgReachability;
import org.prlprg.fir.analyze.cfg.Loads;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.MkEnv;
import org.prlprg.fir.ir.expression.MkEnv.MkEnvType;
import org.prlprg.fir.ir.expression.Noop;
import org.prlprg.fir.ir.expression.Store;
import org.prlprg.fir.ir.expression.Store.StoreType;
import org.prlprg.fir.ir.instruction.Deopt;
import org.prlprg.fir.ir.instruction.Statement;

/// Optimization that removes [Store]s in non-reflective contexts which are never loaded after.
///
/// When eliding a store, puts it in deopt branches reachable from the store.
public record ElideDeadStore() implements SpecializeOptimization {
  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes(Loads.class, CfgHierarchy.class, CfgReachability.class);
  }

  @Override
  public boolean shouldRun(Abstraction scope, Analyses analyses) {
    // TODO: Fix by associating `mkenv` instruction with its scope
    return !scope.effects().reflect()
        || (scope.cfg() != null
            && !scope.cfg().entry().statements().isEmpty()
            && scope
                .cfg()
                .entry()
                .statements()
                .getFirst()
                .expression()
                .equals(new MkEnv(MkEnvType.NON_REFLECTIVE)));
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
    if (!(statement.expression() instanceof Store(var storeType, var variable))
        || storeType != StoreType.LOCAL_VAR) {
      return Result.UNCHANGED;
    }

    // Don't elide in deopt branch
    if (bb.jump().expression() instanceof Deopt) {
      return Result.UNCHANGED;
    }

    var cfg = bb.owner();
    var loads = analyses.get(Loads.class);
    var hierarchy = analyses.get(CfgHierarchy.class);
    var reachability = analyses.get(cfg, CfgReachability.class);
    if (loads.get(variable).stream()
        .anyMatch(
            loadStmt -> {
              // Project the load into this store's CFG (its enclosing promise statement if the load
              // is in a nested promise); the store isn't dead if a load is reachable after it.
              var projected = hierarchy.projectInto(cfg, loadStmt);
              return projected != null
                  && reachability.isReachable(
                      bb,
                      index,
                      Objects.requireNonNull(projected.parentBB()),
                      projected.indexInBB());
            })) {
      return Result.UNCHANGED;
    }

    // Put the store in reachable deopt branches
    var storeExpr = statement.expression();
    var storeValue = statement.arg(0);
    for (var reachableBb : reachability.maySucceed(bb)) {
      if (!(reachableBb.jump().expression() instanceof Deopt)) {
        continue;
      }
      defer.stage(() -> reachableBb.appendStatement(new Statement(storeExpr, List.of(storeValue))));
    }

    return Result.REMOVE;
  }
}
