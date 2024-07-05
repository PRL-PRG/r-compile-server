package org.prlprg.ir.type;

import javax.annotation.Nonnull;
import org.prlprg.ir.type.lattice.MaybeNat;
import org.prlprg.sexp.SEXPType;

public sealed interface RGenericVecType extends RVectorType
    permits RGenericVecTypeImpl, RNothingValueType {
  RGenericVecType ANY = RGenericVecTypeImpl.INSTANCE;

  static RGenericVecType of(MaybeNat length) {
    return new RGenericVecTypeImpl(length);
  }

  @Override
  RGenericVecType withLength(MaybeNat length);
}

record RGenericVecTypeImpl(@Override MaybeNat length) implements RGenericVecType {
  static final RGenericVecTypeImpl INSTANCE = new RGenericVecTypeImpl(MaybeNat.UNKNOWN);

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
