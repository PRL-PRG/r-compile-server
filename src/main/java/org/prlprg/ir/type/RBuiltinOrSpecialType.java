package org.prlprg.ir.type;

import org.prlprg.primitive.BuiltinId;

public sealed interface RBuiltinOrSpecialType extends RFunType
    permits RBuiltinOrSpecialTypeImpl, RBuiltinType, RSpecialType {
  RBuiltinOrSpecialType ANY = RBuiltinOrSpecialTypeImpl.INSTANCE;

  /** Returns a type with the built-in's signature. */
  static RBuiltinType of(BuiltinId id) {
    // TODO
    return RBuiltinType.ANY;
  }
}

final class RBuiltinOrSpecialTypeImpl implements RBuiltinOrSpecialType {
  static final RBuiltinOrSpecialTypeImpl INSTANCE = new RBuiltinOrSpecialTypeImpl();

  @Override
  public String toString() {
    return "blt|spec";
  }

  private RBuiltinOrSpecialTypeImpl() {}
}
