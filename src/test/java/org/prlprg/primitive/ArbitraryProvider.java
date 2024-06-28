package org.prlprg.primitive;

import static net.jqwik.api.Arbitraries.doubles;
import static net.jqwik.api.Arbitraries.integers;
import static net.jqwik.api.Arbitraries.oneOf;

import java.util.Set;
import net.jqwik.api.Arbitraries;
import net.jqwik.api.Arbitrary;
import net.jqwik.api.Combinators;
import net.jqwik.api.providers.TypeUsage;

public class ArbitraryProvider implements net.jqwik.api.providers.ArbitraryProvider {
  public static Arbitrary<Logical> logicals() {
    return Arbitraries.of(Logical.values());
  }

  public static Arbitrary<Complex> complexes() {
    return Combinators.combine(basicReals(), basicReals()).as(Complex::new);
  }

  public static Arbitrary<Integer> basicInts() {
    return oneOf(integers().between(-3, 3), Arbitraries.of(0, -500, 214748364));
  }

  public static Arbitrary<Double> basicReals() {
    return oneOf(
        doubles().between(-3, 3).ofScale(1),
        Arbitraries.of(0.0, -2.347698, 2147483648.0, Double.NEGATIVE_INFINITY, Double.NaN));
  }

  public static Arbitrary<Byte> basicBytes() {
    return Arbitraries.of((byte) 45, (byte) -12, (byte) 0, Byte.MIN_VALUE, Byte.MAX_VALUE);
  }

  @Override
  public boolean canProvideFor(TypeUsage typeUsage) {
    return typeUsage.isOfType(Logical.class) || typeUsage.isOfType(Complex.class);
  }

  @Override
  public Set<Arbitrary<?>> provideFor(TypeUsage typeUsage, SubtypeProvider subtypeProvider) {
    if (typeUsage.isOfType(Logical.class)) {
      return Set.of(logicals());
    }
    if (typeUsage.isOfType(Complex.class)) {
      return Set.of(complexes());
    }
    throw new UnsupportedOperationException("Cannot provide for " + typeUsage);
  }
}
