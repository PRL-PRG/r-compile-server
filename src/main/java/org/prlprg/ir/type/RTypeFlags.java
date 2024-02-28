package org.prlprg.ir.type;

import javax.annotation.Nonnull;
import javax.annotation.Nullable;
import org.prlprg.sexp.*;

/**
 * Various yes/no/maybe {@link RType} properties which affect optimizations.
 *
 * @param hasAttributes Does the SEXP have attributes?
 * @param isObject Is the SEXP an object?
 * @param isMissing Is the SEXP the missing value?
 * @param isScalar If the SEXP is a vector, does it only have one element? ({@code null} if not a
 *     vector.)
 * @param isFastVecElt Can we fastcase accessing elements of the SEXP? ({@code null} if not a
 *     vector.)
 * @param hasNaOrNaN If the SEXP is a primitive vector, does it include an NA or NaN? ({@code null}
 *     if not a primitive vector.)
 */
public record RTypeFlags(
    NoOrMaybe hasAttributes,
    NoOrMaybe isObject,
    NoOrMaybe isMissing,
    @Nullable YesOrMaybe isScalar,
    @Nullable YesOrMaybe isFastVecElt,
    @Nullable NoOrMaybe hasNaOrNaN)
    implements BoundedLattice<RTypeFlags> {
  static final RTypeFlags BOTTOM =
      new RTypeFlags(NoOrMaybe.NO, NoOrMaybe.NO, NoOrMaybe.NO, null, null, null);

  static final RTypeFlags TOP =
      new RTypeFlags(
          NoOrMaybe.MAYBE,
          NoOrMaybe.MAYBE,
          NoOrMaybe.MAYBE,
          YesOrMaybe.MAYBE,
          YesOrMaybe.MAYBE,
          NoOrMaybe.MAYBE);

  /** The flags which the given value has. */
  public static RTypeFlags of(SEXP value) {
    var asVector = value instanceof VectorSXP<?> v ? v : null;
    var asPrimVector = value instanceof PrimVectorSXP<?> pv ? pv : null;
    return new RTypeFlags(
        NoOrMaybe.of(value.hasAttributes()),
        NoOrMaybe.MAYBE, // TODO NoOrMaybe.of(value.isObject()),
        NoOrMaybe.of(value == SEXPs.MISSING_ARG),
        asVector == null ? null : YesOrMaybe.of(asVector.isScalar()),
        null, // TODO asVector == null ? YesOrMaybe.YES : YesOrMaybe.of(asVector.isFastVecElt())
        asPrimVector == null ? null : NoOrMaybe.of(asPrimVector.hasNaOrNaN()));
  }

  @Override
  public boolean isSubsetOf(RTypeFlags other) {
    return hasAttributes.isSubsetOf(other.hasAttributes)
        && isObject.isSubsetOf(other.isObject)
        && isMissing.isSubsetOf(other.isMissing)
        && (isScalar != YesOrMaybe.MAYBE || other.isScalar == YesOrMaybe.MAYBE)
        && (isFastVecElt != YesOrMaybe.MAYBE || other.isFastVecElt == YesOrMaybe.MAYBE)
        && (hasNaOrNaN != NoOrMaybe.MAYBE || other.hasNaOrNaN == NoOrMaybe.MAYBE);
  }

  @Override
  public RTypeFlags union(RTypeFlags other) {
    return new RTypeFlags(
        hasAttributes.union(other.hasAttributes),
        isObject.union(other.isObject),
        isMissing.union(other.isMissing),
        isScalar == null
            ? other.isScalar
            : other.isScalar == null ? isScalar : isScalar.union(other.isScalar),
        isFastVecElt == null
            ? other.isFastVecElt
            : other.isFastVecElt == null ? isFastVecElt : isFastVecElt.union(other.isFastVecElt),
        hasNaOrNaN == null
            ? other.hasNaOrNaN
            : other.hasNaOrNaN == null ? hasNaOrNaN : hasNaOrNaN.union(other.hasNaOrNaN));
  }

  @Nonnull
  @Override
  public RTypeFlags intersection(RTypeFlags other) {
    return new RTypeFlags(
        hasAttributes.intersection(other.hasAttributes),
        isObject.intersection(other.isObject),
        isMissing.intersection(other.isMissing),
        isScalar == null || other.isScalar == null ? null : isScalar.intersection(other.isScalar),
        isFastVecElt == null || other.isFastVecElt == null
            ? null
            : isFastVecElt.intersection(other.isFastVecElt),
        hasNaOrNaN == null || other.hasNaOrNaN == null
            ? null
            : hasNaOrNaN.intersection(other.hasNaOrNaN));
  }

  @Override
  public String toString() {
    var builder = new StringBuilder();
    if (hasAttributes == NoOrMaybe.MAYBE) {
      builder.append("A");
    }
    if (isObject == NoOrMaybe.MAYBE) {
      builder.append("O");
    }
    if (isMissing == NoOrMaybe.MAYBE) {
      builder.append("M");
    }
    if (isScalar == YesOrMaybe.MAYBE) {
      builder.append("!S");
    }
    if (isFastVecElt == YesOrMaybe.MAYBE) {
      builder.append("!F");
    }
    if (hasNaOrNaN == NoOrMaybe.MAYBE) {
      builder.append("N");
    }
    if (!builder.isEmpty()) {
      builder.append("?");
    }
    return builder.toString();
  }
}
