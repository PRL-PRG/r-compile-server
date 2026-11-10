package org.prlprg.fir.opt.specialize;

import java.util.ArrayDeque;
import java.util.Objects;
import java.util.function.Predicate;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.cfg.CfgHierarchy;
import org.prlprg.fir.analyze.cfg.DominatorTree;
import org.prlprg.fir.analyze.type.InferType;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.assumption.AssumeType;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.expression.Cast;
import org.prlprg.fir.ir.expression.Force;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.variable.AssigneeOf;
import org.prlprg.fir.ir.variable.Register;

/// Optimization that converts maybe-[Force]s whose arguments are statically known to be
/// promises into definite-[Force]s, and statically known to be values into (no-op) assignments.
///
/// Also forwards a force (or maybe-force) to the result of a dominating one of the same SEXP
/// ([#dominatingForce]): the promise is forced by then, so forcing it again gives the same value
/// and has no effect.
public record DefiniteForce() implements SpecializeOptimization {
  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes(InferType.class, DominatorTree.class, CfgHierarchy.class);
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

    return argType.isValue()
        ? new Result.ForwardResult(value)
        : argType.isPromise() ? new Result.SetExpression(new Force(false)) : Result.UNCHANGED;
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
