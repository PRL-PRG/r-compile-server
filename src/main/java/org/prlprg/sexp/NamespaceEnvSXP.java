package org.prlprg.sexp;

import java.util.Map;

public final class NamespaceEnvSXP extends AbstractEnvSXP implements EnvSXP {
  private final String name;
  private final String version;

  public NamespaceEnvSXP(String name, String version, EnvSXP parent, Map<String, SEXP> bindings) {
    super(parent);
    bindings.forEach(this::set);
    this.name = name;
    this.version = version;
  }

  public String getVersion() {
    return version;
  }

  public String getName() {
    return name;
  }

  @Override
  public String toString() {
    // TODO: add some link to the R session?
    return "<namespace:" + name + ">";
  }
}
