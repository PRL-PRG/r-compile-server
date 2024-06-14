package org.prlprg.sexp;

/** A global, namespace, or base environment. */
public sealed interface StaticEnvSXP extends EnvSXP
    permits BaseEnvSXP, EmptyEnvSXP, GlobalEnvSXP, NamespaceEnvSXP {
  @Override
  StaticEnvSXP parent();
}

abstract class AbstractStaticEnvSXP extends AbstractEnvSXP {
  public AbstractStaticEnvSXP(StaticEnvSXP parent) {
    super(parent);
  }

  @Override
  public StaticEnvSXP parent() {
    return (StaticEnvSXP) super.parent();
  }
}
