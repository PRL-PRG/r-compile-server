package org.prlprg.sexp;

public final class GlobalEnvSXP extends AbstractEnvSXP implements EnvSXP {
  public GlobalEnvSXP(EnvSXP parent) {
    super(parent);
  }

  @Override
  public int size() {
    // FIXME: implement
    return 0;
  }

  @Override
  public String toString() {
    // TODO: add some link to the R session?
    return "<environment: R_GlobalEnv>";
  }
}
