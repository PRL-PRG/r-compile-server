package org.prlprg.fir.opt.egraph.data;

import static org.junit.jupiter.api.Assertions.assertAll;
import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertNotEquals;
import static org.junit.jupiter.api.Assertions.assertNotNull;
import static org.junit.jupiter.api.Assertions.assertTrue;

import java.util.Set;
import java.util.stream.Collectors;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.DisplayName;
import org.junit.jupiter.api.Nested;
import org.junit.jupiter.api.Test;

/// Tests for the generic `AEGraph<Op>`.
///
/// Assumed public API (matching the refactor: operator is the type parameter `Op`,
/// `leaf` removed, `dump` replaced by `toString`):
///
/// ```
/// int             add(Op op, int... args)
/// int             union(int a, int b)
/// int             find(int x)
/// List<ENode<Op>> eclassNodes(int id)                        // ENode has op() and args()
/// Term<Op>        extract(int id)
/// Term<Op>        extract(int id, ToIntFunction<Op> opCost)  // Term has op() and args()
/// int             size()
/// String          toString()
/// ```
///
/// Every expected value below was validated by executing a faithful reconstruction of the
/// class. The `toString` assertions are intentionally loose since its exact format is yours.
class AEGraphTest {
  /// Operators under test — exercises a non-String type parameter.
  enum Op {
    A,
    B,
    C,
    ZERO,
    ONE,
    TWO,
    ADD,
    MUL,
    SHL,
    NEG
  }

  private AEGraph<Op> g;

  @BeforeEach
  void setUp() {
    g = new AEGraph<>();
  }

  @Nested
  @DisplayName("add + hash-consing (GVN)")
  class AddAndHashConsing {
    @Test
    @DisplayName("ids start at 0 and the table grows by one per distinct node")
    void idsAreSequential() {
      var first = g.add(Op.A);
      var second = g.add(Op.B);
      assertAll(
          () -> assertEquals(0, first),
          () -> assertEquals(1, second),
          () -> assertEquals(2, g.size()));
    }

    @Test
    @DisplayName("adding an identical enode returns the same id and does not grow the table")
    void identicalEnodesAreDeduplicated() {
      var a1 = g.add(Op.A);
      var a2 = g.add(Op.A);
      assertAll(() -> assertEquals(a1, a2), () -> assertEquals(1, g.size()));
    }

    @Test
    @DisplayName("structurally identical compound enodes are deduplicated")
    void compoundEnodesAreDeduplicated() {
      var a = g.add(Op.A);
      var b = g.add(Op.B);
      var first = g.add(Op.ADD, a, b);
      var second = g.add(Op.ADD, a, b);
      assertEquals(first, second);
    }

    @Test
    @DisplayName("different operators or different argument orders yield different ids")
    void distinctNodesAreDistinct() {
      var a = g.add(Op.A);
      var b = g.add(Op.B);
      var add = g.add(Op.ADD, a, b);
      var mul = g.add(Op.MUL, a, b);
      var swapped = g.add(Op.ADD, b, a);
      assertAll(() -> assertNotEquals(add, mul), () -> assertNotEquals(add, swapped));
    }
  }

  @Nested
  @DisplayName("union + find")
  class UnionAndFind {
    @Test
    @DisplayName("union appends a new node and leaves earlier ids intact")
    void unionAppendsNewNode() {
      var a = g.add(Op.A);
      var b = g.add(Op.B);
      var u = g.union(a, b);
      assertAll(() -> assertEquals(2, u), () -> assertEquals(3, g.size()));
    }

    @Test
    @DisplayName("after union the two ids share a canonical representative")
    void unionMakesIdsEquivalent() {
      var a = g.add(Op.A);
      var b = g.add(Op.B);
      g.union(a, b);
      assertEquals(g.find(a), g.find(b));
    }

    @Test
    @DisplayName("the canonical representative is the lowest id in the class")
    void representativeIsLowestId() {
      var a = g.add(Op.A); // 0
      var b = g.add(Op.B); // 1
      g.union(a, b);
      assertAll(() -> assertEquals(a, g.find(a)), () -> assertEquals(a, g.find(b)));
    }

    @Test
    @DisplayName("equivalence is transitive across chained unions")
    void unionIsTransitive() {
      var a = g.add(Op.A);
      var b = g.add(Op.B);
      var c = g.add(Op.C);
      g.union(a, b);
      g.union(b, c);
      assertEquals(g.find(a), g.find(c));
    }

    @Test
    @DisplayName("GVN deduplicates enodes whose arguments are known-equivalent")
    void canonicalizationFeedsGvn() {
      var a = g.add(Op.A);
      var b = g.add(Op.B);
      g.union(a, b);
      var negA = g.add(Op.NEG, a);
      var negB = g.add(Op.NEG, b);
      assertEquals(negA, negB);
    }

    @Test
    @DisplayName("self-union and repeated union keep find stable")
    void redundantUnionsAreHarmless() {
      var a = g.add(Op.A);
      var b = g.add(Op.B);
      g.union(a, b);
      g.union(a, b);
      g.union(a, a);
      assertAll(() -> assertEquals(g.find(a), g.find(b)), () -> assertEquals(a, g.find(a)));
    }
  }

  @Nested
  @DisplayName("eclassNodes")
  class EClassEnumeration {
    @Test
    @DisplayName("a union id enumerates every representation in the eclass")
    void enumeratesAllRepresentations() {
      var a = g.add(Op.A);
      var zero = g.add(Op.ZERO);
      var sum = g.add(Op.ADD, a, zero); // (a + 0)
      var u = g.union(sum, a); // assert (a + 0) == a

      var members = g.eclassNodes(u);
      var ops = members.stream().map(ENode::op).collect(Collectors.toSet());
      assertAll(
          () -> assertEquals(2, members.size()), () -> assertEquals(Set.of(Op.ADD, Op.A), ops));
    }

    @Test
    @DisplayName("a plain enode id enumerates exactly itself")
    void singletonEclass() {
      var a = g.add(Op.A);
      var members = g.eclassNodes(a);
      assertAll(
          () -> assertEquals(1, members.size()), () -> assertEquals(Op.A, members.getFirst().op()));
    }
  }

  @Nested
  @DisplayName("extract")
  class Extraction {

    @Test
    @DisplayName("with unit costs the cheapest representation wins")
    void unitCostPrefersSmallerTerm() {
      var a = g.add(Op.A);
      var zero = g.add(Op.ZERO);
      var sum = g.add(Op.ADD, a, zero);
      var u = g.union(sum, a);

      var term = g.extract(u); // a (cost 1) beats +(a,0) (cost 3)
      assertAll(() -> assertEquals(Op.A, term.op()), () -> assertTrue(term.args().isEmpty()));
    }

    @Test
    @DisplayName("a custom cost function selects between independent representations")
    void costFunctionDrivesChoice() {
      var a = g.add(Op.A);
      var two = g.add(Op.TWO);
      var one = g.add(Op.ONE);
      var mul = g.add(Op.MUL, a, two); // a * 2
      var shl = g.add(Op.SHL, a, one); // a << 1
      var u = g.union(mul, shl);

      var favorsShift = g.extract(u, op -> op == Op.MUL ? 10 : 1);
      var favorsMultiply = g.extract(u, op -> op == Op.SHL ? 10 : 1);
      assertAll(
          () -> assertEquals(Op.SHL, favorsShift.op()),
          () -> assertEquals(Op.MUL, favorsMultiply.op()));
    }

    @Test
    @DisplayName("nested expressions are reconstructed recursively")
    void reconstructsNestedTerm() {
      var a = g.add(Op.A);
      var b = g.add(Op.B);
      var zero = g.add(Op.ZERO);
      var mul = g.add(Op.MUL, a, b);
      var top = g.add(Op.ADD, mul, zero); // (a * b) + 0

      var term = g.extract(top);
      assertAll(
          () -> assertEquals(Op.ADD, term.op()),
          () -> assertEquals(2, term.args().size()),
          () -> assertEquals(Op.MUL, term.args().getFirst().op()),
          () -> assertEquals(2, term.args().getFirst().args().size()),
          () -> assertEquals(Op.A, term.args().getFirst().args().getFirst().op()),
          () -> assertEquals(Op.B, term.args().getFirst().args().get(1).op()),
          () -> assertEquals(Op.ZERO, term.args().get(1).op()));
    }
  }

  @Nested
  @DisplayName("toString")
  class StringRepresentation {
    @Test
    @DisplayName("an empty graph stringifies without error")
    void emptyGraph() {
      assertNotNull(g.toString());
    }

    @Test
    @DisplayName("a populated graph produces non-blank, op-bearing output")
    void populatedGraph() {
      var a = g.add(Op.A);
      var zero = g.add(Op.ZERO);
      g.union(g.add(Op.ADD, a, zero), a);

      var text = g.toString();
      // Loose checks: exact formatting is implementation-defined.
      assertAll(() -> assertFalse(text.isBlank()), () -> assertTrue(text.contains(Op.ADD.name())));
    }
  }
}
