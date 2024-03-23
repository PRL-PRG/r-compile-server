package org.prlprg.ir.type;

import static net.jqwik.api.Arbitraries.defaultFor;
import static net.jqwik.api.Arbitraries.integers;
import static net.jqwik.api.Arbitraries.just;
import static net.jqwik.api.Arbitraries.oneOf;
import static net.jqwik.api.Arbitraries.recursive;
import static net.jqwik.api.Arbitraries.subsetOf;
import static org.prlprg.sexp.ArbitraryProvider.attributes;
import static org.prlprg.sexp.ArbitraryProvider.promises;
import static org.prlprg.sexp.ArbitraryProvider.sexps;
import static org.prlprg.sexp.ArbitraryProvider.symbolStrings;

import java.util.Optional;
import java.util.Set;
import net.jqwik.api.Arbitraries;
import net.jqwik.api.Arbitrary;
import net.jqwik.api.Combinators;
import net.jqwik.api.providers.TypeUsage;
import org.prlprg.ir.type.lattice.MaybeNat;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.ir.type.lattice.Troolean;
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
        ArbitraryProvider::basicRTypes,
        r ->
            oneOf(
                r.list().ofMaxSize(MAX_SIZE).map(RTypes::union),
                r.list().ofMaxSize(MAX_SIZE).map(RTypes::intersection),
                Combinators.combine(rFunctionTypes(r), rPromiseTypes(), defaultFor(NoOrMaybe.class))
                    .as(RType::new)),
        0,
        MAX_DEPTH);
  }

  public static Arbitrary<RType> basicRTypes() {
    return oneOf(
        Arbitraries.of(
            RTypes.NOTHING,
            RTypes.ANY,
            RTypes.ANY_VALUE,
            RTypes.ANY_VALUE_NOT_MISSING,
            RTypes.ANY_FUN,
            RTypes.ANY_SIMPLE,
            RTypes.OF_MISSING),
        Combinators.combine(rPrimVecTypes(), rPromiseTypes(), defaultFor(NoOrMaybe.class))
            .as(RType::new),
        // sexpTypes().map(RTypes::simple),
        sexps().map(RTypes::exact));
  }

  static Arbitrary<RPromiseType> rPromiseTypes() {
    return oneOf(
        Arbitraries.of(
            RPromiseType.VALUE,
            RPromiseType.MAYBE_STRICT_PROMISE,
            RPromiseType.MAYBE_LAZY_PROMISE,
            RPromiseType.STRICT_PROMISE,
            RPromiseType.PROMISE_MAYBE_LAZY,
            RPromiseType.LAZY_PROMISE),
        defaultFor(Troolean.class).map(RPromiseType.Promise::new),
        promises().map(RPromiseType.Promise::new));
  }

  public static Arbitrary<RFunctionType> rFunctionTypes() {
    return rFunctionTypes(rTypes());
  }

  private static Arbitrary<RFunctionType> rFunctionTypes(Arbitrary<RType> rTypes) {
    return Combinators.combine(
            nulls(CloSXP.class),
            defaultFor(FunctionRType.class),
            attributesTypes(),
            maybeNats(),
            overloadRTypes(rTypes)
                .list()
                .ofMaxSize(MAX_SIZE)
                .map(RFunctionTypeImpl::normalizeOverloadsWrtSubsuming),
            defaultFor(Troolean.class))
        .filter(
            (exactValue, baseType, attributes, referenceCount, overloads, hasDots) ->
                hasDots.isSupersetOf(overloads.stream().anyMatch(OverloadRType::hasDots)))
        .as(RFunctionTypeImpl::new);
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

  public static Arbitrary<OverloadRType> overloadRTypes() {
    return overloadRTypes(rTypes());
  }

  private static Arbitrary<OverloadRType> overloadRTypes(Arbitrary<RType> rTypes) {
    return Combinators.combine(
            parameterRTypes(rTypes)
                .list()
                .ofMaxSize(MAX_SIZE)
                .filter(
                    p ->
                        Streams.hasNoDuplicates(
                            p.stream().filter(ParameterRType::isNamed).map(ParameterRType::name))),
            rEffects(),
            rTypes)
        .as(OverloadRTypes::of);
  }

  public static Arbitrary<ParameterRType> parameterRTypes() {
    return parameterRTypes(rTypes());
  }

  private static Arbitrary<ParameterRType> parameterRTypes(Arbitrary<RType> rTypes) {
    return Combinators.combine(symbolStrings(), defaultFor(NoOrMaybe.class), rTypes)
        .as(ParameterRType::new);
  }

  public static Arbitrary<ArgumentRType> argumentRTypes() {
    return argumentRTypes(rTypes());
  }

  private static Arbitrary<ArgumentRType> argumentRTypes(Arbitrary<RType> rTypes) {
    return Combinators.combine(symbolStrings(), rTypes).as(ArgumentRType::new);
  }

  public static Arbitrary<AttributesType> attributesTypes() {
    return oneOf(
        Arbitraries.of(AttributesTypes.UNKNOWN, AttributesTypes.NONE),
        attributes().map(AttributesTypes::exact));
  }

  public static Arbitrary<BaseRType> baseRTypes() {
    return oneOf(
        just(BaseRType.ANY),
        baseRTypesNotPromises(),
        Combinators.combine(defaultFor(YesOrMaybe.class), baseRTypesNotPromises())
            .as(BaseRType.Promise::new));
  }

  public static Arbitrary<BaseRType.NotPromise> baseRTypesNotPromises() {
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
        || typeUsage.isOfType(RFunctionType.class)
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
    if (typeUsage.isOfType(RFunctionType.class)) {
      return Set.of(rFunctionTypes());
    }
    if (typeUsage.isOfType(RPrimVecType.class)) {
      return Set.of(rPrimVecTypes());
    }
    if (typeUsage.isOfType(OverloadRType.class)) {
      return Set.of(overloadRTypes());
    }
    if (typeUsage.isOfType(ParameterRType.class)) {
      return Set.of(parameterRTypes());
    }
    if (typeUsage.isOfType(ArgumentRType.class)) {
      return Set.of(argumentRTypes());
    }
    if (typeUsage.isOfType(AttributesType.class)) {
      return Set.of(attributesTypes());
    }
    if (typeUsage.isOfType(BaseRType.class)) {
      return Set.of(baseRTypes());
    }
    if (typeUsage.isOfType(BaseRType.NotPromise.class)) {
      return Set.of(baseRTypesNotPromises());
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
