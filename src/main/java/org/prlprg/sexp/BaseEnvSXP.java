package org.prlprg.sexp;

import java.util.HashMap;

public final class BaseEnvSXP extends AbstractEnvSXP implements EnvSXP {

  public BaseEnvSXP(HashMap<String, SEXP> bindings) {
    super(EmptyEnvSXP.INSTANCE);
    bindings.forEach(this::set);
  }

  @Override
  public int size() {
    return bindings.size();
  }

  @Override
  public String toString() {
    // TODO: add some link to the R session?
    return "<environment: base>";
  }
}
