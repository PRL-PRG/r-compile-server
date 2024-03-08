package org.prlprg.primitive;

import static net.jqwik.api.Arbitraries.doubles;

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
    return Combinators.combine(doubles(), doubles()).as(Complex::new);
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
