package org.prlprg.ir.type;

import javax.annotation.Nonnull;
import org.prlprg.sexp.SEXPType;

public sealed interface REnvType extends RValueType
    permits REnvTypeImpl, RStaticEnvType, RUserEnvType {
  REnvType ANY = REnvTypeImpl.INSTANCE;
}

final class REnvTypeImpl implements REnvType {
  static final REnvTypeImpl INSTANCE = new REnvTypeImpl();

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
