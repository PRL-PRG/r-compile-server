package org.prlprg.ir.type.sexp;

import org.prlprg.sexp.RegSymOrLangSXP;
import org.prlprg.sexp.ValueSXP;

public sealed interface RRegSymOrLangType extends RValueType
    permits RRegSymOrLangTypeImpl, RRegSymType, RLangType {
  RRegSymOrLangType ANY = RRegSymOrLangTypeImpl.INSTANCE;
}

final class RRegSymOrLangTypeImpl implements RRegSymOrLangType {
  static final RRegSymOrLangTypeImpl INSTANCE = new RRegSymOrLangTypeImpl();

  @Override
  public Class<? extends ValueSXP> clazz() {
    return RegSymOrLangSXP.class;
  }

  @Override
  public String toString() {
    return "sym|lang";
  }

  private RRegSymOrLangTypeImpl() {}
}
