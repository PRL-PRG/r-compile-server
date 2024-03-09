package org.prlprg.sexp;

import static net.jqwik.api.Arbitraries.doubles;
import static net.jqwik.api.Arbitraries.integers;
import static net.jqwik.api.Arbitraries.strings;
import static org.prlprg.primitive.ArbitraryProvider.complexes;
import static org.prlprg.primitive.ArbitraryProvider.logicals;

import java.util.Set;
import net.jqwik.api.Arbitraries;
import net.jqwik.api.Arbitrary;
import net.jqwik.api.Combinators;
import net.jqwik.api.providers.TypeUsage;

public class ArbitraryProvider implements net.jqwik.api.providers.ArbitraryProvider {
  private static final int MAX_DEPTH = 2;
  private static final int MAX_SIZE = 7;
  private static final int MAX_LENGTH = 20;

  public static Arbitrary<SEXPType> sexpTypes() {
    // We don't provide the ANY type because it's weird and we never actually encounter it.
    return Arbitraries.of(SEXPType.values()).filter(t -> t != SEXPType.ANY);
  }

  public static Arbitrary<SEXP> sexps() {
    return sexps(true, MAX_DEPTH);
  }

  private static Arbitrary<SEXP> sexps(boolean allowPromises, int maxDepth) {
    if (maxDepth < 0) {
      throw new IllegalArgumentException("maxDepth must be non-negative");
    }
    return maxDepth == 0
        ? sexpsWithoutAttributes(allowPromises, 0)
        : Arbitraries.lazyOf(
            () -> sexpsWithoutAttributes(allowPromises, maxDepth),
            () ->
                Combinators.combine(
                        sexpsWithoutAttributes(allowPromises, maxDepth), attributes(maxDepth - 1))
                    .as(SEXP::withAttributes)
                    .ignoreException(UnsupportedOperationException.class));
  }

  public static Arbitrary<Attributes> attributes() {
    return attributes(MAX_DEPTH);
  }

  private static Arbitrary<Attributes> attributes(int maxDepth) {
    return Arbitraries.maps(
            symbolStrings().edgeCases(c -> c.add("names", "dim", "class")), sexps(false, maxDepth))
        .map(Attributes::new);
  }

  private static Arbitrary<SEXP> sexpsWithoutAttributes(boolean allowPromises, int maxDepth) {
    if (maxDepth < 0) {
      throw new IllegalArgumentException("maxDepth must be non-negative");
    }

    if (maxDepth == 0) {
      return basicSexps();
    }
    var notPromises =
        Arbitraries.lazyOf(
            ArbitraryProvider::basicSexps,
            () -> lists(allowPromises, maxDepth - 1),
            () -> languages(maxDepth - 1),
            () -> exprs(maxDepth - 1),
            () -> envs(maxDepth - 1));
    if (!allowPromises) {
      return notPromises;
    }
    return Arbitraries.lazyOf(() -> notPromises, () -> promises(maxDepth - 1));
  }

  private static Arbitrary<EnvSXP> envs(int maxDepth) {
    if (maxDepth < 0) {
      throw new IllegalArgumentException("maxDepth must be non-negative");
    }
    return maxDepth == 0
        ? staticEnvs(maxDepth).map(s -> s)
        : Arbitraries.lazyOf(
            () -> staticEnvs(maxDepth),
            () ->
                Combinators.combine(
                        envs(maxDepth - 1),
                        taggedElems(true, maxDepth - 1)
                            .filter(TaggedElem::hasTag)
                            .list()
                            .ofMaxSize(MAX_SIZE))
                    .as(
                        (parent, elems) -> {
                          var env = new UserEnvSXP(parent);
                          for (var elem : elems) {
                            assert elem.tag() != null;
                            env.set(elem.tag(), elem.value());
                          }
                          return env;
                        }));
  }

  private static Arbitrary<EnvSXP> staticEnvs(int maxDepth) {
    return Arbitraries.oneOf(
        Arbitraries.just(SEXPs.EMPTY_ENV),
        baseEnvs(maxDepth),
        namespaceEnvs(maxDepth),
        globalEnvs(maxDepth));
  }

  private static Arbitrary<GlobalEnvSXP> globalEnvs(int maxDepth) {
    return Arbitraries.oneOf(baseEnvs(maxDepth), namespaceEnvs(maxDepth)).map(GlobalEnvSXP::new);
  }

  private static Arbitrary<NamespaceEnvSXP> namespaceEnvs(int maxDepth) {
    if (maxDepth < 0) {
      throw new IllegalArgumentException("maxDepth must be non-negative");
    }
    return Combinators.combine(
            maxDepth == 0
                ? baseEnvs(0).map(s -> s)
                : Arbitraries.lazyOf(
                    () -> baseEnvs(maxDepth - 1), () -> namespaceEnvs(maxDepth - 1)),
            symbolStrings(),
            symbolStrings())
        .as(NamespaceEnvSXP::new);
  }

  private static Arbitrary<BaseEnvSXP> baseEnvs(int maxDepth) {
    return Arbitraries.maps(strings(), sexps(true, maxDepth)).map(BaseEnvSXP::new);
  }

  private static Arbitrary<ExprSXP> exprs(int maxDepth) {
    return astSexps(maxDepth).list().ofMaxSize(MAX_SIZE).map(SEXPs::expr);
  }

  private static Arbitrary<ListSXP> lists(boolean allowPromises, int maxDepth) {
    return taggedElems(allowPromises, maxDepth).list().ofMaxSize(MAX_SIZE).map(SEXPs::list);
  }

  private static Arbitrary<ListSXP> astLists(int maxDepth) {
    return astTaggedElems(maxDepth).list().ofMaxSize(MAX_SIZE).map(SEXPs::list);
  }

  private static Arbitrary<PromSXP> promises(int maxDepth) {
    return Combinators.combine(sexps(false, maxDepth), sexps(false, maxDepth), envs(maxDepth))
        .as(PromSXP::new);
  }

  private static Arbitrary<TaggedElem> taggedElems(boolean allowPromises, int maxDepth) {
    return Combinators.combine(symbolStrings().injectNull(0.33), sexps(allowPromises, maxDepth))
        .as(TaggedElem::new);
  }

  private static Arbitrary<TaggedElem> astTaggedElems(int maxDepth) {
    return Combinators.combine(symbolStrings().injectNull(0.33), astSexps(maxDepth))
        .as(TaggedElem::new);
  }

  private static Arbitrary<SEXP> astSexps(int maxDepth) {
    if (maxDepth < 0) {
      throw new IllegalArgumentException("maxDepth must be non-negative");
    }
    return maxDepth == 0
        ? basicAstSexps()
        : Arbitraries.lazyOf(ArbitraryProvider::basicAstSexps, () -> languages(maxDepth - 1));
  }

  private static Arbitrary<LangSXP> languages(int maxDepth) {
    if (maxDepth < 0) {
      throw new IllegalArgumentException("maxDepth must be non-negative");
    }
    return Combinators.combine(
            maxDepth == 0
                ? symbols().map(s -> s)
                : Arbitraries.lazyOf(ArbitraryProvider::symbols, () -> languages(maxDepth - 1)),
            astLists(maxDepth))
        .as(SEXPs::lang);
  }

  public static Arbitrary<SEXP> basicSexps() {
    return Arbitraries.oneOf(
        basicAstSexps(),
        Arbitraries.of(
            SEXPs.EMPTY_ENV,
            SEXPs.EMPTY_COMPLEX,
            SEXPs.EMPTY_LOGICAL,
            SEXPs.EMPTY_STRING,
            SEXPs.EMPTY_INTEGER,
            SEXPs.EMPTY_REAL,
            SEXPs.MISSING_ARG),
        integers().list().ofMaxSize(MAX_SIZE).map(SEXPs::integer),
        doubles().list().ofMaxSize(MAX_SIZE).map(SEXPs::real),
        strings().list().ofMaxSize(MAX_SIZE).map(SEXPs::string),
        logicals().list().ofMaxSize(MAX_SIZE).map(SEXPs::logical),
        complexes().list().ofMaxSize(MAX_SIZE).map(SEXPs::complex));
  }

  public static Arbitrary<SEXP> basicAstSexps() {
    return Arbitraries.oneOf(
        Arbitraries.just(SEXPs.NULL),
        integers().map(SEXPs::integer),
        doubles().map(SEXPs::real),
        strings().map(SEXPs::string),
        logicals().map(SEXPs::logical),
        complexes().map(SEXPs::complex),
        symbols());
  }

  public static Arbitrary<SymSXP> symbols() {
    return symbolStrings().map(SEXPs::symbol);
  }

  public static Arbitrary<String> symbolStrings() {
    return strings().ascii().ofMaxLength(MAX_LENGTH).filter(s -> !s.isBlank());
  }

  @Override
  public boolean canProvideFor(TypeUsage typeUsage) {
    return typeUsage.isOfType(SEXP.class) || typeUsage.isOfType(SEXPType.class);
  }

  @Override
  public Set<Arbitrary<?>> provideFor(TypeUsage typeUsage, SubtypeProvider subtypeProvider) {
    if (typeUsage.isOfType(SEXP.class)) {
      return Set.of(sexps());
    }
    if (typeUsage.isOfType(SEXPType.class)) {
      return Set.of(sexpTypes());
    }
    throw new UnsupportedOperationException("Cannot provide for " + typeUsage);
  }
}
