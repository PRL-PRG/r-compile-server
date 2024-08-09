package org.prlprg.ir.type.sexp;

import javax.annotation.Nonnull;
import org.prlprg.sexp.BCodeSXP;
import org.prlprg.sexp.SEXPType;
import org.prlprg.sexp.ValueSXP;

public sealed interface RBCodeType extends RValueType permits RNothingValueType, RBCodeTypeImpl {
  RBCodeType ANY = RBCodeTypeImpl.INSTANCE;
}

final class RBCodeTypeImpl implements RBCodeType {
  static final RBCodeTypeImpl INSTANCE = new RBCodeTypeImpl();

  @Override
  public Class<? extends ValueSXP> clazz() {
    return BCodeSXP.class;
  }

  @Override
  public @Nonnull SEXPType sexpType() {
    return SEXPType.BCODE;
  }

  @Override
  public String toString() {
    return sexpType().toString();
  }

  private RBCodeTypeImpl() {}
}
