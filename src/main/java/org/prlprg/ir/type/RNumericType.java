package org.prlprg.ir.type;

import org.prlprg.ir.type.lattice.MaybeNat;
import org.prlprg.ir.type.lattice.NoOrMaybe;

/** Primitive vector {@link RType} projection. */
public sealed interface RNumericType extends RNumericOrLogicalType
    permits RNumericTypeImpl, RIntType, RRealType, RComplexType {
  RNumericType ANY = RNumericTypeImpl.INSTANCE;

  static RNumericType of(MaybeNat length, NoOrMaybe hasNAOrNaN) {
    if (!length.isKnown() && hasNAOrNaN == NoOrMaybe.MAYBE) {
      return ANY;
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
