package org.prlprg.ir.type;

public sealed interface RFunType extends RValueType
    permits RFunTypeImpl, RClosureType, RBuiltinOrSpecialType {
  RFunType ANY = RFunTypeImpl.INSTANCE;

  // TODO: Signatures (one for each overload)
}

final class RFunTypeImpl implements RFunType {
  static final RFunTypeImpl INSTANCE = new RFunTypeImpl();

  @Override
  public String toString() {
    return "fun";
  }

  private RFunTypeImpl() {}
}
