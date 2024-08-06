package org.prlprg.ir.type.sexp;

import org.prlprg.sexp.AbstractPairListSXP;
import org.prlprg.sexp.ValueSXP;

public sealed interface RAbstractPairListType extends RValueType
    permits RAbstractPairListTypeImpl, RDotsListType, RLangType, RListType {
  RAbstractPairListType ANY = RAbstractPairListTypeImpl.INSTANCE;
}

final class RAbstractPairListTypeImpl implements RAbstractPairListType {
  static final RAbstractPairListTypeImpl INSTANCE = new RAbstractPairListTypeImpl();

  @Override
  public Class<? extends ValueSXP> clazz() {
    return AbstractPairListSXP.class;
  }

  @Override
  public String toString() {
    return "dotslist|lang|list";
  }

  private RAbstractPairListTypeImpl() {}
}
