package org.prlprg.ir.type;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertTrue;

import net.jqwik.api.ForAll;
import net.jqwik.api.Property;

public class RTypeTests {
  @Property
  void isCoherent(@ForAll RType lhs, @ForAll RType rhs) {
    assertEquals(
        lhs.isSubsetOf(rhs) && rhs.isSubsetOf(lhs), lhs.equals(rhs), "a ≤ b & b ≤ a ⇒ a = b");
    assertEquals(lhs.isSubsetOf(rhs), rhs.isSupersetOf(lhs), "a ≤ b ⇒ b ≥ a");
    assertEquals(
        lhs.isSubsetOf(rhs) && !lhs.equals(rhs), !rhs.isSubsetOf(lhs), "a ≤ b & a ≠ b ⇒ b ≠ a");
    assertTrue(
        lhs.intersection(rhs).isSubsetOf(lhs) && lhs.intersection(rhs).isSubsetOf(rhs),
        "a ∧ b ≤ a & a ∧ b ≤ b");
    assertTrue(
        lhs.isSubsetOf(lhs.union(rhs)) && rhs.isSubsetOf(lhs.union(rhs)), "a ≤ a ∨ b & b ≤ a ∨ b");
    assertEquals(lhs, lhs.union(lhs.intersection(rhs)), "a = a ∨ (a ∧ b)");
    assertEquals(lhs, lhs.intersection(lhs.union(rhs)));
  }
}
