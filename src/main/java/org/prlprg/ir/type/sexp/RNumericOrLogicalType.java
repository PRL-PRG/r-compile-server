package org.prlprg.ir.type.sexp;

import org.prlprg.ir.type.lattice.MaybeNat;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.sexp.NumericOrLogicalSXP;
import org.prlprg.sexp.ValueSXP;

/** Primitive vector {@link RSexpType} projection. */
public sealed interface RNumericOrLogicalType extends RNAAbleVecType
    permits RNumericOrLogicalTypeImpl, RNumericType, RLogicalType {
  RNumericOrLogicalType ANY = new RNumericOrLogicalTypeImpl(MaybeNat.UNKNOWN, NoOrMaybe.MAYBE);
  RNumericOrLogicalType NO_NA = new RNumericOrLogicalTypeImpl(MaybeNat.UNKNOWN, NoOrMaybe.NO);
  RNumericOrLogicalType SCALAR = new RNumericOrLogicalTypeImpl(MaybeNat.of(1), NoOrMaybe.MAYBE);
  RNumericOrLogicalType SCALAR_NO_NA = new RNumericOrLogicalTypeImpl(MaybeNat.of(1), NoOrMaybe.NO);

  @SuppressWarnings("DuplicatedCode")
  static RNumericOrLogicalType of(MaybeNat length, NoOrMaybe hasNAOrNaN) {
    if (!length.isKnown() && hasNAOrNaN == NoOrMaybe.MAYBE) {
      return ANY;
    } else if (!length.isKnown() && hasNAOrNaN == NoOrMaybe.NO) {
      return NO_NA;
    } else if (length.isDefinitely(1) && hasNAOrNaN == NoOrMaybe.MAYBE) {
      return SCALAR;
    } else if (length.isDefinitely(1) && hasNAOrNaN == NoOrMaybe.NO) {
      return SCALAR_NO_NA;
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
  @Override
  public Class<? extends ValueSXP> clazz() {
    return NumericOrLogicalSXP.class;
  }

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
