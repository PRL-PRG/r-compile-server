package org.prlprg.sexp;

import java.util.Map;

public final class BaseEnvSXP extends AbstractStaticEnvSXP implements StaticEnvSXP {
  public BaseEnvSXP() {
    super(EmptyEnvSXP.INSTANCE);
  }

  public BaseEnvSXP(Map<String, SEXP> bindings) {
    this();
    this.bindings.putAll(bindings);
  }

  @Override
  public EmptyEnvSXP parent() {
    return (EmptyEnvSXP) super.parent();
  }

  @Override
  public int size() {
    return bindings.size();
  }

  @Override
  public void setParent(StaticEnvSXP parent) {
    if (parent instanceof EmptyEnvSXP e) {
      assert e == EmptyEnvSXP.INSTANCE;
    } else {
      throw new UnsupportedOperationException(
          "Can't set parent of "
              + envType()
              + " to anything except the empty environment: tried "
              + parent);
    }
  }

  @Override
  public EnvType envType() {
    return EnvType.BASE;
  }
}
