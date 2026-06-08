package org.prlprg.fir.opt.aegraph.data;

import static org.junit.jupiter.api.Assertions.assertAll;
import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertNotEquals;
import static org.junit.jupiter.api.Assertions.assertNotNull;
import static org.junit.jupiter.api.Assertions.assertTrue;

import java.util.Comparator;
import java.util.List;
import java.util.Set;
import java.util.function.Function;
import java.util.stream.Collectors;
import org.jetbrains.annotations.UnmodifiableView;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.DisplayName;
import org.junit.jupiter.api.Nested;
import org.junit.jupiter.api.Test;

/// Tests for the generic `AEGraph<Expr, Arg>`.
///
/// The graph is parameterized over an expression type `Expr` (an operator applied to argument
/// ids) and an id type `Arg`, with the concrete operations supplied by an [AEInterface] adapter.
/// Here we use a tiny fixture: `Expr` is an [Op] applied to a list of [Id]s, `Arg` is an [Id],
/// and ids are handed out sequentially starting at 0.
///
/// Public API exercised:
///
/// ```
/// Arg          add(Expr expression)              // GVN: returns a fresh or reused id
/// Arg          merge(Arg a, Arg b)               // append-only union, returns a new (higher) id
/// Arg          find(Arg x)                       // canonical (lowest) equivalent id
/// Stream<Expr> possibilities(Arg id)             // every equivalent expression in the eclass
/// Extractor    extract(ToIntFunction<Expr> cost) // Extractor.get(Arg) -> cheapest Expr
/// int          size()
/// String       toString()
/// ```
///
/// The `toString` assertions are intentionally loose since its exact format is implementation
/// defined.
class AEGraphTest {
  /// Operators under test.
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

  /// An e-class id (`Arg`): a sequentially-allocated register.
  record Id(int value) {}

  /// An expression (`Expr`): an operator applied to child ids.
  record Expr(Op op, List<Id> args) {
    static Expr leaf(Op op) {
      return new Expr(op, List.of());
    }

    static Expr of(Op op, Id... args) {
      return new Expr(op, List.of(args));
    }
  }

  /// Adapter wiring `Expr`/`Id` into the graph; allocates ids sequentially from 0.
  static final class Adapter implements AEInterface<Expr, Id> {
    private int next = 0;

    @Override
    public Comparator<Id> argumentComparator() {
      return Comparator.comparingInt(Id::value);
    }

    @Override
    public Id freshRegister() {
      return new Id(next++);
    }

    @Override
    public @UnmodifiableView List<Id> arguments(Expr expression) {
      return expression.args();
    }

    @Override
    public Expr mapArguments(Expr expression, Function<Id, Id> transform) {
      return new Expr(expression.op(), expression.args().stream().map(transform).toList());
    }
  }

  private AEGraph<Expr, Id> g;

  @BeforeEach
  void setUp() {
    g = new AEGraph<>(new Adapter());
  }

  @Nested
  @DisplayName("add + hash-consing (GVN)")
  class AddAndHashConsing {
    @Test
    @DisplayName("ids start at 0 and the table grows by one per distinct node")
    void idsAreSequential() {
      var first = g.add(Expr.leaf(Op.A));
      var second = g.add(Expr.leaf(Op.B));
      assertAll(
          () -> assertEquals(0, first.value()),
          () -> assertEquals(1, second.value()),
          () -> assertEquals(2, g.size()));
    }

    @Test
    @DisplayName("adding an identical enode returns the same id and does not grow the table")
    void identicalEnodesAreDeduplicated() {
      var a1 = g.add(Expr.leaf(Op.A));
      var a2 = g.add(Expr.leaf(Op.A));
      assertAll(() -> assertEquals(a1, a2), () -> assertEquals(1, g.size()));
    }

    @Test
    @DisplayName("structurally identical compound enodes are deduplicated")
    void compoundEnodesAreDeduplicated() {
      var a = g.add(Expr.leaf(Op.A));
      var b = g.add(Expr.leaf(Op.B));
      var first = g.add(Expr.of(Op.ADD, a, b));
      var second = g.add(Expr.of(Op.ADD, a, b));
      assertEquals(first, second);
    }

    @Test
    @DisplayName("different operators or different argument orders yield different ids")
    void distinctNodesAreDistinct() {
      var a = g.add(Expr.leaf(Op.A));
      var b = g.add(Expr.leaf(Op.B));
      var add = g.add(Expr.of(Op.ADD, a, b));
      var mul = g.add(Expr.of(Op.MUL, a, b));
      var swapped = g.add(Expr.of(Op.ADD, b, a));
      assertAll(() -> assertNotEquals(add, mul), () -> assertNotEquals(add, swapped));
    }
  }

  @Nested
  @DisplayName("merge + find")
  class MergeAndFind {
    @Test
    @DisplayName("merge appends a new node and leaves earlier ids intact")
    void mergeAppendsNewNode() {
      var a = g.add(Expr.leaf(Op.A));
      var b = g.add(Expr.leaf(Op.B));
      var u = g.merge(a, b);
      assertAll(() -> assertEquals(2, u.value()), () -> assertEquals(3, g.size()));
    }

    @Test
    @DisplayName("after merge the two ids share a canonical representative")
    void mergeMakesIdsEquivalent() {
      var a = g.add(Expr.leaf(Op.A));
      var b = g.add(Expr.leaf(Op.B));
      g.merge(a, b);
      assertEquals(g.find(a), g.find(b));
    }

    @Test
    @DisplayName("the canonical representative is the lowest id in the class")
    void representativeIsLowestId() {
      var a = g.add(Expr.leaf(Op.A)); // 0
      var b = g.add(Expr.leaf(Op.B)); // 1
      g.merge(a, b);
      assertAll(() -> assertEquals(a, g.find(a)), () -> assertEquals(a, g.find(b)));
    }

    @Test
    @DisplayName("equivalence is transitive across chained merges")
    void mergeIsTransitive() {
      var a = g.add(Expr.leaf(Op.A));
      var b = g.add(Expr.leaf(Op.B));
      var c = g.add(Expr.leaf(Op.C));
      g.merge(a, b);
      g.merge(b, c);
      assertEquals(g.find(a), g.find(c));
    }

    @Test
    @DisplayName("GVN deduplicates enodes whose arguments are known-equivalent")
    void canonicalizationFeedsGvn() {
      var a = g.add(Expr.leaf(Op.A));
      var b = g.add(Expr.leaf(Op.B));
      g.merge(a, b);
      var negA = g.add(Expr.of(Op.NEG, a));
      var negB = g.add(Expr.of(Op.NEG, b));
      assertEquals(negA, negB);
    }

    @Test
    @DisplayName("self-merge and repeated merge keep find stable")
    void redundantMergesAreHarmless() {
      var a = g.add(Expr.leaf(Op.A));
      var b = g.add(Expr.leaf(Op.B));
      g.merge(a, b);
      g.merge(a, b);
      g.merge(a, a);
      assertAll(() -> assertEquals(g.find(a), g.find(b)), () -> assertEquals(a, g.find(a)));
    }
  }

  @Nested
  @DisplayName("possibilities")
  class Possibilities {
    @Test
    @DisplayName("a merged id enumerates every representation in the eclass")
    void enumeratesAllRepresentations() {
      var a = g.add(Expr.leaf(Op.A));
      var zero = g.add(Expr.leaf(Op.ZERO));
      var sum = g.add(Expr.of(Op.ADD, a, zero)); // (a + 0)
      var u = g.merge(sum, a); // assert (a + 0) == a

      var members = g.possibilities(u).toList();
      var ops = members.stream().map(Expr::op).collect(Collectors.toSet());
      assertAll(
          () -> assertEquals(2, members.size()), () -> assertEquals(Set.of(Op.ADD, Op.A), ops));
    }

    @Test
    @DisplayName("a plain enode id enumerates exactly itself")
    void singletonEclass() {
      var a = g.add(Expr.leaf(Op.A));
      var members = g.possibilities(a).toList();
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
      var a = g.add(Expr.leaf(Op.A));
      var zero = g.add(Expr.leaf(Op.ZERO));
      var sum = g.add(Expr.of(Op.ADD, a, zero));
      var u = g.merge(sum, a);

      var best = g.extract(_ -> 1).get(u); // a (cost 1) beats +(a,0) (cost 3)
      assertAll(() -> assertEquals(Op.A, best.op()), () -> assertTrue(best.args().isEmpty()));
    }

    @Test
    @DisplayName("a custom cost function selects between independent representations")
    void costFunctionDrivesChoice() {
      var a = g.add(Expr.leaf(Op.A));
      var two = g.add(Expr.leaf(Op.TWO));
      var one = g.add(Expr.leaf(Op.ONE));
      var mul = g.add(Expr.of(Op.MUL, a, two)); // a * 2
      var shl = g.add(Expr.of(Op.SHL, a, one)); // a << 1
      var u = g.merge(mul, shl);

      var favorsShift = g.extract(e -> e.op() == Op.MUL ? 10 : 1).get(u);
      var favorsMultiply = g.extract(e -> e.op() == Op.SHL ? 10 : 1).get(u);
      assertAll(
          () -> assertEquals(Op.SHL, favorsShift.op()),
          () -> assertEquals(Op.MUL, favorsMultiply.op()));
    }

    @Test
    @DisplayName("nested expressions are reconstructed recursively via arg ids")
    void reconstructsNestedTerm() {
      var a = g.add(Expr.leaf(Op.A));
      var b = g.add(Expr.leaf(Op.B));
      var zero = g.add(Expr.leaf(Op.ZERO));
      var mul = g.add(Expr.of(Op.MUL, a, b));
      var top = g.add(Expr.of(Op.ADD, mul, zero)); // (a * b) + 0

      var ex = g.extract(_ -> 1);
      var topE = ex.get(top);
      var mulE = ex.get(topE.args().getFirst());
      var zeroE = ex.get(topE.args().get(1));
      var aE = ex.get(mulE.args().getFirst());
      var bE = ex.get(mulE.args().get(1));
      assertAll(
          () -> assertEquals(Op.ADD, topE.op()),
          () -> assertEquals(2, topE.args().size()),
          () -> assertEquals(Op.MUL, mulE.op()),
          () -> assertEquals(2, mulE.args().size()),
          () -> assertEquals(Op.A, aE.op()),
          () -> assertEquals(Op.B, bE.op()),
          () -> assertEquals(Op.ZERO, zeroE.op()));
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
      var a = g.add(Expr.leaf(Op.A));
      var zero = g.add(Expr.leaf(Op.ZERO));
      g.merge(g.add(Expr.of(Op.ADD, a, zero)), a);

      var text = g.toString();
      // Loose checks: exact formatting is implementation-defined.
      assertAll(() -> assertFalse(text.isBlank()), () -> assertTrue(text.contains(Op.ADD.name())));
    }
  }
}
