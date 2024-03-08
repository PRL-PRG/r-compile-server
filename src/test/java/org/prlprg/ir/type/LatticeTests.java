package org.prlprg.ir.type;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertTrue;

import com.google.common.collect.ImmutableMap;
import com.google.common.collect.ImmutableSet;
import java.util.Objects;
import java.util.function.Function;
import java.util.stream.Collectors;
import javax.annotation.Nullable;
import net.jqwik.api.Arbitraries;
import net.jqwik.api.Arbitrary;
import net.jqwik.api.ForAll;
import net.jqwik.api.Property;
import net.jqwik.api.Provide;
import net.jqwik.api.Tuple.Tuple2;
import org.prlprg.util.Reflection;

public class LatticeTests {
  @SuppressWarnings("unchecked")
  private final ImmutableMap<Class<Lattice<?>>, Object> LATTICES_AND_ANYS =
      ImmutableSet.of(
              YesOrMaybe.MAYBE,
              NoOrMaybe.MAYBE,
              Troolean.MAYBE,
              MaybeNat.UNKNOWN,
              AttributesTypes.UNKNOWN
              // TODO
              // new RFunctionTypeImpl(null, null, AttributesTypes.UNKNOWN, MaybeNat.UNKNOWN,
              // ImmutableList.of(), ImmutableList.of(), NoOrMaybe.MAYBE, RTypes.ANY),
              // new RPrimVecTypeImpl(null, AttributesTypes.UNKNOWN, MaybeNat.UNKNOWN, null,
              // YesOrMaybe.MAYBE, YesOrMaybe.MAYBE, MaybeNat.UNKNOWN, NoOrMaybe.MAYBE),
              // new RGenericValueType(null, BaseRType.ANY_VALUE, AttributesTypes.UNKNOWN,
              // MaybeNat.UNKNOWN)
              )
          .stream()
          .collect(
              ImmutableMap.toImmutableMap(
                  x -> (Class<Lattice<?>>) x.getClass(), Function.identity()));

  @Property
  void isCoherent_Lattice(@ForAll("latticePairs") Tuple2<Lattice<?>, Lattice<?>> lattices) {
    var lhs = lattices.get1();
    var rhs = lattices.get2();
    assert lhs.getClass() == rhs.getClass();
    var any = Objects.requireNonNull(LATTICES_AND_ANYS.get(lhs.getClass()));
    // I don't think Java's type system permits us to call this directly, because we can't
    // instantiate with a generic parameter because it's at runtime (the call still works at runtime
    // without a known generic parameter due to erasure).
    Reflection.call(this, "isCoherent", lhs, rhs, any);
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
    assertEquals(rhs.isSupersetOf(lhs), lhs.isSubsetOf(rhs), "a ≤ b ⇒ b ≥ a");
    assertEquals(
        !rhs.isSubsetOf(lhs), lhs.isSubsetOf(rhs) && !lhs.equals(rhs), "a ≤ b & a ≠ b ⇒ b ≠ a");

    // Subset of union and intersection
    assertTrue(lhs.isSubsetOf(lhs.union(rhs)), "a ≤ (a ∨ b)");
    assertTrue(rhs.isSubsetOf(lhs.union(rhs)), "b ≤ (a ∨ b)");
    assertTrue(Lattice.isSubset(lhs.intersection(rhs), lhs), "(a ∧ b) ≤ a");
    assertTrue(Lattice.isSubset(lhs.intersection(rhs), rhs), "(a ∧ b) ≤ b");
    assertEquals(
        lhs.equals(rhs), lhs.isSubsetOf(rhs) && rhs.isSubsetOf(lhs), "a ≤ b & b ≤ a ⇒ a = b");

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
  Arbitrary<Tuple2<Lattice<?>, Lattice<?>>> latticePairs() {
    return Arbitraries.oneOf(
        LATTICES_AND_ANYS.keySet().stream()
            .map(clazz -> Arbitraries.defaultFor(clazz).tuple2())
            .collect(Collectors.toUnmodifiableList()));
  }
}
