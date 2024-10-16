package org.prlprg.sexp;

import java.util.Map;

public final class NamespaceEnvSXP extends AbstractStaticEnvSXP implements StaticEnvSXP {
  private final String name;
  private final String version;

  public NamespaceEnvSXP(String name, String version, StaticEnvSXP parent) {
    super(parent);
    this.name = name;
    this.version = version;
  }

  public NamespaceEnvSXP(
      String name, String version, StaticEnvSXP parent, Map<String, SEXP> bindings) {
    this(name, version, parent);
    this.bindings.putAll(bindings);
  }

  public String version() {
    return version;
  }

  public String name() {
    return name;
  }

  @Override
  public EnvType envType() {
    return EnvType.NAMESPACE;
  }

  @Override
  public String toString() {
    // TODO: add some link to the R session?
    return "<namespace:" + name + ">";
  }
}
