package org.prlprg.fir.opt.specialize;

import com.google.common.collect.ImmutableList;
import java.util.Objects;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Consume;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.callee.Callee;
import org.prlprg.fir.ir.callee.DynamicCallee;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Ownership;
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
    if (!(call.callee() instanceof StaticFnCallee callee)) {
      // We can't optimize dynamic calls
      return null;
    }
    var calleeFun = callee.function();
    var argumentTypes =
        call.callArguments().stream().map(scope::typeOf).collect(ImmutableList.toImmutableList());
    if (argumentTypes.contains(null)) {
      // Invalid, null type
      return null;
    }
    @SuppressWarnings("RedundantCast")
    var argumentTypes1 = (ImmutableList<Type>) argumentTypes;
    var bestSignature = bestSignature(callee, argumentTypes1);
    var bestVersion = calleeFun.guess(bestSignature);
    if (bestVersion == null) {
      // Invalid, there should always be a possible version
      return null;
    }

    // Improve best signature: keep the better precondition from `argumentTypes`,
    // but add the postcondition from `bestVersion`
    var newBestSignature =
        new Signature(
            argumentTypes1.stream()
                .map(
                    type ->
                        type.ownership() == Ownership.OWNED
                            ? type.withOwnership(Ownership.BORROWED)
                            : type)
                .collect(ImmutableList.toImmutableList()),
            bestVersion.signature().parameterStrictnesses(),
            bestVersion.signature().returnType(),
            bestVersion.signature().effects());

    // Check if there are better versions that can be called with recorded runtime types...
    var isBestAtRuntime =
        calleeFun.versionsSorted().headSet(bestVersion).stream()
            .noneMatch(
                better -> {
                  var betterSignature = better.signature();
                  return betterSignature.hasNarrowerParameters(bestSignature)
                      && Streams.zip(
                              betterSignature.parameterTypes().stream(),
                              call.callArguments().stream(),
                              (parameterType, argument) ->
                                  switch (argument) {
                                    case Constant(var constant) ->
                                        constant.type().isSubtypeOf(parameterType);
                                    case Read _, Consume _ -> {
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

    // ...if so (`!isBestAtRuntime`), use dynamic dispatch
    return new StaticFnCallee(!isBestAtRuntime, calleeFun, newBestSignature);
  }

  /// Returns the callee's signature with the types replaced by `argumentTypes`, i.e. the best
  /// possible signature for a call with these
  public static Signature bestSignature(Callee callee, ImmutableList<Type> argumentTypes) {
    var oldSignature =
        switch (callee) {
          case StaticFnCallee(_, _, var signature) -> signature;
          case DynamicCallee _ -> null;
        };
    return new Signature(
        argumentTypes,
        oldSignature == null ? Type.ANY_VALUE : oldSignature.returnType(),
        oldSignature == null ? Effects.REFLECT : oldSignature.effects());
  }
}
