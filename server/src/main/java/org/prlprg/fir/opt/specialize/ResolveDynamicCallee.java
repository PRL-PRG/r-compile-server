package org.prlprg.fir.opt.specialize;

import static org.prlprg.sexp.ArgumentMatcher.matchArgumentNames;

import com.google.common.collect.ImmutableList;
import java.util.stream.Stream;
import javax.annotation.Nullable;
import org.prlprg.fir.GlobalModules;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.resolve.OriginAnalysis;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.NamedArgument;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.callee.DispatchCallee;
import org.prlprg.fir.ir.callee.DynamicCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Closure;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.LoadFun;
import org.prlprg.fir.ir.expression.LoadFun.Env;
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
import org.prlprg.util.Streams;

/// Replaces [DynamicCallee]s that statically resolve to [Closure]s and global/base [LoadFun]s.
public record ResolveDynamicCallee() implements SpecializeOptimization {
  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes(OriginAnalysis.class);
  }

  @Override
  public Expression run(
      BB bb,
      int statementIndex,
      @Nullable Register assignee,
      Expression expression,
      Abstraction scope,
      Analyses analyses,
      NonLocalSpecializations nonLocal,
      DeferredInsertions defer) {
    if (!(expression instanceof Call call)) {
      return expression;
    }
    if (!(call.callee() instanceof DynamicCallee(var callee, var names))
        // This is a FIŘ specific hack that indicates one of the arguments is `...`.
        // Iff `false`, arguments can be statically matched.
        || names.contains(OptionalNamedVariable.of(NamedVariable.DOTS))) {
      return expression;
    }
    var staticFunction =
        switch (analyses.get(OriginAnalysis.class).resolveExpression(callee)) {
          case Closure closure -> closure.code();
          case LoadFun(var variable, var env) when env == Env.GLOBAL ->
              bb.module().lookupFunction(variable);
          case LoadFun(var variable, var env) when env == Env.BASE ->
              GlobalModules.BUILTINS.localFunction(variable);
          case null, default -> null;
        };
    if (staticFunction == null) {
      return expression;
    }

    var formalParameters = Lists.mapLazy(staticFunction.parameterNames(), NamedVariable::name);
    var realNames =
        Stream.concat(
                names.stream().map(OptionalNamedVariable::toString), Stream.generate(() -> ""))
            .limit(call.callArguments().size())
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
                                            .map(call.callArguments()::get),
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
                      : call.callArguments().get(argIndex);
                })
            .collect(ImmutableList.toImmutableList());

    var newCallee = new DispatchCallee(staticFunction, null);
    return new Call(newCallee, staticArguments);
  }
}
