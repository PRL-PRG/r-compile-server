package org.prlprg.ir.node;

import javax.annotation.Nullable;
import org.prlprg.ir.CFG;
import org.prlprg.sexp.SEXP;

public class Envs {
  public static final Env GLOBAL = new StaticEnvImpl("R_GlobalEnv");
  public static final Env NOT_CLOSED = new StaticEnvImpl("notClosed");
  public static final Env ELIDED = new StaticEnvImpl("elided");

  private Envs() {}
}

class StaticEnvImpl implements Env {
  private final String name;

  public StaticEnvImpl(String name) {
    this.name = name;
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

  @Override
  public String toString() {
    return name;
  }
}
