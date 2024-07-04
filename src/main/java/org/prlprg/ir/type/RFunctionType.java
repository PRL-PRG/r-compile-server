package org.prlprg.ir.type;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.Streams;
import java.util.ArrayList;
import java.util.List;
import java.util.Objects;
import java.util.stream.Stream;
import javax.annotation.Nullable;
import org.prlprg.ir.type.lattice.Maybe;
import org.prlprg.ir.type.lattice.MaybeNat;
import org.prlprg.ir.type.lattice.YesOrMaybe;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.util.Strings;

/**
 * Function (closure, builtin, or special) {@link RType} projection.
 *
 * <p>A function is represented as a set of overloads, which are specific argument names and types.
 * Anything called with different argument names and types has unspecified behavior (there's an
 * "any" overload which will catch any combination of argument types, in case we know a function
 * will return something more specific and/or won't perform certain effects).
 */
public sealed interface RFunctionType extends RValueType {
  /** Whether this is a closure, builtin, or special, if known. */
  @Nullable FunctionRType functionType();

  /** Whether this is a closure. */
  default Maybe isClosure() {
    return functionType() == FunctionRType.CLOSURE
        ? Maybe.YES
        : functionType() != null ? Maybe.NO : Maybe.MAYBE;
  }

  /** Whether this is a non-special builtin. */
  default Maybe isNonSpecialBuiltin() {
    return functionType() == FunctionRType.BUILTIN
        ? Maybe.YES
        : functionType() != null ? Maybe.NO : Maybe.MAYBE;
  }

  /** Whether this is a special builtin. */
  default Maybe isSpecialBuiltin() {
    return functionType() == FunctionRType.SPECIAL
        ? Maybe.YES
        : functionType() != null ? Maybe.NO : Maybe.MAYBE;
  }

  /** Known overloads, ordered so that ones with subsuming parameters are before. */
  ImmutableList<OverloadRType> knownOverloads();

  /** Does the function have dots? */
  Maybe hasDots();

  /**
   * Returns the most specific known overload for the given argument types, or {@code null} if there
   * is none.
   */
  default @Nullable OverloadRType mostSpecificOverload(List<ArgumentRType> arguments) {
    return knownOverloads().stream().filter(o -> o.matches(arguments)).findFirst().orElse(null);
  }
}

record RFunctionTypeImpl(
    @Override @Nullable SEXP exactValue,
    @Override @Nullable FunctionRType functionType,
    @Override AttributesType attributes,
    @Override MaybeNat referenceCount,
    @Override ImmutableList<OverloadRType> knownOverloads,
    @Override Maybe hasDots)
    implements RFunctionType {
  /**
   * Removes overloads that are subsumed by others from the stream, and sorts them so that overloads
   * with superset (less-specific) parameters are after.
   */
  static ImmutableList<OverloadRType> normalizeOverloadsWrtSubsuming(
      Stream<OverloadRType> overloads) {
    return normalizeOverloadsWrtSubsuming(overloads.toList());
  }

  /**
   * Removes overloads that are subsumed by others from the stream, and sorts them so that overloads
   * with superset (less-specific) parameters are after.
   */
  static ImmutableList<OverloadRType> normalizeOverloadsWrtSubsuming(
      List<OverloadRType> overloads) {
    var list = new ArrayList<>(overloads);

    // Remove overloads that are subsumed by others, first by setting to `null`, then removing all
    // `null`s.
    for (var i = 0; i < list.size(); i++) {
      var o1 = list.get(i);
      if (o1 == null) continue;
      for (var j = 0; j < list.size(); j++) {
        var o2 = list.get(j);
        if (o2 == null || i == j) continue;
        if (o1.subsumes(o2)) {
          list.set(j, null);
        }
      }
    }
    list.removeIf(Objects::isNull);

    // Sort so that overloads with superset parameters are after.
    // Ensure the list order is otherwise deterministic for tests/assertions
    // (`normalizeOverloadsWrtSubsuming(normalizeOverloadsWrtSubsuming(x)) =
    // normalizeOverloadsWrtSubsuming(x)`).
    list.sort(
        (o1, o2) -> {
          var o1SupersetsO2 = o1.parametersAreSuperset(o2) == YesOrMaybe.YES;
          var o2SupersetsO1 = o2.parametersAreSuperset(o1) == YesOrMaybe.YES;
          // We need the !o2SupersetsO1 and !o1SupersetsO2 checks to keep deterministic if they are
          // the same.
          if (o1SupersetsO2 && !o2SupersetsO1) {
            return 1;
          }
          if (o2SupersetsO1 && !o1SupersetsO2) {
            return -1;
          }

          return ((OverloadRTypeImpl) o1).rawCompareTo((OverloadRTypeImpl) o2);
        });
    return ImmutableList.copyOf(list);
  }

  RFunctionTypeImpl {
    RGenericValueType.commonSanityChecks(this);
    if (hasDots != Maybe.YES && knownOverloads.stream().anyMatch(OverloadRType::hasDots)) {
      throw new IllegalArgumentException("hasDots must be YES if any overload has dots");
    }
    if (hasDots == Maybe.YES && knownOverloads.stream().noneMatch(OverloadRType::hasDots)) {
      throw new IllegalArgumentException("hasDots must be MAYBE or NO if no overload have dots");
    }
    assert knownOverloads.equals(normalizeOverloadsWrtSubsuming(knownOverloads))
        : "overloads aren't normalized (sorted and deduped) wrt. subsuming:\noriginal:\n- "
            + Strings.join("\n- ", knownOverloads)
            + "\nnormalized:\n- "
            + Strings.join("\n- ", normalizeOverloadsWrtSubsuming(knownOverloads));
  }

  /** Returns the most precise type this closure is an instance of. */
  static RFunctionType exact(CloSXP value) {
    var overload = OverloadRTypes.exact(value);
    return new RFunctionTypeImpl(
        value,
        FunctionRType.CLOSURE,
        AttributesTypes.exact(value.attributes()),
        MaybeNat.UNKNOWN,
        ImmutableList.of(overload),
        Maybe.of(overload.hasDots()));
  }

  // TODO: `RFunctionType.ofBuiltin(int bltOrSpecNum)` (hard-code immutable list of builtin and
  // special types).

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
          case RGenericValueType _ -> true;
          case RFunctionTypeImpl o ->
              o.knownOverloads.stream()
                      .allMatch(oko -> knownOverloads.stream().anyMatch(ko -> ko.subsumes(oko)))
                  && hasDots.isSubsetOf(o.hasDots);
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
            normalizeOverloadsWrtSubsuming(
                Streams.concat(
                    knownOverloads.stream()
                        .filter(ko -> o.knownOverloads.stream().anyMatch(oko -> oko.subsumes(ko))),
                    o.knownOverloads.stream()
                        .filter(oko -> knownOverloads.stream().anyMatch(ko -> ko.subsumes(oko))))),
            hasDots.union(o.hasDots));
  }

  @Override
  public @Nullable RValueType intersection(RValueType other) {
    var genericIntersection = RGenericValueType.genericIntersection(this, other);
    if (genericIntersection == null) {
      return null;
    }
    return switch (other) {
      case RGenericValueType _ ->
          new RFunctionTypeImpl(
              genericIntersection.exactValue(),
              FunctionRType.of(genericIntersection.base()),
              genericIntersection.attributes(),
              genericIntersection.referenceCount(),
              knownOverloads,
              hasDots);
      case RFunctionTypeImpl o -> {
        if (functionType() != null && o.functionType != null && functionType() != o.functionType) {
          yield null;
        }
        var mergedFunctionType = functionType != null ? functionType : o.functionType;
        var mergedHasDots = hasDots.intersection(o.hasDots);
        if (mergedHasDots == null) {
          yield null;
        }

        yield new RFunctionTypeImpl(
            genericIntersection.exactValue(),
            mergedFunctionType,
            genericIntersection.attributes(),
            genericIntersection.referenceCount(),
            normalizeOverloadsWrtSubsuming(
                Streams.concat(knownOverloads.stream(), o.knownOverloads.stream())),
            mergedHasDots);
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

    if (hasDots == Maybe.MAYBE) {
      sb.append(".?");
    }
    switch (knownOverloads.size()) {
      case 0 -> sb.append(base());
      case 1 -> sb.append(knownOverloads.getFirst());
      default -> {
        sb.append("(\n");
        for (var overload : knownOverloads) {
          sb.append("  ").append(overload).append("\n");
        }
        sb.append(")");
      }
    }
    return sb.toString();
  }
}
