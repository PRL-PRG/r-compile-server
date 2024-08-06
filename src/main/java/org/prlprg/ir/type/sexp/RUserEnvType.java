package org.prlprg.ir.type.sexp;

import javax.annotation.Nonnull;
import javax.annotation.Nullable;
import org.prlprg.sexp.SEXPType;
import org.prlprg.sexp.UserEnvSXP;
import org.prlprg.sexp.ValueSXP;

public sealed interface RUserEnvType extends REnvType permits RUserEnvTypeImpl, RNothingValueType {
  RUserEnvType ANY = RUserEnvTypeImpl.INSTANCE;
}

final class RUserEnvTypeImpl implements RUserEnvType {
  static final RUserEnvTypeImpl INSTANCE = new RUserEnvTypeImpl();

  @Override
  public Class<? extends ValueSXP> clazz() {
    return UserEnvSXP.class;
  }

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
