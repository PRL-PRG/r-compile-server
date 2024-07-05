package org.prlprg.ir.type;

import javax.annotation.Nonnull;
import org.prlprg.ir.type.lattice.MaybeNat;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.sexp.SEXPType;

public sealed interface RIntType extends RNumericType permits RIntTypeImpl, RNothingValueType {
  RIntType ANY = RIntTypeImpl.INSTANCE;

  static RIntType of(MaybeNat length, NoOrMaybe hasNAOrNaN) {
    if (!length.isKnown() && hasNAOrNaN == NoOrMaybe.MAYBE) {
      return ANY;
    }

    return new RIntTypeImpl(length, hasNAOrNaN);
  }

  @Override
  RIntType withLength(MaybeNat length);

  @Override
  RIntType notNAOrNaN();
}

record RIntTypeImpl(@Override MaybeNat length, @Override NoOrMaybe hasNAOrNaN) implements RIntType {
  static final RIntTypeImpl INSTANCE = new RIntTypeImpl(MaybeNat.UNKNOWN, NoOrMaybe.MAYBE);

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
