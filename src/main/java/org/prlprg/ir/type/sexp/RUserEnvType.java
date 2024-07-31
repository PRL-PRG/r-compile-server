package org.prlprg.ir.type.sexp;

import javax.annotation.Nonnull;
import org.prlprg.sexp.SEXPType;

public sealed interface RUserEnvType extends REnvType permits RUserEnvTypeImpl, RNothingValueType {
  RUserEnvType ANY = RUserEnvTypeImpl.INSTANCE;
}

final class RUserEnvTypeImpl implements RUserEnvType {
  static final RUserEnvTypeImpl INSTANCE = new RUserEnvTypeImpl();

  @Override
  public @Nonnull SEXPType sexpType() {
    return SEXPType.ENV;
  }

  @Override
  public String toString() {
    return "uenv";
  }

  private RUserEnvTypeImpl() {}
}
