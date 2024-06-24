package org.prlprg.sexp;

/** A global, namespace, or base environment. */
public sealed interface StaticEnvSXP extends EnvSXP
    permits BaseEnvSXP, EmptyEnvSXP, GlobalEnvSXP, NamespaceEnvSXP {
  @Override
  StaticEnvSXP parent();

  /**
   * Change the environment's parent post-initialization.
   *
   * @throws UnsupportedOperationException If the given parent is of a type that can't be a parent
   *     of this environment. For example, the base environment's parent is always the empty
   *     environment, so this will fail if given any other environment (and otherwise is a no-op).
   */
  void setParent(StaticEnvSXP parent);
}

abstract class AbstractStaticEnvSXP extends AbstractEnvSXP {
  public AbstractStaticEnvSXP(StaticEnvSXP parent) {
    super(parent);
  }

  @Override
  public StaticEnvSXP parent() {
    return (StaticEnvSXP) super.parent();
  }

  @Override
  public void setParent(EnvSXP parent) {
    if (parent instanceof StaticEnvSXP p) {
      setParent(p);
    } else {
      throw new UnsupportedOperationException(
          "Can't set parent of " + envType() + " to non-static environment: tried " + parent);
    }
  }

  // @Override
  public void setParent(StaticEnvSXP parent) {
    super.setParent(parent);
  }

  abstract EnvType envType();
}
