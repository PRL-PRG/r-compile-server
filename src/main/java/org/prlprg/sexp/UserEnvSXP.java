package org.prlprg.sexp;

import javax.annotation.Nullable;

public final class UserEnvSXP extends AbstractEnvSXP implements EnvSXP {
  private @Nullable Attributes attributes;

  public UserEnvSXP() {
    this(EmptyEnvSXP.INSTANCE);
  }

  public UserEnvSXP(EnvSXP parent) {
    super(parent);
  }

  public void setParent(EnvSXP parent) {
    this.parent = parent;
  }

  @Override
  public String toString() {
    return "<environment: " + hashCode() + ">";
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
