package org.prlprg.fir.opt.specialize;

import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.MkEnv;
import org.prlprg.fir.ir.expression.MkEnv.MkEnvType;
import org.prlprg.fir.ir.position.CfgPosition;
import org.prlprg.fir.ir.variable.Register;

/// Optimization that marks [MkEnv]s as [MkEnvType#NON_REFLECTIVE] when feedback indicates their
/// environments were never reflectively accessed.
public record SpecializeNonReflectiveEnv() implements SpecializeOptimization {
  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes();
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
    if (!(expression instanceof MkEnv(var type)) || type != MkEnvType.REGULAR) {
      return expression;
    }

    // Only specialize if we have feedback that specifies this env wasn't reflectively accessed.
    // Without any recorded calls, the absence of a reflective access means nothing.
    if (feedback.numCalls() == 0 || feedback.reflectiveEnvs.contains(new CfgPosition(bb, index))) {
      return expression;
    }

    return new MkEnv(MkEnvType.NON_REFLECTIVE);
  }
}
