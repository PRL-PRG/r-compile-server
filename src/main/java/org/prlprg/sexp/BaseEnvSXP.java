package org.prlprg.sexp;

import com.google.common.collect.ImmutableMap;
import java.util.HashMap;
import java.util.Map;
import java.util.Optional;

public final class BaseEnvSXP implements EnvSXP {
  private final ImmutableMap<String, SEXP> bindings;

  public BaseEnvSXP(HashMap<String, SEXP> bindings) {
    this.bindings = ImmutableMap.copyOf(bindings);
  }

  public BaseEnvSXP(EnvSXP env) {
    this.bindings = ImmutableMap.copyOf(env.bindings());
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
  public Iterable<? extends Map.Entry<? extends String, ? extends SEXP>> bindings() {
    return bindings.entrySet();
  }

  @Override
  public String toString() {
    // TODO: add some link to the R session?
    return "<environment: base>";
  }
}
