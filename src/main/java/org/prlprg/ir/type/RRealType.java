package org.prlprg.ir.type;

import javax.annotation.Nonnull;
import org.prlprg.ir.type.lattice.MaybeNat;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.sexp.SEXPType;

public sealed interface RRealType extends RNumericType permits RRealTypeImpl, RNothingValueType {
  RRealType ANY = new RRealTypeImpl(MaybeNat.UNKNOWN, NoOrMaybe.MAYBE);
  RRealType NO_NA = new RRealTypeImpl(MaybeNat.UNKNOWN, NoOrMaybe.NO);
  RRealType SCALAR = new RRealTypeImpl(MaybeNat.of(1), NoOrMaybe.MAYBE);
  RRealType SCALAR_NO_NA = new RRealTypeImpl(MaybeNat.of(1), NoOrMaybe.NO);

  @SuppressWarnings("DuplicatedCode")
  static RRealType of(MaybeNat length, NoOrMaybe hasNAOrNaN) {
    if (!length.isKnown() && hasNAOrNaN == NoOrMaybe.MAYBE) {
      return ANY;
    } else if (!length.isKnown() && hasNAOrNaN == NoOrMaybe.NO) {
      return NO_NA;
    } else if (length.isDefinitely(1) && hasNAOrNaN == NoOrMaybe.MAYBE) {
      return SCALAR;
    } else if (length.isDefinitely(1) && hasNAOrNaN == NoOrMaybe.NO) {
      return SCALAR_NO_NA;
    }

    return new RRealTypeImpl(length, hasNAOrNaN);
  }

  @Override
  RRealType withLength(MaybeNat length);
}

record RRealTypeImpl(@Override MaybeNat length, @Override NoOrMaybe hasNAOrNaN)
    implements RRealType {
  @Override
  public RRealType withLength(MaybeNat length) {
    return new RRealTypeImpl(length, hasNAOrNaN);
  }

  @Override
  public RRealType notNAOrNaN() {
    return new RRealTypeImpl(length, NoOrMaybe.NO);
  }

  @Override
  public @Nonnull SEXPType sexpType() {
    return SEXPType.REAL;
  }

  @Override
  public String typeString() {
    return sexpType().toString();
  }
}
