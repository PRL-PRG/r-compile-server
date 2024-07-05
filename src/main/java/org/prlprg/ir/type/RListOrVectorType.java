package org.prlprg.ir.type;

public sealed interface RListOrVectorType extends RValueType
    permits RListOrVectorTypeImpl, RListType, RVectorType {
  RListOrVectorType ANY = RListOrVectorTypeImpl.INSTANCE;
}

final class RListOrVectorTypeImpl implements RListOrVectorType {
  static final RListOrVectorTypeImpl INSTANCE = new RListOrVectorTypeImpl();

  @Override
  public String toString() {
    return "list|vector";
  }

  private RListOrVectorTypeImpl() {}
}
