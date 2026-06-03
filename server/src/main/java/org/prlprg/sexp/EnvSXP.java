package org.prlprg.sexp;

import java.util.Collection;
import java.util.Map.Entry;
import java.util.Optional;
import java.util.Set;
import java.util.function.Function;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.parseprint.SEXPParseContext;
import org.prlprg.sexp.parseprint.SEXPPrintContext;
import org.prlprg.sexp.parseprint.SEXPPrintOptions;
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
   * SEXP}s (except forces unevaluated promises via {@code forcer}, then ignores or returns the
   * inner value).
   *
   * @param name the name of the symbol
   * @param forcer a function to force unevaluated promises
   * @return the value of the symbol, if found
   */
  Optional<CloSXP> getFunction(String name, Function<PromSXP, SEXP> forcer);

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

  /// `this` if it's static, its parent if it's static, it's grandparent if that's static, etc.
  ///
  /// Every environment at least has the empty environment as an ancestor, which is static, so
  /// this is non-null.
  default EnvSXP staticAncestor() {
    EnvSXP current = this;
    while (!(current instanceof StaticEnvSXP)) {
      current = current.parent();
    }
    return current;
  }

  /// Create a deep copy of this environment and all its parents up to the static environment.
  /// Return the static environment as-is (returns `this` if it's itself static, doesn't
  /// copy the parent if it's static, doesn't copy the parent's parent if it's static, etc.).
  ///
  /// Notably, this also only copies environments referenced in bindings if they're local.
  default EnvSXP deepCopyUserEnvs() {
    var staticAncestor = staticAncestor();
    if (this == staticAncestor) {
      // Fastcase
      return this;
    }

    var printCtx = new SEXPPrintContext(SEXPPrintOptions.FULL);
    printCtx.setRef(staticAncestor, 0);
    var serialized = Printer.use(p -> p.print(this), printCtx);

    var parseCtx = new SEXPParseContext();
    parseCtx.setRef(0, staticAncestor);
    return new Parser(serialized).withContext(parseCtx).parse(EnvSXP.class);
  }

  @Override
  default Class<? extends SEXP> getCanonicalType() {
    return EnvSXP.class;
  }
}
