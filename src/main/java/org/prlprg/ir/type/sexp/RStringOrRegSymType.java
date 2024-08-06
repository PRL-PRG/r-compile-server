package org.prlprg.ir.type.sexp;

import org.prlprg.sexp.StrOrRegSymSXP;
import org.prlprg.sexp.ValueSXP;

public sealed interface RStringOrRegSymType extends RValueType
    permits RStringOrRegSymTypeImpl, RRegSymType, RStringType {
  RStringOrRegSymType ANY = RStringOrRegSymTypeImpl.INSTANCE;
}

final class RStringOrRegSymTypeImpl implements RStringOrRegSymType {
  static final RStringOrRegSymTypeImpl INSTANCE = new RStringOrRegSymTypeImpl();

  @Override
  public Class<? extends ValueSXP> clazz() {
    return StrOrRegSymSXP.class;
  }

  @Override
  public String toString() {
    return "str|sym";
  }

  private RStringOrRegSymTypeImpl() {}
}
