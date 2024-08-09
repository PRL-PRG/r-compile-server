package org.prlprg.ir.type.sexp;

import org.prlprg.sexp.DotsListSXP;
import org.prlprg.sexp.ValueSXP;

public sealed interface RDotsListType extends RAbstractPairListType
    permits RDotsListTypeImpl, RNilType, RDotsConsType {
  RDotsListType ANY = RDotsListTypeImpl.INSTANCE;
}

final class RDotsListTypeImpl implements RDotsListType {
  static final RDotsListTypeImpl INSTANCE = new RDotsListTypeImpl();

  @Override
  public Class<? extends ValueSXP> clazz() {
    return DotsListSXP.class;
  }

  @Override
  public String toString() {
    return "dotslist";
  }

  private RDotsListTypeImpl() {}
}
