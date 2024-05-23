package org.prlprg.sexp;

import java.util.Map;
import javax.annotation.Nullable;

public final class UserEnvSXP extends AbstractEnvSXP implements EnvSXP {
  private @Nullable Attributes attributes;

  public UserEnvSXP() {
    this(EmptyEnvSXP.INSTANCE);
  }

  public UserEnvSXP(EnvSXP parent) {
    super(parent);
  }

  public UserEnvSXP(EnvSXP parent, Map<String, SEXP> bindings) {
    super(parent, bindings);
  }

  public void setParent(EnvSXP parent) {
    this.parent = parent;
  }

  @Override
  public String toString() {
    return "<environment: " + "@" + Integer.toString(hashCode(), 16) + ">";
  }

  @Override
  public UserEnvSXP withAttributes(Attributes attributes) {
    this.attributes = attributes;
    return this;
  }

  @Nullable public Attributes getAttributes() {
    return attributes;
  }
}
