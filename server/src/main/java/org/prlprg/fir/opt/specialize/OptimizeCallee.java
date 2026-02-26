package org.prlprg.fir.opt.specialize;

import com.google.common.collect.ImmutableList;
import java.util.Objects;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.argument.Use;
import org.prlprg.fir.ir.callee.Callee;
import org.prlprg.fir.ir.callee.DispatchCallee;
import org.prlprg.fir.ir.callee.StaticCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.util.Streams;

/// Optimization pass that replaces every dispatch and static callee with a better one.
///
/// Specifically, for each dispatch and static call:
/// - Looks up the best version of the called function that accepts with the arguments' static
///   types ([org.prlprg.fir.ir.module.Function#guess(Signature)]).
/// - If such a version exists, check if the function has a better version that can be called if
///   an argument has a more specific runtime type, *and* that type was recorded enough times.
///   - If so, convert into a dispatch call with the guessed (not better) version's signature.
///   - If not, convert into a static call to the guessed version.
public record OptimizeCallee(int threshold) implements SpecializeOptimization {
  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes();
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
    if (!(expression instanceof Call call)) {
      return expression;
    }

    var newCallee = run(scope, feedback, call);
    if (newCallee == null) {
      return expression;
    }

    return new Call(newCallee, call.callArguments());
  }

  @Nullable Callee run(Abstraction scope, AbstractionFeedback feedback, Call call) {
    var callee = call.callee();
    var callArguments = call.callArguments();
    var calleeFun = callee.function();
    if (calleeFun == null || callArguments.stream().anyMatch(arg -> scope.typeOf(arg) == null)) {
      return null;
    }
    var argumentTypes =
        callArguments.stream()
            .map(a -> Objects.requireNonNull(scope.typeOf(a)))
            .collect(ImmutableList.toImmutableList());
    var bestSignature = bestSignature(callee, argumentTypes);
    var bestVersion = calleeFun.guess(bestSignature);
    if (bestVersion == null) {
      // Invalid, there should always be a possible version
      return null;
    }

    // Check if there are better versions that can be called with recorded runtime types
    var isBestAtRuntime =
        calleeFun.versionsSorted().headSet(bestVersion).stream()
            .noneMatch(
                better -> {
                  var betterSignature = better.signature();
                  return betterSignature.hasNarrowerParameters(bestSignature)
                      && Streams.zip(
                              betterSignature.parameterTypes().stream(),
                              callArguments.stream(),
                              (parameterType, argument) ->
                                  switch (argument) {
                                    case Constant(var constant) ->
                                        Type.of(constant).isSubtypeOf(parameterType);
                                    case Read(var _), Use(var _) -> {
                                      var register = Objects.requireNonNull(argument.variable());
                                      yield feedback
                                          .type(register)
                                          .streamHits(threshold, parameterType)
                                          .findAny()
                                          .isPresent();
                                    }
                                  })
                          .allMatch(b -> b);
                });
    if (isBestAtRuntime) {
      return new StaticCallee(calleeFun, bestVersion);
    }

    // Improve best signature: keep the better precondition from `argumentTypes`,
    // but add the postcondition from `bestVersion`
    var bestSignature1 =
        new Signature(
            argumentTypes, bestVersion.signature().returnType(), bestVersion.signature().effects());

    return new DispatchCallee(calleeFun, bestSignature1);
  }

  /// Returns the callee's signature with the types replaced by `argumentTypes`, i.e. the best
  /// possible signature for a call with these
  public static Signature bestSignature(Callee callee, ImmutableList<Type> argumentTypes) {
    var oldSignature = callee.signature();
    return new Signature(
        argumentTypes,
        oldSignature == null ? Type.ANY_VALUE : oldSignature.returnType(),
        oldSignature == null ? Effects.REFLECT : oldSignature.effects());
  }
}
