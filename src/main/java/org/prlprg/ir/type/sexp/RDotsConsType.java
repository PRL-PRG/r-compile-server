package org.prlprg.ir.type.sexp;

import javax.annotation.Nonnull;
import org.prlprg.sexp.DotsListSXP;
import org.prlprg.sexp.SEXPType;
import org.prlprg.sexp.ValueSXP;

public sealed interface RDotsConsType extends RDotsListType
    permits RNothingValueType, RDotsConsTypeImpl {
  RDotsConsType ANY = RDotsConsTypeImpl.INSTANCE;
}

final class RDotsConsTypeImpl implements RDotsConsType {
  static final RDotsConsTypeImpl INSTANCE = new RDotsConsTypeImpl();

  @Override
  public Class<? extends ValueSXP> clazz() {
    // TODO: Add `DotsConsSXP.class`
    return DotsListSXP.class;
  }

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
