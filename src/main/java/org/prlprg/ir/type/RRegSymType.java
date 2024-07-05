package org.prlprg.ir.type;

import javax.annotation.Nonnull;
import org.prlprg.sexp.SEXPType;

public sealed interface RRegSymType extends RStringOrRegSymType, RRegSymOrLangType
    permits RDotsSymType, RRegSymTypeImpl {
  RRegSymType ANY = RRegSymTypeImpl.INSTANCE;
}

final class RRegSymTypeImpl implements RRegSymType {
  static final RRegSymTypeImpl INSTANCE = new RRegSymTypeImpl();

  @Override
  public @Nonnull SEXPType sexpType() {
    return SEXPType.SYM;
  }

  @Override
  public String toString() {
    return sexpType().toString();
  }

  private RRegSymTypeImpl() {}
}
