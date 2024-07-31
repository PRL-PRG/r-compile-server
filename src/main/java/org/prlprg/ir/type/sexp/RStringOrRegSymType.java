package org.prlprg.ir.type.sexp;

public sealed interface RStringOrRegSymType extends RValueType
    permits RStringOrRegSymTypeImpl, RRegSymType, RStringType {
  RStringOrRegSymType ANY = RStringOrRegSymTypeImpl.INSTANCE;
}

final class RStringOrRegSymTypeImpl implements RStringOrRegSymType {
  static final RStringOrRegSymTypeImpl INSTANCE = new RStringOrRegSymTypeImpl();

  @Override
  public String toString() {
    return "str|sym";
  }

  private RStringOrRegSymTypeImpl() {}
}
