package org.prlprg.ir.type;

import javax.annotation.Nonnull;
import org.prlprg.sexp.SEXPType;

public sealed interface RLangType extends RRegSymOrLangType, RLangOrListType
    permits RNothingValueType, RLangTypeImpl {
  RLangType ANY = RLangTypeImpl.INSTANCE;
}

final class RLangTypeImpl implements RLangType {
  static final RLangTypeImpl INSTANCE = new RLangTypeImpl();

  @Override
  public @Nonnull SEXPType sexpType() {
    return SEXPType.LANG;
  }

  @Override
  public String toString() {
    return sexpType().toString();
  }

  private RLangTypeImpl() {}
}