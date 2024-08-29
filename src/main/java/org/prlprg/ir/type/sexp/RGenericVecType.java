package org.prlprg.ir.type.sexp;

import javax.annotation.Nonnull;
import org.prlprg.ir.type.lattice.MaybeNat;
import org.prlprg.sexp.SEXPType;
import org.prlprg.sexp.ValueSXP;
import org.prlprg.sexp.VecSXP;

public sealed interface RGenericVecType extends RVectorType
    permits RGenericVecTypeImpl, RNothingValueType {
  RGenericVecType ANY = new RGenericVecTypeImpl(MaybeNat.UNKNOWN);
  RGenericVecType SCALAR = new RGenericVecTypeImpl(MaybeNat.of(1));

  static RGenericVecType of(MaybeNat length) {
    if (!length.isKnown()) {
      return ANY;
    } else if (length.isDefinitely(1)) {
      return SCALAR;
    }

    return new RGenericVecTypeImpl(length);
  }

  @Override
  RGenericVecType withLength(MaybeNat length);
}

record RGenericVecTypeImpl(@Override MaybeNat length) implements RGenericVecType {
  @Override
  public Class<? extends ValueSXP> clazz() {
    return VecSXP.class;
  }

  @Override
  public RGenericVecType withLength(MaybeNat length) {
    return new RGenericVecTypeImpl(length);
  }

  @Override
  public @Nonnull SEXPType sexpType() {
    return SEXPType.VEC;
  }

  @Override
  public String typeString() {
    return sexpType().toString();
  }
}
