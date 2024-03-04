package org.prlprg.ir.type;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.Streams;
import java.util.Objects;
import java.util.function.BiFunction;
import java.util.stream.Stream;
import javax.annotation.Nonnull;
import javax.annotation.Nullable;
import org.prlprg.ir.type.BaseRType.Closure;
import org.prlprg.ir.type.RClosureTypeImpl.Argument;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.SEXPs;

public sealed interface RClosureType extends RType {
  @Override
  @Nullable CloSXP exactValue();

  @SuppressWarnings("NullableProblems")
  @Override
  @Nonnull
  BaseRType base();

  @Override
  @Nonnull
  AttributesType attributes();

  /** Names of known (required and optional) arguments. */
  ImmutableList<String> knownArgumentNames();

  /** Types of known (required and optional) arguments. */
  ImmutableList<Argument> knownArgumentTypes();

  /** Whether the closure may have more arguments than we know of. */
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

  /** Does the closure have dots? */
  default Troolean hasDots() {
    return hasKnownDots() ? Troolean.YES : Troolean.of(hasMoreArgs());
  }
}

/** The argument and return types of a closure which are relevant for static analysis. */
record RClosureTypeImpl(
    @Override @Nullable CloSXP exactValue,
    @Override AttributesType attributes,
    @Override MaybeNat referenceCount,
    @Override ImmutableList<String> knownArgumentNames,
    @Override ImmutableList<Argument> knownArgumentTypes,
    @Override NoOrMaybe hasMoreArgs,
    @Override RType returnType)
    implements RClosureType {
  public RClosureTypeImpl {
    if (knownArgumentNames.size() != knownArgumentTypes.size()) {
      throw new IllegalArgumentException(
          "knownArgumentNames and knownArgumentTypes must have the same size");
    }
  }

  /**
   * Returns the information we can get out of arguments / expected return of the value if it's a
   * closure, otherwise {@code null}.
   */
  public static RClosureType exact(CloSXP value) {
    return new RClosureTypeImpl(
        value,
        AttributesTypes.exact(value.attributes()),
        MaybeNat.UNKNOWN,
        ImmutableList.copyOf(value.formals().names()),
        value.formals().values().stream()
            .map(x -> new Argument(RTypes.ANY, NoOrMaybe.of(x == SEXPs.MISSING_ARG)))
            .collect(ImmutableList.toImmutableList()),
        NoOrMaybe.NO,
        RTypes.ANY);
  }

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
  public BaseRType base() {
    return new Closure();
  }

  @Override
  public boolean isSubsetOf(RType other) {
    return switch (other) {
      case RAnyType ignored -> true;
      case RClosureType o ->
          knownArgumentNames().containsAll(o.knownArgumentNames())
              && zipArgumentTypes(this, o, Argument::isSupersetOf).allMatch(x -> x)
              && hasMoreArgs().isSubsetOf(o.hasMoreArgs())
              && returnType().isSubsetOf(o.returnType());
      default -> false;
    };
  }

  @Override
  public RType union(RType other) {
    switch (other) {
      case RAnyType ignored -> {
        return RTypes.NOTHING;
      }
      case RNothingType ignored -> {
        return this;
      }
      case RMissingOrType o -> {
        return RTypes.missingOr(union(o.notMissing()));
      }
      default -> {}
    }
    if (Objects.equals(other.exactValue(), exactValue())) {
      return this;
    }

    if (other instanceof RClosureTypeImpl o) {
      return new RClosureTypeImpl(
          Objects.equals(o.exactValue(), exactValue()) ? exactValue : null,
          attributes().union(o.attributes()),
          referenceCount().union(o.referenceCount()),
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
    } else {
      return new ROtherTypeImpl(
          exactValue,
          new BaseRType.Any(),
          attributes().union(other.attributes()),
          referenceCount().union(other.referenceCount()));
    }
  }

  @Override
  public RType intersection(RType other) {
    switch (other) {
      case RAnyType ignored -> {
        return this;
      }
      case RNothingType ignored -> {
        return RTypes.NOTHING;
      }
      case RMissingOrType o -> {
        return RTypes.missingOr(intersection(o.notMissing()));
      }
      default -> {}
    }
    if (Objects.equals(other.exactValue(), exactValue())) {
      return this;
    } else if (other.exactValue() != null && exactValue() != null) {
      return RTypes.NOTHING;
    }
    var mergedAttributes = attributes().intersection(Objects.requireNonNull(other.attributes()));
    if (mergedAttributes == null) {
      return RTypes.NOTHING;
    }
    var mergedReferenceCount = referenceCount().intersection(other.referenceCount());
    if (mergedReferenceCount == null) {
      return RTypes.NOTHING;
    }

    return switch (other) {
      case RClosureTypeImpl o ->
          new RClosureTypeImpl(
              exactValue,
              mergedAttributes,
              mergedReferenceCount,
              commonArgumentNames(this, o).collect(ImmutableList.toImmutableList()),
              zipArgumentTypes(this, o, Argument::union).collect(ImmutableList.toImmutableList()),
              hasMoreArgs().intersection(o.hasMoreArgs()),
              returnType().intersection(o.returnType()));
      case ROtherType ignored ->
          new RClosureTypeImpl(
              exactValue,
              mergedAttributes,
              mergedReferenceCount,
              knownArgumentNames(),
              knownArgumentTypes(),
              hasMoreArgs(),
              returnType());
      default -> RTypes.NOTHING;
    };
  }

  @Override
  public String toString() {
    var builder = new StringBuilder().append("(");
    for (int i = 0; i < knownArgumentNames.size(); i++) {
      if (i > 0) {
        builder.append(", ");
      }
      builder.append(knownArgumentNames.get(i)).append(":").append(knownArgumentTypes.get(i));
    }
    return builder.append(") -> ").append(returnType).toString();
  }

  private static Stream<String> commonArgumentNames(RClosureType lhs, RClosureType rhs) {
    return lhs.knownArgumentNames().stream().filter(rhs.knownArgumentNames()::contains);
  }

  private static <R> Stream<R> zipArgumentTypes(
      RClosureType lhs, RClosureType rhs, BiFunction<Argument, Argument, R> f) {
    return commonArgumentNames(lhs, rhs)
        .map(x -> f.apply(lhs.knownArgumentType(x, false), rhs.knownArgumentType(x, false)));
  }

  private Stream<String> argumentNamesMissingFrom(RClosureType other) {
    return knownArgumentNames().stream().filter(x -> !other.knownArgumentNames().contains(x));
  }

  private Stream<Argument> argumentTypesMissingFrom(RClosureType other) {
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
