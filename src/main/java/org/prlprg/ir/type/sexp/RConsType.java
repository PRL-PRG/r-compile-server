package org.prlprg.ir.type.sexp;

import javax.annotation.Nonnull;
import org.prlprg.sexp.SEXPType;

public sealed interface RConsType extends RListType permits RNothingValueType, RConsTypeImpl {
  RConsType ANY = RConsTypeImpl.INSTANCE;
}

final class RConsTypeImpl implements RConsType {
  static final RConsTypeImpl INSTANCE = new RConsTypeImpl();

  @Override
  public @Nonnull SEXPType sexpType() {
    return SEXPType.LIST;
  }

  @Override
  public String toString() {
    return "cons";
  }

  private RConsTypeImpl() {}
}
