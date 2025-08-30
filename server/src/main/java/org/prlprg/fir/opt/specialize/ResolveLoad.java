package org.prlprg.fir.opt.specialize;

import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.resolve.OriginAnalysis;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Aea;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Load;

/// Replaces [Load]s that statically resolve (via [OriginAnalysis]) to registers or constants.
public record ResolveLoad() implements SpecializeOptimization {
  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes(OriginAnalysis.class);
  }

  @Override
  public Expression run(
      BB bb, int index, Expression expression, Abstraction scope, Analyses analyses) {
    if (!(expression instanceof Load(var variable))) {
      return expression;
    }
    var origin = analyses.get(OriginAnalysis.class).get(bb, index, variable);
    if (origin == null) {
      return expression;
    }
    return new Aea(origin);
  }
}
