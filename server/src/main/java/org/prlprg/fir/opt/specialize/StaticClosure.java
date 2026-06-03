package org.prlprg.fir.opt.specialize;

import java.util.LinkedHashSet;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.resolve.OriginAnalysis;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Closure;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.expression.Load.LoadType;
import org.prlprg.fir.ir.expression.Store;
import org.prlprg.fir.ir.expression.Store.StoreType;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Register;

/// Converts non-static closures to static closures when the closure cannot observe or mutate its
/// captured local environment hierarchy.
public record StaticClosure() implements SpecializeOptimization {
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
      AbstractionFeedback feedback,
      Analyses analyses,
      NonLocalSpecializations nonLocal,
      DeferredInsertions defer) {
    if (!(expression instanceof Closure(var isStatic, var codeRef)) || isStatic) {
      return expression;
    }

    var function = codeRef.get();
    if (function.versions().stream().anyMatch(version -> version.effects().reflect())) {
      return expression;
    }

    var referencedVariables = localEnvReferencedVariables(function);
    if (analyses.get(OriginAnalysis.class).anyMayBeLocal(bb, index, referencedVariables)) {
      return expression;
    }

    return new Closure(true, codeRef);
  }

  private static LinkedHashSet<NamedVariable> localEnvReferencedVariables(Function function) {
    var variables = new LinkedHashSet<NamedVariable>();
    for (var version : function.versions()) {
      version
          .streamCfgs()
          .flatMap(cfg -> cfg.bbs().stream())
          .flatMap(bb -> bb.statements().stream())
          .map(Statement::expression)
          .forEach(
              expression -> {
                switch (expression) {
                  case Load(var loadType, var variable)
                      when loadType != LoadType.GLOBAL_FUN && loadType != LoadType.BASE_FUN ->
                      variables.add(variable);
                  case Store(var storeType, var variable, _)
                      when storeType == StoreType.SUPER_VAR ->
                      variables.add(variable);
                  default -> {}
                }
              });
    }
    return variables;
  }
}
