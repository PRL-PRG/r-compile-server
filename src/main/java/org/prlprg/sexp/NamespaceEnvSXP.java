package org.prlprg.sexp;

import java.util.Map;
import java.util.Optional;

public final class NamespaceEnvSXP implements EnvSXP {
  private final EnvSXP parent;
  private final String name;
  private final String version;

  public NamespaceEnvSXP(EnvSXP parent, String name, String version) {
    this.parent = parent;
    this.name = name;
    this.version = version;
  }

  @Override
  public EnvSXP parent() {
    return parent;
  }

  @Override
  public Optional<SEXP> get(String name) {
    // TODO: implement
    return Optional.empty();
  }

  @Override
  public Optional<SEXP> getLocal(String name) {
    // TODO: implement
    return Optional.empty();
  }

  @Override
  public Iterable<? extends Map.Entry<? extends String, ? extends SEXP>> bindings() {
    throw new UnsupportedOperationException();
  }

  public String getVersion() {
    return version;
  }

  @Override
  public String toString() {
    // TODO: add some link to the R session?
    return "<namespace:" + name + ">";
  }
}
