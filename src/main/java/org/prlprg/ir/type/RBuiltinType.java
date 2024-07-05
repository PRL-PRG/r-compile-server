package org.prlprg.ir.type;

import javax.annotation.Nonnull;
import org.prlprg.sexp.BuiltinSXP;
import org.prlprg.sexp.SEXPType;

public sealed interface RBuiltinType extends RBuiltinOrSpecialType
    permits RNothingValueType, RBuiltinTypeImpl {
  RBuiltinType ANY = RBuiltinTypeImpl.INSTANCE;

  /** Returns a type with the built-in's signature. */
  static RBuiltinType exact(BuiltinSXP sexp) {
    return (RBuiltinType) RBuiltinOrSpecialType.of(sexp.id());
  }
}

final class RBuiltinTypeImpl implements RBuiltinType {
  static final RBuiltinTypeImpl INSTANCE = new RBuiltinTypeImpl();

  @Override
  public @Nonnull SEXPType sexpType() {
    return SEXPType.BUILTIN;
  }

  @Override
  public String toString() {
    return sexpType().toString();
  }

  private RBuiltinTypeImpl() {}
}
