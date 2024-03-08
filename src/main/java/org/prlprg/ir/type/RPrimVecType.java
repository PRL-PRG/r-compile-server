package org.prlprg.ir.type;

import javax.annotation.Nullable;
import org.prlprg.sexp.PrimVectorSXP;
import org.prlprg.util.NotImplementedError;

/** Primitive vector {@link RType} projection. */
public sealed interface RPrimVecType extends RValueType {
  @Override
  @Nullable PrimVectorSXP<?> exactValue();

  /** The type of the vector or {@code null} if all we know is it's a primitive vector. */
  @Nullable PrimVecElementRType elementType();

  /** Is this a primitive vector of numbers (int, real, or complex)? */
  YesOrMaybe isNumeric();

  /** Is this a primitive vector of numbers (int, real, or complex) or logicals? */
  YesOrMaybe isNumericOrLogical();

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
  default boolean fastAccess() {
    // TODO check in AttributesType
    throw new NotImplementedError();
  }
}

record RPrimVecTypeImpl(
    @Override @Nullable PrimVectorSXP<?> exactValue,
    @Override AttributesType attributes,
    @Override MaybeNat referenceCount,
    @Override @Nullable PrimVecElementRType elementType,
    @Override YesOrMaybe isNumeric,
    @Override YesOrMaybe isNumericOrLogical,
    @Override MaybeNat length,
    @Override NoOrMaybe hasNAOrNaN)
    implements RPrimVecType {
  public RPrimVecTypeImpl {
    if (isNumeric == YesOrMaybe.YES && isNumericOrLogical != YesOrMaybe.YES) {
      throw new IllegalArgumentException("isNumeric must imply isNumericOrLogical");
    }
    if (elementType != null && YesOrMaybe.of(elementType.isNumeric()) != isNumeric) {
      throw new IllegalArgumentException("elementType must match isNumeric");
    }
    if (elementType != null
        && YesOrMaybe.of(elementType.isNumericOrLogical()) != isNumericOrLogical) {
      throw new IllegalArgumentException("elementType must match isNumericOrLogical");
    }
  }

  /** Returns the most precise type this primitive vector is an instance of. */
  static RPrimVecType exact(PrimVectorSXP<?> value) {
    var elementType = PrimVecElementRType.of(value.type());
    assert elementType != null;
    return new RPrimVecTypeImpl(
        value,
        AttributesTypes.exact(value.attributes()),
        MaybeNat.UNKNOWN,
        elementType,
        YesOrMaybe.of(elementType.isNumeric()),
        YesOrMaybe.of(elementType.isNumericOrLogical()),
        MaybeNat.of(value.size()),
        NoOrMaybe.of(value.hasNaOrNaN()));
  }

  @Override
  public BaseRType.NotPromise base() {
    return new BaseRType.Vector(
        elementType() != null ? elementType().toVectorElementType() : VectorElementRType.ANY);
  }

  @Override
  public boolean isSubsetOf(RValueType other) {
    return RGenericValueType.commonIsSubset(this, other)
        && switch (other) {
          case RGenericValueType ignored -> true;
          case RPrimVecTypeImpl o ->
              isNumeric().isSubsetOf(o.isNumeric())
                  && isNumericOrLogical().isSubsetOf(o.isNumericOrLogical())
                  && length().isSubsetOf(o.length())
                  && hasNAOrNaN().isSubsetOf(o.hasNAOrNaN());
          default -> false;
        };
  }

  @Override
  public RValueType union(RValueType other) {
    var commonUnion = RGenericValueType.commonUnion(this, other);
    return !(other instanceof RPrimVecTypeImpl o)
        ? commonUnion
        : new RPrimVecTypeImpl(
            (PrimVectorSXP<?>) commonUnion.exactValue(),
            commonUnion.attributes(),
            commonUnion.referenceCount(),
            elementType() == o.elementType() ? elementType() : null,
            isNumeric().union(o.isNumeric()),
            isNumericOrLogical().union(o.isNumericOrLogical()),
            length().union(o.length()),
            hasNAOrNaN().union(o.hasNAOrNaN()));
  }

  @Override
  public @Nullable RValueType intersection(RValueType other) {
    var commonIntersection = RGenericValueType.commonIntersection(this, other);
    if (commonIntersection == null) {
      return null;
    }
    return switch (other) {
      case RGenericValueType ignored -> commonIntersection;
      case RPrimVecTypeImpl o -> {
        if (elementType() != null && o.elementType() != null && elementType() != o.elementType()) {
          yield null;
        }
        var mergedElementType = elementType() != null ? elementType() : o.elementType();
        var mergedLength = length().intersection(o.length());
        if (mergedLength == null) {
          yield null;
        }
        yield new RPrimVecTypeImpl(
            (PrimVectorSXP<?>) commonIntersection.exactValue(),
            commonIntersection.attributes(),
            commonIntersection.referenceCount(),
            mergedElementType,
            isNumeric().intersection(o.isNumeric()),
            isNumericOrLogical().intersection(o.isNumericOrLogical()),
            mergedLength,
            hasNAOrNaN().intersection(o.hasNAOrNaN()));
      }
      default ->
          throw new AssertionError(
              "RGenericSexpType.commonIntersection should've returned null for different specific types");
    };
  }

  @Override
  public String toString() {
    var builder = RGenericValueType.commonToStringStart(this);
    if (length.isKnown()) {
      builder.append("[").append(length).append("]");
    }
    if (hasNAOrNaN == NoOrMaybe.NO) {
      builder.append("*");
    }
    if (elementType != null) {
      builder.append(elementType);
    } else if (isNumeric == YesOrMaybe.YES) {
      builder.append("num");
    } else if (isNumericOrLogical == YesOrMaybe.YES) {
      builder.append("num|lgl");
    } else {
      builder.append("prim");
    }
    return builder.toString();
  }
}
