package org.prlprg.fir.opt.specialize;

import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.resolve.OriginAnalysis;
import org.prlprg.fir.analyze.type.InferType;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Consume;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.expression.Load.LoadType;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.type.Type;

/// Replaces [Load]s that statically resolve (via [OriginAnalysis]) to registers or constants.
///
/// Currently only resolves loads in the local environment.
public record ResolveLoad() implements SpecializeOptimization {
  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes(OriginAnalysis.class, InferType.class);
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
    if (!(statement.expression() instanceof Load(var loadType, var variable))
        || (loadType != LoadType.LOCAL_VAR && loadType != LoadType.LOCAL_FUN)) {
      return Result.UNCHANGED;
    }

    var origin = analyses.get(OriginAnalysis.class).get(bb, index, variable);
    if (origin == null) {
      return Result.UNCHANGED;
    }

    // Check if we may fall through function lookup
    if (loadType == LoadType.LOCAL_FUN) {
      var originType = analyses.get(InferType.class).of(origin);
      if (originType == null || !originType.isSubtypeOf(Type.CLOSURE)) {
        return Result.UNCHANGED;
      }
    }

    // If a register is `consume`d to store it in a variable,
    // we must still reference the variable, because the register is dead.
    // Right now the verifier rejects code that stores `consume`s,
    // so the guard only affects already-invalid code.
    //
    // If necessary, we could have an optimization that converts
    // `st x = consume r` into `r2 = consume r; st x = r2`,
    // but we probably shouldn't be generating such code in the first place.
    if (origin instanceof Consume) {
      return Result.UNCHANGED;
    }
    return new Result.ForwardResult(origin);
  }
}
