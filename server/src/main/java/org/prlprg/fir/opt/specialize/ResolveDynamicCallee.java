package org.prlprg.fir.opt.specialize;

import static org.prlprg.sexp.ArgumentMatcher.matchArgumentNames;

import com.google.common.collect.ImmutableList;
import java.util.stream.Stream;
import org.prlprg.fir.GlobalModules;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.resolve.OriginAnalysis;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.assumption.AssumeFunction;
import org.prlprg.fir.ir.assumption.AssumeLoadFun;
import org.prlprg.fir.ir.callee.DynamicCallee;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Closure;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.expression.Load.LoadType;
import org.prlprg.fir.ir.expression.MkVector;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.type.Kind;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.OptionalNamedVariable;
import org.prlprg.sexp.ArgumentMatcher.MatchException;
import org.prlprg.sexp.ArgumentMatcher.MatchResults;
import org.prlprg.sexp.SEXPs;
import org.prlprg.util.Lists;
import org.prlprg.util.Pair;

/// Replaces [DynamicCallee]s that statically resolve to [Closure]s and global-/base-function
/// [Load]s.
public record ResolveDynamicCallee() implements SpecializeOptimization {
  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes(OriginAnalysis.class);
  }

  @Override
  public Result run(
      BB bb,
      int statementIndex,
      Statement statement,
      Abstraction scope,
      AbstractionFeedback feedback,
      Analyses analyses,
      NonLocalSpecializations nonLocal,
      DeferredInsertions defer) {
    if (!(statement.expression() instanceof Call(var callee)
            && callee instanceof DynamicCallee(var names))
        // This is a FIŘ specific hack that indicates one of the arguments is `...`.
        // Iff `false`, arguments can be statically matched.
        || names.contains(OptionalNamedVariable.of(NamedVariable.DOTS))) {
      return Result.UNCHANGED;
    }
    // The actual callee is the call's argument at index 0; the call arguments follow.
    var calleeReg = statement.arg(0);
    var callArguments = statement.args().subList(1, statement.argCount());
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
                case AssumeFunction(var functionRef) -> Pair.of(functionRef.get(), calleeReg);
                case AssumeLoadFun(_, var functionRef) -> Pair.of(functionRef.get(), calleeReg);
                default -> null;
              };
          case null, default -> null;
        };
    if (staticFunctionAndClosureWithEnv == null) {
      return Result.UNCHANGED;
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
      return Result.UNCHANGED;
    }
    var staticArguments =
        formalParameters.stream()
            .map(
                param -> {
                  if (param.equals("...")) {
                    // The dots elements' names (parallel to the MkVector's arguments).
                    var dddNames =
                        staticArgumentPositions.dddNames().stream()
                            .map(name -> OptionalNamedVariable.ofString(name).orNull())
                            .toList();
                    var dddValues =
                        staticArgumentPositions.dddIndices().stream()
                            .map(callArguments::get)
                            .collect(ImmutableList.<Argument>toImmutableList());
                    var dddStatement =
                        new Statement(new MkVector(new Kind.Dots(), dddNames), dddValues);
                    var dddReg = dddStatement.setAssignee(scope.freshName("vargs"), Type.DOTS);
                    // Prepend `dddStatement` before the call, but only after other specializations
                    // because it invalidates other analyses.
                    defer.stage(
                        () -> dddStatement.insertBefore(bb.statements().get(statementIndex)));
                    return (Argument) new Read(dddReg);
                  }

                  var argIndex = staticArgumentPositions.arguments().get(param);
                  return argIndex == null
                      ? (Argument) new Constant(SEXPs.MISSING_ARG)
                      : callArguments.get(argIndex);
                })
            .collect(ImmutableList.<Argument>toImmutableList());

    var newCallee = new StaticFnCallee(staticFunction, true, staticFunction.baseline().signature());
    // The new (static) call's arguments are `[closureWithEnv, ...staticArguments]`.
    var newArgs =
        ImmutableList.<Argument>builder().add(closureWithEnv).addAll(staticArguments).build();
    return new Result.Replace(new Call(newCallee), newArgs);
  }
}
