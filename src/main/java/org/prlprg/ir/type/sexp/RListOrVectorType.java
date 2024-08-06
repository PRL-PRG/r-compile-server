package org.prlprg.ir.type.sexp;

import org.prlprg.sexp.ListOrVectorSXP;
import org.prlprg.sexp.ValueSXP;

public sealed interface RListOrVectorType extends RValueType
    permits RListOrVectorTypeImpl, RListType, RVectorType {
  RListOrVectorType ANY = RListOrVectorTypeImpl.INSTANCE;
}

final class RListOrVectorTypeImpl implements RListOrVectorType {
  static final RListOrVectorTypeImpl INSTANCE = new RListOrVectorTypeImpl();

  @Override
  public Class<? extends ValueSXP> clazz() {
    return ListOrVectorSXP.class;
  }

  @Override
  public String toString() {
    return "list|vector";
  }

  private RListOrVectorTypeImpl() {}
}
