package org.prlprg.ir.type;

import org.prlprg.ir.type.lattice.MaybeNat;
import org.prlprg.ir.type.lattice.NoOrMaybe;

/** Primitive vector {@link RType} projection. */
public sealed interface RNumericOrLogicalType extends RNAAbleVecType
    permits RNumericOrLogicalTypeImpl, RNumericType, RLogicalType {
  RNumericOrLogicalType ANY = RNumericOrLogicalTypeImpl.INSTANCE;

  static RNumericOrLogicalType of(MaybeNat length, NoOrMaybe hasNAOrNaN) {
    if (!length.isKnown() && hasNAOrNaN == NoOrMaybe.MAYBE) {
      return ANY;
    }

    return new RNumericOrLogicalTypeImpl(length, hasNAOrNaN);
  }

  @Override
  RNumericOrLogicalType withLength(MaybeNat length);

  @Override
  RNumericOrLogicalType notNAOrNaN();
}

record RNumericOrLogicalTypeImpl(@Override MaybeNat length, @Override NoOrMaybe hasNAOrNaN)
    implements RNumericOrLogicalType {
  static final RNumericOrLogicalTypeImpl INSTANCE =
      new RNumericOrLogicalTypeImpl(MaybeNat.UNKNOWN, NoOrMaybe.MAYBE);

  @Override
  public RNumericOrLogicalType withLength(MaybeNat length) {
    return new RNumericOrLogicalTypeImpl(length, hasNAOrNaN);
  }

  @Override
  public RNumericOrLogicalType notNAOrNaN() {
    return new RNumericOrLogicalTypeImpl(length, NoOrMaybe.NO);
  }

  @Override
  public String typeString() {
    return "num|lgl";
  }
}
