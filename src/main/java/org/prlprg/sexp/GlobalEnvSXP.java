package org.prlprg.sexp;

import java.util.Map;

public final class GlobalEnvSXP extends AbstractStaticEnvSXP implements StaticEnvSXP {
  public GlobalEnvSXP(StaticEnvSXP parent) {
    super(parent);
  }

  public GlobalEnvSXP(StaticEnvSXP parent, Map<String, SEXP> bindings) {
    this(parent);
    this.bindings.putAll(bindings);
  }

  @Override
  public EnvType envType() {
    return EnvType.GLOBAL;
  }
}
