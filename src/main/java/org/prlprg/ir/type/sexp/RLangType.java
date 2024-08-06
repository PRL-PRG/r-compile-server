package org.prlprg.ir.type.sexp;

import javax.annotation.Nonnull;
import org.prlprg.sexp.LangSXP;
import org.prlprg.sexp.SEXPType;
import org.prlprg.sexp.ValueSXP;

public sealed interface RLangType extends RRegSymOrLangType, RAbstractPairListType
    permits RNothingValueType, RLangTypeImpl {
  RLangType ANY = RLangTypeImpl.INSTANCE;
}

final class RLangTypeImpl implements RLangType {
  static final RLangTypeImpl INSTANCE = new RLangTypeImpl();

  @Override
  public Class<? extends ValueSXP> clazz() {
    return LangSXP.class;
  }

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
