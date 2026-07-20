package org.prlprg.fir.opt.specialize;

import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.cfg.CfgHierarchy;
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
///
/// `threshold` is the minimum number of recorded calls for the absence of a reflective access to
/// be trusted: this speculation isn't guarded by a checkpoint (a wrong speculation crashes at
/// runtime instead of deoptimizing), so we only speculate on versions that were profiled enough.
public record SpecializeNonReflectiveEnv(int threshold) implements SpecializeOptimization {
  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes(CfgHierarchy.class);
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

    var pos = analyses.get(CfgHierarchy.class).scopePos(new CfgPosition(bb, index));

    // Only specialize if we have feedback that specifies this env wasn't reflectively accessed.
    // Without enough recorded calls, the absence of a reflective access isn't reliable.
    if (feedback.numCalls() < threshold || feedback.reflectiveEnvs.contains(pos)) {
      return expression;
    }

    return new MkEnv(MkEnvType.NON_REFLECTIVE);
  }
}
