package org.prlprg.ir.type.sexp;

import org.prlprg.sexp.ListSXP;
import org.prlprg.sexp.ValueSXP;

public sealed interface RListType extends RAbstractPairListType, RListOrVectorType
    permits RListTypeImpl, RNilType, RConsType {
  RListType ANY = RListTypeImpl.INSTANCE;
}

final class RListTypeImpl implements RListType {
  static final RListTypeImpl INSTANCE = new RListTypeImpl();

  @Override
  public Class<? extends ValueSXP> clazz() {
    return ListSXP.class;
  }

  @Override
  public String toString() {
    return "list";
  }

  private RListTypeImpl() {}
}
