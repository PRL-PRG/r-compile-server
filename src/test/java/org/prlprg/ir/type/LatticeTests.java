package org.prlprg.ir.type;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertTrue;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.ImmutableMap;
import java.util.stream.Collectors;
import javax.annotation.Nullable;
import net.jqwik.api.Arbitraries;
import net.jqwik.api.Arbitrary;
import net.jqwik.api.ForAll;
import net.jqwik.api.GenerationMode;
import net.jqwik.api.Property;
import net.jqwik.api.Provide;
import net.jqwik.api.Tuple;
import net.jqwik.api.Tuple.Tuple2;
import net.jqwik.api.Tuple.Tuple3;
import org.opentest4j.AssertionFailedError;
import org.prlprg.ir.effect.REffects;
import org.prlprg.ir.type.lattice.Lattice;
import org.prlprg.ir.type.lattice.Maybe;
import org.prlprg.ir.type.lattice.MaybeNat;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.ir.type.lattice.YesOrMaybe;
import org.prlprg.util.Reflection;

public class LatticeTests {
  private final ImmutableMap<Class<?>, Lattice<?>> LATTICES_AND_ANYS =
      ImmutableList.of(
              Tuple.of(YesOrMaybe.class, YesOrMaybe.MAYBE),
              Tuple.of(NoOrMaybe.class, NoOrMaybe.MAYBE),
              Tuple.of(Maybe.class, Maybe.MAYBE),
              Tuple.of(MaybeNat.class, MaybeNat.UNKNOWN),
              Tuple.of(AttributesType.class, AttributesType.ANY),
              Tuple.of(RPromiseType.class, RPromiseType.MAYBE_LAZY_MAYBE_PROMISE),
              Tuple.of(RFunType.class, RFunType.ANY),
              Tuple.of(RVectorType.class, RVectorType.ANY))
          .stream()
          .collect(ImmutableMap.toImmutableMap(Tuple2::get1, Tuple2::get2));

  /** FIXME(jakob): This fails occasionally, closure types need to be fixed. */
  @Property(generation = GenerationMode.RANDOMIZED, tries = 100)
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
      throw new AssertionFailedError(clazz.getSimpleName() + ": " + e.getMessage(), e.getCause());
    }
  }

  @Property
  void isCoherent_REffects(@ForAll REffects lhs, @ForAll REffects rhs) {
    isCoherent(lhs, rhs, REffects.ARBITRARY, REffects.PURE);
  }

  /** FIXME(jakob): This fails occasionally, closure types need to be fixed. */
  @Property(generation = GenerationMode.RANDOMIZED, tries = 100)
  void isCoherent_RType(@ForAll RSexpType lhs, @ForAll RSexpType rhs) {
    isCoherent(lhs, rhs, RSexpType.ANY, RSexpType.NOTHING);
  }

  @SuppressWarnings("unused")
  private <T extends Lattice<T>> void isCoherent(T lhs, T rhs, T top) {
    isCoherent(lhs, rhs, top, null);
  }

  @SuppressWarnings("EqualsWithItself")
  private <T extends Lattice<T>> void isCoherent(T lhs, T rhs, T top, @Nullable T bottom) {
    // This seems obvious, but may not hold due to NaN equality. It *should* hold.
    //
    // A simple record with a double will preserve equality even with NaN:
    //     record Foo(double value) {}
    //     ==>
    //     new Foo(Double.NaN).Foo(Double.NaN) == true
    //
    // But it's easy to get this wrong with boilerplate `equals`:
    //     class Foo {
    //         double value;
    //         public boolean equals(Object o) {
    //             return o instanceof Foo f && f.value == value;
    //         }
    //     }
    //     ==>
    //     new Foo(Double.NaN).equals(new Foo(Double.NaN)) == false
    //
    // This ruins basic lattice guarantees, so wrt types that have exact values, we want them to
    // equal themselves.
    assertEquals(lhs, lhs, "a = a (check NaN)");
    assertEquals(rhs, rhs, "b = b (check NaN)");

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
    var union = lhs.unionOf(rhs);
    var intersection = lhs.intersectionOf(rhs);
    assertTrue(lhs.isSubsetOf(union), () -> "a ≤ (a ∨ b)  | " + union);
    assertTrue(rhs.isSubsetOf(union), () -> "b ≤ (a ∨ b)  | " + union);
    assertTrue(Lattice.isSubset(intersection, lhs), () -> "(a ∧ b) ≤ a  | " + intersection);
    assertTrue(Lattice.isSubset(intersection, rhs), () -> "(a ∧ b) ≤ b  | " + intersection);

    // Union and intersection
    assertEquals(lhs, lhs.unionOf(lhs), () -> "a ∨ a = a  | " + lhs.unionOf(lhs));
    assertEquals(lhs, lhs.intersectionOf(lhs), () -> "a ∧ a = a  | " + lhs.intersectionOf(lhs));
    assertEquals(top, lhs.unionOf(top), () -> "a ∨ ⊤ = ⊤  | " + lhs.unionOf(top));
    assertEquals(top, top.unionOf(lhs), () -> "⊤ ∨ a = ⊤  | " + top.unionOf(lhs));
    assertEquals(lhs, lhs.intersectionOf(top), () -> "a ∧ ⊤ = a  | " + lhs.intersectionOf(top));
    assertEquals(lhs, top.intersectionOf(lhs), () -> "⊤ ∧ a = a  | " + top.intersectionOf(lhs));
    assertEquals(
        lhs, Lattice.union(lhs, bottom), () -> "a ∨ ⊥ = a  | " + Lattice.union(lhs, bottom));
    assertEquals(
        lhs, Lattice.union(bottom, lhs), () -> "⊥ ∨ a = a  | " + Lattice.union(bottom, lhs));
    assertEquals(
        bottom,
        Lattice.intersection(lhs, bottom),
        () -> "a ∧ ⊥ = ⊥  | " + Lattice.intersection(lhs, bottom));
    assertEquals(
        bottom,
        Lattice.intersection(bottom, lhs),
        () -> "⊥ ∧ a = ⊥  | " + Lattice.intersection(bottom, lhs));
    assertEquals(union, rhs.unionOf(lhs), () -> "a ∨ b = b ∨ a  | " + rhs.unionOf(lhs));
    assertEquals(
        intersection, rhs.intersectionOf(lhs), () -> "a ∧ b = b ∧ a  | " + rhs.intersectionOf(lhs));
    assertEquals(
        lhs,
        Lattice.union(lhs, intersection),
        () -> "a ∨ (a ∧ b) = a  | " + Lattice.union(lhs, intersection));
    assertEquals(
        lhs, lhs.intersectionOf(union), () -> "a ∧ (a ∨ b) = a  | " + lhs.intersectionOf(union));
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
