package org.prlprg.ir.type;

import static org.prlprg.sexp.ArbitraryProvider.attributes;
import static org.prlprg.sexp.ArbitraryProvider.basicSexps;
import static org.prlprg.sexp.ArbitraryProvider.closures;
import static org.prlprg.sexp.ArbitraryProvider.promises;
import static org.prlprg.sexp.ArbitraryProvider.sexps;
import static org.prlprg.sexp.ArbitraryProvider.symbolStrings;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.ImmutableSet;
import java.util.Set;
import net.jqwik.api.Arbitraries;
import net.jqwik.api.Arbitrary;
import net.jqwik.api.Combinators;
import net.jqwik.api.Tuple;
import net.jqwik.api.Tuple.Tuple2;
import net.jqwik.api.providers.TypeUsage;
import org.prlprg.sexp.PrimVectorSXP;

public class ArbitraryProvider implements net.jqwik.api.providers.ArbitraryProvider {
  public static Arbitrary<RType> rTypes() {
    return Arbitraries.lazyOf(
        ArbitraryProvider::basicRTypes,
        () -> basicRTypes().list().ofMaxSize(5).map(RTypes::union),
        () -> basicRTypes().list().ofMaxSize(5).map(RTypes::intersection));
  }

  public static Arbitrary<RType> basicRTypes() {
    return Arbitraries.oneOf(
        Arbitraries.of(
            RTypes.NOTHING,
            RTypes.ANY,
            RTypes.ANY_VALUE,
            RTypes.ANY_VALUE_NOT_MISSING,
            RTypes.ANY_FUN,
            RTypes.ANY_SIMPLE,
            RTypes.OF_MISSING),
        // sexpTypes().map(RTypes::simple),
        Combinators.combine(rPrimVecTypes(), rPromiseTypes())
            .as((t, p) -> new RType(ImmutableSet.of(t), p)),
        Combinators.combine(rFunctionTypes(), rPromiseTypes())
            .as((t, p) -> new RType(ImmutableSet.of(t), p)),
        sexps().map(RTypes::exact));
  }

  static Arbitrary<RPromiseType> rPromiseTypes() {
    return Arbitraries.oneOf(
        Arbitraries.of(
            RPromiseType.MAYBE_LAZY_PROMISE, RPromiseType.MAYBE_STRICT_PROMISE, RPromiseType.VALUE),
        Combinators.combine(Arbitraries.defaultFor(Troolean.class), maybeNats())
            .as(RPromiseType.InexactPromise::new),
        Combinators.combine(promises(), maybeNats()).as(RPromiseType.ExactPromise::new));
  }

  public static Arbitrary<RFunctionType> rFunctionTypes() {
    return Combinators.combine(
            closures(),
            Arbitraries.defaultFor(FunctionRType.class),
            attributesTypes(),
            maybeNats(),
            Combinators.combine(symbolStrings(), parameterRTypes()).as(Tuple::of).list(),
            Arbitraries.defaultFor(NoOrMaybe.class),
            rTypes())
        .as(
            (exactValue,
                functionType,
                attributes,
                referenceCount,
                knownArguments,
                hasMoreArgs,
                returnType) -> {
              var knownArgumentNames =
                  knownArguments.stream()
                      .map(Tuple2::get1)
                      .collect(ImmutableList.toImmutableList());
              var knownArgumentTypes =
                  knownArguments.stream()
                      .map(Tuple2::get2)
                      .collect(ImmutableList.toImmutableList());
              return new RFunctionTypeImpl(
                  exactValue,
                  functionType,
                  attributes,
                  referenceCount,
                  knownArgumentNames,
                  knownArgumentTypes,
                  hasMoreArgs,
                  returnType);
            });
  }

  public static Arbitrary<RPrimVecType> rPrimVecTypes() {
    return Combinators.combine(
            basicSexps().filter(s -> s instanceof PrimVectorSXP<?>).map(s -> (PrimVectorSXP<?>) s),
            attributesTypes(),
            maybeNats(),
            Arbitraries.defaultFor(PrimVecElementRType.class),
            maybeNats(),
            Arbitraries.defaultFor(NoOrMaybe.class))
        .as(RPrimVecTypeImpl::new);
  }

  public static Arbitrary<ParameterRType> parameterRTypes() {
    return Combinators.combine(rTypes(), Arbitraries.defaultFor(NoOrMaybe.class))
        .as(ParameterRType::new);
  }

  public static Arbitrary<AttributesType> attributesTypes() {
    return Arbitraries.oneOf(
        Arbitraries.of(AttributesTypes.UNKNOWN, AttributesTypes.NONE),
        attributes().map(AttributesTypes::exact));
  }

  public static Arbitrary<BaseRType> baseRTypes() {
    return Arbitraries.oneOf(
        Arbitraries.just(BaseRType.ANY),
        baseRTypesNotPromises(),
        Combinators.combine(Arbitraries.defaultFor(YesOrMaybe.class), baseRTypesNotPromises())
            .as(BaseRType.Promise::new));
  }

  public static Arbitrary<BaseRType.NotPromise> baseRTypesNotPromises() {
    return Arbitraries.oneOf(
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
        Arbitraries.defaultFor(VectorElementRType.class).map(BaseRType.Vector::new));
  }

  public static Arbitrary<MaybeNat> maybeNats() {
    return Arbitraries.oneOf(
        Arbitraries.just(MaybeNat.UNKNOWN),
        Arbitraries.integers().greaterOrEqual(0).map(MaybeNat::of));
  }

  @Override
  public boolean canProvideFor(TypeUsage typeUsage) {
    return typeUsage.isOfType(RType.class)
        || typeUsage.isOfType(RPromiseType.class)
        || typeUsage.isOfType(RFunctionType.class)
        || typeUsage.isOfType(RPrimVecType.class)
        || typeUsage.isOfType(ParameterRType.class)
        || typeUsage.isOfType(AttributesType.class)
        || typeUsage.isOfType(BaseRType.class)
        || typeUsage.isOfType(BaseRType.NotPromise.class)
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
    if (typeUsage.isOfType(ParameterRType.class)) {
      return Set.of(parameterRTypes());
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
    if (typeUsage.isOfType(MaybeNat.class)) {
      return Set.of(maybeNats());
    }
    throw new UnsupportedOperationException("Cannot provide for " + typeUsage);
  }
}
