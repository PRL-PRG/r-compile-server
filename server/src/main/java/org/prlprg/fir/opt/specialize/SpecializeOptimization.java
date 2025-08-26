package org.prlprg.fir.opt.specialize;

import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.expression.Expression;

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
  Expression run(Expression expression, Abstraction scope, Analyses analyses);

  default void finish(Abstraction scope, Analyses analyses) {}
}
