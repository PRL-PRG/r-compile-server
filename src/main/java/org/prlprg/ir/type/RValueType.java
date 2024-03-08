package org.prlprg.ir.type;

import com.google.common.collect.ImmutableSet;
import java.util.Arrays;
import javax.annotation.Nullable;
import javax.annotation.concurrent.Immutable;
import org.prlprg.sexp.SEXP;

/**
 * Part of an {@link RType}, which represents the type of a runtime value assuming that it's a
 * particular shape we care about (see "permits" classes for these types).
 */
@Immutable
sealed interface RValueType extends Lattice<RValueType>
    permits RFunctionType, RPrimVecType, RMissingType, RGenericValueType {
  /** All subtypes with extra information; all subclasses except {@link RGenericValueType}. */
  @SuppressWarnings("unchecked")
  ImmutableSet<Class<? extends RValueType>> SPECIFIC_TYPES =
      Arrays.stream(RValueType.class.getPermittedSubclasses())
          .filter(cls -> cls != RGenericValueType.class)
          .map(cls -> (Class<? extends RValueType>) cls)
          .collect(ImmutableSet.toImmutableSet());

  /** If this is a constant, the exact value. */
  @Nullable SEXP exactValue();

  /** The base type of the value (e.g. is it a symbol? Builtin?). */
  BaseRType.NotPromise base();

  /**
   * Whether the object has attributes and what we know about them; in particular, if it may or does
   * have certain attributes (e.g. {@code names}, {@code class}, {@code dims}, ...), and if they are
   * exact values.
   */
  AttributesType attributes();

  /** If there's 0, 1, n, or unknown references to this value. */
  MaybeNat referenceCount();

  /**
   * Whether the value is missing. If the value is definitely missing, this will return maybe, but
   * {@link #exactValue()} will be {@code R_MissingVal}.
   */
  default NoOrMaybe isMissing() {
    return NoOrMaybe.NO;
  }
}
