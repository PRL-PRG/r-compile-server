package org.prlprg.fir.opt.specialize;

import javax.annotation.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.resolve.OriginAnalysis;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Use;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Aea;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.variable.Register;

/// Replaces [Load]s that statically resolve (via [OriginAnalysis]) to registers or constants.
public record ResolveLoad() implements SpecializeOptimization {
  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes(OriginAnalysis.class);
  }

  @Override
  public Expression run(
      BB bb,
      int index,
      @Nullable Register assignee,
      Expression expression,
      Abstraction scope,
      Analyses analyses,
      NonLocalSpecializations nonLocal,
      DeferredInsertions defer) {
    if (!(expression instanceof Load(var variable))) {
      return expression;
    }
    var origin = analyses.get(OriginAnalysis.class).get(bb, index, variable);
    // If a register is `use`d to store it in a variable, we must still reference the variable,
    // because the register is dead.
    // Right now the verifier rejects code that stores `use`s, so the guard only affects
    // already-invalid code. If necessary, we could have an optimization that converts
    // `st x = use r` into `r2 = use r; st x = r2`, but we probably shouldn't be generating such
    // code in the first place.
    if (origin == null || origin instanceof Use) {
      return expression;
    }
    return new Aea(origin);
  }
}
