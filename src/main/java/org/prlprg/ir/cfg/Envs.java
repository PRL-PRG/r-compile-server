package org.prlprg.ir.cfg;

import javax.annotation.Nullable;
import org.prlprg.sexp.SEXP;

/** Static class with constants for static environments. */
public class Envs {
  public static final Env GLOBAL = new StaticEnvImpl("R_GlobalEnv");
  public static final Env NOT_CLOSED = new StaticEnvImpl("notClosed");
  public static final Env ELIDED = new StaticEnvImpl("elided");

  private Envs() {}
}

class StaticEnvImpl implements Env {
  private final String name;
  private final NodeId<StaticEnvImpl> id;

  public StaticEnvImpl(String name) {
    this.name = name;
    id = new GlobalNodeId<>(this, name);
  }

  @Nullable @Override
  public Env parent() {
    return null;
  }

  @Nullable @Override
  public SEXP sexp() {
    return null;
  }

  @Nullable @Override
  public CFG cfg() {
    return null;
  }

  @Nullable @Override
  public InstrOrPhi origin() {
    return null;
  }

  @Override
  public NodeId<? extends Env> id() {
    return id;
  }

  @Override
  public String toString() {
    return name;
  }
}
