package org.prlprg.fir.opt.specialize;

import static org.prlprg.fir.GlobalModules.BASE;
import static org.prlprg.fir.GlobalModules.BUILTINS;
import static org.prlprg.fir.GlobalModules.INTRINSICS;

import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.List;
import java.util.Objects;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Consume;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.callee.Callee;
import org.prlprg.fir.ir.callee.DynamicCallee;
import org.prlprg.fir.ir.callee.FallbackCallee;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Kind;
import org.prlprg.fir.ir.type.Ownership;
import org.prlprg.fir.ir.type.PrimitiveKind;
import org.prlprg.fir.ir.type.Repr;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.sexp.IntSXP;
import org.prlprg.sexp.RealSXP;
import org.prlprg.util.ImmutableBoolArray;
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
  public Result run(
      BB bb,
      int index,
      Statement statement,
      Abstraction scope,
      AbstractionFeedback feedback,
      Analyses analyses,
      NonLocalSpecializations nonLocal,
      DeferredInsertions defer) {
    if (!(statement.expression() instanceof Call(var callee))) {
      return Result.UNCHANGED;
    }

    // Call arguments follow the callee's own argument (index 0).
    var callArgs = statement.args().subList(1, statement.argCount());
    var newCallee = run(scope, feedback, callee, callArgs, statement);
    if (newCallee == null) {
      return Result.UNCHANGED;
    }

    return new Result.SetExpression(new Call(newCallee));
  }

  @Nullable Callee run(
      Abstraction scope,
      AbstractionFeedback feedback,
      Callee calleeRaw,
      List<Argument> callArgs,
      @Nullable Statement statement) {
    if (!(calleeRaw instanceof StaticFnCallee callee)) {
      // We can't optimize dynamic calls
      return null;
    }
    if (callee.function().userProperties().needsContext()) {
      // The call goes through `Rf_applyClosure`, whose from-R entry selects the version.
      return null;
    }
    var calleeFun = callee.function();
    var argumentTypes =
        callArgs.stream().map(scope::typeOf).collect(ImmutableList.toImmutableList());
    if (argumentTypes.contains(null)) {
      // Invalid, null type
      return null;
    }
    @SuppressWarnings("RedundantCast")
    var argumentTypes0 = (ImmutableList<Type>) argumentTypes;
    var bestVersion0 = calleeFun.guess(bestSignature(callee, argumentTypes0));
    var widenedTypes =
        bestVersion0 == null || statement == null
            ? null
            : widenedIndexTypes(
                calleeFun, bestVersion0, argumentTypes0, callArgs, feedback, statement);
    var argumentTypes1 = widenedTypes == null ? argumentTypes0 : widenedTypes;
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
            Streams.zip(
                    argumentTypes1.stream(),
                    bestVersion.signature().parameterStrictnesses().stream(),
                    (type, strict) -> strict && !type.isValue())
                .collect(ImmutableBoolArray.toImmutableBoolArray()),
            bestVersion.signature().returnType(),
            bestVersion.signature().effects());

    // Check if we can dispatch (i.e. returns SEXP),
    // and there are better versions that can be called with recorded runtime types...
    var isBestAtRuntime =
        widenedTypes != null
            || newBestSignature.returnType().kind().repr() != Repr.SEXP
            || calleeFun.versions().headSet(bestVersion).stream()
                .noneMatch(
                    better -> {
                      var betterSignature = better.signature();
                      return betterSignature.hasNarrowerParameters(bestSignature)
                          && Streams.zip(
                                  betterSignature.parameterTypes().stream(),
                                  callArgs.stream(),
                                  (parameterType, argument) ->
                                      switch (argument) {
                                        case Constant(var constant) ->
                                            constant.type().isSubtypeOf(parameterType);
                                        case Read _, Consume _ -> {
                                          var register =
                                              Objects.requireNonNull(argument.variable());
                                          yield feedback
                                              .type(register)
                                              .streamHits(threshold, parameterType)
                                              .findAny()
                                              .isPresent();
                                        }
                                      })
                              .allMatch(b -> b);
                    });

    // ...if so (`!isBestAtRuntime`), dispatch. An intrinsic has no dispatch (fir2c rejects it).
    return new StaticFnCallee(
        calleeFun, !isBestAtRuntime && calleeFun.owner() != INTRINSICS, newBestSignature);
  }

  /// `argumentTypes` with the index widened, if `version` is a typed subscript version that the
  /// call doesn't fit (see `builtins.fir`):
  /// - A scalar-index `[`, which returns one element and deopts where `x[i]` isn't one (an `i`
  ///   below 1), where the index is a constant below 1 or the result was recorded as a longer or
  ///   empty vector. The index becomes a vector.
  /// - A typed `[<-` or `[[<-`, which only writes within the vector, where the call was recorded to
  ///   grow it. The index becomes any value, which leaves the generic version.
  static @Nullable ImmutableList<Type> widenedIndexTypes(
      Function function,
      Abstraction version,
      ImmutableList<Type> argumentTypes,
      List<Argument> callArgs,
      AbstractionFeedback feedback,
      Statement statement) {
    if ((function.owner() != BUILTINS && function.owner() != BASE) || argumentTypes.size() < 3) {
      return null;
    }
    var indexType = argumentTypes.get(1);
    var name = function.name();
    Type widened = null;
    if (name.equals(Variable.named("["))
        && indexType.kind() instanceof Kind.PrimitiveVector(var isScalar, var indexKind)
        && isScalar
        && oneElementKind(version) instanceof PrimitiveKind elementKind
        && !isOneElement(callArgs.get(1), elementKind, feedback, statement.assignee())) {
      widened = Type.primitiveVector(indexKind, Ownership.SHARED);
    } else if ((name.equals(Variable.named("[<-")) || name.equals(Variable.named("[[<-")))
        && feedback.growingSubAssigns.contains(statement)
        && indexType.kind().repr() == Repr.SEXP
        && !version.signature().returnType().equals(Type.ANY_VALUE_SEXP)) {
      widened = Type.ANY_VALUE_SEXP;
    }
    if (widened == null) {
      return null;
    }
    var types = new ArrayList<>(argumentTypes);
    types.set(1, widened);
    return ImmutableList.copyOf(types);
  }

  /// The element kind of `version`'s result if it's one element (`v1(X)` or `X`).
  private static @Nullable PrimitiveKind oneElementKind(Abstraction version) {
    return switch (version.signature().returnType().kind()) {
      case Kind.PrimitiveVector(var isScalar, var kind) when isScalar -> kind;
      case Kind.PrimitiveScalar(var kind) -> kind;
      default -> null;
    };
  }

  /// Whether `x[index]` is one element: `index` isn't a constant below 1, and `result` wasn't
  /// recorded as a vector of another length (a vector of the element kind that isn't `v1`).
  private static boolean isOneElement(
      Argument index,
      PrimitiveKind elementKind,
      AbstractionFeedback feedback,
      @Nullable Register result) {
    return switch (index) {
      case Constant(Value.Sexp(IntSXP i)) -> i.get(0) >= 1;
      case Constant(Value.Sexp(RealSXP r)) -> r.get(0) >= 1;
      default -> {
        if (result == null) {
          yield true;
        }
        var recorded = feedback.type(recordedByName(feedback, result)).union();
        yield !recorded.isSubtypeOf(Type.primitiveVector(elementKind, Ownership.SHARED))
            || recorded.isSubtypeOf(Type.primitiveVector1(elementKind, Ownership.SHARED));
      }
    };
  }

  /// The register with `register`'s name that `feedback` has a record of, else `register`. A
  /// specialization that replaces a statement gives it a new assignee with the same name, and the
  /// feedback stays with the old one.
  private static Register recordedByName(AbstractionFeedback feedback, Register register) {
    return feedback.recordedRegisters().stream()
        .filter(r -> r.name().equals(register.name()))
        .findFirst()
        .orElse(register);
  }

  /// Returns the callee's signature with the types replaced by `argumentTypes`, i.e. the best
  /// possible signature for a call with these
  public static Signature bestSignature(Callee callee, ImmutableList<Type> argumentTypes) {
    var oldSignature =
        switch (callee) {
          case StaticFnCallee(_, _, var signature) -> signature;
          case FallbackCallee(var signature) -> signature;
          case DynamicCallee _ -> null;
        };
    return new Signature(
        argumentTypes,
        oldSignature == null ? Type.ANY_VALUE_SEXP : oldSignature.returnType(),
        oldSignature == null ? Effects.REFLECT : oldSignature.effects());
  }
}
