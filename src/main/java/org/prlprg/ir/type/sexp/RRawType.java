package org.prlprg.ir.type.sexp;

import javax.annotation.Nonnull;
import org.prlprg.ir.type.lattice.MaybeNat;
import org.prlprg.sexp.SEXPType;

public sealed interface RRawType extends RPrimVecType permits RRawTypeImpl, RNothingValueType {
  RRawType ANY = new RRawTypeImpl(MaybeNat.UNKNOWN);
  RRawType SCALAR = new RRawTypeImpl(MaybeNat.of(1));

  static RRawType of(MaybeNat length) {
    if (!length.isKnown()) {
      return ANY;
    } else if (length.isDefinitely(1)) {
      return SCALAR;
    }

    return new RRawTypeImpl(length);
  }

  @Override
  RRawType withLength(MaybeNat length);
}

record RRawTypeImpl(@Override MaybeNat length) implements RRawType {
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
