package org.prlprg.sexp;

import java.util.Map;
import javax.annotation.Nonnull;

/** An environment inside a closure or explicitly defined by the user. */
public final class UserEnvSXP extends AbstractEnvSXP implements EnvSXP {
  private Attributes attributes = Attributes.NONE;

  public UserEnvSXP() {
    this(EmptyEnvSXP.INSTANCE);
  }

  public UserEnvSXP(EnvSXP parent) {
    super(parent);
  }

  public UserEnvSXP(EnvSXP parent, Map<String, SEXP> bindings) {
    this(parent);
    this.bindings.putAll(bindings);
  }

  @Override
  public void setParent(EnvSXP parent) {
    this.parent = parent;
  }

  @Override
  public EnvType envType() {
    return EnvType.USER;
  }

  @Override
  public UserEnvSXP withAttributes(Attributes attributes) {
    this.attributes = attributes;
    return this;
  }

  @Override
  public @Nonnull Attributes attributes() {
    return attributes;
  }
}
