package org.prlprg.sexp;

import java.util.Map;

public final class NamespaceEnvSXP extends AbstractStaticEnvSXP implements StaticEnvSXP {
  private final String name;
  private final String version;

  /// This check should return `true` for any character of a reasonable namespace version.
  /// It's necessary so that namespace environments can be parsed.
  public static boolean isValidVersionChar(int c) {
    return Character.isLetterOrDigit(c) || c == '.' || c == '_' || c == '+';
  }

  public NamespaceEnvSXP(String name, String version, StaticEnvSXP parent) {
    super(parent);
    this.name = name;
    this.version = version;
  }

  public NamespaceEnvSXP(
      String name, String version, StaticEnvSXP parent, Map<String, SEXP> bindings) {
    this(name, version, parent);

    if (name.isEmpty()) {
      throw new IllegalArgumentException("Namespace name must not be empty");
    } else if (!version.chars().allMatch(NamespaceEnvSXP::isValidVersionChar)) {
      throw new IllegalArgumentException("Namespace version must be a valid version string");
    }

    this.setBindings(bindings);
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
