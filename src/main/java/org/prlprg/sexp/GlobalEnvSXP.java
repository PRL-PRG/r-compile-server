package org.prlprg.sexp;

import java.util.Optional;

public final class GlobalEnvSXP implements EnvSXP {
  private final EnvSXP parent;

  public GlobalEnvSXP(EnvSXP parent) {
    this.parent = parent;
  }

  @Override
  public EnvSXP parent() {
    return parent;
  }

  // FIXME: parent should return the proper namespaces
  //  in default R session that is:
  //  stats, graphics, grDevices, utils, datasets, methods, Autoloads, base

  @Override
  public Optional<SEXP> get(String name) {
    // FIXME: implement
    return Optional.empty();
  }

  @Override
  public Optional<SEXP> getLocal(String name) {
    // FIXME: implement
    return Optional.empty();
  }

  @Override
  public String toString() {
    // TODO: add some link to the R session?
    return "<environment: R_GlobalEnv>";
  }
}
