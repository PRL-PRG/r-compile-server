package org.prlprg.ir.type.sexp;

public sealed interface RAbstractPairListType extends RValueType
    permits RAbstractPairListTypeImpl, RDotsListType, RLangType, RListType {
  RAbstractPairListType ANY = RAbstractPairListTypeImpl.INSTANCE;
}

final class RAbstractPairListTypeImpl implements RAbstractPairListType {
  static final RAbstractPairListTypeImpl INSTANCE = new RAbstractPairListTypeImpl();

  @Override
  public String toString() {
    return "dotslist|lang|list";
  }

  private RAbstractPairListTypeImpl() {}
}
