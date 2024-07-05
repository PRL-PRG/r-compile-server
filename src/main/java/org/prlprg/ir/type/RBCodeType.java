package org.prlprg.ir.type;

import javax.annotation.Nonnull;
import org.prlprg.sexp.SEXPType;

public sealed interface RBCodeType extends RValueType permits RNothingValueType, RBCodeTypeImpl {
  RBCodeType ANY = RBCodeTypeImpl.INSTANCE;
}

final class RBCodeTypeImpl implements RBCodeType {
  static final RBCodeTypeImpl INSTANCE = new RBCodeTypeImpl();

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
