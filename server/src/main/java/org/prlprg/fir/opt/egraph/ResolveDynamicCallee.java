package org.prlprg.fir.opt.egraph;

import static org.prlprg.sexp.ArgumentMatcher.matchArgumentNames;

import com.google.common.collect.ImmutableList;
import java.util.stream.Stream;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.GlobalModules;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.resolve.OriginAnalysis;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.NamedArgument;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.assumption.AssumeFunction;
import org.prlprg.fir.ir.assumption.AssumeLoadFun;
import org.prlprg.fir.ir.callee.DynamicCallee;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Closure;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.expression.Load.LoadType;
import org.prlprg.fir.ir.expression.MkVector;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.type.Kind;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.OptionalNamedVariable;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.sexp.ArgumentMatcher.MatchException;
import org.prlprg.sexp.ArgumentMatcher.MatchResults;
import org.prlprg.sexp.SEXPs;
import org.prlprg.util.Lists;
import org.prlprg.util.Pair;
import org.prlprg.util.Streams;

/// Rewrite that replaces [DynamicCallee]s that statically resolve to [Closure]s and global-/base-
/// function [Load]s.
///
/// e-graph equivalent of [org.prlprg.fir.opt.specialize.ResolveDynamicCallee].
public record ResolveDynamicCallee() implements RewriteOptimization {
  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes(OriginAnalysis.class);
  }

  @Override
  public Expression rewrite(
      BB bb,
      int statementIndex,
      @Nullable Register assignee,
      Expression expression,
      Abstraction scope,
      AbstractionFeedback feedback,
      Analyses analyses,
      DeferredInsertions defer) {
    if (!(expression instanceof Call(var callee, var callArguments)
            && callee instanceof DynamicCallee(var calleeReg, var names))
        // This is a FIŘ specific hack that indicates one of the arguments is `...`.
        // Iff `false`, arguments can be statically matched.
        || names.contains(OptionalNamedVariable.of(NamedVariable.DOTS))) {
      return expression;
    }
    var staticFunctionAndClosureWithEnv =
        switch (analyses.get(OriginAnalysis.class).resolveExpression(calleeReg)) {
          case Closure(var isStatic, var codeRef) ->
              Pair.of(codeRef.get(), isStatic ? Constant.ELIDED_CLOSURE : calleeReg);
          case Load(var loadType, var variable) when loadType == LoadType.GLOBAL_FUN -> {
            var code = bb.module().lookupFunction(variable);
            yield code == null ? null : Pair.of(code, Constant.ELIDED_CLOSURE);
          }
          case Load(var loadType, var variable) when loadType == LoadType.BASE_FUN -> {
            var code = GlobalModules.BUILTINS.localFunction(variable);
            yield code == null ? null : Pair.of(code, Constant.ELIDED_CLOSURE);
          }
          case Assume(var assumption) ->
              switch (assumption) {
                case AssumeFunction(_, var functionRef) -> Pair.of(functionRef.get(), calleeReg);
                case AssumeLoadFun(_, var functionRef) -> Pair.of(functionRef.get(), calleeReg);
                default -> null;
              };
          case null, default -> null;
        };
    if (staticFunctionAndClosureWithEnv == null) {
      return expression;
    }
    var staticFunction = staticFunctionAndClosureWithEnv.first();
    var closureWithEnv = staticFunctionAndClosureWithEnv.second();

    var formalParameters = Lists.mapLazy(staticFunction.parameterNames(), NamedVariable::name);
    var realNames =
        Stream.concat(
                names.stream().map(OptionalNamedVariable::toString), Stream.generate(() -> ""))
            .limit(callArguments.size())
            .toList();
    MatchResults staticArgumentPositions;
    try {
      staticArgumentPositions = matchArgumentNames(formalParameters, realNames);
    } catch (MatchException e) {
      // e.g. the user supplied too many arguments
      // Technically we can replace with the static error,
      // but in practice this is rare enough that not optimizing is OK
      return expression;
    }
    var staticArguments =
        formalParameters.stream()
            .map(
                param -> {
                  if (param.equals("...")) {
                    var dddReg = scope.addLocal("vargs", Type.DOTS);
                    var dddStatement =
                        new Statement(
                            dddReg,
                            new MkVector(
                                new Kind.Dots(),
                                Streams.zip(
                                        staticArgumentPositions.dddNames().stream()
                                            .map(OptionalNamedVariable::ofString),
                                        staticArgumentPositions.dddIndices().stream()
                                            .map(callArguments::get),
                                        (name, arg) -> new NamedArgument(name.orNull(), arg))
                                    .collect(ImmutableList.toImmutableList())));
                    // Prepend `dddStatement`, but only after other specializations
                    // because it invalidates other analyses.
                    defer.stage(() -> bb.insertStatement(statementIndex, dddStatement));
                    return new Read(dddReg);
                  }

                  var argIndex = staticArgumentPositions.arguments().get(param);
                  return argIndex == null
                      ? new Constant(SEXPs.MISSING_ARG)
                      : callArguments.get(argIndex);
                })
            .collect(ImmutableList.toImmutableList());

    var newCallee =
        new StaticFnCallee(
            staticFunction, true, closureWithEnv, staticFunction.baseline().signature());
    return new Call(newCallee, staticArguments);
  }
}
