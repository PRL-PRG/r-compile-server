package org.prlprg.ir.type;

import javax.annotation.Nonnull;
import org.prlprg.ir.type.lattice.MaybeNat;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.sexp.SEXPType;

public sealed interface RRealType extends RNumericType permits RRealTypeImpl, RNothingValueType {
  RRealType ANY = RRealTypeImpl.INSTANCE;

  static RRealType of(MaybeNat length, NoOrMaybe hasNAOrNaN) {
    if (!length.isKnown() && hasNAOrNaN == NoOrMaybe.MAYBE) {
      return ANY;
    }

    return new RRealTypeImpl(length, hasNAOrNaN);
  }

  @Override
  RRealType withLength(MaybeNat length);
}

record RRealTypeImpl(@Override MaybeNat length, @Override NoOrMaybe hasNAOrNaN)
    implements RRealType {
  static final RRealTypeImpl INSTANCE = new RRealTypeImpl(MaybeNat.UNKNOWN, NoOrMaybe.MAYBE);

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
