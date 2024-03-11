package org.prlprg.ir.type;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.Streams;
import java.util.Objects;
import java.util.function.BiFunction;
import java.util.stream.Stream;
import javax.annotation.Nullable;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.RegSymSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;

/** Function (closure, builtin, or special) {@link RType} projection. */
public sealed interface RFunctionType extends RValueType {
  /** Whether this is a closure, builtin, or special, if known. */
  @Nullable FunctionRType functionType();

  /** Whether this is a closure. */
  default Troolean isClosure() {
    return functionType() == FunctionRType.CLOSURE
        ? Troolean.YES
        : functionType() != null ? Troolean.NO : Troolean.MAYBE;
  }

  /** Whether this is a non-special builtin. */
  default Troolean isNonSpecialBuiltin() {
    return functionType() == FunctionRType.BUILTIN
        ? Troolean.YES
        : functionType() != null ? Troolean.NO : Troolean.MAYBE;
  }

  /** Whether this is a special builtin. */
  default Troolean isSpecialBuiltin() {
    return functionType() == FunctionRType.SPECIAL
        ? Troolean.YES
        : functionType() != null ? Troolean.NO : Troolean.MAYBE;
  }

  /** Names of known (required and optional) parameters. */
  ImmutableList<String> knownParameterNames();

  /** Types of known (required and optional) parameters. */
  ImmutableList<ParameterRType> knownParameterTypes();

  /** Whether the function may have more parameters than we know of. */
  NoOrMaybe hasMoreParams();

  /** Known return type. */
  RType returnType();

  /**
   * Returns the type of the parameter at index {@code i}, or {@code null} if the index is past the
   * end of the known parameters (if {@link #hasMoreParams()} is {@code false} it's guaranteed an
   * illegal extra parameter, otherwise that and the parameter itself are unknown). If this has dots
   * and the index is at or after them, it will return an {@code Any} parameter.
   */
  @Nullable ParameterRType knownParameterType(int index);

  /**
   * Returns the type of the parameter named {@code name}, or {@code null} if that isn't one of the
   * known parameters (if {@link #hasMoreParams()} is {@code false} it's guaranteed an illegal extra
   * parameter, otherwise that and the parameter itself are unknown). If {@code dotsCoversAll} is
   * true and this has dots, it will return an {@code Any} parameter if there's no parameter with
   * the name (if this has dots but you pass {@code "..."}, even if {@code dotsCoversAll} is false
   * it will return an {@code Any} parameter).
   */
  @Nullable ParameterRType knownParameterType(String name, boolean dotsCoversAll);

  /** Are dots in the known parameters? */
  default boolean hasKnownDots() {
    return knownParameterNames().contains("...");
  }

  /** Does the function have dots? */
  default Troolean hasDots() {
    return hasKnownDots() ? Troolean.YES : Troolean.of(hasMoreParams());
  }
}

record RFunctionTypeImpl(
    @Override @Nullable SEXP exactValue,
    @Override @Nullable FunctionRType functionType,
    @Override AttributesType attributes,
    @Override MaybeNat referenceCount,
    @Override ImmutableList<String> knownParameterNames,
    @Override ImmutableList<ParameterRType> knownParameterTypes,
    @Override NoOrMaybe hasMoreParams,
    @Override RType returnType)
    implements RFunctionType {
  public RFunctionTypeImpl {
    RGenericValueType.commonSanityChecks(this);
    if (knownParameterNames.size() != knownParameterTypes.size()) {
      throw new IllegalArgumentException(
          "knownParameterNames and knownParameterTypes must have the same size");
    }
    if (knownParameterNames.stream().anyMatch(String::isEmpty)) {
      throw new IllegalArgumentException("knownParameterNames cannot contain empty strings");
    }
  }

  /** Returns the most precise type this closure is an instance of. */
  static RFunctionType exact(CloSXP value) {
    return new RFunctionTypeImpl(
        value,
        FunctionRType.CLOSURE,
        AttributesTypes.exact(value.attributes()),
        MaybeNat.UNKNOWN,
        ImmutableList.copyOf(value.formals().names()),
        value.formals().values().stream()
            .map(x -> new ParameterRType(RTypes.ANY, NoOrMaybe.of(x == SEXPs.MISSING_ARG)))
            .collect(ImmutableList.toImmutableList()),
        NoOrMaybe.NO,
        RTypes.ANY);
  }

  // TODO: `RFunctionType.ofBuiltin(int bltOrSpecNum)` (hard-code immutable list of builtin and
  // special types).

  @Override
  public @Nullable ParameterRType knownParameterType(int index) {
    if (index < 0) {
      throw new IllegalArgumentException("index must be non-negative");
    }
    var dotsIndex = knownParameterNames.indexOf("...");
    if (dotsIndex > -1 && index >= dotsIndex) {
      return knownParameterTypes.get(dotsIndex);
    }
    if (index < knownParameterTypes.size()) {
      return knownParameterTypes.get(index);
    }
    return null;
  }

  @Override
  public @Nullable ParameterRType knownParameterType(String name, boolean dotsCoversAll) {
    int index = knownParameterNames.indexOf(name);
    if (index != -1) {
      return knownParameterTypes.get(index);
    }
    return dotsCoversAll && hasKnownDots()
        ? Objects.requireNonNull(knownParameterType("...", false))
        : null;
  }

  @Override
  public BaseRType.NotPromise base() {
    return functionType == null
        ? BaseRType.ANY_FUN
        : switch (functionType) {
          case CLOSURE -> BaseRType.CLOSURE;
          case SPECIAL -> BaseRType.SPECIAL;
          case BUILTIN -> BaseRType.BUILTIN;
        };
  }

  @Override
  public boolean isSubsetOf(RValueType other) {
    return RGenericValueType.genericIsSubset(this, other)
        && switch (other) {
          case RGenericValueType ignored -> true;
          case RFunctionTypeImpl o ->
              knownParameterNames.containsAll(o.knownParameterNames)
                  && zipParameterTypes(this, o, ParameterRType::isSupersetOf).allMatch(x -> x)
                  && hasMoreParams.isSubsetOf(o.hasMoreParams)
                  && returnType.isSubsetOf(o.returnType);
          default -> false;
        };
  }

  @Override
  public RValueType union(RValueType other) {
    var genericUnion = RGenericValueType.genericUnion(this, other);
    return !(other instanceof RFunctionTypeImpl o)
        ? genericUnion
        : new RFunctionTypeImpl(
            genericUnion.exactValue(),
            functionType == o.functionType ? functionType : null,
            genericUnion.attributes(),
            genericUnion.referenceCount(),
            Streams.concat(
                    commonParameterNames(this, o),
                    o.parameterNamesMissingFrom(this),
                    parameterNamesMissingFrom(o))
                .collect(ImmutableList.toImmutableList()),
            Streams.concat(
                    zipParameterTypes(this, o, ParameterRType::intersection),
                    o.parameterTypesMissingFrom(this),
                    parameterTypesMissingFrom(o))
                .collect(ImmutableList.toImmutableList()),
            hasMoreParams.union(o.hasMoreParams),
            returnType.union(o.returnType));
  }

  @Override
  public @Nullable RValueType intersection(RValueType other) {
    var genericIntersection = RGenericValueType.genericIntersection(this, other);
    if (genericIntersection == null) {
      return null;
    }
    return switch (other) {
      case RGenericValueType ignored ->
          new RFunctionTypeImpl(
              genericIntersection.exactValue(),
              FunctionRType.of(genericIntersection.base()),
              genericIntersection.attributes(),
              genericIntersection.referenceCount(),
              knownParameterNames,
              knownParameterTypes,
              hasMoreParams,
              returnType);
      case RFunctionTypeImpl o -> {
        if (functionType() != null && o.functionType != null && functionType() != o.functionType) {
          yield null;
        }
        var mergedFunctionType = functionType != null ? functionType : o.functionType;

        yield new RFunctionTypeImpl(
            genericIntersection.exactValue(),
            mergedFunctionType,
            genericIntersection.attributes(),
            genericIntersection.referenceCount(),
            commonParameterNames(this, o).collect(ImmutableList.toImmutableList()),
            zipParameterTypes(this, o, ParameterRType::union)
                .collect(ImmutableList.toImmutableList()),
            hasMoreParams.intersection(o.hasMoreParams),
            returnType.intersection(o.returnType));
      }
      default ->
          throw new AssertionError(
              "RGenericSexpType.genericIntersection should've returned null for different specific types");
    };
  }

  @Override
  public String toString() {
    var sb = RGenericValueType.commonToStringStart(this);
    if (exactValue != null) {
      return sb.toString();
    }

    sb.append("(");
    for (int i = 0; i < knownParameterNames.size(); i++) {
      if (i > 0) {
        sb.append(", ");
      }
      sb.append(RegSymSXP.escape(knownParameterNames.get(i)))
          .append(": ")
          .append(knownParameterTypes.get(i));
    }
    return sb.append(") → ").append(returnType).toString();
  }

  private static Stream<String> commonParameterNames(RFunctionType lhs, RFunctionType rhs) {
    return lhs.knownParameterNames().stream().filter(rhs.knownParameterNames()::contains);
  }

  private static <R> Stream<R> zipParameterTypes(
      RFunctionType lhs, RFunctionType rhs, BiFunction<ParameterRType, ParameterRType, R> f) {
    return commonParameterNames(lhs, rhs)
        .map(x -> f.apply(lhs.knownParameterType(x, false), rhs.knownParameterType(x, false)));
  }

  private Stream<String> parameterNamesMissingFrom(RFunctionType other) {
    return knownParameterNames().stream().filter(x -> !other.knownParameterNames().contains(x));
  }

  private Stream<ParameterRType> parameterTypesMissingFrom(RFunctionType other) {
    return parameterNamesMissingFrom(other).map(x -> knownParameterType(x, false));
  }
}
