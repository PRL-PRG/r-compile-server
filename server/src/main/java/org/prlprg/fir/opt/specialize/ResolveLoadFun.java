package org.prlprg.fir.opt.specialize;

import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.resolve.OriginAnalysis;
import org.prlprg.fir.analyze.type.InferType;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Aea;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.LoadFun;
import org.prlprg.fir.ir.expression.LoadFun.Env;
import org.prlprg.fir.ir.type.Kind;

/// Replaces [LoadFun]s that statically resolve (via [OriginAnalysis]) to registers of closure type.
public record ResolveLoadFun() implements SpecializeOptimization {
  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes(OriginAnalysis.class, InferType.class);
  }

  @Override
  public Expression run(
      BB bb, int index, Expression expression, Abstraction scope, Analyses analyses) {
    if (!(expression instanceof LoadFun(var variable, var env)) || env != Env.LOCAL) {
      return expression;
    }
    var origin = analyses.get(OriginAnalysis.class).get(bb, index, variable);
    if (origin == null) {
      return expression;
    }
    // LoadFun "sees through" bindings that aren't closures, so we must check the type
    var type = analyses.get(InferType.class).of(origin);
    if (type == null || !type.isDefinitely(Kind.Closure.class)) {
      return expression;
    }
    return new Aea(origin);
  }
}
