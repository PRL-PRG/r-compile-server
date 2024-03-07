package org.prlprg.ir.type;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertTrue;

import net.jqwik.api.ForAll;
import net.jqwik.api.Property;

public class RTypeTests {
  @Property
  void isCoherent(@ForAll RType lhs, @ForAll RType rhs) {
    // Subset
    assertTrue(lhs.isSubsetOf(RTypes.ANY), "a ≤ ⊤");
    assertTrue(RTypes.NOTHING.isSubsetOf(lhs), "⊥ ≤ a");
    assertTrue(lhs.isSubsetOf(lhs), "a ≤ a");
    assertEquals(rhs.isSupersetOf(lhs), lhs.isSubsetOf(rhs), "a ≤ b ⇒ b ≥ a");
    assertEquals(
        !rhs.isSubsetOf(lhs), lhs.isSubsetOf(rhs) && !lhs.equals(rhs), "a ≤ b & a ≠ b ⇒ b ≠ a");

    // Subset of union and intersection
    assertTrue(lhs.isSubsetOf(lhs.union(rhs)), "a ≤ (a ∨ b)");
    assertTrue(rhs.isSubsetOf(lhs.union(rhs)), "b ≤ (a ∨ b)");
    assertTrue(lhs.intersection(rhs).isSubsetOf(lhs), "(a ∧ b) ≤ a");
    assertTrue(lhs.intersection(rhs).isSubsetOf(rhs), "(a ∧ b) ≤ b");
    assertEquals(
        lhs.equals(rhs), lhs.isSubsetOf(rhs) && rhs.isSubsetOf(lhs), "a ≤ b & b ≤ a ⇒ a = b");

    // Union and intersection
    assertEquals(lhs, lhs.union(lhs), "a ∨ a = a");
    assertEquals(lhs, lhs.intersection(lhs), "a ∧ a = a");
    assertEquals(RTypes.ANY, lhs.union(RTypes.ANY), "a ∨ ⊤ = ⊤");
    assertEquals(lhs, lhs.intersection(RTypes.ANY), "a ∧ ⊤ = a");
    assertEquals(lhs, lhs.union(RTypes.NOTHING), "a ∨ ⊥ = a");
    assertEquals(RTypes.NOTHING, lhs.intersection(RTypes.NOTHING), "a ∧ ⊥ = ⊥");
    assertEquals(lhs.union(rhs), rhs.union(lhs), "a ∨ b = b ∨ a");
    assertEquals(lhs.intersection(rhs), rhs.intersection(lhs), "a ∧ b = b ∧ a");
    assertEquals(lhs, lhs.union(lhs.intersection(rhs)), "a ∨ (a ∧ b) = a");
    assertEquals(lhs, lhs.intersection(lhs.union(rhs)), "a ∧ (a ∨ b) = a");
  }
}
