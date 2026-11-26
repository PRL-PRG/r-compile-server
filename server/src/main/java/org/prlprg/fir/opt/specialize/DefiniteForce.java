package org.prlprg.fir.opt.specialize;

import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Objects;
import java.util.function.Predicate;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.cfg.CfgHierarchy;
import org.prlprg.fir.analyze.cfg.DominatorTree;
import org.prlprg.fir.analyze.resolve.EnvironmentLiveness;
import org.prlprg.fir.analyze.resolve.EnvironmentLiveness.EnvRange;
import org.prlprg.fir.analyze.type.InferType;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.assumption.AssumeType;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.expression.Cast;
import org.prlprg.fir.ir.expression.Closure;
import org.prlprg.fir.ir.expression.Force;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.expression.Load.LoadType;
import org.prlprg.fir.ir.expression.MkEnv;
import org.prlprg.fir.ir.expression.MkEnv.MkEnvType;
import org.prlprg.fir.ir.expression.PopEnv;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.expression.ReflectiveStore;
import org.prlprg.fir.ir.expression.Store;
import org.prlprg.fir.ir.expression.Store.StoreType;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.type.Ownership;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.AssigneeOf;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Register;

/// Optimization that converts maybe-[Force]s whose arguments are statically known to be
/// promises into definite-[Force]s, and statically known to be values into (no-op) assignments.
///
/// Also forwards a force (or maybe-force) to the result of a dominating one of the same SEXP
/// ([#dominatingForce]): the promise is forced by then, so forcing it again gives the same value
/// and has no effect.
///
/// Also casts a maybe-force of a local load to a value ([#loadsStoredValue]) when every store of
/// the variable stores one, in an environment that nothing else can store into.
public record DefiniteForce() implements SpecializeOptimization {
  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes(
        InferType.class, DominatorTree.class, CfgHierarchy.class, EnvironmentLiveness.class);
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
    if (!(statement.expression() instanceof Force(var isMaybe))) {
      return Result.UNCHANGED;
    }

    var assignee = statement.assignee();
    if (assignee != null && statement.arg(0) instanceof Read(var forced)) {
      var dominating =
          dominatingForce(
              forced, statement, result -> result.type().isSubtypeOf(assignee.type()), analyses);
      if (dominating != null) {
        return new Result.ForwardResult(new Read(dominating));
      }
    }
    if (!isMaybe) {
      return Result.UNCHANGED;
    }

    var value = statement.arg(0);
    var argType = analyses.get(InferType.class).of(value);
    if (argType == null) {
      return Result.UNCHANGED;
    }

    if (argType.isValue()) {
      return new Result.ForwardResult(value);
    }
    if (argType.isPromise()) {
      return new Result.SetExpression(new Force(false));
    }
    return assignee != null
            && Type.ANY_VALUE_SEXP.isSubtypeOf(assignee.type())
            && loadsStoredValue(value, scope, analyses)
        ? new Result.SetExpression(new Cast(Type.ANY_VALUE_SEXP))
        : Result.UNCHANGED;
  }

  /// Whether `value` is the result of a local `ld x` that can't be a promise: the version's one
  /// environment isn't [regular][MkEnvType#REGULAR], so only this version stores into it (the
  /// speculation that [org.prlprg.fir.opt.PromoteStaticallyKnownVariables] and [ElideDeadStore]
  /// make too), each store of `x` stores a value, and one in the body dominates the load (or its
  /// outermost promise), so `x` is bound in that environment.
  ///
  /// Code outside this version can only store into it through a closure over it (a non-static
  /// one, ruled out here) or reflection (ruled out by the speculation).
  private static boolean loadsStoredValue(Argument value, Abstraction scope, Analyses analyses) {
    if (!(value instanceof Read(var register))
        || !(register instanceof AssigneeOf assigneeOf)
        || !(assigneeOf.statement().expression() instanceof Load(var loadType, var variable))
        || loadType != LoadType.LOCAL_VAR
        || variable.equals(NamedVariable.DOTS)
        || variable.isDdNum()
        || assigneeOf.statement().parentBB() == null) {
      return false;
    }
    var load = assigneeOf.statement();

    var body = scope.body();
    var inferType = analyses.get(InferType.class);
    Statement mkEnv = null;
    var bodyStores = new ArrayList<Statement>();
    for (var cfg : scope.streamCfgs().toList()) {
      for (var bb : cfg.bbs()) {
        for (var statement : bb.statements()) {
          switch (statement.expression()) {
            // In the entry block, so each path from the latest one to the load is a path from the
            // entry, and passes the dominating store below.
            case MkEnv(var type) -> {
              if (mkEnv != null || type == MkEnvType.REGULAR || bb != body.entry()) {
                return false;
              }
              mkEnv = statement;
            }
            case PopEnv _ -> {
              if (cfg != body) {
                return false;
              }
            }
            case Closure(var isStatic, _) -> {
              if (!isStatic) {
                return false;
              }
            }
            case ReflectiveStore(var stored) when stored.equals(variable) -> {
              return false;
            }
            case Store(var storeType, var stored) when stored.equals(variable) -> {
              var storedType = inferType.of(statement.arg(0));
              if (storeType != StoreType.LOCAL_VAR
                  || storedType == null
                  || !storedType.withOwnership(Ownership.SHARED).isSubtypeOf(Type.ANY_VALUE_SEXP)) {
                return false;
              }
              if (cfg == body) {
                bodyStores.add(statement);
              }
            }
            default -> {}
          }
        }
      }
    }
    if (mkEnv == null) {
      return false;
    }

    // A promise runs in the environment it's created in, and pops none (checked above).
    var range = analyses.get(EnvironmentLiveness.class).rangeAt(mkEnv);
    if (range == null
        || !(analyses.get(CfgHierarchy.class).projectInto(body, load) instanceof Statement at)) {
      return false;
    }
    var domTree = analyses.get(DominatorTree.class);
    var finalMkEnv = mkEnv;
    // Dominated by the `mkenv`, so reachable (the liveness has no state for an unreachable block).
    return bodyStores.stream()
        .anyMatch(
            store ->
                domTree.dominates(finalMkEnv, store)
                    && domTree.dominates(store, at)
                    && inEnv(range, store, analyses)
                    && inEnv(range, at, analyses));
  }

  private static boolean inEnv(EnvRange range, Statement statement, Analyses analyses) {
    return analyses
        .get(EnvironmentLiveness.class)
        .envsAt(Objects.requireNonNull(statement.parentBB()), statement.indexInBB())
        .contains(range);
  }

  /// The result of a force other than `at` that dominates `at`, forces the SEXP of `forced`, and
  /// whose result `accept`s, looking through [AssumeType]s and [Cast]s, which don't change the
  /// SEXP. The force may be in an ancestor CFG if each promise in between is local (so it may
  /// capture the result).
  static @Nullable Register dominatingForce(
      Register forced, Statement at, Predicate<Register> accept, Analyses analyses) {
    var root = forced;
    while (root instanceof AssigneeOf a
        && (a.statement().expression() instanceof Assume(AssumeType _)
            || a.statement().expression() instanceof Cast)
        && a.statement().arg(0) instanceof Read(var target)) {
      root = target;
    }

    var domTree = analyses.get(DominatorTree.class);
    var hierarchy = analyses.get(CfgHierarchy.class);
    var worklist = new ArrayDeque<Register>();
    worklist.add(root);
    while (!worklist.isEmpty()) {
      for (var use : worklist.poll().uses()) {
        if (!(use.instruction() instanceof Statement other) || use.index() != 0) {
          continue;
        }
        switch (other.expression()) {
          case Assume(AssumeType _), Cast _ -> {
            if (other.assignee() != null) {
              worklist.add(other.assignee());
            }
          }
          case Force _ -> {
            var result = other.assignee();
            if (other != at
                && result != null
                && accept.test(result)
                // Not in a CFG made after the analyses.
                && domTree.cfg(Objects.requireNonNull(other.parentBB()).owner()) != null
                && domTree.dominates(other, at)
                && onlyLocalPromisesBetween(hierarchy, other, at)) {
              return result;
            }
          }
          default -> {}
        }
      }
    }
    return null;
  }

  /// Whether each promise that contains `inner` and not `outer` is local.
  private static boolean onlyLocalPromisesBetween(
      CfgHierarchy hierarchy, Statement outer, Statement inner) {
    var outerCfg = Objects.requireNonNull(outer.parentBB()).owner();
    var cfg = Objects.requireNonNull(inner.parentBB()).owner();
    while (cfg != outerCfg) {
      var parent = hierarchy.parentPromise(cfg);
      if (parent == null || !(parent.expression() instanceof Promise promise) || !promise.local()) {
        return false;
      }
      cfg = Objects.requireNonNull(parent.parentBB()).owner();
    }
    return true;
  }
}
