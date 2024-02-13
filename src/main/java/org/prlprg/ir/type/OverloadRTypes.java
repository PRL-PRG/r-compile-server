package org.prlprg.ir.type;

import com.google.common.collect.ImmutableList;
import java.util.List;
import javax.annotation.Nullable;
import org.prlprg.ir.type.generic.GenericOverloadEffects;
import org.prlprg.ir.type.generic.GenericOverloadReturnType;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.SEXPs;

public class OverloadRTypes {
  /**
   * Returns the overload type with the given parameter and return types.
   *
   * <p>If {@code genericEffects} or {@code genericReturnType} are present, they <i>must always</i>
   * return a subset of {@code fallbackEffects} or {@code fallbackReturnType}.
   */
  public static OverloadRType of(
      ImmutableList<ParameterRType> parameters,
      REffects fallbackEffects,
      @Nullable GenericOverloadEffects genericEffects,
      RType fallbackReturnType,
      @Nullable GenericOverloadReturnType genericReturnType) {
    return new OverloadRTypeImpl(
        parameters, fallbackEffects, genericEffects, fallbackReturnType, genericReturnType);
  }

  /**
   * Returns the overload type with the given parameter and return types.
   *
   * <p>If {@code genericEffects} or {@code genericReturnType} are present, they <i>must always</i>
   * return a subset of {@code fallbackEffects} or {@code fallbackReturnType}.
   */
  public static OverloadRType of(
      List<ParameterRType> parameters,
      REffects fallbackEffects,
      @Nullable GenericOverloadEffects genericEffects,
      RType fallbackReturnType,
      @Nullable GenericOverloadReturnType genericReturnType) {
    return of(
        ImmutableList.copyOf(parameters),
        fallbackEffects,
        genericEffects,
        fallbackReturnType,
        genericReturnType);
  }

  /** Returns the overload type with the given parameter and return types. */
  public static OverloadRType of(
      ImmutableList<ParameterRType> parameters,
      REffects fallbackEffects,
      RType fallbackReturnType) {
    return of(parameters, fallbackEffects, null, fallbackReturnType, null);
  }

  /** Returns the overload type with the given parameter and return types. */
  public static OverloadRType of(
      List<ParameterRType> parameters, REffects fallbackEffects, RType fallbackReturnType) {
    return of(ImmutableList.copyOf(parameters), fallbackEffects, fallbackReturnType);
  }

  /** Returns the overload type inferred from this closure. */
  public static OverloadRType exact(CloSXP value) {
    return of(
        value.formals().stream()
            .map(
                e ->
                    new ParameterRType(
                        e.tag(), NoOrMaybe.of(e.value() == SEXPs.MISSING_ARG), RTypes.ANY))
            .collect(ImmutableList.toImmutableList()),
        REffects.ARBITRARY,
        RTypes.ANY);
  }

  private OverloadRTypes() {}
}
