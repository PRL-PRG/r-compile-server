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
  public static Arbitrary<SEXPType> sexpTypes() {
    // We don't provide the ANY type because it's weird and we never actually encounter it.
    return Arbitraries.of(SEXPType.values()).filter(t -> t != SEXPType.ANY);
  }

  public static Arbitrary<SEXP> sexps() {
    return Arbitraries.oneOf(
        sexpsWithoutAttributes(),
        Combinators.combine(
                sexpsWithoutAttributes(), Arbitraries.lazy(ArbitraryProvider::attributes))
            .as(SEXP::withAttributes)
            .ignoreException(UnsupportedOperationException.class));
  }

  public static Arbitrary<Attributes> attributes() {
    return Arbitraries.maps(symbolStrings().edgeCases(c -> c.add("names", "dim", "class")), sexps())
        .map(Attributes::new);
  }

  public static Arbitrary<SEXP> sexpsWithoutAttributes() {
    return Arbitraries.lazyOf(
        ArbitraryProvider::basicSexps,
        ArbitraryProvider::promises,
        ArbitraryProvider::lists,
        ArbitraryProvider::languages,
        ArbitraryProvider::exprs,
        ArbitraryProvider::envs);
  }

  public static Arbitrary<EnvSXP> envs() {
    return Arbitraries.lazyOf(
        ArbitraryProvider::staticEnvs,
        () ->
            Combinators.combine(envs(), taggedElems().filter(TaggedElem::hasTag).list())
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

  public static Arbitrary<EnvSXP> staticEnvs() {
    return Arbitraries.oneOf(
        Arbitraries.just(SEXPs.EMPTY_ENV), baseEnvs(), namespaceEnvs(), globalEnvs());
  }

  public static Arbitrary<GlobalEnvSXP> globalEnvs() {
    return Arbitraries.oneOf(baseEnvs(), namespaceEnvs()).map(GlobalEnvSXP::new);
  }

  public static Arbitrary<NamespaceEnvSXP> namespaceEnvs() {
    return Combinators.combine(
            Arbitraries.lazyOf(ArbitraryProvider::baseEnvs, ArbitraryProvider::namespaceEnvs),
            symbolStrings(),
            symbolStrings())
        .as(NamespaceEnvSXP::new);
  }

  public static Arbitrary<BaseEnvSXP> baseEnvs() {
    return Arbitraries.maps(strings(), sexps()).map(BaseEnvSXP::new);
  }

  public static Arbitrary<ExprSXP> exprs() {
    return astSexps().list().map(SEXPs::expr);
  }

  public static Arbitrary<ListSXP> lists() {
    return taggedElems().list().map(SEXPs::list);
  }

  public static Arbitrary<PromSXP> promises() {
    return Combinators.combine(sexps(), sexps(), envs()).as(PromSXP::new);
  }

  public static Arbitrary<TaggedElem> taggedElems() {
    return Combinators.combine(Arbitraries.oneOf(Arbitraries.just(null), symbolStrings()), sexps())
        .as(TaggedElem::new);
  }

  public static Arbitrary<SEXP> astSexps() {
    return Arbitraries.oneOf(basicAstSexps(), languages());
  }

  public static Arbitrary<LangSXP> languages() {
    return Combinators.combine(
            Arbitraries.lazyOf(ArbitraryProvider::symbols, ArbitraryProvider::languages), lists())
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
        integers().list().map(SEXPs::integer),
        doubles().list().map(SEXPs::real),
        strings().list().map(SEXPs::string),
        logicals().list().map(SEXPs::logical),
        complexes().list().map(SEXPs::complex));
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
    return strings().ascii().filter(s -> !s.isBlank());
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
