package org.prlprg.ir.type.sexp;

import javax.annotation.Nonnull;
import org.prlprg.ir.type.lattice.MaybeNat;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.sexp.SEXPType;
import org.prlprg.sexp.StrSXP;
import org.prlprg.sexp.ValueSXP;

public sealed interface RStringType extends RNAAbleVecType, RStringOrRegSymType
    permits RStringTypeImpl, RNothingValueType {
  RStringType ANY = new RStringTypeImpl(MaybeNat.UNKNOWN, NoOrMaybe.MAYBE);
  RStringType NO_NA = new RStringTypeImpl(MaybeNat.UNKNOWN, NoOrMaybe.NO);
  RStringType SCALAR = new RStringTypeImpl(MaybeNat.of(1), NoOrMaybe.MAYBE);
  RStringType SCALAR_NO_NA = new RStringTypeImpl(MaybeNat.of(1), NoOrMaybe.NO);

  @SuppressWarnings("DuplicatedCode")
  static RStringType of(MaybeNat length, NoOrMaybe hasNAOrNaN) {
    if (!length.isKnown() && hasNAOrNaN == NoOrMaybe.MAYBE) {
      return ANY;
    } else if (!length.isKnown() && hasNAOrNaN == NoOrMaybe.NO) {
      return NO_NA;
    } else if (length.isDefinitely(1) && hasNAOrNaN == NoOrMaybe.MAYBE) {
      return SCALAR;
    } else if (length.isDefinitely(1) && hasNAOrNaN == NoOrMaybe.NO) {
      return SCALAR_NO_NA;
    }

    return new RStringTypeImpl(length, hasNAOrNaN);
  }

  @Override
  RStringType withLength(MaybeNat length);

  @Override
  RStringType notNAOrNaN();
}

record RStringTypeImpl(@Override MaybeNat length, @Override NoOrMaybe hasNAOrNaN)
    implements RStringType {
  @Override
  public Class<? extends ValueSXP> clazz() {
    return StrSXP.class;
  }

  @Override
  public RStringType withLength(MaybeNat length) {
    return new RStringTypeImpl(length, hasNAOrNaN);
  }

  @Override
  public RStringType notNAOrNaN() {
    return new RStringTypeImpl(length, NoOrMaybe.NO);
  }

  @Override
  public @Nonnull SEXPType sexpType() {
    return SEXPType.STR;
  }

  @Override
  public String typeString() {
    return sexpType().toString();
  }
}
