package org.prlprg.sexp;

import java.util.Map;
import java.util.Optional;
import java.util.Set;
import org.prlprg.util.Pair;

public final class EmptyEnvSXP implements StaticEnvSXP {
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
  public void set(String name, SEXP value) {
    throw new UnsupportedOperationException("cannot set a value in the empty environment");
  }

  @Override
  public Optional<SEXP> getLocal(String name) {
    return Optional.empty();
  }

  @Override
  public Optional<Pair<EnvSXP, SEXP>> find(String name) {
    return Optional.empty();
  }

  @Override
  public Iterable<? extends Map.Entry<? extends String, ? extends SEXP>> bindings() {
    return Set.of();
  }

  @Override
  public int size() {
    return 0;
  }

  @Override
  public String toString() {
    return "<environment: R_EmptyEnv>";
  }
}
