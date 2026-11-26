package org.prlprg.fir.opt.specialize;

import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.cfg.CfgHierarchy;
import org.prlprg.fir.analyze.cfg.DominatorTree;
import org.prlprg.fir.analyze.resolve.OriginAnalysis;
import org.prlprg.fir.analyze.type.InferType;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.assumption.AssumeConstant;
import org.prlprg.fir.ir.assumption.AssumeFunction;
import org.prlprg.fir.ir.assumption.AssumeLoadFun;
import org.prlprg.fir.ir.assumption.AssumeLoadVar;
import org.prlprg.fir.ir.assumption.AssumeType;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.expression.Closure;
import org.prlprg.fir.ir.instruction.Statement;

/// Optimization that removes [Assume](org.prlprg.fir.ir.expression.Assume)s that statically
/// succeed, also an unused maybe-promise [AssumeType] that succeeds because a dominating force
/// ([DefiniteForce#dominatingForce]) has a result of its kind.
public record ElideTrivialAssume() implements SpecializeOptimization {
  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes(
        InferType.class, OriginAnalysis.class, DominatorTree.class, CfgHierarchy.class);
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

    return switch (assumption) {
      case AssumeType(var type) -> {
        var value = statement.arg(0);
        var valueType = analyses.get(InferType.class).of(value);
        if (valueType != null && valueType.isSubtypeOf(type)) {
          yield new Result.ForwardResult(value);
        }

        // A maybe-promise assumption only checks the kind of a forced promise's value. The
        // result's type is wider without the assumption, so only an unused one can go.
        var assignee = statement.assignee();
        yield (assignee == null || !assignee.isUsed())
                && type.promisity().isMaybe()
                && value instanceof Read(var target)
                && DefiniteForce.dominatingForce(
                        target,
                        statement,
                        result -> result.type().kind().isSubtypeOf(type.kind()),
                        analyses)
                    != null
            ? Result.REMOVE
            : Result.UNCHANGED;
      }
      case AssumeFunction(var functionRef) -> {
        var target = statement.arg(0);
        var origin = analyses.get(OriginAnalysis.class).resolveExpression(target);
        if (!(origin instanceof Closure(_, var originFunctionRef)
            && originFunctionRef.get().equals(functionRef.get()))) {
          yield Result.UNCHANGED;
        }

        yield new Result.ForwardResult(target);
      }
      case AssumeConstant(var constant) -> {
        var origin = analyses.get(OriginAnalysis.class).resolve(statement.arg(0));
        if (!origin.equals(new Constant(constant))) {
          yield Result.UNCHANGED;
        }

        yield Result.REMOVE;
      }
      case AssumeLoadFun(var variable, var functionRef) -> {
        var originAnalysis = analyses.get(OriginAnalysis.class);
        var originRegister = originAnalysis.get(bb, index, variable);
        if (originRegister == null) {
          yield Result.UNCHANGED;
        }
        var originExpression = originAnalysis.resolveExpression(originRegister);
        if (!(originExpression instanceof Closure(_, var originFunctionRef)
            && originFunctionRef.get().equals(functionRef.get()))) {
          yield Result.UNCHANGED;
        }

        yield new Result.ForwardResult(originRegister);
      }
      case AssumeLoadVar(var variable, var constant) -> {
        var originAnalysis = analyses.get(OriginAnalysis.class);
        var originRegister = originAnalysis.get(bb, index, variable);
        if (originRegister == null) {
          yield Result.UNCHANGED;
        }
        var originValue = originAnalysis.resolve(originRegister);
        if (!originValue.equals(new Constant(constant))) {
          yield Result.UNCHANGED;
        }

        yield Result.REMOVE;
      }
    };
  }
}
