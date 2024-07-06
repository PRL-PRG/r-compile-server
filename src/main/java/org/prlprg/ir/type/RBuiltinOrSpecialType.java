package org.prlprg.ir.type;

import org.prlprg.primitive.BuiltinId;

public sealed interface RBuiltinOrSpecialType extends RFunType
    permits RBuiltinOrSpecialTypeImpl, RBuiltinType, RSpecialType {
  RBuiltinOrSpecialType ANY = RBuiltinOrSpecialTypeImpl.INSTANCE;

  /** Returns a type with the built-in's signature. */
  static RBuiltinOrSpecialType of(BuiltinId id) {
    // TODO
    return id.isSpecial() ? RSpecialType.ANY : RBuiltinType.ANY;
  }
}

final class RBuiltinOrSpecialTypeImpl implements RBuiltinOrSpecialType {
  static final RBuiltinOrSpecialTypeImpl INSTANCE = new RBuiltinOrSpecialTypeImpl();

  @Override
  public RFunTypeOverloads overloads() {
    return RFunTypeOverloads.NONE;
  }

  @Override
  public String typeString() {
    return "blt|spec";
  }
}
