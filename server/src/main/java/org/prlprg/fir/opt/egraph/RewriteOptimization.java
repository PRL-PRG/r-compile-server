package org.prlprg.fir.opt.egraph;

import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.util.Strings;

/// A rewrite rule run by [EGraphOptimization] during its equality-saturation pass.
///
/// Conceptually identical to a [org.prlprg.fir.opt.specialize.SpecializeOptimization]: it inspects
/// a single expression and returns a faster and/or better-typed equivalent (or the same expression
/// if it doesn't apply). [EGraphOptimization] stores a set of these and applies them to a fixpoint
/// (re-running rules on expressions changed by earlier rules) before its value-equivalence
/// (GVN/CSE/box-unbox) and pure-instruction scheduling phases. That's what lets the e-graph
/// optimization subsume the standalone specialization pass.
///
/// Unlike [org.prlprg.fir.opt.specialize.SpecializeOptimization] there is no non-local replacement
/// hook, because no rewrite needs one.
public interface RewriteOptimization {
  default String name() {
    return Strings.pascalCaseToCamelCase(getClass().getSimpleName());
  }

  /// Analyses this rewrite may use.
  AnalysisTypes analyses();

  /// If `false`, skips running this rewrite on the abstraction.
  default boolean shouldRun(Abstraction scope, Analyses analyses) {
    return true;
  }

  /// If unchanged, return `expression`.
  ///
  /// This is not allowed to insert or remove instructions directly. Instead, insert instructions in
  /// `defer` (which runs after all other rewrites), and remove instructions by replacing them with
  /// [org.prlprg.fir.ir.expression.Noop].
  Expression rewrite(
      BB bb,
      int index,
      @Nullable Register assignee,
      Expression expression,
      Abstraction scope,
      AbstractionFeedback feedback,
      Analyses analyses,
      DeferredInsertions defer);

  default boolean finish(Abstraction scope, Analyses analyses) {
    return false;
  }

  interface DeferredInsertions {
    /// `insertion` must be local or it may conflict with other modifications.
    ///
    /// Specifically, `insertion` must not insert any instruction in an existing BB outside `bb`
    /// (it can create new BBs) or before `index` (it can insert at `index` i.e. prepend).
    void stage(Runnable insertion);
  }
}
