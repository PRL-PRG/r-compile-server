package org.prlprg.ir.type.sexp;

import javax.annotation.Nonnull;
import org.prlprg.sexp.SEXPType;

public sealed interface RStaticEnvType extends REnvType
    permits RStaticEnvTypeImpl, RNothingValueType {
  RStaticEnvType ANY = RStaticEnvTypeImpl.INSTANCE;
}

final class RStaticEnvTypeImpl implements RStaticEnvType {
  static final RStaticEnvTypeImpl INSTANCE = new RStaticEnvTypeImpl();

  @Override
  public @Nonnull SEXPType sexpType() {
    return SEXPType.ENV;
  }

  @Override
  public String toString() {
    return "senv";
  }

  private RStaticEnvTypeImpl() {}
}
