package org.prlprg.fir.opt.specialize;

import java.util.Objects;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.resolve.OriginAnalysis;
import org.prlprg.fir.analyze.type.InferType;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.assumption.AssumeConstant;
import org.prlprg.fir.ir.assumption.AssumeFunction;
import org.prlprg.fir.ir.assumption.AssumeLoadFun;
import org.prlprg.fir.ir.assumption.AssumeLoadVar;
import org.prlprg.fir.ir.assumption.AssumeType;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Aea;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.expression.Closure;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Noop;
import org.prlprg.fir.ir.variable.Register;

/// Optimization that removes [Assume](org.prlprg.fir.ir.expression.Assume)s that statically
/// succeed.
public record ElideTrivialAssume() implements SpecializeOptimization {
  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes(InferType.class, OriginAnalysis.class);
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
    if (!(expression instanceof Assume(var assumption))) {
      return expression;
    }

    return switch (assumption) {
      case AssumeType(var value, var type) -> {
        var valueType = analyses.get(InferType.class).of(value);
        if (valueType == null || !valueType.isSubtypeOf(type)) {
          yield expression;
        }

        yield new Aea(value);
      }
      case AssumeFunction(var target, var functionRef) -> {
        var origin = analyses.get(OriginAnalysis.class).resolveExpression(target);
        if (!Objects.equals(origin, new Closure(functionRef.get()))) {
          yield expression;
        }

        yield new Noop();
      }
      case AssumeConstant(var value, var constant) -> {
        var origin = analyses.get(OriginAnalysis.class).resolve(value);
        if (!origin.equals(new Constant(constant))) {
          yield expression;
        }

        yield new Noop();
      }
      case AssumeLoadFun(var variable, var functionRef) -> {
        var originAnalysis = analyses.get(OriginAnalysis.class);
        var originRegister = originAnalysis.get(bb, index, variable);
        if (originRegister == null) {
          yield expression;
        }
        var originExpression = originAnalysis.resolveExpression(originRegister);
        if (!Objects.equals(originExpression, new Closure(functionRef.get()))) {
          yield expression;
        }

        yield new Noop();
      }
      case AssumeLoadVar(var variable, var constant) -> {
        var originAnalysis = analyses.get(OriginAnalysis.class);
        var originRegister = originAnalysis.get(bb, index, variable);
        if (originRegister == null) {
          yield expression;
        }
        var originValue = originAnalysis.resolve(originRegister);
        if (!originValue.equals(new Constant(constant))) {
          yield expression;
        }

        yield new Noop();
      }
    };
  }
}
