package org.prlprg.ir.type;

import javax.annotation.Nonnull;
import org.prlprg.ir.type.lattice.MaybeNat;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.sexp.SEXPType;

public sealed interface RRawType extends RPrimVecType permits RRawTypeImpl, RNothingValueType {
  RRawType ANY = RRawTypeImpl.INSTANCE;

  static RRawType of(MaybeNat length) {
    return new RRawTypeImpl(length);
  }

  @Override
  RRawType withLength(MaybeNat length);
}

record RRawTypeImpl(@Override MaybeNat length) implements RRawType {
  static final RRawTypeImpl INSTANCE = new RRawTypeImpl(MaybeNat.UNKNOWN);

  @Override
  public NoOrMaybe hasNAOrNaN() {
    return NoOrMaybe.NO;
  }

  @Override
  public RRawType withLength(MaybeNat length) {
    return new RRawTypeImpl(length);
  }

  @Override
  public @Nonnull SEXPType sexpType() {
    return SEXPType.RAW;
  }

  @Override
  public String typeString() {
    return sexpType().toString();
  }
}
