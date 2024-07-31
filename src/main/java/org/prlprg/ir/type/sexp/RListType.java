package org.prlprg.ir.type.sexp;

public sealed interface RListType extends RLangOrListType, RListOrVectorType
    permits RListTypeImpl, RNilType, RConsType {
  RListType ANY = RListTypeImpl.INSTANCE;
}

final class RListTypeImpl implements RListType {
  static final RListTypeImpl INSTANCE = new RListTypeImpl();

  @Override
  public String toString() {
    return "list";
  }

  private RListTypeImpl() {}
}
