package org.prlprg.ir;

import javax.annotation.Nullable;
import org.prlprg.sexp.SEXP;

public class Envs {
  public static final Env GLOBAL = new StaticEnvImpl("R_GlobalEnv");
  public static final Env NOT_CLOSED = new StaticEnvImpl("notClosed");
  public static final Env ELIDED = new StaticEnvImpl("elided");

  private Envs() {}
}

class StaticEnvImpl implements Env {
  private final String name;
  private final NodeId<?> id;

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
  public NodeId<?> id() {
    return id;
  }

  @Override
  public String toString() {
    return name;
  }
}
