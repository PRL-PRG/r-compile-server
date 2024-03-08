package org.prlprg.ir.type;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.Streams;
import java.util.Objects;
import java.util.function.BiFunction;
import java.util.stream.Stream;
import javax.annotation.Nullable;
import org.prlprg.ir.type.RFunctionTypeImpl.Argument;
import org.prlprg.sexp.CloSXP;
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

  /** Names of known (required and optional) arguments. */
  ImmutableList<String> knownArgumentNames();

  /** Types of known (required and optional) arguments. */
  ImmutableList<Argument> knownArgumentTypes();

  /** Whether the function may have more arguments than we know of. */
  NoOrMaybe hasMoreArgs();

  /** Known return type. */
  RType returnType();

  /**
   * Returns the type of the argument at index {@code i}, or {@code null} if the index is past the
   * end of the known arguments (if {@link #hasMoreArgs()} is {@code false} it's guaranteed an
   * illegal extra argument, otherwise that and the argument itself are unknown). If this has dots
   * and the index is at or after them, it will return an {@code Any} argument.
   */
  @Nullable Argument knownArgumentType(int index);

  /**
   * Returns the type of the argument named {@code name}, or {@code null} if that isn't one of the
   * known arguments (if {@link #hasMoreArgs()} is {@code false} it's guaranteed an illegal extra
   * argument, otherwise that and the argument itself are unknown). If {@code dotsCoversAll} is true
   * and this has dots, it will return an {@code Any} argument if there's no argument with the name
   * (if this has dots but you pass {@code "..."}, even if {@code dotsCoversAll} is false it will
   * return an {@code Any} argument).
   */
  @Nullable Argument knownArgumentType(String name, boolean dotsCoversAll);

  /** Are dots in the known arguments? */
  default boolean hasKnownDots() {
    return knownArgumentNames().contains("...");
  }

  /** Does the function have dots? */
  default Troolean hasDots() {
    return hasKnownDots() ? Troolean.YES : Troolean.of(hasMoreArgs());
  }
}

record RFunctionTypeImpl(
    @Override @Nullable SEXP exactValue,
    @Override @Nullable FunctionRType functionType,
    @Override AttributesType attributes,
    @Override MaybeNat referenceCount,
    @Override ImmutableList<String> knownArgumentNames,
    @Override ImmutableList<Argument> knownArgumentTypes,
    @Override NoOrMaybe hasMoreArgs,
    @Override RType returnType)
    implements RFunctionType {
  public RFunctionTypeImpl {
    if (knownArgumentNames.size() != knownArgumentTypes.size()) {
      throw new IllegalArgumentException(
          "knownArgumentNames and knownArgumentTypes must have the same size");
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
            .map(x -> new Argument(RTypes.ANY, NoOrMaybe.of(x == SEXPs.MISSING_ARG)))
            .collect(ImmutableList.toImmutableList()),
        NoOrMaybe.NO,
        RTypes.ANY);
  }

  // TODO: `RFunctionType.ofBuiltin(int bltOrSpecNum)` (hard-code immutable list of builtin and
  // special types).

  @Override
  public @Nullable Argument knownArgumentType(int index) {
    if (index < 0) {
      throw new IllegalArgumentException("index must be non-negative");
    }
    var dotsIndex = knownArgumentNames.indexOf("...");
    if (dotsIndex > -1 && index >= dotsIndex) {
      return knownArgumentTypes.get(dotsIndex);
    }
    if (index < knownArgumentTypes.size()) {
      return knownArgumentTypes.get(index);
    }
    return null;
  }

  @Override
  public @Nullable Argument knownArgumentType(String name, boolean dotsCoversAll) {
    int index = knownArgumentNames.indexOf(name);
    if (index != -1) {
      return knownArgumentTypes.get(index);
    }
    return dotsCoversAll && hasKnownDots()
        ? Objects.requireNonNull(knownArgumentType("...", false))
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
    return RGenericValueType.commonIsSubset(this, other)
        && switch (other) {
          case RGenericValueType ignored -> true;
          case RFunctionTypeImpl o ->
              knownArgumentNames().containsAll(o.knownArgumentNames())
                  && zipArgumentTypes(this, o, Argument::isSupersetOf).allMatch(x -> x)
                  && hasMoreArgs().isSubsetOf(o.hasMoreArgs())
                  && returnType().isSubsetOf(o.returnType());
          default -> false;
        };
  }

  @Override
  public RValueType union(RValueType other) {
    var commonUnion = RGenericValueType.commonUnion(this, other);
    return !(other instanceof RFunctionTypeImpl o)
        ? commonUnion
        : new RFunctionTypeImpl(
            commonUnion.exactValue(),
            functionType() == o.functionType() ? functionType() : null,
            commonUnion.attributes(),
            commonUnion.referenceCount(),
            Streams.concat(
                    commonArgumentNames(this, o),
                    o.argumentNamesMissingFrom(this),
                    argumentNamesMissingFrom(o))
                .collect(ImmutableList.toImmutableList()),
            Streams.concat(
                    zipArgumentTypes(this, o, Argument::intersection),
                    o.argumentTypesMissingFrom(this),
                    argumentTypesMissingFrom(o))
                .collect(ImmutableList.toImmutableList()),
            hasMoreArgs().union(o.hasMoreArgs()),
            returnType().union(o.returnType()));
  }

  @Override
  public @Nullable RValueType intersection(RValueType other) {
    var commonIntersection = RGenericValueType.commonIntersection(this, other);
    if (commonIntersection == null) {
      return null;
    }
    return switch (other) {
      case RGenericValueType ignored -> commonIntersection;
      case RFunctionTypeImpl o -> {
        if (functionType() != null
            && o.functionType() != null
            && functionType() != o.functionType()) {
          yield null;
        }
        var mergedFunctionType = functionType() != null ? functionType() : o.functionType();

        yield new RFunctionTypeImpl(
            commonIntersection.exactValue(),
            mergedFunctionType,
            commonIntersection.attributes(),
            commonIntersection.referenceCount(),
            commonArgumentNames(this, o).collect(ImmutableList.toImmutableList()),
            zipArgumentTypes(this, o, Argument::union).collect(ImmutableList.toImmutableList()),
            hasMoreArgs().intersection(o.hasMoreArgs()),
            returnType().intersection(o.returnType()));
      }
      default ->
          throw new AssertionError(
              "RGenericSexpType.commonIntersection should've returned null for different specific types");
    };
  }

  @Override
  public String toString() {
    var builder = RGenericValueType.commonToStringStart(this).append("(");
    for (int i = 0; i < knownArgumentNames.size(); i++) {
      if (i > 0) {
        builder.append(", ");
      }
      builder.append(knownArgumentNames.get(i)).append(":").append(knownArgumentTypes.get(i));
    }
    return builder.append(") -> ").append(returnType).toString();
  }

  private static Stream<String> commonArgumentNames(RFunctionType lhs, RFunctionType rhs) {
    return lhs.knownArgumentNames().stream().filter(rhs.knownArgumentNames()::contains);
  }

  private static <R> Stream<R> zipArgumentTypes(
      RFunctionType lhs, RFunctionType rhs, BiFunction<Argument, Argument, R> f) {
    return commonArgumentNames(lhs, rhs)
        .map(x -> f.apply(lhs.knownArgumentType(x, false), rhs.knownArgumentType(x, false)));
  }

  private Stream<String> argumentNamesMissingFrom(RFunctionType other) {
    return knownArgumentNames().stream().filter(x -> !other.knownArgumentNames().contains(x));
  }

  private Stream<Argument> argumentTypesMissingFrom(RFunctionType other) {
    return argumentNamesMissingFrom(other).map(x -> knownArgumentType(x, false));
  }

  public record Argument(RType type, NoOrMaybe isRequired) implements BoundedLattice<Argument> {
    @Override
    public boolean isSubsetOf(Argument other) {
      return type.isSubsetOf(other.type)
          && (isRequired == NoOrMaybe.NO || other.isRequired != NoOrMaybe.NO);
    }

    @Override
    public Argument union(Argument other) {
      return new Argument(type.union(other.type), isRequired.intersection(other.isRequired));
    }

    @Override
    public Argument intersection(Argument other) {
      return new Argument(type.intersection(other.type), isRequired.union(other.isRequired));
    }

    @Override
    public String toString() {
      return (isRequired == NoOrMaybe.NO ? "" : "?") + type;
    }
  }
}
