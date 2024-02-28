package org.prlprg.ir.type;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.Streams;
import java.util.Objects;
import java.util.function.BiFunction;
import java.util.stream.Stream;
import javax.annotation.Nonnull;
import javax.annotation.Nullable;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;

/** The argument and return types of a closure which are relevant for static analysis. */
public record RClosureType(
    RType returnType,
    ImmutableList<String> argumentNames,
    ImmutableList<Argument> argumentTypes,
    boolean hasDots)
    implements BoundedLattice<RClosureType> {
  public RClosureType {
    if (argumentNames.size() != argumentTypes.size()) {
      throw new IllegalArgumentException("argumentNames and argumentTypes must have the same size");
    }
    if (hasDots && !argumentNames.contains("...")) {
      throw new IllegalArgumentException("hasDots is true but there's no '...' in argumentNames");
    }
    if (!hasDots && argumentNames.contains("...")) {
      throw new IllegalArgumentException("hasDots is false but there's a '...' in argumentNames");
    }
  }

  /**
   * Returns the information we can get out of arguments / expected return of the value if it's a
   * closure, otherwise {@code null}.
   */
  public static @Nullable RClosureType of(SEXP value) {
    if (!(value instanceof CloSXP clos)) {
      return null;
    }
    return new RClosureType(
        RTypes.ANY,
        ImmutableList.copyOf(clos.formals().names()),
        clos.formals().values().stream()
            .map(x -> new Argument(RTypes.ANY, x == SEXPs.MISSING_ARG))
            .collect(ImmutableList.toImmutableList()),
        clos.formals().names().stream().anyMatch(x -> Objects.equals(x, "...")));
  }

  /**
   * Returns the type of the argument at index {@code i}, or {@code null} if the index is out of
   * bounds. If this has dots and the index is at or after them, it will return an any argument.
   */
  public @Nullable Argument argumentType(int index) {
    if (index < 0) {
      throw new IllegalArgumentException("index must be non-negative");
    }
    var dotsIndex = argumentNames.indexOf("...");
    if (dotsIndex > -1 && index >= dotsIndex) {
      return argumentTypes.get(dotsIndex);
    }
    return index < argumentTypes.size() ? argumentTypes.get(index) : null;
  }

  /**
   * Returns the type of the argument named {@code name}, or {@code null} if that isn't one of the
   * arguments. If {@code dotsCoversAll} is true and this has dots, it will return an any argument
   * if there's no argument with the name ({@code "..."} will still return an argument).
   */
  public @Nullable Argument argumentType(String name, boolean dotsCoversAll) {
    int index = argumentNames.indexOf(name);
    if (index != -1) {
      return argumentTypes.get(index);
    }
    return dotsCoversAll && hasDots ? Objects.requireNonNull(argumentType("...", false)) : null;
  }

  @Override
  public boolean isSubsetOf(RClosureType other) {
    return returnType.isSubsetOf(other.returnType)
        && argumentNames.containsAll(other.argumentNames)
        && zipArgumentTypes(this, other, Argument::isSupersetOf).allMatch(x -> x)
        && (hasDots || !other.hasDots);
  }

  @Override
  public RClosureType union(RClosureType other) {
    return new RClosureType(
        returnType.union(other.returnType),
        Streams.concat(
                commonArgumentNames(this, other),
                other.argumentNamesMissingFrom(this),
                argumentNamesMissingFrom(other))
            .collect(ImmutableList.toImmutableList()),
        Streams.concat(
                zipArgumentTypes(this, other, Argument::intersection),
                other.argumentTypesMissingFrom(this),
                argumentTypesMissingFrom(other))
            .collect(ImmutableList.toImmutableList()),
        hasDots && other.hasDots);
  }

  @Nonnull
  @Override
  public RClosureType intersection(RClosureType other) {
    return new RClosureType(
        returnType.intersection(other.returnType),
        commonArgumentNames(this, other).collect(ImmutableList.toImmutableList()),
        zipArgumentTypes(this, other, Argument::union).collect(ImmutableList.toImmutableList()),
        hasDots || other.hasDots);
  }

  @Override
  public String toString() {
    var builder = new StringBuilder().append("(");
    for (int i = 0; i < argumentNames.size(); i++) {
      if (i > 0) {
        builder.append(", ");
      }
      builder.append(argumentNames.get(i)).append(":").append(argumentTypes.get(i));
    }
    return builder.append(") -> ").append(returnType).toString();
  }

  private static Stream<String> commonArgumentNames(RClosureType lhs, RClosureType rhs) {
    return lhs.argumentNames.stream().filter(rhs.argumentNames::contains);
  }

  private static <R> Stream<R> zipArgumentTypes(
      RClosureType lhs, RClosureType rhs, BiFunction<Argument, Argument, R> f) {
    return commonArgumentNames(lhs, rhs)
        .map(x -> f.apply(lhs.argumentType(x, false), rhs.argumentType(x, false)));
  }

  private Stream<String> argumentNamesMissingFrom(RClosureType other) {
    return argumentNames.stream().filter(x -> !other.argumentNames.contains(x));
  }

  private Stream<Argument> argumentTypesMissingFrom(RClosureType other) {
    return argumentNamesMissingFrom(other).map(x -> argumentType(x, false));
  }

  public record Argument(RType type, boolean isRequired) implements BoundedLattice<Argument> {
    @Override
    public boolean isSubsetOf(Argument other) {
      return type.isSubsetOf(other.type) && (!isRequired || other.isRequired);
    }

    @Override
    public Argument union(Argument other) {
      return new Argument(type.union(other.type), isRequired && other.isRequired);
    }

    @Override
    public Argument intersection(Argument other) {
      return new Argument(type.intersection(other.type), isRequired || other.isRequired);
    }

    @Override
    public String toString() {
      return (isRequired ? "" : "?") + type;
    }
  }
}
