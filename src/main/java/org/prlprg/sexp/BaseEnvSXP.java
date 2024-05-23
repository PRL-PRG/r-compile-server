package org.prlprg.sexp;

import java.util.Map;

public final class BaseEnvSXP extends AbstractEnvSXP implements EnvSXP {

  public BaseEnvSXP(Map<String, SEXP> bindings) {
    super(EmptyEnvSXP.INSTANCE);
    bindings.forEach(this::set);
  }

  @Override
  public String toString() {
    // TODO: add some link to the R session?
    return "<environment: base>";
  }
}
