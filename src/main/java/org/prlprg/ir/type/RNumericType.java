package org.prlprg.ir.type;

import org.prlprg.ir.type.lattice.MaybeNat;
import org.prlprg.ir.type.lattice.NoOrMaybe;

/** Primitive vector {@link RType} projection. */
public sealed interface RNumericType extends RNumericOrLogicalType
    permits RNumericTypeImpl, RIntType, RRealType, RComplexType {
  RNumericType ANY = new RNumericTypeImpl(MaybeNat.UNKNOWN, NoOrMaybe.MAYBE);
  RNumericType NO_NA = new RNumericTypeImpl(MaybeNat.UNKNOWN, NoOrMaybe.NO);
  RNumericType SCALAR = new RNumericTypeImpl(MaybeNat.of(1), NoOrMaybe.MAYBE);
  RNumericType SCALAR_NO_NA = new RNumericTypeImpl(MaybeNat.of(1), NoOrMaybe.NO);

  @SuppressWarnings("DuplicatedCode")
  static RNumericType of(MaybeNat length, NoOrMaybe hasNAOrNaN) {
    if (!length.isKnown() && hasNAOrNaN == NoOrMaybe.MAYBE) {
      return ANY;
    } else if (!length.isKnown() && hasNAOrNaN == NoOrMaybe.NO) {
      return NO_NA;
    } else if (length.isDefinitely(1) && hasNAOrNaN == NoOrMaybe.MAYBE) {
      return SCALAR;
    } else if (length.isDefinitely(1) && hasNAOrNaN == NoOrMaybe.NO) {
      return SCALAR_NO_NA;
    }

    return new RNumericTypeImpl(length, hasNAOrNaN);
  }

  @Override
  RNumericType withLength(MaybeNat length);

  @Override
  RNumericType notNAOrNaN();
}

record RNumericTypeImpl(@Override MaybeNat length, @Override NoOrMaybe hasNAOrNaN)
    implements RNumericType {
  static final RNumericTypeImpl INSTANCE = new RNumericTypeImpl(MaybeNat.UNKNOWN, NoOrMaybe.MAYBE);

  @Override
  public RNumericType withLength(MaybeNat length) {
    return new RNumericTypeImpl(length, hasNAOrNaN);
  }

  @Override
  public RNumericType notNAOrNaN() {
    return new RNumericTypeImpl(length, NoOrMaybe.NO);
  }

  @Override
  public String typeString() {
    return "num";
  }
}
