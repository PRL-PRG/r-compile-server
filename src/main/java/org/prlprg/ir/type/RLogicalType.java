package org.prlprg.ir.type;

import javax.annotation.Nonnull;
import org.prlprg.ir.type.lattice.MaybeNat;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.sexp.SEXPType;

public sealed interface RLogicalType extends RNumericOrLogicalType
    permits RLogicalTypeImpl, RNothingValueType {
  RLogicalType ANY = RLogicalTypeImpl.INSTANCE;
  RLogicalType BOOL = new RLogicalTypeImpl(MaybeNat.of(1), NoOrMaybe.NO);

  static RLogicalType of(MaybeNat length, NoOrMaybe hasNAOrNaN) {
    if (!length.isKnown() && hasNAOrNaN == NoOrMaybe.MAYBE) {
      return ANY;
    } else if (length.isDefinitely(1) && hasNAOrNaN == NoOrMaybe.NO) {
      return BOOL;
    }

    return new RLogicalTypeImpl(length, hasNAOrNaN);
  }

  @Override
  RLogicalType withLength(MaybeNat length);

  @Override
  RLogicalType notNAOrNaN();
}

record RLogicalTypeImpl(@Override MaybeNat length, @Override NoOrMaybe hasNAOrNaN)
    implements RLogicalType {
  static final RLogicalTypeImpl INSTANCE = new RLogicalTypeImpl(MaybeNat.UNKNOWN, NoOrMaybe.MAYBE);

  @Override
  public RLogicalType withLength(MaybeNat length) {
    return new RLogicalTypeImpl(length, hasNAOrNaN);
  }

  @Override
  public RLogicalType notNAOrNaN() {
    return new RLogicalTypeImpl(length, NoOrMaybe.NO);
  }

  @Override
  public @Nonnull SEXPType sexpType() {
    return SEXPType.LGL;
  }

  @Override
  public String typeString() {
    return sexpType().toString();
  }
}
