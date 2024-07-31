package org.prlprg.ir.type.sexp;

import javax.annotation.Nonnull;
import org.prlprg.sexp.SEXPType;

public sealed interface RNilType extends RListType, RDotsListType
    permits RNothingValueType, RNilTypeImpl {
  RNilType ANY = RNilTypeImpl.INSTANCE;
}

final class RNilTypeImpl implements RNilType {
  static final RNilTypeImpl INSTANCE = new RNilTypeImpl();

  @Override
  public @Nonnull SEXPType sexpType() {
    return SEXPType.NIL;
  }

  @Override
  public String toString() {
    return sexpType().toString();
  }

  private RNilTypeImpl() {}
}
