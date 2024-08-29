package org.prlprg.ir.type;

import static net.jqwik.api.Arbitraries.defaultFor;
import static net.jqwik.api.Arbitraries.integers;
import static net.jqwik.api.Arbitraries.just;
import static net.jqwik.api.Arbitraries.oneOf;
import static net.jqwik.api.Arbitraries.recursive;
import static org.prlprg.sexp.ArbitraryProvider.attributes;
import static org.prlprg.sexp.ArbitraryProvider.sexpTypes;
import static org.prlprg.sexp.ArbitraryProvider.sexps;
import static org.prlprg.sexp.ArbitraryProvider.symbolStrings;

import com.google.common.collect.ImmutableSet;
import java.lang.reflect.Modifier;
import java.util.Arrays;
import java.util.Optional;
import java.util.Set;
import java.util.function.Predicate;
import net.jqwik.api.Arbitraries;
import net.jqwik.api.Arbitrary;
import net.jqwik.api.Combinators;
import net.jqwik.api.providers.TypeUsage;
import org.prlprg.ir.effect.CanDeopt;
import org.prlprg.ir.effect.Forces;
import org.prlprg.ir.effect.REffect;
import org.prlprg.ir.effect.REffects;
import org.prlprg.ir.type.lattice.Maybe;
import org.prlprg.ir.type.lattice.MaybeNat;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.ir.type.sexp.AttributesType;
import org.prlprg.ir.type.sexp.RArgumentType;
import org.prlprg.ir.type.sexp.RBuiltinOrSpecialType;
import org.prlprg.ir.type.sexp.RComplexType;
import org.prlprg.ir.type.sexp.RExprVecType;
import org.prlprg.ir.type.sexp.RFunType;
import org.prlprg.ir.type.sexp.RGenericVecType;
import org.prlprg.ir.type.sexp.RIntType;
import org.prlprg.ir.type.sexp.RNAAbleVecType;
import org.prlprg.ir.type.sexp.RParameterType;
import org.prlprg.ir.type.sexp.RPrimVecType;
import org.prlprg.ir.type.sexp.RPromiseType;
import org.prlprg.ir.type.sexp.RRawType;
import org.prlprg.ir.type.sexp.RRealType;
import org.prlprg.ir.type.sexp.RSexpType;
import org.prlprg.ir.type.sexp.RSignatureType;
import org.prlprg.ir.type.sexp.RStringType;
import org.prlprg.ir.type.sexp.RValueType;
import org.prlprg.ir.type.sexp.RVectorType;
import org.prlprg.primitive.BuiltinId;
import org.prlprg.primitive.Complex;
import org.prlprg.primitive.Logical;
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
    return oneOf(rSexpTypes(), rSexpTypes(), rSexpTypes(), rUnboxedTypes());
  }

  public static Arbitrary<RUnboxedType> rUnboxedTypes() {
    return Arbitraries.of(Integer.class, Double.class, Logical.class, Complex.class)
        .map(RUnboxedType::of);
  }

  public static Arbitrary<RSexpType> rSexpTypes() {
    return recursive(
        ArbitraryProvider::basicRSexpTypes,
        r ->
            oneOf(
                Combinators.combine(r, r).as(RSexpType::unionOf),
                Combinators.combine(r, r).as(RSexpType::intersectionOf),
                Combinators.combine(
                        rFunctionTypes(r),
                        attributesTypes(),
                        defaultFor(RPromiseType.class),
                        defaultFor(Maybe.class))
                    .as(RSexpType::of)),
        0,
        MAX_DEPTH);
  }

  public static Arbitrary<RValueType> rValueTypes() {
    return rValueTypes(rSexpTypes());
  }

  public static Arbitrary<RValueType> rValueTypes(Arbitrary<RSexpType> rSexpTypes) {
    // REACH: Refactor so it creates the value types directly, doesn't discard.
    return rSexpTypes.map(RSexpType::value);
  }

  private static final ImmutableSet<SEXPType> NONSENSICAL_OR_UNHANDLED_SEXP_TYPE_VALUE_TYPES =
      ImmutableSet.of(SEXPType.CHAR, SEXPType.ANY, SEXPType.S4, SEXPType.EXTPTR, SEXPType.WEAKREF);

  public static Arbitrary<RSexpType> basicRSexpTypes() {
    var staticFields =
        Arrays.stream(RSexpType.class.getFields())
            .filter(
                field ->
                    field.getType() == RSexpType.class
                        && Modifier.isPublic(field.getModifiers())
                        && Modifier.isStatic(field.getModifiers()))
            .map(
                field -> {
                  // The class itself isn't public, so even though the fields are statically
                  // exposed,
                  // they aren't reflectively exposed.
                  field.setAccessible(true);
                  return (RSexpType) Reflection.getField(null, field);
                })
            .toList();
    return oneOf(
        Arbitraries.of(staticFields),
        Combinators.combine(
                rVectorTypes(),
                attributesTypes(),
                defaultFor(RPromiseType.class),
                defaultFor(Maybe.class))
            .as(RSexpType::of),
        sexpTypes()
            .filter(Predicate.not(NONSENSICAL_OR_UNHANDLED_SEXP_TYPE_VALUE_TYPES::contains))
            .map(RSexpType::simple),
        sexps().map(RSexpType::exact));
  }

  public static Arbitrary<RFunType> rFunctionTypes() {
    return rFunctionTypes(rSexpTypes());
  }

  private static Arbitrary<RFunType> rFunctionTypes(Arbitrary<RSexpType> rSexpTypes) {
    return oneOf(
        builtinIds().map(RBuiltinOrSpecialType::of),
        rSignatureTypes(rSexpTypes).list().ofMaxSize(MAX_SIZE).map(RFunType::of));
  }

  private static Arbitrary<BuiltinId> builtinIds() {
    return integers().between(0, BuiltinId.COUNT - 1).map(BuiltinId::new);
  }

  public static Arbitrary<RNAAbleVecType> rNAAbleVecTypes() {
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
    return rSignatureTypes(rSexpTypes());
  }

  private static Arbitrary<RSignatureType> rSignatureTypes(Arbitrary<RSexpType> rSexpTypes) {
    return Combinators.combine(
            parameterRType(rSexpTypes)
                .list()
                .ofMaxSize(MAX_SIZE)
                .filter(
                    p ->
                        Streams.hasNoDuplicates(
                            p.stream().filter(RParameterType::isNamed).map(RParameterType::name))),
            rEffects(),
            rSexpTypes)
        .as(RSignatureType::of);
  }

  public static Arbitrary<RParameterType> parameterRType() {
    return parameterRType(rSexpTypes());
  }

  private static Arbitrary<RParameterType> parameterRType(Arbitrary<RSexpType> rSexpTypes) {
    return Combinators.combine(
            oneOf(Arbitraries.of(""), symbolStrings()),
            defaultFor(NoOrMaybe.class),
            rValueTypes(rSexpTypes),
            attributesTypes())
        .as(RParameterType::new);
  }

  public static Arbitrary<RArgumentType> argumentRType() {
    return argumentRType(rSexpTypes());
  }

  private static Arbitrary<RArgumentType> argumentRType(Arbitrary<RSexpType> rSexpTypes) {
    return Combinators.combine(symbolStrings(), rSexpTypes).as(RArgumentType::new);
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
    return rEffect().set().ofMaxSize(MAX_SIZE).map(REffects::new);
  }

  public static Arbitrary<REffect> rEffect() {
    return Arbitraries.of(new Forces(), new CanDeopt());
  }

  public static Arbitrary<MaybeNat> maybeNats() {
    return oneOf(
        just(MaybeNat.UNKNOWN), integers().greaterOrEqual(0).lessOrEqual(2).map(MaybeNat::of));
  }

  @Override
  public boolean canProvideFor(TypeUsage typeUsage) {
    return typeUsage.isOfType(RType.class)
        || typeUsage.isOfType(RSexpType.class)
        || typeUsage.isOfType(RValueType.class)
        || typeUsage.isOfType(AttributesType.class)
        || typeUsage.isOfType(RFunType.class)
        || typeUsage.isOfType(RNAAbleVecType.class)
        || typeUsage.isOfType(RPrimVecType.class)
        || typeUsage.isOfType(RVectorType.class)
        || typeUsage.isOfType(RSignatureType.class)
        || typeUsage.isOfType(RParameterType.class)
        || typeUsage.isOfType(RArgumentType.class)
        || typeUsage.isOfType(REffects.class)
        || typeUsage.isOfType(REffect.class)
        || typeUsage.isOfType(MaybeNat.class);
  }

  @Override
  public Set<Arbitrary<?>> provideFor(TypeUsage typeUsage, SubtypeProvider subtypeProvider) {
    if (typeUsage.isOfType(RType.class)) {
      return Set.of(rTypes());
    }
    if (typeUsage.isOfType(RUnboxedType.class)) {
      return Set.of(rSexpTypes());
    }
    if (typeUsage.isOfType(RSexpType.class)) {
      return Set.of(rSexpTypes());
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
    if (typeUsage.isOfType(REffect.class)) {
      return Set.of(rEffect());
    }
    if (typeUsage.isOfType(MaybeNat.class)) {
      return Set.of(maybeNats());
    }
    throw new UnsupportedOperationException("Cannot provide for " + typeUsage);
  }
}
