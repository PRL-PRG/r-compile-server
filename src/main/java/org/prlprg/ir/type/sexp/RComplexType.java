package org.prlprg.ir.type.sexp;

import javax.annotation.Nonnull;
import org.prlprg.ir.type.lattice.MaybeNat;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.sexp.SEXPType;

public sealed interface RComplexType extends RNumericType
    permits RComplexTypeImpl, RNothingValueType {
  RComplexType ANY = new RComplexTypeImpl(MaybeNat.UNKNOWN, NoOrMaybe.MAYBE);
  RComplexType NO_NA = new RComplexTypeImpl(MaybeNat.UNKNOWN, NoOrMaybe.NO);
  RComplexType SCALAR = new RComplexTypeImpl(MaybeNat.of(1), NoOrMaybe.MAYBE);
  RComplexType SCALAR_NO_NA = new RComplexTypeImpl(MaybeNat.of(1), NoOrMaybe.NO);

  @SuppressWarnings("DuplicatedCode")
  static RComplexType of(MaybeNat length, NoOrMaybe hasNAOrNaN) {
    if (!length.isKnown() && hasNAOrNaN == NoOrMaybe.MAYBE) {
      return ANY;
    } else if (!length.isKnown() && hasNAOrNaN == NoOrMaybe.NO) {
      return NO_NA;
    } else if (length.isDefinitely(1) && hasNAOrNaN == NoOrMaybe.MAYBE) {
      return SCALAR;
    } else if (length.isDefinitely(1) && hasNAOrNaN == NoOrMaybe.NO) {
      return SCALAR_NO_NA;
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
