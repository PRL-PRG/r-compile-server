package org.prlprg.ir.type;

import javax.annotation.Nonnull;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.SEXPType;

public sealed interface RClosureType extends RFunType permits RNothingValueType, RClosureTypeImpl {
  RClosureType ANY = RClosureTypeImpl.INSTANCE;

  /**
   * Returns the most specific type that can be trivially inferred for the closure.
   *
   * <p>Looks at formals, but not body.
   */
  static RClosureType exact(CloSXP ignored) {
    // TODO
    return ANY;
  }
}

final class RClosureTypeImpl implements RClosureType {
  static final RClosureTypeImpl INSTANCE = new RClosureTypeImpl();

  @Override
  public @Nonnull SEXPType sexpType() {
    return SEXPType.CLO;
  }

  @Override
  public String toString() {
    return sexpType().toString();
  }

  private RClosureTypeImpl() {}
}
