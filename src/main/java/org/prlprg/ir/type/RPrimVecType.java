package org.prlprg.ir.type;

import javax.annotation.Nonnull;
import javax.annotation.Nullable;
import org.prlprg.sexp.PrimVectorSXP;
import org.prlprg.util.NotImplementedError;

/**
 * If a value is known to be a primitive vector (not generic or expression), its {@link RType} will
 * be an instance of this. This contains its scalar type (if known), length (if known), does it
 * maybe contain NAs, can we do fast access (no {@code class}, {@code dims}, ...), etc.
 */
public sealed interface RPrimVecType<T> extends RType {
  @Override
  @Nullable PrimVectorSXP<T> exactValue();

  @Override
  @Nonnull
  BaseRType base();

  @Override
  @Nonnull
  AttributesType attributes();

  /** The type of the vector or {@code null} if all we know is it's a primitive vector. */
  @Nullable RPrimVecElementType scalarType();

  /** Is this a primitive vector of numbers (int, real, or complex)? */
  boolean isNumeric();

  /** Is this a primitive vector of numbers (int, real, or complex) or logicals? */
  boolean isNumericOrLogical();

  /** The length of the vector, if known. */
  MaybeNat length();

  /** Is this a scalar? */
  default Troolean isScalar() {
    if (length().isDefinitely(1)) {
      return Troolean.YES;
    }
    if (length().isKnown()) {
      return Troolean.NO;
    }
    return Troolean.MAYBE;
  }

  /** Whether the vector may contain NAs or NaNs. */
  boolean maybeNAOrNaN();

  /** Whether we can do fast access (no {@code class}, {@code dims}, ...). */
  default boolean fastAccess() {
    // TODO check in AttributesType
    throw new NotImplementedError();
  }
}
