package org.prlprg.ir.type;

import javax.annotation.Nonnull;
import org.prlprg.ir.type.lattice.MaybeNat;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.sexp.SEXPType;

public sealed interface RIntType extends RNumericType permits RIntTypeImpl, RNothingValueType {
  RIntType ANY = new RIntTypeImpl(MaybeNat.UNKNOWN, NoOrMaybe.MAYBE);
  RIntType NO_NA = new RIntTypeImpl(MaybeNat.UNKNOWN, NoOrMaybe.NO);
  RIntType SCALAR = new RIntTypeImpl(MaybeNat.of(1), NoOrMaybe.MAYBE);
  RIntType SCALAR_NO_NA = new RIntTypeImpl(MaybeNat.of(1), NoOrMaybe.NO);

  @SuppressWarnings("DuplicatedCode")
  static RIntType of(MaybeNat length, NoOrMaybe hasNAOrNaN) {
    if (!length.isKnown() && hasNAOrNaN == NoOrMaybe.MAYBE) {
      return ANY;
    } else if (!length.isKnown() && hasNAOrNaN == NoOrMaybe.NO) {
      return NO_NA;
    } else if (length.isDefinitely(1) && hasNAOrNaN == NoOrMaybe.MAYBE) {
      return SCALAR;
    } else if (length.isDefinitely(1) && hasNAOrNaN == NoOrMaybe.NO) {
      return SCALAR_NO_NA;
    }

    return new RIntTypeImpl(length, hasNAOrNaN);
  }

  @Override
  RIntType withLength(MaybeNat length);

  @Override
  RIntType notNAOrNaN();
}

record RIntTypeImpl(@Override MaybeNat length, @Override NoOrMaybe hasNAOrNaN) implements RIntType {
  @Override
  public RIntType withLength(MaybeNat length) {
    return new RIntTypeImpl(length, hasNAOrNaN);
  }

  @Override
  public RIntType notNAOrNaN() {
    return new RIntTypeImpl(length, NoOrMaybe.NO);
  }

  @Override
  public @Nonnull SEXPType sexpType() {
    return SEXPType.INT;
  }

  @Override
  public String typeString() {
    return sexpType().toString();
  }
}
