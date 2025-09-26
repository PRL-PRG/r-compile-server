package org.prlprg.sexp;

import java.util.Collection;
import java.util.Map.Entry;
import java.util.Optional;
import java.util.Set;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.util.Collections2;
import org.prlprg.util.Pair;

public sealed interface EnvSXP extends SEXP permits StaticEnvSXP, UserEnvSXP {
  /**
   * Environments are linked in a parent chain. Every environment, except the empty environment, has
   * a parent that will be returned by this function.
   *
   * @return the parent environment
   */
  EnvSXP parent();

  /**
   * Change the environment's parent post-initialization.
   *
   * @throws UnsupportedOperationException If the given parent is of a type that can't be a parent
   *     of this environment. For example, the base environment's parent is always the empty
   *     environment, so this will fail if given any other environment (and otherwise is a no-op).
   */
  void setParent(EnvSXP parent);

  /**
   * Get the value of a symbol in the environment, following the parent chain.
   *
   * @param name the name of the symbol
   * @return the value of the symbol, if found
   */
  Optional<SEXP> get(String name);

  /**
   * GNU-R function lookup; like {@link #get(String)} but ignores (goes through) non-function {@link
   * SEXP}s.
   *
   * @param name the name of the symbol
   * @return the value of the symbol, if found
   */
  Optional<CloSXP> getFunction(String name);

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

  /**
   * Get the number of symbols in the environment (locally)
   *
   * @return the number of symbols in the environment
   */
  int size();

  default boolean isEmpty() {
    return size() == 0;
  }

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

  @UnmodifiableView
  Set<Entry<String, SEXP>> bindings();

  default Collection<TaggedElem> bindingsAsTaggedElems() {
    return Collections2.mapLazy(bindings(), e -> new TaggedElem(e.getKey(), e.getValue()));
  }

  /** Whether this is a user, global, namespace, base, or empty environment. */
  EnvType envType();

  /**
   * Returns {@code true} if this is the base environment ({@code baseenv()}) or a base namespace
   * ({@code .BaseNamespaceEnv}). namespace.
   */
  default boolean isBase() {
    return this instanceof BaseEnvSXP
        || this instanceof NamespaceEnvSXP ns && ns.name().equals("base");
  }

  @Override
  default Class<? extends SEXP> getCanonicalType() {
    return EnvSXP.class;
  }
}
