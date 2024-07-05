package org.prlprg.ir.type;

import javax.annotation.Nonnull;
import org.prlprg.sexp.SEXPType;

public sealed interface RDotsConsType extends RDotsListType
    permits RNothingValueType, RDotsConsTypeImpl {
  RDotsConsType ANY = RDotsConsTypeImpl.INSTANCE;
}

final class RDotsConsTypeImpl implements RDotsConsType {
  static final RDotsConsTypeImpl INSTANCE = new RDotsConsTypeImpl();

  @Override
  public @Nonnull SEXPType sexpType() {
    return SEXPType.LIST;
  }

  @Override
  public String toString() {
    return "dotscons";
  }

  private RDotsConsTypeImpl() {}
}
