package org.prlprg.ir.type.sexp;

import javax.annotation.Nonnull;
import org.prlprg.sexp.ListSXP;
import org.prlprg.sexp.SEXPType;
import org.prlprg.sexp.ValueSXP;

public sealed interface RConsType extends RListType permits RNothingValueType, RConsTypeImpl {
  RConsType ANY = RConsTypeImpl.INSTANCE;
}

final class RConsTypeImpl implements RConsType {
  static final RConsTypeImpl INSTANCE = new RConsTypeImpl();

  @Override
  public Class<? extends ValueSXP> clazz() {
    // TODO: Refactor lists to distinguish "fake" lists and pairlists, and add `ConsSXP.class`.
    return ListSXP.class;
  }

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
