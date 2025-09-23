package org.prlprg.fir.opt.specialize;

import javax.annotation.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.variable.Register;

/// An optimization that replaces individual expressions with those that are faster and/or have
/// better types (see [org.prlprg.fir.opt.specialize]).
public interface SpecializeOptimization {
  /// Analyses this optimization may use.
  AnalysisTypes analyses();

  /// If `false`, skips running the optimization on the abstraction.
  @SuppressWarnings("unused")
  default boolean shouldRun(Abstraction scope, Analyses analyses) {
    return true;
  }

  /// If unchanged, return `expression`.
  ///
  /// This is not allowed to insert or remove instructions directly. Instead, insert
  /// instructions in `defer` (which runs after all other specializations), and remove
  /// instructions by replacing them with [Expression#NOOP]. This is allowed to replace other
  /// instructions outside `defer` as long as they're specialized (i.e. have subtypes and less
  /// effects). TODO: pass an argument so we can further specialized other instructions that are
  /// replaced.
  Expression run(
      BB bb,
      int index,
      @Nullable Register assignee,
      Expression expression,
      Abstraction scope,
      Analyses analyses,
      DeferredInsertions defer);

  default void finish(Abstraction scope, Analyses analyses) {}

  interface DeferredInsertions {
    /// `insertion` must be local or it may conflict with other modifications.
    ///
    /// Specifically, `insertion` must not insert any instruction in an existing BB outside `bb`
    /// (it can create new BBs) or before `index` (it can insert at `index` i.e. prepend).
    void stage(Runnable insertion);
  }
}
