package org.prlprg.ir.type;

import static net.jqwik.api.Arbitraries.defaultFor;
import static net.jqwik.api.Arbitraries.integers;
import static net.jqwik.api.Arbitraries.just;
import static net.jqwik.api.Arbitraries.oneOf;
import static net.jqwik.api.Arbitraries.recursive;
import static net.jqwik.api.Arbitraries.subsetOf;
import static org.prlprg.sexp.ArbitraryProvider.attributes;
import static org.prlprg.sexp.ArbitraryProvider.sexps;
import static org.prlprg.sexp.ArbitraryProvider.symbolStrings;

import java.util.Optional;
import java.util.Set;
import net.jqwik.api.Arbitraries;
import net.jqwik.api.Arbitrary;
import net.jqwik.api.Combinators;
import net.jqwik.api.providers.TypeUsage;
import org.prlprg.ir.effect.REffect;
import org.prlprg.ir.effect.REffects;
import org.prlprg.ir.type.lattice.Maybe;
import org.prlprg.ir.type.lattice.MaybeNat;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.ir.type.lattice.YesOrMaybe;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.PrimVectorSXP;
import org.prlprg.util.Streams;

public class ArbitraryProvider implements net.jqwik.api.providers.ArbitraryProvider {
  // Setting this to more than 1 seems to create very large cases which take unreasonable amounts of
  // time to generate. The issue is probably that there are nested generations (e.g. can generate a
  // nested RType which has a nested SEXP), but also jqwik makes it hard to debug and it could be
  // something else.
  private static final int MAX_DEPTH = 1;
  private static final int MAX_SIZE = 3;

  public static Arbitrary<RType> rTypes() {
    return recursive(
        ArbitraryProvider::basicRType,
        r ->
            oneOf(
                r.list().ofMaxSize(MAX_SIZE).map(RType::union),
                r.list().ofMaxSize(MAX_SIZE).map(RType::intersection),
                Combinators.combine(rFunctionTypes(r), rPromiseTypes(), defaultFor(NoOrMaybe.class))
                    .as(RType::new)),
        0,
        MAX_DEPTH);
  }

  public static Arbitrary<RType> basicRType() {
    return oneOf(
        Arbitraries.of(RTypeImpl.INTERNED),
        Combinators.combine(rPrimVecTypes(), rPromiseTypes(), defaultFor(NoOrMaybe.class))
            .as(RType::new),
        // sexpTypes().map(RType::simple),
        sexps().map(RType::exact));
  }

  public static Arbitrary<RFunType> rFunctionTypes() {
    return rFunctionTypes(rTypes());
  }

  private static Arbitrary<RFunType> rFunctionTypes(Arbitrary<RType> rTypes) {
    return Combinators.combine(
            nulls(CloSXP.class),
            defaultFor(FunctionRType.class),
            attributesTypes(),
            maybeNats(),
            overloadRType(rTypes)
                .list()
                .ofMaxSize(MAX_SIZE)
                .map(RFunTypeImpl::normalizeOverloadsWrtSubsuming),
            defaultFor(Maybe.class))
        .filter(
            (exactValue, baseType, attributes, referenceCount, overloads, hasDots) ->
                hasDots.isSupersetOf(overloads.stream().anyMatch(OverloadRType::hasDots)))
        .as(RFunTypeImpl::new);
  }

  public static Arbitrary<RPrimVecType> rPrimVecTypes() {
    return Combinators.combine(
            nulls(PrimVectorSXP.class),
            attributesTypes(),
            maybeNats(),
            defaultFor(PrimVecElementRType.class),
            maybeNats(),
            defaultFor(NoOrMaybe.class))
        .as(RPrimVecTypeImpl::new);
  }

  public static <T> Arbitrary<T> nulls(@SuppressWarnings("unused") Class<T> clazz) {
    return just(Optional.<T>empty()).map(s -> s.orElse(null));
  }

  public static Arbitrary<OverloadRType> overloadRType() {
    return overloadRType(rTypes());
  }

  private static Arbitrary<OverloadRType> overloadRType(Arbitrary<RType> rTypes) {
    return Combinators.combine(
            parameterRType(rTypes)
                .list()
                .ofMaxSize(MAX_SIZE)
                .filter(
                    p ->
                        Streams.hasNoDuplicates(
                            p.stream().filter(ParameterRType::isNamed).map(ParameterRType::name))),
            rEffects(),
            rTypes)
        .as(OverloadRType::of);
  }

  public static Arbitrary<ParameterRType> parameterRType() {
    return parameterRType(rTypes());
  }

  private static Arbitrary<ParameterRType> parameterRType(Arbitrary<RType> rTypes) {
    return Combinators.combine(symbolStrings(), defaultFor(NoOrMaybe.class), rTypes)
        .as(ParameterRType::new);
  }

  public static Arbitrary<ArgumentRType> argumentRType() {
    return argumentRType(rTypes());
  }

  private static Arbitrary<ArgumentRType> argumentRType(Arbitrary<RType> rTypes) {
    return Combinators.combine(symbolStrings(), rTypes).as(ArgumentRType::new);
  }

  public static Arbitrary<AttributesType> attributesTypes() {
    return oneOf(
        Arbitraries.of(AttributesTypes.UNKNOWN, AttributesTypes.NONE),
        attributes().map(AttributesTypes::exact));
  }

  public static Arbitrary<BaseRType> baseRType() {
    return oneOf(
        just(BaseRType.ANY),
        baseRTypeNotPromises(),
        Combinators.combine(defaultFor(YesOrMaybe.class), baseRTypeNotPromises())
            .as(BaseRType.Promise::new));
  }

  public static Arbitrary<BaseRType.NotPromise> baseRTypeNotPromises() {
    return oneOf(
        Arbitraries.of(
            BaseRType.ANY_VALUE,
            BaseRType.ANY_FUN,
            BaseRType.ANY_LIST,
            BaseRType.LANGUAGE,
            BaseRType.EXPRESSION,
            BaseRType.CLOSURE,
            BaseRType.S4,
            BaseRType.EXTERNAL_PTR,
            BaseRType.WEAK_REF,
            BaseRType.DOTS,
            BaseRType.ENV,
            BaseRType.BYTECODE,
            BaseRType.SYMBOL,
            BaseRType.SPECIAL,
            BaseRType.BUILTIN),
        defaultFor(VectorElementRType.class).map(BaseRType.Vector::new));
  }

  public static Arbitrary<REffects> rEffects() {
    return subsetOf(REffect.values()).map(REffects::new);
  }

  public static Arbitrary<MaybeNat> maybeNats() {
    return oneOf(
        just(MaybeNat.UNKNOWN), integers().greaterOrEqual(0).lessOrEqual(2).map(MaybeNat::of));
  }

  @Override
  public boolean canProvideFor(TypeUsage typeUsage) {
    return typeUsage.isOfType(RType.class)
        || typeUsage.isOfType(RPromiseType.class)
        || typeUsage.isOfType(RFunType.class)
        || typeUsage.isOfType(RPrimVecType.class)
        || typeUsage.isOfType(OverloadRType.class)
        || typeUsage.isOfType(ParameterRType.class)
        || typeUsage.isOfType(ArgumentRType.class)
        || typeUsage.isOfType(AttributesType.class)
        || typeUsage.isOfType(BaseRType.class)
        || typeUsage.isOfType(BaseRType.NotPromise.class)
        || typeUsage.isOfType(REffects.class)
        || typeUsage.isOfType(MaybeNat.class);
  }

  @Override
  public Set<Arbitrary<?>> provideFor(TypeUsage typeUsage, SubtypeProvider subtypeProvider) {
    if (typeUsage.isOfType(RType.class)) {
      return Set.of(rTypes());
    }
    if (typeUsage.isOfType(RPromiseType.class)) {
      return Set.of(rPromiseTypes());
    }
    if (typeUsage.isOfType(RFunType.class)) {
      return Set.of(rFunctionTypes());
    }
    if (typeUsage.isOfType(RPrimVecType.class)) {
      return Set.of(rPrimVecTypes());
    }
    if (typeUsage.isOfType(OverloadRType.class)) {
      return Set.of(overloadRType());
    }
    if (typeUsage.isOfType(ParameterRType.class)) {
      return Set.of(parameterRType());
    }
    if (typeUsage.isOfType(ArgumentRType.class)) {
      return Set.of(argumentRType());
    }
    if (typeUsage.isOfType(AttributesType.class)) {
      return Set.of(attributesTypes());
    }
    if (typeUsage.isOfType(BaseRType.class)) {
      return Set.of(baseRType());
    }
    if (typeUsage.isOfType(BaseRType.NotPromise.class)) {
      return Set.of(baseRTypeNotPromises());
    }
    if (typeUsage.isOfType(REffects.class)) {
      return Set.of(rEffects());
    }
    if (typeUsage.isOfType(MaybeNat.class)) {
      return Set.of(maybeNats());
    }
    throw new UnsupportedOperationException("Cannot provide for " + typeUsage);
  }
}
