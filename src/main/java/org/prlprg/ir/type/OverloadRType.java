package org.prlprg.ir.type;

import com.google.common.base.Objects;
import com.google.common.collect.ImmutableList;
import com.google.common.collect.ImmutableMap;
import com.google.common.collect.Iterables;
import com.google.common.collect.Streams;
import com.google.common.primitives.ImmutableIntArray;
import java.util.Arrays;
import java.util.List;
import javax.annotation.Nullable;
import org.jetbrains.annotations.Unmodifiable;
import org.prlprg.ir.type.generic.GenericOverloadEffects;
import org.prlprg.ir.type.generic.GenericOverloadReturnType;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.ir.type.lattice.YesOrMaybe;
import org.prlprg.util.Strings;

/**
 * A function overload: if we call the function with these arguments, it will return this value and
 * have these effects.
 */
public sealed interface OverloadRType {
  /** Parameter names, optional-ness, and types. */
  ImmutableList<ParameterRType> parameters();

  /** Parameter names mapped to their corresponding types. */
  ImmutableMap<String, ParameterRType> parameterMap();

  /**
   * Returns a list which maps the index of each <i>argument</i> to that of the matching
   * <i>parameter</i>, where <b>matching</b> is defined the same way as {@code matchArgs_NR} in
   * {@code match.c} of GNU-R.
   *
   * <p>Specifically, matching is defined as (in order of priority, so if an argument/parameter pair
   * satisfies an earlier clause, they will match that way):
   *
   * <ul>
   *   <li>Both are named, and the names are equal.
   *   <li>Both are named, the argument name is a prefix of the parameter name, and the matching
   *       parameter is before the dots parameter (if present).
   *   <li>The argument isn't named, and in the list of unnamed arguments, has the same index as a
   *       parameter that is in the list of parameters still not matched by name that are before the
   *       dots parameter (if present).
   *   <li>If the dots parameter is present, any remaining arguments match it.
   * </ul>
   *
   * Returns {@code null} if the arguments don't all match <i>or</i> there are unmatched required
   * parameters. However, <i>does not</i> check that the argument types are subtypes of their
   * matching parameter types.
   */
  default @Nullable ImmutableIntArray matchIndices(List<ArgumentRType> arguments) {
    // ???: This is based on `matchArgs_NR` in `match.c`, but it's still probably not 100% correct.
    var remainingArgs = new ArgumentRType[arguments.size()];
    var remainingParams = new ParameterRType[parameters().size()];
    var matches = new int[arguments.size()];
    arguments.toArray(remainingArgs);
    parameters().toArray(remainingParams);
    Arrays.fill(matches, -1);

    var beforeDots = dotsIndex() == -1 ? parameters().size() : dotsIndex();

    // First pass: equal names (don't match/remove dots)
    for (int i = 0; i < remainingArgs.length; i++) {
      var a = remainingArgs[i];
      if (a.name() != null && !a.isDots()) {
        for (int j = 0; j < remainingParams.length; j++) {
          var p = remainingParams[j];
          // `p.name().equals(a.name())` implies `!p.isDots()`
          if (p.name() != null && p.name().equals(a.name())) {
            matches[i] = j;
            remainingArgs[i] = null;
            remainingParams[j] = null;
            break;
          }
        }
      }
    }

    // Second pass: prefix names before dots (don't match/remove dots)
    for (int i = 0; i < remainingArgs.length; i++) {
      var a = remainingArgs[i];
      if (a != null && a.name() != null && !a.isDots()) {
        for (int j = 0; j < beforeDots; j++) {
          var p = remainingParams[j];
          if (p != null && p.name() != null && !p.isDots() && p.name().startsWith(a.name())) {
            matches[i] = j;
            remainingArgs[i] = null;
            remainingParams[j] = null;
            break;
          }
        }
      }
    }

    // Third pass: unnamed arguments before dots (don't match/remove dots)
    for (int i = 0, j = 0; i < remainingArgs.length && j < beforeDots; i++, j++) {
      // `.isDots()` implies `.name() != null`
      while (remainingArgs[i] == null || remainingArgs[i].name() != null) {
        i++;
        if (i >= remainingArgs.length) {
          break;
        }
      }
      while (remainingParams[i] == null) {
        j++;
        if (j >= remainingParams.length) {
          break;
        }
      }
      matches[i] = j;
      remainingArgs[i] = null;
      remainingParams[j] = null;
    }

    // Fourth pass: everything is dots (including dots).
    if (dotsIndex() != -1) {
      for (int i = 0; i < remainingArgs.length; i++) {
        if (remainingArgs[i] != null) {
          matches[i] = dotsIndex();
          remainingArgs[i] = null;
        }
      }
      remainingParams[dotsIndex()] = null;
    }

    // Lastly, check if there are any remaining arguments or required parameters.
    for (ArgumentRType remainingArg : remainingArgs) {
      if (remainingArg != null) {
        return null;
      }
    }
    for (ParameterRType remainingParam : remainingParams) {
      if (remainingParam != null && remainingParam.isRequired() != NoOrMaybe.NO) {
        return null;
      }
    }
    assert Arrays.stream(matches).allMatch(x -> x != -1);

    return ImmutableIntArray.copyOf(matches);
  }

  /**
   * If every argument has a matching parameter, returns the normalized list where each argument's
   * index is that of the parameter, and indices of optional parameters are arguments with the
   * parameter's types. Returns {@code null} if there are any unmatched arguments or required
   * parameters.
   */
  default @Nullable @Unmodifiable NormalizedArityRType normalizeToMatch(
      List<ArgumentRType> arguments) {
    var indices = matchIndices(arguments);
    if (indices == null) {
      return null;
    }

    var normalizedTypes = new RType[parameters().size()];
    var dotArgs = ImmutableList.<ArgumentRType>builder();
    for (int i = 0; i < indices.length(); i++) {
      var j = indices.get(i);
      var a = arguments.get(i);
      // Multiple arguments may correspond to the same parameter if there are dots.
      var nType = normalizedTypes[j] == null ? a.type() : normalizedTypes[j].union(a.type());
      normalizedTypes[j] = nType;
      if (j == dotsIndex()) {
        dotArgs.add(a);
      }
    }

    // This works because, since `indices != null`, every required parameter is guaranteed to have
    // a corresponding argument. Thus, `normalized` is left with only unmatched optional parameters.
    for (int i = 0; i < normalizedTypes.length; i++) {
      if (normalizedTypes[i] == null) {
        normalizedTypes[i] = parameters().get(i).type();
      }
    }

    return new NormalizedArityRTypeImpl(ImmutableList.copyOf(normalizedTypes), dotArgs.build());
  }

  /**
   * Whether arguments of the given names and types can be applied to this overload. Specifically:
   *
   * <ul>
   *   <li>All required parameter types must have a matching argument type.
   *   <li>All argument types must have a matching parameter type, <i>or</i> this overload must have
   *       a dots parameter type.
   *   <li>All argument types must be subtypes of the matching parameter type.
   * </ul>
   *
   * where <b>matching</b> is defined the same way as {@link #matchIndices(List)} and {@code
   * matchArgs_NR} in {@code match.c} of GNU-R.
   */
  default boolean matches(List<ArgumentRType> arguments) {
    var indices = matchIndices(arguments);
    if (indices == null) {
      return false;
    }
    for (int i = 0; i < indices.length(); i++) {
      var j = indices.get(i);
      var a = arguments.get(i);
      var p = parameters().get(j);
      if (!a.type().isSubsetOf(p.type())) {
        return false;
      }
    }
    return true;
  }

  /**
   * Whether <b>normalized</b> arguments of the given names and types can be applied to this
   * overload. Specifically:
   *
   * <ul>
   *   <li>All required parameter types must have a matching argument type.
   *   <li>All argument types must have a matching parameter type, <i>or</i> this overload must have
   *       a dots parameter type.
   *   <li>All argument types must be subtypes of the matching parameter type.
   * </ul>
   *
   * <p>The arguments must be normalized with {@link #normalizeToMatch(List)}. If that returns
   * {@code null} the original arguments can't be applied to this overload.
   */
  @SuppressWarnings("UnstableApiUsage")
  default boolean matchesNormalized(NormalizedArityRType arguments) {
    if (arguments.types().size() != parameters().size()) {
      throw new IllegalArgumentException(
          "normalized arguments must have the same size as" + "parameters");
    }
    return Streams.zip(
            arguments.types().stream(), parameters().stream(), (a, p) -> a.isSubsetOf(p.type()))
        .allMatch(x -> x);
  }

  /**
   * Effects performed given <b>normalized</b> arguments of the following types, or {@code null} for
   * arbitrary arguments (arguments affect the effects if the function is generic, e.g. if it forces
   * a promise, it will have effects based on the promise type).
   *
   * <p>The arguments must be normalized with {@link #normalizeToMatch(List)}
   */
  REffects effects(@Nullable NormalizedArityRType arguments);

  /**
   * Return type given <b>normalized</b> arguments of the following types, or {@code null} for
   * arbitrary arguments (arguments affect the return type if the function is generic, e.g. returns
   * its first arg).
   *
   * <p>The arguments must be normalized with {@link #normalizeToMatch(List)}
   */
  RType returnType(@Nullable NormalizedArityRType arguments);

  /**
   * Returns the name and type of the parameter at index {@code i}, or {@code null} if the index is
   * past the end of the known parameters. If this has dots and the index is at or after them, it
   * will return the dots parameter.
   */
  default @Nullable ParameterRType parameter(int index) {
    if (index < 0) {
      throw new IllegalArgumentException("index must be non-negative");
    }
    if (dotsIndex() > -1 && index >= dotsIndex()) {
      return parameters().get(dotsIndex());
    }
    if (index < parameters().size()) {
      return parameters().get(index);
    }
    return null;
  }

  /**
   * Returns the name and type of the parameter named {@code name}, or {@code null} if that isn't in
   * the parameter list. If {@code dotsCoversAll} is true and this has dots, it will return the dots
   * parameter if there's no other parameter with the name (if you pass {@code "..."} and this has a
   * dots parameter, it will return it regardless).
   */
  default @Nullable ParameterRType parameter(String name, boolean dotsCoversAll) {
    var p = parameterMap().get(name);
    if (p != null) {
      return p;
    }
    return dotsCoversAll ? dotsParameter() : null;
  }

  /**
   * Returns the name and type of the parameter named {@code name}, or {@code null} if that isn't in
   * the parameter list. If this has dots, it will return the dots parameter if there's no other
   * parameter with the name.
   */
  default @Nullable ParameterRType parameter(String name) {
    return parameter(name, true);
  }

  /** The index of the dots parameter, or -1 if there isn't one. */
  int dotsIndex();

  /** The dots parameter, or {@code null} if there isn't one. */
  default @Nullable ParameterRType dotsParameter() {
    return parameters().get(dotsIndex());
  }

  /** Are dots in the known parameters? */
  default boolean hasDots() {
    return parameterMap().containsKey("...");
  }

  /**
   * Returns true if the other overload is completely redundant by this one; specifically, if its
   * parameters are a subset of this one's parameters, it has strictly less effects, and its return
   * type is a superset
   */
  default boolean subsumes(OverloadRType other) {
    return parametersAreSuperset(other) == YesOrMaybe.YES
        && effectsAreSubset(other)
        && returnTypeIsSubset(other);
  }

  /**
   * Returns YES if any argument list that matches the other overload is guaranteed to match this
   * one. Note that this may return MAYBE for some cases where it's still guaranteed.
   */
  default YesOrMaybe parametersAreSuperset(OverloadRType other) {
    if (parameters().size() < other.parameters().size()) {
      return YesOrMaybe.MAYBE;
    }
    for (int i = 0; i < other.parameters().size(); i++) {
      var param = parameters().get(i);
      var otherParam = other.parameters().get(i);
      if (!Objects.equal(param.name(), otherParam.name())
          || !param.isSupersetOf(otherParam.isRequired(), otherParam.type())) {
        return YesOrMaybe.MAYBE;
      }
    }
    for (int i = other.parameters().size(); i < parameters().size(); i++) {
      if (parameters().get(i).isRequired() != NoOrMaybe.NO) {
        return YesOrMaybe.MAYBE;
      }
    }
    return YesOrMaybe.YES;
  }

  /**
   * Returns true if the other overload's effects are always a subset of this one's effects, no
   * matter what arguments are supplied as long as both get the same arguments.
   */
  boolean effectsAreSubset(OverloadRType other);

  /**
   * Returns true if the other overload's return type is always subset of this one's return type, no
   * matter what arguments are supplied as long as both get the same arguments.
   */
  boolean returnTypeIsSubset(OverloadRType other);
}

final class OverloadRTypeImpl implements OverloadRType {
  private final ImmutableList<ParameterRType> parameters;
  private final ImmutableMap<String, ParameterRType> parameterMap;
  private final int dotsIndex;
  private final REffects fallbackEffects;
  private final @Nullable GenericOverloadEffects genericEffects;
  private final RType fallbackReturnType;
  private final @Nullable GenericOverloadReturnType genericReturnType;

  OverloadRTypeImpl(
      ImmutableList<ParameterRType> parameters,
      REffects fallbackEffects,
      @Nullable GenericOverloadEffects genericEffects,
      RType fallbackReturnType,
      @Nullable GenericOverloadReturnType genericReturnType) {
    this.parameters = parameters;
    try {
      parameterMap =
          parameters.stream()
              .filter(ParameterRType::isNamed)
              .collect(ImmutableMap.toImmutableMap(ParameterRType::name, x -> x));
    } catch (IllegalArgumentException e) {
      var message = Strings.stripPrefix(e.getMessage(), "Multiple entries with same key: ");
      if (message != null) {
        throw new IllegalArgumentException("Multiple parameters with same name: " + message, e);
      }
      throw e;
    }
    dotsIndex = Iterables.indexOf(parameters, ParameterRType::isDots);
    this.fallbackEffects = fallbackEffects;
    this.fallbackReturnType = fallbackReturnType;
    this.genericEffects = genericEffects;
    this.genericReturnType = genericReturnType;
  }

  @Override
  public ImmutableList<ParameterRType> parameters() {
    return parameters;
  }

  @Override
  public ImmutableMap<String, ParameterRType> parameterMap() {
    return parameterMap;
  }

  @Override
  public REffects effects(@Nullable NormalizedArityRType arguments) {
    return genericEffects == null || arguments == null
        ? fallbackEffects
        : genericEffects.givenArguments(arguments);
  }

  @Override
  public RType returnType(@Nullable NormalizedArityRType arguments) {
    return genericReturnType == null || arguments == null
        ? fallbackReturnType
        : genericReturnType.givenArguments(arguments);
  }

  @Override
  public int dotsIndex() {
    return dotsIndex;
  }

  @Override
  public boolean effectsAreSubset(OverloadRType other) {
    return switch (other) {
      case OverloadRTypeImpl o ->
          fallbackEffects.isSubsetOf(o.fallbackEffects)
              && (o.genericEffects == null
                  || (genericEffects != null
                      && genericEffects.isDefinitelySubsetOf(o.genericEffects)));
    };
  }

  @Override
  public boolean returnTypeIsSubset(OverloadRType other) {
    return switch (other) {
      case OverloadRTypeImpl o ->
          fallbackReturnType.isSubsetOf(o.fallbackReturnType)
              && (o.genericReturnType == null
                  || (genericReturnType != null
                      && genericReturnType.isDefinitelySubsetOf(o.genericReturnType)));
    };
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) return true;
    if (!(o instanceof OverloadRTypeImpl that)) return false;
    return Objects.equal(parameters, that.parameters)
        && Objects.equal(fallbackEffects, that.fallbackEffects)
        && Objects.equal(genericEffects, that.genericEffects)
        && Objects.equal(fallbackReturnType, that.fallbackReturnType)
        && Objects.equal(genericReturnType, that.genericReturnType);
  }

  @Override
  public int hashCode() {
    return Objects.hashCode(
        parameters, fallbackEffects, genericEffects, fallbackReturnType, genericReturnType);
  }

  @Override
  public String toString() {
    return "("
        + Strings.join(", ", parameters)
        + ") →"
        + (genericEffects == null ? "" : "*")
        + fallbackEffects
        + (genericReturnType == null ? "" : "*")
        + " "
        + fallbackReturnType;
  }
}
