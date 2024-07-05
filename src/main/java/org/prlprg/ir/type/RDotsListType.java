package org.prlprg.ir.type;

public sealed interface RDotsListType extends RValueType
    permits RDotsListTypeImpl, RNilType, RDotsConsType {
  RDotsListType ANY = RDotsListTypeImpl.INSTANCE;
}

final class RDotsListTypeImpl implements RDotsListType {
  static final RDotsListTypeImpl INSTANCE = new RDotsListTypeImpl();

  @Override
  public String toString() {
    return "dotslist";
  }

  private RDotsListTypeImpl() {}
}
