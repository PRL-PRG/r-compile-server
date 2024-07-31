package org.prlprg.ir.type.sexp;

import javax.annotation.Nonnull;
import org.prlprg.sexp.SEXPType;

public sealed interface RDotsSymType extends RRegSymType
    permits RNothingValueType, RDotsSymTypeImpl {
  RDotsSymType ANY = RDotsSymTypeImpl.INSTANCE;
}

final class RDotsSymTypeImpl implements RDotsSymType {
  static final RDotsSymTypeImpl INSTANCE = new RDotsSymTypeImpl();

  @Override
  public @Nonnull SEXPType sexpType() {
    return SEXPType.SYM;
  }

  @Override
  public String toString() {
    return sexpType().toString();
  }

  private RDotsSymTypeImpl() {}
}
