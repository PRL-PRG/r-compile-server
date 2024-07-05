package org.prlprg.ir.type;

import javax.annotation.Nonnull;
import org.prlprg.sexp.SEXPType;
import org.prlprg.sexp.SpecialSXP;

public sealed interface RSpecialType extends RBuiltinOrSpecialType
    permits RNothingValueType, RSpecialTypeImpl {
  RSpecialType ANY = RSpecialTypeImpl.INSTANCE;

  /** Returns a type with the built-in's signature. */
  static RSpecialType exact(SpecialSXP sexp) {
    return (RSpecialType) RBuiltinOrSpecialType.of(sexp.id());
  }
}

final class RSpecialTypeImpl implements RSpecialType {
  static final RSpecialTypeImpl INSTANCE = new RSpecialTypeImpl();

  @Override
  public @Nonnull SEXPType sexpType() {
    return SEXPType.SPECIAL;
  }

  @Override
  public String toString() {
    return sexpType().toString();
  }

  private RSpecialTypeImpl() {}
}
