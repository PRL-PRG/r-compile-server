package org.prlprg.fir.opt.specialize;

import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.cfg.ActiveAssumeLoadAnalysis;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.assumption.AssumeLoadFun;
import org.prlprg.fir.ir.assumption.AssumeLoadVar;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.variable.NamedVariable;

/// Optimization that removes [AssumeLoadFun]/[AssumeLoadVar] instructions that are dominated by an
/// identical assumption with no intervening reflective instruction or `Store`/`SuperStore` to the
/// same variable on any path between them.
public record ElideRedundantAssumeLoad() implements SpecializeOptimization {
  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes(ActiveAssumeLoadAnalysis.class);
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
    if (!(statement.expression() instanceof Assume(var assumption))) {
      return Result.UNCHANGED;
    }

    NamedVariable variable;
    Object value;
    switch (assumption) {
      case AssumeLoadFun(var v, var functionRef) -> {
        variable = v;
        value = functionRef.get();
      }
      case AssumeLoadVar(var v, var constant) -> {
        variable = v;
        value = constant;
      }
      default -> {
        return Result.UNCHANGED;
      }
    }

    var analysis = analyses.get(bb.owner(), ActiveAssumeLoadAnalysis.class);
    if (!analysis.isRedundant(bb, index, variable, value)) {
      return Result.UNCHANGED;
    }

    return Result.REMOVE;
  }
}
