package org.prlprg.ir.type;

import javax.annotation.Nonnull;
import javax.annotation.Nullable;
import org.prlprg.sexp.*;

/**
 * Various yes/no/maybe {@link RType} properties which affect optimizations.
 *
 * @param isPromise Is the SEXP wrapped in a promise? ({@code null} if bottom type.)
 * @param isLazy Is the SEXP an unevaluated thunk? (If so, reading may execute code which, depending
 *     on other properties, my have side effects.)
 * @param isScalar If the SEXP is a vector, does it only have one element? ({@code null} if not a
 *     vector.)
 * @param hasAttributes Does the SEXP have attributes? ({@code null} if bottom type.)
 * @param isObject Is the SEXP an object? ({@code null} if bottom type.)
 * @param isFastVecElt Can we fastcase accessing elements of the SEXP? ({@code YES} if not a
 *     vector.)
 * @param hasNaOrNaN If the SEXP is a primitive vector, does it include an NA or NaN? ({@code null}
 *     if not a primitive vector.)
 * @param isMissing Is the SEXP the missing value? ({@code null} if bottom type.)
 * @param isUnbound Is the SEXP the unbound value? ({@code null} if bottom type.)
 */
public record RTypeFlags(
    @Nullable Troolean isPromise,
    NoOrMaybe isLazy,
    @Nullable Troolean isScalar,
    @Nullable Troolean hasAttributes,
    @Nullable Troolean isObject,
    YesOrMaybe isFastVecElt,
    @Nullable Troolean hasNaOrNaN,
    @Nullable Troolean isMissing,
    @Nullable Troolean isUnbound)
    implements BoundedLattice<RTypeFlags> {
  static final RTypeFlags BOTTOM =
      new RTypeFlags(null, NoOrMaybe.NO, null, null, null, YesOrMaybe.YES, null, null, null);

  static final RTypeFlags TOP =
      new RTypeFlags(
          Troolean.MAYBE,
          NoOrMaybe.MAYBE,
          Troolean.MAYBE,
          Troolean.MAYBE,
          Troolean.MAYBE,
          YesOrMaybe.MAYBE,
          Troolean.MAYBE,
          Troolean.MAYBE,
          Troolean.MAYBE);

  /** The flags which the given value has. */
  public static RTypeFlags of(SEXP value) {
    var asPromise = value instanceof PromSXP p ? p : null;
    var asVector = value instanceof VectorSXP<?> v ? v : null;
    var asPrimVector = value instanceof PrimVectorSXP<?> pv ? pv : null;
    return new RTypeFlags(
        Troolean.of(asPromise != null),
        NoOrMaybe.of(asPromise != null && asPromise.isLazy()),
        asVector == null ? null : Troolean.of(asVector.isScalar()),
        Troolean.of(value.hasAttributes()),
        Troolean.MAYBE, // TODO Troolean.of(value.isObject()),
        YesOrMaybe.MAYBE, // TODO asVector == null ? YesOrMaybe.YES :
        // YesOrMaybe.of(asVector.isFastVecElt()),
        asPrimVector == null ? null : Troolean.of(asPrimVector.hasNaOrNaN()),
        Troolean.of(value == SEXPs.MISSING_ARG),
        Troolean.of(value == SEXPs.UNBOUND_VALUE));
  }

  @Override
  public boolean isSubsetOf(RTypeFlags other) {
    return Troolean.isSubset(isPromise, other.isPromise)
        && isLazy.isSubsetOf(other.isLazy)
        && Troolean.isSubset(isScalar, other.isScalar)
        && Troolean.isSubset(hasAttributes, other.hasAttributes)
        && Troolean.isSubset(isObject, other.isObject)
        && isFastVecElt.isSubsetOf(other.isFastVecElt)
        && Troolean.isSubset(hasNaOrNaN, other.hasNaOrNaN)
        && Troolean.isSubset(isMissing, other.isMissing)
        && Troolean.isSubset(isUnbound, other.isUnbound);
  }

  @Override
  public RTypeFlags union(RTypeFlags other) {
    return new RTypeFlags(
        Troolean.union(isPromise, other.isPromise),
        isLazy.union(other.isLazy),
        Troolean.union(isScalar, other.isScalar),
        Troolean.union(hasAttributes, other.hasAttributes),
        Troolean.union(isObject, other.isObject),
        isFastVecElt.union(other.isFastVecElt),
        Troolean.union(hasNaOrNaN, other.hasNaOrNaN),
        Troolean.union(isMissing, other.isMissing),
        Troolean.union(isUnbound, other.isUnbound));
  }

  @Nonnull
  @Override
  public RTypeFlags intersection(RTypeFlags other) {
    return new RTypeFlags(
        Troolean.intersection(isPromise, other.isPromise),
        isLazy.intersection(other.isLazy),
        Troolean.intersection(isScalar, other.isScalar),
        Troolean.intersection(hasAttributes, other.hasAttributes),
        Troolean.intersection(isObject, other.isObject),
        isFastVecElt.intersection(other.isFastVecElt),
        Troolean.intersection(hasNaOrNaN, other.hasNaOrNaN),
        Troolean.intersection(isMissing, other.isMissing),
        Troolean.intersection(isUnbound, other.isUnbound));
  }
}
