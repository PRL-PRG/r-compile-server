package org.prlprg.sexp;

import java.util.HashMap;
import java.util.Map;
import java.util.Optional;

public abstract sealed class AbstractEnvSXP implements EnvSXP
    permits BaseEnvSXP, GlobalEnvSXP, NamespaceEnvSXP, UserEnvSXP {

  protected EnvSXP parent;
  protected final Map<String, SEXP> bindings;

  public AbstractEnvSXP(EnvSXP parent) {
    this.parent = parent;
    this.bindings = new HashMap<>();
  }

  @Override
  public EnvSXP parent() {
    return parent;
  }

  @Override
  public Optional<SEXP> get(String name) {
    return getLocal(name).or(() -> parent.get(name));
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
  public int size() {
    return bindings.size();
  }

  public void set(String name, SEXP value) {
    bindings.put(name, value);
  }
}
