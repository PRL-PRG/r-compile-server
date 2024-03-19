package org.prlprg.sexp;

import java.util.Optional;
import org.prlprg.util.Pair;

public final class EmptyEnvSXP implements EnvSXP {
  static final EmptyEnvSXP INSTANCE = new EmptyEnvSXP();

  private EmptyEnvSXP() {}

  /** Empty environment has no parent. It is an error to call this method. */
  @Override
  public EnvSXP parent() {
    throw new UnsupportedOperationException("the empty environment has no parent");
  }

  @Override
  public Optional<SEXP> get(String name) {
    return Optional.empty();
  }

  @Override
  public Optional<SEXP> getLocal(String name) {
    return Optional.empty();
  }

  @Override
  public int size() {
    return 0;
  }

  @Override
  public Optional<Pair<EnvSXP, SEXP>> find(String name) {
    return Optional.empty();
  }

  @Override
  public String toString() {
    return "<environment: R_EmptyEnv>";
  }
}
