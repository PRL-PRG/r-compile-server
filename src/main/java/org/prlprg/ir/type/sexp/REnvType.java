package org.prlprg.ir.type.sexp;

import javax.annotation.Nonnull;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.SEXPType;
import org.prlprg.sexp.ValueSXP;

public sealed interface REnvType extends RValueType
    permits REnvTypeImpl, RStaticEnvType, RUserEnvType {
  REnvType ANY = REnvTypeImpl.INSTANCE;
}

final class REnvTypeImpl implements REnvType {
  static final REnvTypeImpl INSTANCE = new REnvTypeImpl();

  @Override
  public Class<? extends ValueSXP> clazz() {
    return EnvSXP.class;
  }

  @Override
  public @Nonnull SEXPType sexpType() {
    return SEXPType.ENV;
  }

  @Override
  public String toString() {
    return sexpType().toString();
  }

  private REnvTypeImpl() {}
}
