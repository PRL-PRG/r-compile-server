package org.prlprg.ir.type;

public sealed interface RLangOrListType extends RValueType
    permits RLangOrListTypeImpl, RLangType, RListType {
  RLangOrListType ANY = RLangOrListTypeImpl.INSTANCE;
}

final class RLangOrListTypeImpl implements RLangOrListType {
  static final RLangOrListTypeImpl INSTANCE = new RLangOrListTypeImpl();

  @Override
  public String toString() {
    return "lang|list";
  }

  private RLangOrListTypeImpl() {}
}
