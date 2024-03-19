package org.prlprg.sexp;

import com.google.common.collect.ImmutableMap;
import java.util.HashMap;
import java.util.Optional;

public final class BaseEnvSXP implements EnvSXP {
  private final ImmutableMap<String, SEXP> bindings;

  public BaseEnvSXP(HashMap<String, SEXP> bindings) {
    this.bindings = ImmutableMap.copyOf(bindings);
  }

  @Override
  public EnvSXP parent() {
    return SEXPs.EMPTY_ENV;
  }

  @Override
  public Optional<SEXP> get(String name) {
    return getLocal(name);
  }

  @Override
  public Optional<SEXP> getLocal(String name) {
    return Optional.ofNullable(bindings.get(name));
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
