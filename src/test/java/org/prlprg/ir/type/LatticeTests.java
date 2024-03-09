package org.prlprg.ir.type;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertTrue;

import com.google.common.collect.ImmutableMap;
import java.util.stream.Collectors;
import javax.annotation.Nullable;
import net.jqwik.api.Arbitraries;
import net.jqwik.api.Arbitrary;
import net.jqwik.api.ForAll;
import net.jqwik.api.Property;
import net.jqwik.api.Provide;
import net.jqwik.api.Tuple;
import net.jqwik.api.Tuple.Tuple3;
import org.opentest4j.AssertionFailedError;
import org.prlprg.util.Reflection;

public class LatticeTests {
  private final ImmutableMap<Class<?>, Lattice<?>> LATTICES_AND_ANYS =
      ImmutableMap.of(
          YesOrMaybe.class, YesOrMaybe.MAYBE,
          NoOrMaybe.class, NoOrMaybe.MAYBE,
          Troolean.class, Troolean.MAYBE,
          MaybeNat.class, MaybeNat.UNKNOWN,
          AttributesType.class, AttributesTypes.UNKNOWN);

  @Property
  void isCoherent_Lattice(
      @ForAll("latticePairsAndClasses") Tuple3<Object, Object, Object> lattices) {
    var lhs = (Lattice<?>) lattices.get1();
    var rhs = (Lattice<?>) lattices.get2();
    var clazz = (Class<?>) lattices.get3();
    var any = LATTICES_AND_ANYS.get(clazz);
    try {
      // I don't think Java's type system permits us to call this directly, because we can't
      // instantiate with a generic parameter because it's at runtime (the call still works at
      // runtime
      // without a known generic parameter due to erasure).
      Reflection.callByName(this, LatticeTests.class, "isCoherent", lhs, rhs, any);
    } catch (AssertionFailedError e) {
      throw new AssertionError(clazz.getSimpleName() + ": " + e.getMessage(), e.getCause());
    }
  }

  @Property
  void isCoherent_RType(@ForAll RType lhs, @ForAll RType rhs) {
    isCoherent(lhs, rhs, RTypes.ANY, RTypes.NOTHING);
  }

  @SuppressWarnings("unused")
  private <T extends Lattice<T>> void isCoherent(T lhs, T rhs, T top) {
    isCoherent(lhs, rhs, top, null);
  }

  private <T extends Lattice<T>> void isCoherent(T lhs, T rhs, T top, @Nullable T bottom) {
    // Subset
    assertTrue(lhs.isSubsetOf(top), "a ≤ ⊤");
    assertTrue(Lattice.isSubset(bottom, lhs), "⊥ ≤ a");
    assertTrue(lhs.isSubsetOf(lhs), "a ≤ a");
    assertEquals(rhs.isSupersetOf(lhs), lhs.isSubsetOf(rhs), "a ≤ b ⇔ b ≥ a");
    assertEquals(
        lhs.equals(rhs), lhs.isSubsetOf(rhs) && rhs.isSubsetOf(lhs), "a ≤ b & b ≤ a ⇔ a = b");
    assertEquals(
        lhs.equals(rhs), lhs.isSubsetOf(rhs) && lhs.isSupersetOf(rhs), "a ≤ b & a ≥ b ⇔ a = b");

    // Subset of union and intersection
    assertTrue(lhs.isSubsetOf(lhs.union(rhs)), "a ≤ (a ∨ b)");
    assertTrue(rhs.isSubsetOf(lhs.union(rhs)), "b ≤ (a ∨ b)");
    assertTrue(Lattice.isSubset(lhs.intersection(rhs), lhs), "(a ∧ b) ≤ a");
    assertTrue(Lattice.isSubset(lhs.intersection(rhs), rhs), "(a ∧ b) ≤ b");

    // Union and intersection
    assertEquals(lhs, lhs.union(lhs), "a ∨ a = a");
    assertEquals(lhs, lhs.intersection(lhs), "a ∧ a = a");
    assertEquals(top, lhs.union(top), "a ∨ ⊤ = ⊤");
    assertEquals(lhs, lhs.intersection(top), "a ∧ ⊤ = a");
    assertEquals(lhs, Lattice.union(lhs, bottom), "a ∨ ⊥ = a");
    assertEquals(bottom, Lattice.intersection(lhs, bottom), "a ∧ ⊥ = ⊥");
    assertEquals(lhs.union(rhs), rhs.union(lhs), "a ∨ b = b ∨ a");
    assertEquals(lhs.intersection(rhs), rhs.intersection(lhs), "a ∧ b = b ∧ a");
    assertEquals(lhs, Lattice.union(lhs, lhs.intersection(rhs)), "a ∨ (a ∧ b) = a");
    assertEquals(lhs, lhs.intersection(lhs.union(rhs)), "a ∧ (a ∨ b) = a");
  }

  @Provide
  Arbitrary<Tuple3<Object, Object, Object>> latticePairsAndClasses() {
    return Arbitraries.oneOf(
        LATTICES_AND_ANYS.keySet().stream()
            .map(
                clazz ->
                    Arbitraries.defaultFor(clazz)
                        .tuple2()
                        .map(t -> Tuple.of((Object) t.get1(), (Object) t.get2(), (Object) clazz)))
            .collect(Collectors.toUnmodifiableList()));
  }
}
