package org.prlprg.ir.type;

import static org.prlprg.sexp.ArbitraryProvider.attributes;
import static org.prlprg.sexp.ArbitraryProvider.sexps;

import java.util.Set;
import net.jqwik.api.Arbitraries;
import net.jqwik.api.Arbitrary;
import net.jqwik.api.providers.TypeUsage;

public class ArbitraryProvider implements net.jqwik.api.providers.ArbitraryProvider {
  public static Arbitrary<RType> rTypes() {
    return Arbitraries.lazyOf(
        ArbitraryProvider::basicRTypes,
        () -> basicRTypes().list().map(RTypes::union),
        () -> basicRTypes().list().map(RTypes::intersection));
  }

  public static Arbitrary<RType> basicRTypes() {
    return Arbitraries.oneOf(
        Arbitraries.of(
            RTypes.NOTHING,
            RTypes.ANY,
            RTypes.ANY_VALUE,
            RTypes.ANY_FUN,
            RTypes.SIMPLE_ANY,
            RTypes.OF_MISSING),
        // sexpTypes().map(RTypes::simple),
        sexps().map(RTypes::exact));
  }

  public static Arbitrary<AttributesType> attributesTypes() {
    return Arbitraries.oneOf(
        Arbitraries.of(AttributesTypes.UNKNOWN, AttributesTypes.NONE),
        attributes().map(AttributesTypes::exact));
  }

  public static Arbitrary<MaybeNat> maybeNats() {
    return Arbitraries.oneOf(
        Arbitraries.just(MaybeNat.UNKNOWN), Arbitraries.integers().map(MaybeNat::of));
  }

  @Override
  public boolean canProvideFor(TypeUsage typeUsage) {
    return typeUsage.isOfType(RType.class)
        || typeUsage.isOfType(AttributesType.class)
        || typeUsage.isOfType(MaybeNat.class);
  }

  @Override
  public Set<Arbitrary<?>> provideFor(TypeUsage typeUsage, SubtypeProvider subtypeProvider) {
    if (typeUsage.isOfType(RType.class)) {
      return Set.of(rTypes());
    }
    if (typeUsage.isOfType(AttributesType.class)) {
      return Set.of(attributesTypes());
    }
    if (typeUsage.isOfType(MaybeNat.class)) {
      return Set.of(maybeNats());
    }
    throw new UnsupportedOperationException("Cannot provide for " + typeUsage);
  }
}
