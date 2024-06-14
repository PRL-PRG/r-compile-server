package org.prlprg.sexp;

import java.util.Map;

public final class BaseEnvSXP extends AbstractStaticEnvSXP implements StaticEnvSXP {
  public BaseEnvSXP() {
    super(EmptyEnvSXP.INSTANCE);
  }

  public BaseEnvSXP(Map<String, SEXP> bindings) {
    this();
    this.bindings.putAll(bindings);
  }

  @Override
  public EmptyEnvSXP parent() {
    return (EmptyEnvSXP) super.parent();
  }

  @Override
  public EnvType envType() {
    return EnvType.BASE;
  }
}
