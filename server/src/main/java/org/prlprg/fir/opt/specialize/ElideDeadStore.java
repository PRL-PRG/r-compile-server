package org.prlprg.fir.opt.specialize;

import java.util.Objects;
import java.util.stream.Stream;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.cfg.CfgDominatorTree;
import org.prlprg.fir.analyze.cfg.CfgHierarchy;
import org.prlprg.fir.analyze.cfg.CfgReachability;
import org.prlprg.fir.analyze.cfg.Loads;
import org.prlprg.fir.analyze.resolve.TopEnvironmentLiveness;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Closure;
import org.prlprg.fir.ir.expression.MkEnv.MkEnvType;
import org.prlprg.fir.ir.expression.Store;
import org.prlprg.fir.ir.expression.Store.StoreType;
import org.prlprg.fir.ir.instruction.Deopt;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.variable.NamedVariable;

/// Optimization that removes [Store]s in non-reflective contexts which are never loaded after.
///
/// When eliding a store, puts it in the deopt branches reachable from the store, so they still see
/// the environment the store would have produced. Only elides when that replay is faithful: every
/// store of the variable must dominate the deopt branches it reaches (see
/// [#dominatesAllReachableDeopts]).
public record ElideDeadStore() implements SpecializeOptimization {
  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes(
        CfgDominatorTree.class,
        CfgHierarchy.class,
        CfgReachability.class,
        Loads.class,
        TopEnvironmentLiveness.class);
  }

  @Override
  public boolean shouldRun(Abstraction scope, Analyses analyses) {
    // Don't run if there's a non-static closure, because it may capture any store
    // TODO: improve analysis so we can elide dead stores that can never be loaded by the
    //  non-static nested closure: specifically, we can't elide a store of any variable loaded
    //  anywhere in the non-static nested closure or one of its own non-static nested closures,
    //  and (if there is any nested closure) we can't elide any store in a reflective environment
    return scope
        .streamCfgs()
        .flatMap(cfg -> cfg.bbs().stream())
        .flatMap(bb -> bb.statements().stream())
        .noneMatch(stmt -> stmt.expression() instanceof Closure(var isStatic, _) && !isStatic);
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

    // Don't elide in reflective env
    // (If env is elided, don't elide because the CFG is invalid because this store exists)
    var topEnv = analyses.get(TopEnvironmentLiveness.class).topEnvAt(bb, index);
    if (topEnv == null || topEnv.type() != MkEnvType.NON_REFLECTIVE) {
      return Result.UNCHANGED;
    }

    // Don't elide if a load is reachable
    var cfg = bb.owner();
    var loads = analyses.get(Loads.class);
    if (loads.get(variable).stream()
        .anyMatch(
            load -> {
              var loadBb = load.parentBB();
              if (loadBb == null) {
                // Invalid CFG
                return true;
              }
              var loadCfg = loadBb.owner();

              var commonCfg =
                  Objects.requireNonNull(
                      analyses.get(CfgHierarchy.class).commonAncestor(cfg, loadCfg),
                      "both are in the same scope, so at worst their ancestor is the scope's CFG");
              var storePos =
                  Objects.requireNonNull(
                      analyses.get(CfgHierarchy.class).projectInto(commonCfg, statement));
              var loadPos =
                  Objects.requireNonNull(
                      analyses.get(CfgHierarchy.class).projectInto(commonCfg, load));

              return analyses.get(commonCfg, CfgReachability.class).isReachable(storePos, loadPos);
            })) {
      return Result.UNCHANGED;
    }

    // Don't elide unless every store dominates all deopts it reaches.
    // When we "elide" the store, we must still run it before any deopt,
    // so we actually defer it to all deopts.
    // But if it reaches a deopt that is reachable without running the store,
    // the store must only run if it would originally (we must create a new condition somewhere).
    // This is uncommon and complicated, so for now we just don't elide these stores.
    if (!storesOf(scope, variable)
        .allMatch(store -> dominatesAllReachableDeopts(store, analyses))) {
      return Result.UNCHANGED;
    }

    // Put the store in reachable deopt branches (all of which it dominates, as just checked)
    for (var reachableBb : analyses.get(cfg, CfgReachability.class).maySucceed(bb)) {
      if (!(reachableBb.jump().expression() instanceof Deopt)) {
        continue;
      }
      var storeCopy = statement.copy((_, a) -> a);
      defer.stage(() -> reachableBb.appendStatement(storeCopy));
    }

    return Result.REMOVE;
  }

  /// Every local-variable store to `variable` in `scope`, including ones in nested promise CFGs.
  private static Stream<Statement> storesOf(Abstraction scope, NamedVariable variable) {
    return scope
        .streamCfgs()
        .flatMap(cfg -> cfg.bbs().stream())
        .flatMap(bb -> bb.statements().stream())
        .filter(
            stmt ->
                stmt.expression() instanceof Store(var storeType, var stored)
                    && storeType == StoreType.LOCAL_VAR
                    && stored.equals(variable));
  }

  /// Whether `store` dominates all reachable deopt branches, so it can be deferred.
  private static boolean dominatesAllReachableDeopts(Statement store, Analyses analyses) {
    var bb = Objects.requireNonNull(store.parentBB(), "store is in a CFG, so it has a parent BB");
    var cfg = bb.owner();
    var dominators = analyses.get(cfg, CfgDominatorTree.class);
    return analyses.get(cfg, CfgReachability.class).maySucceed(bb).stream()
        .filter(reachable -> reachable.jump().expression() instanceof Deopt)
        .allMatch(deopt -> dominators.dominates(bb, deopt));
  }
}
