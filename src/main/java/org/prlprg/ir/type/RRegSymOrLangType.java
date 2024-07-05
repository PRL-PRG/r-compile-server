package org.prlprg.ir.type;

public sealed interface RRegSymOrLangType extends RValueType
    permits RRegSymOrLangTypeImpl, RRegSymType, RLangType {
  RRegSymOrLangType ANY = RRegSymOrLangTypeImpl.INSTANCE;
}

final class RRegSymOrLangTypeImpl implements RRegSymOrLangType {
  static final RRegSymOrLangTypeImpl INSTANCE = new RRegSymOrLangTypeImpl();

  @Override
  public String toString() {
    return "sym|lang";
  }

  private RRegSymOrLangTypeImpl() {}
}
