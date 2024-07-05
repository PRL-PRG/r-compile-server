package org.prlprg.ir.type;

import javax.annotation.Nonnull;
import org.prlprg.ir.type.lattice.MaybeNat;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.sexp.SEXPType;

public sealed interface RComplexType extends RNumericType
    permits RComplexTypeImpl, RNothingValueType {
  RComplexType ANY = RComplexTypeImpl.INSTANCE;

  static RComplexType of(MaybeNat length, NoOrMaybe hasNAOrNaN) {
    if (!length.isKnown() && hasNAOrNaN == NoOrMaybe.MAYBE) {
      return ANY;
    }

    if (!length.isKnown() && hasNAOrNaN == NoOrMaybe.MAYBE) {
      return ANY;
    }

    return new RComplexTypeImpl(length, hasNAOrNaN);
  }

  @Override
  RComplexType withLength(MaybeNat length);

  @Override
  RComplexType notNAOrNaN();
}

record RComplexTypeImpl(@Override MaybeNat length, @Override NoOrMaybe hasNAOrNaN)
    implements RComplexType {
  static final RComplexTypeImpl INSTANCE = new RComplexTypeImpl(MaybeNat.UNKNOWN, NoOrMaybe.MAYBE);

  @Override
  public RComplexType withLength(MaybeNat length) {
    return new RComplexTypeImpl(length, hasNAOrNaN);
  }

  @Override
  public RComplexType notNAOrNaN() {
    return new RComplexTypeImpl(length, NoOrMaybe.NO);
  }

  @Override
  public @Nonnull SEXPType sexpType() {
    return SEXPType.CPLX;
  }

  @Override
  public String typeString() {
    return sexpType().toString();
  }
}
