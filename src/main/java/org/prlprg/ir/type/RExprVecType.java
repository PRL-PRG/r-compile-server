package org.prlprg.ir.type;

import javax.annotation.Nonnull;
import org.prlprg.ir.type.lattice.MaybeNat;
import org.prlprg.sexp.SEXPType;

public sealed interface RExprVecType extends RVectorType
    permits RExprVecTypeImpl, RNothingValueType {
  RExprVecType ANY = RExprVecTypeImpl.INSTANCE;

  static RExprVecType of(MaybeNat length) {
    return new RExprVecTypeImpl(length);
  }

  @Override
  RExprVecType withLength(MaybeNat length);
}

record RExprVecTypeImpl(@Override MaybeNat length) implements RExprVecType {
  static final RExprVecTypeImpl INSTANCE = new RExprVecTypeImpl(MaybeNat.UNKNOWN);

  @Override
  public RExprVecType withLength(MaybeNat length) {
    return new RExprVecTypeImpl(length);
  }

  @Override
  public @Nonnull SEXPType sexpType() {
    return SEXPType.EXPR;
  }

  @Override
  public String typeString() {
    return sexpType().toString();
  }
}
