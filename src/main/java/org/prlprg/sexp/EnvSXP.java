package org.prlprg.sexp;

import java.util.Map;
import java.util.Optional;
import org.prlprg.util.Pair;

public sealed interface EnvSXP extends SEXP
    permits AbstractEnvSXP, BaseEnvSXP, EmptyEnvSXP, GlobalEnvSXP, NamespaceEnvSXP, UserEnvSXP {
  /**
   * Environments are linked in a parent chain. Every environment, except the empty environment, has
   * a parent that will be returned by this function.
   *
   * @return the parent environment
   */
  EnvSXP parent();

  /**
   * Get the value of a symbol in the environment, following the parent chain.
   *
   * @param name the name of the symbol
   * @return the value of the symbol, if found
   */
  Optional<SEXP> get(String name);

  /**
   * Set the value of a symbol in the environment.
   *
   * @param name the name of the symbol
   * @param value the value of the symbol
   */
  void set(String name, SEXP value);

  /**
   * Get the value of a symbol in the environment, without following the parent chain.
   *
   * @param name the name of the symbol
   * @return the value of the symbol, if found
   */
  Optional<SEXP> getLocal(String name);

  @Override
  default SEXPType type() {
    return SEXPType.ENV;
  }

  /**
   * Try to find the value of a symbol in the environment, following the parent chain.
   *
   * @param name the name of the symbol
   * @return the value of the symbol and the environment where it was found, if found
   */
  default Optional<Pair<EnvSXP, SEXP>> find(String name) {
    return getLocal(name).map(v -> Pair.of(this, v)).or(() -> parent().find(name));
  }

  Iterable<? extends Map.Entry<? extends String, ? extends SEXP>> bindings();

  /**
   * Get the number of symbols in the environment.
   *
   * @return the number of symbols in the environment
   */
  int size();

  default boolean isBase() {
    // FIXME: add to some constants
    return this instanceof BaseEnvSXP
        || this instanceof NamespaceEnvSXP ns && ns.getName().equals("base");
  }

  @Override
  default Class<? extends SEXP> getCanonicalType() {
    return EnvSXP.class;
  }
}
