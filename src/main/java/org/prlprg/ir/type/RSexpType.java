package org.prlprg.ir.type;

import com.google.common.collect.ImmutableSet;
import javax.annotation.Nullable;
import javax.annotation.concurrent.Immutable;
import org.prlprg.sexp.SEXP;

/**
 * Part of an {@link RType}, which represents the type of a runtime value assuming that it's a
 * particular shape we care about (see "permits" classes for these types).
 */
@Immutable
sealed interface RSexpType extends Lattice<RSexpType>
    permits RFunctionType, RPrimVecType, RMissingType, RGenericSexpType {
  ImmutableSet<Class<? extends RSexpType>> SPECIFIC_TYPES =
      ImmutableSet.of(RFunctionType.class, RPrimVecType.class, RMissingType.class);

  /** If this is a constant, the exact value. */
  @Nullable SEXP exactValue();

  /** The base type of the value (e.g. is it a symbol? Builtin?). */
  BaseRType base();

  /**
   * Whether the object has attributes and what we know about them; in particular, if it may or does
   * have certain attributes (e.g. {@code names}, {@code class}, {@code dims}, ...), and if they are
   * exact values.
   */
  AttributesType attributes();

  /** If there's 0, 1, n, or unknown references to this value. */
  MaybeNat referenceCount();
}
