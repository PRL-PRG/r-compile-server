package org.prlprg.ir.type;

import static net.jqwik.api.Arbitraries.defaultFor;
import static net.jqwik.api.Arbitraries.integers;
import static net.jqwik.api.Arbitraries.just;
import static net.jqwik.api.Arbitraries.oneOf;
import static net.jqwik.api.Arbitraries.recursive;
import static net.jqwik.api.Arbitraries.subsetOf;
import static org.prlprg.sexp.ArbitraryProvider.attributes;
import static org.prlprg.sexp.ArbitraryProvider.sexpTypes;
import static org.prlprg.sexp.ArbitraryProvider.sexps;
import static org.prlprg.sexp.ArbitraryProvider.symbolStrings;

import com.google.common.collect.ImmutableSet;
import java.util.Arrays;
import java.util.Optional;
import java.util.Set;
import java.util.function.Predicate;
import net.jqwik.api.Arbitraries;
import net.jqwik.api.Arbitrary;
import net.jqwik.api.Combinators;
import net.jqwik.api.providers.TypeUsage;
import org.prlprg.ir.effect.REffect;
import org.prlprg.ir.effect.REffects;
import org.prlprg.ir.type.lattice.MaybeNat;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.ir.type.lattice.YesOrMaybe;
import org.prlprg.primitive.BuiltinId;
import org.prlprg.sexp.SEXPType;
import org.prlprg.util.Reflection;
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
                r.list().ofMaxSize(MAX_SIZE).map(RType::union),
                r.list().ofMaxSize(MAX_SIZE).map(RType::intersection),
                Combinators.combine(
                        rFunctionTypes(r),
                        defaultFor(YesOrMaybe.class),
                        attributesTypes(),
                        defaultFor(RPromiseType.class),
                        defaultFor(NoOrMaybe.class))
                    .as(RType::of)),
        0,
        MAX_DEPTH);
  }

  public static Arbitrary<RValueType> rValueTypes() {
    return rValueTypes(rTypes());
  }

  public static Arbitrary<RValueType> rValueTypes(Arbitrary<RType> rTypes) {
    // REACH: Refactor so it creates the value types directly, doesn't discard.
    return rTypes.map(RType::value);
  }

  private static final ImmutableSet<SEXPType> NONSENSICAL_OR_UNHANDLED_SEXP_TYPE_VALUE_TYPES =
      ImmutableSet.of(SEXPType.CHAR, SEXPType.ANY, SEXPType.S4, SEXPType.EXTPTR, SEXPType.WEAKREF);

  public static Arbitrary<RType> basicRTypes() {
    var staticFields =
        Arrays.stream(RType.class.getFields())
            .filter(field -> field.getType() == RType.class)
            .map(field -> (RType) Reflection.getField(null, field))
            .toList();
    return oneOf(
        Arbitraries.of(staticFields),
        Combinators.combine(
                rVectorTypes(),
                defaultFor(YesOrMaybe.class),
                attributesTypes(),
                defaultFor(RPromiseType.class),
                defaultFor(NoOrMaybe.class))
            .as(RType::of),
        Combinators.combine(
                sexpTypes()
                    .filter(
                        Predicate.not(NONSENSICAL_OR_UNHANDLED_SEXP_TYPE_VALUE_TYPES::contains)),
                defaultFor(YesOrMaybe.class))
            .as(RType::simple),
        sexps().map(RType::exact));
  }

  public static Arbitrary<RFunType> rFunctionTypes() {
    return rFunctionTypes(rTypes());
  }

  private static Arbitrary<RFunType> rFunctionTypes(Arbitrary<RType> rTypes) {
    return oneOf(
        builtinIds().map(RBuiltinOrSpecialType::of),
        rSignatureTypes().list().ofMaxSize(MAX_SIZE).map(RFunType::of));
  }

  private static Arbitrary<BuiltinId> builtinIds() {
    return integers().lessOrEqual(BuiltinId.COUNT - 1).map(BuiltinId::new);
  }

  public static Arbitrary<RPrimVecType> rNAAbleVecTypes() {
    return oneOf(
        Combinators.combine(maybeNats(), defaultFor(NoOrMaybe.class)).as(RNAAbleVecType::of),
        Combinators.combine(maybeNats(), defaultFor(NoOrMaybe.class)).as(RIntType::of),
        Combinators.combine(maybeNats(), defaultFor(NoOrMaybe.class)).as(RRealType::of),
        Combinators.combine(maybeNats(), defaultFor(NoOrMaybe.class)).as(RComplexType::of),
        Combinators.combine(maybeNats(), defaultFor(NoOrMaybe.class)).as(RStringType::of));
  }

  public static Arbitrary<RPrimVecType> rPrimVecTypes() {
    return oneOf(
        maybeNats().map(RPrimVecType::of), rNAAbleVecTypes(), maybeNats().map(RRawType::of));
  }

  public static Arbitrary<RVectorType> rVectorTypes() {
    return oneOf(
        maybeNats().map(RVectorType::of),
        rPrimVecTypes(),
        maybeNats().map(RGenericVecType::of),
        maybeNats().map(RExprVecType::of));
  }

  public static <T> Arbitrary<T> nulls(@SuppressWarnings("unused") Class<T> clazz) {
    return just(Optional.<T>empty()).map(s -> s.orElse(null));
  }

  public static Arbitrary<RSignatureType> rSignatureTypes() {
    return rSignatureTypes(rTypes());
  }

  private static Arbitrary<RSignatureType> rSignatureTypes(Arbitrary<RType> rTypes) {
    return Combinators.combine(
            parameterRType(rTypes)
                .list()
                .ofMaxSize(MAX_SIZE)
                .filter(
                    p ->
                        Streams.hasNoDuplicates(
                            p.stream().filter(RParameterType::isNamed).map(RParameterType::name))),
            rEffects(),
            rTypes)
        .as(RSignatureType::of);
  }

  public static Arbitrary<RParameterType> parameterRType() {
    return parameterRType(rTypes());
  }

  private static Arbitrary<RParameterType> parameterRType(Arbitrary<RType> rTypes) {
    return Combinators.combine(
            oneOf(Arbitraries.of(""), symbolStrings()),
            defaultFor(NoOrMaybe.class),
            rValueTypes(rTypes),
            attributesTypes())
        .as(RParameterType::new);
  }

  public static Arbitrary<RArgumentType> argumentRType() {
    return argumentRType(rTypes());
  }

  private static Arbitrary<RArgumentType> argumentRType(Arbitrary<RType> rTypes) {
    return Combinators.combine(symbolStrings(), rTypes).as(RArgumentType::new);
  }

  public static Arbitrary<AttributesType> attributesTypes() {
    return oneOf(
        Arbitraries.of(
            AttributesType.ANY,
            AttributesType.BOTTOM,
            AttributesType.EMPTY,
            AttributesType.ANY_OBJECT),
        attributes().map(AttributesType::exact));
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
        || typeUsage.isOfType(RValueType.class)
        || typeUsage.isOfType(AttributesType.class)
        || typeUsage.isOfType(RPromiseType.class)
        || typeUsage.isOfType(RFunType.class)
        || typeUsage.isOfType(RNAAbleVecType.class)
        || typeUsage.isOfType(RPrimVecType.class)
        || typeUsage.isOfType(RVectorType.class)
        || typeUsage.isOfType(RSignatureType.class)
        || typeUsage.isOfType(RParameterType.class)
        || typeUsage.isOfType(RArgumentType.class)
        || typeUsage.isOfType(REffects.class)
        || typeUsage.isOfType(MaybeNat.class);
  }

  @Override
  public Set<Arbitrary<?>> provideFor(TypeUsage typeUsage, SubtypeProvider subtypeProvider) {
    if (typeUsage.isOfType(RType.class)) {
      return Set.of(rTypes());
    }
    if (typeUsage.isOfType(RValueType.class)) {
      return Set.of(rValueTypes());
    }
    if (typeUsage.isOfType(AttributesType.class)) {
      return Set.of(attributesTypes());
    }
    if (typeUsage.isOfType(RFunType.class)) {
      return Set.of(rFunctionTypes());
    }
    if (typeUsage.isOfType(RNAAbleVecType.class)) {
      return Set.of(rNAAbleVecTypes());
    }
    if (typeUsage.isOfType(RPrimVecType.class)) {
      return Set.of(rPrimVecTypes());
    }
    if (typeUsage.isOfType(RVectorType.class)) {
      return Set.of(rVectorTypes());
    }
    if (typeUsage.isOfType(RSignatureType.class)) {
      return Set.of(rSignatureTypes());
    }
    if (typeUsage.isOfType(RParameterType.class)) {
      return Set.of(parameterRType());
    }
    if (typeUsage.isOfType(RArgumentType.class)) {
      return Set.of(argumentRType());
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
