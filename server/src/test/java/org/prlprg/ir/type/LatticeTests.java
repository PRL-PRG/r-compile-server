package org.prlprg.ir.type;

// public class LatticeTests {
//  private final ImmutableMap<Class<?>, Lattice<?>> LATTICES_AND_ANYS =
//      ImmutableList.of(
//              Tuple.of(YesOrMaybe.class, YesOrMaybe.MAYBE),
//              Tuple.of(NoOrMaybe.class, NoOrMaybe.MAYBE),
//              Tuple.of(Troolean.class, Troolean.MAYBE),
//              Tuple.of(MaybeNat.class, MaybeNat.UNKNOWN),
//              Tuple.of(AttributesType.class, AttributesTypes.UNKNOWN),
//              Tuple.of(BaseRType.NotPromise.class, BaseRType.NotPromise.ANY_VALUE),
//              Tuple.of(BaseRType.class, BaseRType.ANY),
//              Tuple.of(VectorElementRType.class, VectorElementRType.ANY),
//              Tuple.of(PrimVecElementRType.class, PrimVecElementRType.ANY),
//              Tuple.of(RPromiseType.class, RPromiseType.MAYBE_LAZY_PROMISE),
//              Tuple.of(
//                  RFunctionType.class,
//                  new RFunctionTypeImpl(
//                      null,
//                      null,
//                      AttributesTypes.UNKNOWN,
//                      MaybeNat.UNKNOWN,
//                      ImmutableList.of(),
//                      Troolean.MAYBE)),
//              Tuple.of(
//                  RPrimVecType.class,
//                  new RPrimVecTypeImpl(
//                      null,
//                      AttributesTypes.UNKNOWN,
//                      MaybeNat.UNKNOWN,
//                      PrimVecElementRType.ANY,
//                      MaybeNat.UNKNOWN,
//                      NoOrMaybe.MAYBE)))
//          .stream()
//          .collect(ImmutableMap.toImmutableMap(Tuple2::get1, Tuple2::get2));
//
//  @BeforeContainer
//  static void setup() {
//    // Disable weird case logs because we generate weird types
//    RGenericValueType.ENABLE_WEIRD_CASE_LOGS = false;
//  }
//
//  /** FIXME(jakob): This fails occasionally, closure types need to be fixed. */
//  @Property(generation = GenerationMode.RANDOMIZED, tries = 100)
//  void isCoherent_Lattice(
//      @ForAll("latticePairsAndClasses") Tuple3<Object, Object, Object> lattices) {
//    var lhs = (Lattice<?>) lattices.get1();
//    var rhs = (Lattice<?>) lattices.get2();
//    var clazz = (Class<?>) lattices.get3();
//    var any = LATTICES_AND_ANYS.get(clazz);
//    try {
//      // I don't think Java's type system permits us to call this directly, because we can't
//      // instantiate with a generic parameter because it's at runtime (the call still works at
//      // runtime
//      // without a known generic parameter due to erasure).
//      Reflection.callByName(this, LatticeTests.class, "isCoherent", lhs, rhs, any);
//    } catch (AssertionFailedError e) {
//      throw new AssertionFailedError(clazz.getSimpleName() + ": " + e.getMessage(), e.getCause());
//    }
//  }
//
//  @Property
//  void isCoherent_REffects(@ForAll REffects lhs, @ForAll REffects rhs) {
//    isCoherent(lhs, rhs, REffects.ARBITRARY, REffects.PURE);
//  }
//
//  /** FIXME(jakob): This fails occasionally, closure types need to be fixed. */
//  @Property(generation = GenerationMode.RANDOMIZED, tries = 100)
//  void isCoherent_RType(@ForAll RType lhs, @ForAll RType rhs) {
//    isCoherent(lhs, rhs, RTypes.ANY, RTypes.NOTHING);
//  }
//
//  @SuppressWarnings("unused")
//  private <T extends Lattice<T>> void isCoherent(T lhs, T rhs, T top) {
//    isCoherent(lhs, rhs, top, null);
//  }
//
//  @SuppressWarnings("EqualsWithItself")
//  private <T extends Lattice<T>> void isCoherent(T lhs, T rhs, T top, @Nullable T bottom) {
//    // This seems obvious, but may not hold due to NaN equality. It *should* hold.
//    //
//    // A simple record with a double will preserve equality even with NaN:
//    //     record Foo(double value) {}
//    //     ==>
//    //     new Foo(Double.NaN).Foo(Double.NaN) == true
//    //
//    // But it's easy to get this wrong with boilerplate `equals`:
//    //     class Foo {
//    //         double value;
//    //         public boolean equals(Object o) {
//    //             return o instanceof Foo f && f.value == value;
//    //         }
//    //     }
//    //     ==>
//    //     new Foo(Double.NaN).equals(new Foo(Double.NaN)) == false
//    //
//    // This ruins basic lattice guarantees, so wrt types that have exact values, we want them to
//    // equal themselves.
//    assertEquals(lhs, lhs, "a = a (check NaN)");
//    assertEquals(rhs, rhs, "b = b (check NaN)");
//
//    // Subset
//    assertTrue(lhs.isSubsetOf(top), "a ≤ ⊤");
//    assertTrue(Lattice.isSubset(bottom, lhs), "⊥ ≤ a");
//    assertTrue(lhs.isSubsetOf(lhs), "a ≤ a");
//    assertEquals(rhs.isSupersetOf(lhs), lhs.isSubsetOf(rhs), "a ≤ b ⇔ b ≥ a");
//    assertEquals(
//        lhs.equals(rhs), lhs.isSubsetOf(rhs) && rhs.isSubsetOf(lhs), "a ≤ b & b ≤ a ⇔ a = b");
//    assertEquals(
//        lhs.equals(rhs), lhs.isSubsetOf(rhs) && lhs.isSupersetOf(rhs), "a ≤ b & a ≥ b ⇔ a = b");
//
//    // Subset of union and intersection
//    var union = lhs.union(rhs);
//    var intersection = lhs.intersection(rhs);
//    assertTrue(lhs.isSubsetOf(union), () -> "a ≤ (a ∨ b)  | " + union);
//    assertTrue(rhs.isSubsetOf(union), () -> "b ≤ (a ∨ b)  | " + union);
//    assertTrue(Lattice.isSubset(intersection, lhs), () -> "(a ∧ b) ≤ a  | " + intersection);
//    assertTrue(Lattice.isSubset(intersection, rhs), () -> "(a ∧ b) ≤ b  | " + intersection);
//
//    // Union and intersection
//    assertEquals(lhs, lhs.union(lhs), () -> "a ∨ a = a  | " + lhs.union(lhs));
//    assertEquals(lhs, lhs.intersection(lhs), () -> "a ∧ a = a  | " + lhs.intersection(lhs));
//    assertEquals(top, lhs.union(top), () -> "a ∨ ⊤ = ⊤  | " + lhs.union(top));
//    assertEquals(top, top.union(lhs), () -> "⊤ ∨ a = ⊤  | " + top.union(lhs));
//    assertEquals(lhs, lhs.intersection(top), () -> "a ∧ ⊤ = a  | " + lhs.intersection(top));
//    assertEquals(lhs, top.intersection(lhs), () -> "⊤ ∧ a = a  | " + top.intersection(lhs));
//    assertEquals(
//        lhs, Lattice.union(lhs, bottom), () -> "a ∨ ⊥ = a  | " + Lattice.union(lhs, bottom));
//    assertEquals(
//        lhs, Lattice.union(bottom, lhs), () -> "⊥ ∨ a = a  | " + Lattice.union(bottom, lhs));
//    assertEquals(
//        bottom,
//        Lattice.intersection(lhs, bottom),
//        () -> "a ∧ ⊥ = ⊥  | " + Lattice.intersection(lhs, bottom));
//    assertEquals(
//        bottom,
//        Lattice.intersection(bottom, lhs),
//        () -> "⊥ ∧ a = ⊥  | " + Lattice.intersection(bottom, lhs));
//    assertEquals(union, rhs.union(lhs), () -> "a ∨ b = b ∨ a  | " + rhs.union(lhs));
//    assertEquals(
//        intersection, rhs.intersection(lhs), () -> "a ∧ b = b ∧ a  | " + rhs.intersection(lhs));
//    assertEquals(
//        lhs,
//        Lattice.union(lhs, intersection),
//        () -> "a ∨ (a ∧ b) = a  | " + Lattice.union(lhs, intersection));
//    assertEquals(
//        lhs, lhs.intersection(union), () -> "a ∧ (a ∨ b) = a  | " + lhs.intersection(union));
//  }
//
//  @Provide
//  Arbitrary<Tuple3<Object, Object, Object>> latticePairsAndClasses() {
//    return Arbitraries.oneOf(
//        LATTICES_AND_ANYS.keySet().stream()
//            .map(
//                clazz ->
//                    Arbitraries.defaultFor(clazz)
//                        .tuple2()
//                        .map(t -> Tuple.of((Object) t.get1(), (Object) t.get2(), (Object) clazz)))
//            .collect(Collectors.toUnmodifiableList()));
//  }
// }
