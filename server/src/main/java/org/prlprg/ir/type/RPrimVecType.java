package org.prlprg.ir.type;

import javax.annotation.Nullable;
import org.prlprg.ir.type.lattice.MaybeNat;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.ir.type.lattice.Troolean;
import org.prlprg.sexp.PrimVectorSXP;

/** Primitive vector {@link RType} projection. */
public sealed interface RPrimVecType extends RValueType {
  @Override
  @Nullable PrimVectorSXP<?> exactValue();

  /** The type of primitive vector it is. */
  PrimVecElementRType elementType();

  /** Is this a primitive vector of numbers (int, real, or complex)? */
  default Troolean isNumeric() {
    return elementType().isNumeric();
  }

  /** Is this a primitive vector of numbers (int, real, or complex) or logicals? */
  default Troolean isNumericOrLogical() {
    return elementType().isNumericOrLogical();
  }

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

  /** Whether the vector contains NAs or NaNs. */
  NoOrMaybe hasNAOrNaN();

  /** Whether we can do fast access (no {@code class}, {@code dim}, ...). */
  default Troolean fastAccess() {
    // TODO check in AttributesType
    return Troolean.MAYBE;
  }

  /** Returns the same type but not scalar. */
  RPrimVecType notScalar();

  /** Returns the same type but not NA or NaN. */
  RPrimVecType notNAOrNaN();
}

record RPrimVecTypeImpl(
    @Override @Nullable PrimVectorSXP<?> exactValue,
    @Override AttributesType attributes,
    @Override MaybeNat referenceCount,
    @Override PrimVecElementRType elementType,
    @Override MaybeNat length,
    @Override NoOrMaybe hasNAOrNaN)
    implements RPrimVecType {
  /** Returns the most precise type this primitive vector is an instance of. */
  static RPrimVecType exact(PrimVectorSXP<?> value) {
    var elementType = PrimVecElementRType.of(value.type());
    assert elementType != null;
    return new RPrimVecTypeImpl(
        value,
        AttributesTypes.exact(value.attributes()),
        MaybeNat.UNKNOWN,
        elementType,
        MaybeNat.of(value.size()),
        NoOrMaybe.of(value.hasNaOrNaN()));
  }

  RPrimVecTypeImpl {
    RGenericValueType.commonSanityChecks(this);
  }

  @Override
  public RPrimVecType notScalar() {
    return new RPrimVecTypeImpl(
        exactValue, attributes, referenceCount, elementType, MaybeNat.UNKNOWN, hasNAOrNaN);
  }

  @Override
  public RPrimVecType notNAOrNaN() {
    return new RPrimVecTypeImpl(
        exactValue, attributes, referenceCount, elementType, length, NoOrMaybe.NO);
  }

  @Override
  public BaseRType.NotPromise base() {
    return new BaseRType.Vector(elementType().toVectorElementType());
  }

  @Override
  public boolean isSubsetOf(RValueType other) {
    return RGenericValueType.genericIsSubset(this, other)
        && switch (other) {
          case RGenericValueType _ -> true;
          case RPrimVecTypeImpl o ->
              elementType.isSubsetOf(o.elementType)
                  && length.isSubsetOf(o.length)
                  && hasNAOrNaN.isSubsetOf(o.hasNAOrNaN);
          default -> false;
        };
  }

  @Override
  public RValueType union(RValueType other) {
    var genericUnion = RGenericValueType.genericUnion(this, other);
    return !(other instanceof RPrimVecTypeImpl o)
        ? genericUnion
        : new RPrimVecTypeImpl(
            (PrimVectorSXP<?>) genericUnion.exactValue(),
            genericUnion.attributes(),
            genericUnion.referenceCount(),
            elementType.union(o.elementType),
            length.union(o.length),
            hasNAOrNaN.union(o.hasNAOrNaN));
  }

  @Override
  public @Nullable RValueType intersection(RValueType other) {
    var genericIntersection = RGenericValueType.genericIntersection(this, other);
    if (genericIntersection == null) {
      return null;
    }
    return switch (other) {
      case RGenericValueType _ ->
          new RPrimVecTypeImpl(
              (PrimVectorSXP<?>) genericIntersection.exactValue(),
              genericIntersection.attributes(),
              genericIntersection.referenceCount(),
              elementType,
              length,
              hasNAOrNaN);
      case RPrimVecTypeImpl o -> {
        var mergedElementType = elementType.intersection(o.elementType);
        if (mergedElementType == null) {
          yield null;
        }
        var mergedLength = length.intersection(o.length);
        if (mergedLength == null) {
          yield null;
        }
        yield new RPrimVecTypeImpl(
            (PrimVectorSXP<?>) genericIntersection.exactValue(),
            genericIntersection.attributes(),
            genericIntersection.referenceCount(),
            mergedElementType,
            mergedLength,
            hasNAOrNaN.intersection(o.hasNAOrNaN));
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

    if (hasNAOrNaN == NoOrMaybe.NO) {
      sb.append("*");
    }
    if (length.isKnown()) {
      sb.append("[").append(length).append("]");
    }
    sb.append(elementType);
    return sb.toString();
  }
}
