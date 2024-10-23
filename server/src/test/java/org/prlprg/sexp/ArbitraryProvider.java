package org.prlprg.sexp;

import static net.jqwik.api.Arbitraries.just;
import static net.jqwik.api.Arbitraries.oneOf;
import static net.jqwik.api.Arbitraries.recursive;
import static net.jqwik.api.Arbitraries.strings;
import static org.prlprg.primitive.ArbitraryProvider.basicBytes;
import static org.prlprg.primitive.ArbitraryProvider.basicInts;
import static org.prlprg.primitive.ArbitraryProvider.basicReals;
import static org.prlprg.primitive.ArbitraryProvider.complexes;
import static org.prlprg.primitive.ArbitraryProvider.logicals;

import java.util.Map;
import java.util.Set;
import java.util.function.Predicate;
import net.jqwik.api.Arbitraries;
import net.jqwik.api.Arbitrary;
import net.jqwik.api.Combinators;
import net.jqwik.api.Tuple;
import net.jqwik.api.arbitraries.StringArbitrary;
import net.jqwik.api.providers.TypeUsage;
import org.prlprg.util.Streams;

public class ArbitraryProvider implements net.jqwik.api.providers.ArbitraryProvider {
  // Setting this to more than 1 seems to create very large cases which take unreasonable amounts of
  // time to generate. The issue is probably that there are nested generations (e.g. can generate a
  // nested RType which has a nested SEXP), but also jqwik makes it hard to debug and it could be
  // something else.
  private static final int MAX_DEPTH = 1;
  private static final int MAX_SIZE = 3;
  private static final int MAX_LENGTH = 4;

  public static Arbitrary<SEXPType> sexpTypes() {
    // We don't provide the ANY type because it's weird and we never actually encounter it.
    return Arbitraries.of(SEXPType.values()).filter(t -> t != SEXPType.ANY);
  }

  public static Arbitrary<SEXP> sexps() {
    return recursive(
        ArbitraryProvider::sexpsWithoutAttributes,
        s ->
            Combinators.combine(sexpsWithoutAttributes(), attributes(s))
                .as(SEXP::withAttributes)
                .ignoreException(UnsupportedOperationException.class),
        0,
        MAX_DEPTH);
  }

  public static Arbitrary<Attributes> attributes() {
    return attributes(sexps());
  }

  private static Arbitrary<Attributes> attributes(Arbitrary<SEXP> sexps) {
    return Arbitraries.maps(
            symbolStrings().edgeCases(c -> c.add("names", "dim", "class")),
            sexps.filter(s -> !(s instanceof PromSXP)))
        .map(Attributes::new);
  }

  private static Arbitrary<SEXP> sexpsWithoutAttributes() {
    return recursive(
        () -> oneOf(basicSexps(), exprs(), astSexps()),
        s -> oneOf(promises(s), closures(s), lists(s), envs(s)),
        0,
        MAX_DEPTH);
  }

  public static Arbitrary<EnvSXP> envs() {
    return envs(sexps());
  }

  private static Arbitrary<EnvSXP> envs(Arbitrary<SEXP> sexps) {
    return recursive(
        () -> staticEnvs(sexps),
        e -> Combinators.combine(e, envBindings(sexps)).as(UserEnvSXP::new),
        0,
        MAX_DEPTH);
  }

  private static Arbitrary<EnvSXP> staticEnvs(Arbitrary<SEXP> sexps) {
    return oneOf(
        just(SEXPs.EMPTY_ENV),
        Combinators.combine(
                oneOf(baseEnvs(sexps), namespaceEnvs(sexps)), Arbitraries.of(true, false))
            .as((parent, isGlobal) -> isGlobal ? new GlobalEnvSXP(parent) : parent));
  }

  private static Arbitrary<NamespaceEnvSXP> namespaceEnvs(Arbitrary<SEXP> sexps) {
    return recursive(
        () -> namespaceEnvs1(baseEnvs(sexps), sexps),
        envs -> namespaceEnvs1(envs, sexps),
        0,
        MAX_DEPTH);
  }

  private static Arbitrary<NamespaceEnvSXP> namespaceEnvs1(
      Arbitrary<? extends StaticEnvSXP> envs, Arbitrary<SEXP> sexps) {
    return Combinators.combine(symbolStrings(), symbolStrings(), envs, envBindings(sexps))
        .as(NamespaceEnvSXP::new);
  }

  private static Arbitrary<BaseEnvSXP> baseEnvs(Arbitrary<SEXP> sexps) {
    return envBindings(sexps).map(BaseEnvSXP::new);
  }

  private static Arbitrary<Map<String, SEXP>> envBindings(Arbitrary<SEXP> sexps) {
    return Arbitraries.maps(shortStrings(), sexps).ofMaxSize(MAX_SIZE);
  }

  private static Arbitrary<ExprSXP> exprs() {
    return astSexps().list().ofMaxSize(MAX_SIZE).map(SEXPs::expr);
  }

  private static Arbitrary<ListSXP> lists(Arbitrary<SEXP> sexps) {
    return taggedElems(sexps).list().ofMaxSize(MAX_SIZE).map(SEXPs::list);
  }

  private static Arbitrary<ListSXP> astLists(Arbitrary<SEXP> astSexps) {
    return astTaggedElems(astSexps).list().ofMaxSize(MAX_SIZE).map(SEXPs::list);
  }

  public static Arbitrary<CloSXP> closures() {
    return closures(sexps());
  }

  private static Arbitrary<CloSXP> closures(Arbitrary<SEXP> sexps) {
    return Combinators.combine(
            lists(sexps)
                .filter(
                    l ->
                        Streams.hasNoDuplicates(
                            l.names().stream().filter(Predicate.not(String::isEmpty)))),
            sexps,
            envs(sexps))
        .as(SEXPs::closure);
  }

  public static Arbitrary<PromSXP> promises() {
    return promises(sexps());
  }

  private static Arbitrary<PromSXP> promises(Arbitrary<SEXP> sexps) {
    var sexpsNoPromises = sexps.filter(s -> !(s instanceof PromSXP));
    return Combinators.combine(sexpsNoPromises, sexpsNoPromises, envs(sexps)).as(PromSXP::new);
  }

  private static Arbitrary<TaggedElem> taggedElems(Arbitrary<SEXP> sexps) {
    return Combinators.combine(symbolStrings().injectNull(0.33), sexps).as(TaggedElem::new);
  }

  private static Arbitrary<TaggedElem> astTaggedElems(Arbitrary<SEXP> astSexps) {
    return Combinators.combine(symbolStrings().injectNull(0.33), astSexps).as(TaggedElem::new);
  }

  private static Arbitrary<SEXP> astSexps() {
    return recursive(ArbitraryProvider::basicAstSexps, s -> languages(s).map(l -> l), 0, MAX_DEPTH);
  }

  public static Arbitrary<LangSXP> languages() {
    return languages(astSexps());
  }

  private static Arbitrary<LangSXP> languages(Arbitrary<SEXP> astSexps) {
    return Combinators.combine(symbols(), astLists(astSexps)).as(SEXPs::lang);
  }

  public static Arbitrary<SEXP> basicSexps() {
    return oneOf(
        basicAstSexps(),
        Arbitraries.of(
            SEXPs.EMPTY_ENV,
            SEXPs.EMPTY_COMPLEX,
            SEXPs.EMPTY_LOGICAL,
            SEXPs.EMPTY_STRING,
            SEXPs.EMPTY_INTEGER,
            SEXPs.EMPTY_REAL,
            SEXPs.EMPTY_RAW,
            SEXPs.MISSING_ARG),
        basicInts().list().ofMaxSize(MAX_SIZE).map(SEXPs::integer),
        basicReals().list().ofMaxSize(MAX_SIZE).map(SEXPs::real),
        logicals().list().ofMaxSize(MAX_SIZE).map(SEXPs::logical),
        basicBytes().list().ofMaxSize(MAX_SIZE).map(SEXPs::raw),
        complexes().list().ofMaxSize(MAX_SIZE).map(SEXPs::complex),
        shortStrings().list().ofMaxSize(MAX_SIZE).map(SEXPs::string));
  }

  public static Arbitrary<SEXP> basicAstSexps() {
    return oneOf(
        just(SEXPs.NULL),
        basicInts().map(SEXPs::integer),
        basicReals().map(SEXPs::real),
        logicals().map(SEXPs::logical),
        basicBytes().map(SEXPs::raw),
        complexes().map(SEXPs::complex),
        shortStrings().map(SEXPs::string),
        symbols());
  }

  public static Arbitrary<SymSXP> symbols() {
    return symbolStrings().map(SEXPs::symbol);
  }

  /** Generates valid symbol (and tag) names. */
  public static Arbitrary<String> symbolStrings() {
    return Arbitraries.frequencyOf(
        Tuple.of(8, Arbitraries.of("foo", "bar", "baz", "abc")),
        Tuple.of(2, Arbitraries.of("NULL", " ", "|g", "0")));
  }

  /** Returns strings which aren't too long, because we really don't need to test those. */
  public static StringArbitrary shortStrings() {
    return strings().ofMaxLength(MAX_LENGTH);
  }

  @Override
  public boolean canProvideFor(TypeUsage typeUsage) {
    return typeUsage.isOfType(SEXP.class)
        || typeUsage.isOfType(CloSXP.class)
        || typeUsage.isOfType(PromSXP.class)
        || typeUsage.isOfType(EnvSXP.class)
        || typeUsage.isOfType(LangSXP.class)
        || typeUsage.isOfType(Attributes.class)
        || typeUsage.isOfType(SEXPType.class);
  }

  @Override
  public Set<Arbitrary<?>> provideFor(TypeUsage typeUsage, SubtypeProvider subtypeProvider) {
    if (typeUsage.isOfType(SEXP.class)) {
      return Set.of(sexps());
    }
    if (typeUsage.isOfType(CloSXP.class)) {
      return Set.of(closures());
    }
    if (typeUsage.isOfType(PromSXP.class)) {
      return Set.of(promises());
    }
    if (typeUsage.isOfType(EnvSXP.class)) {
      return Set.of(envs());
    }
    if (typeUsage.isOfType(LangSXP.class)) {
      return Set.of(languages());
    }
    if (typeUsage.isOfType(Attributes.class)) {
      return Set.of(attributes());
    }
    if (typeUsage.isOfType(SEXPType.class)) {
      return Set.of(sexpTypes());
    }
    throw new UnsupportedOperationException("Cannot provide for " + typeUsage);
  }
}
