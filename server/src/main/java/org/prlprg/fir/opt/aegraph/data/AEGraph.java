package org.prlprg.fir.opt.aegraph.data;

import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.function.ToIntFunction;
import java.util.stream.Stream;
import org.jspecify.annotations.Nullable;
import org.prlprg.util.Streams;

/// Acyclic e-graph (aegraph, from Cranelift)
///
/// To reduce boilerplate, we reuse the IR argument's and expression type for node ids and
/// e-nodes respectively. To enforce encapsulation, we parameterize them in this class.
///
/// The structure is an append-only table of ids mapped to [aenodes][AENode].
/// An id corresponds to an IR register, an aenode to a set of possible IR expressions that
/// would be assigned to said id. The main usecase is to compute the "best" expression for every
/// id via an arbitrary cost function.
///
/// Two invariants differentiate aegraphs from egraphs:
/// 1. **Append-only:** ids are never reused or mutated; [#merge] produces a
///    *new* id rather than merging existing ones in place.
/// 2. **Backward references only:** every id a node refers to is strictly "smaller" than
///    the node's own id. This makes the graph **acyclic**, so traversal, extraction, and
///    a single bottom-up pass all terminate without cycle-breaking.
@SuppressWarnings("unchecked")
public final class AEGraph<Expr, Arg> {
  /// Provides implementations of `Expr` and `Arg` used in aegraphs
  private final AEInterface<Expr, Arg> a;
  /// id -> node
  private final HashMap<Arg, Node> nodes = new LinkedHashMap<>();
  /// canonical enode -> id (GVN)
  private final HashMap<ENode<Expr>, Arg> memo = new LinkedHashMap<>();
  /// union-find, root = lowest id
  private final HashMap<Arg, Arg> parent = new LinkedHashMap<>();

  public AEGraph(AEInterface<Expr, Arg> adapter) {
    a = adapter;
  }

  /// Adds the expression and returns a fresh assignee, or reuses if redundant
  public Arg add(Expr expression) {
    return add(null, expression);
  }

  /// Adds the expression and returns a `assignee` or (if null) afresh assignee. Or if
  /// redundant, reuses and returns a different (older) assignee
  public Arg add(@Nullable Arg assignee, Expr expression) {
    var dedupKey = a.mapArguments(expression, this::find);
    var dedupKeyNode = new ENode<>(dedupKey);
    var existing = memo.get(dedupKeyNode);
    if (existing != null) return existing;

    var id = addNode(assignee, new ENode<>(expression));
    memo.put(dedupKeyNode, id);
    return id;
  }

  /// Asserts that `a` and `b` are equivalent and returns a new, higher id equivalent to both
  public Arg merge(Arg a, Arg b) {
    var id = addNode(null, new UnionNode<>(a, b)); // new entry referring only to earlier ids
    link(a, b); // canonicalization: a and b share a representative
    link(a, id); // ...and so does the combined id
    return id;
  }

  /// Returns the id **canonical** (lowest equivalent) to `x`
  ///
  /// Internally does path compression.
  public Arg find(Arg x) {
    var root = x;
    while (parent.get(root) != root) root = parent.get(root);
    while (parent.get(x) != root) {
      var next = parent.get(x);
      parent.put(x, root);
      x = next;
    }
    return root;
  }

  /// Number of table entries (enodes + union nodes) created so far.
  public int size() {
    return nodes.size();
  }

  /// All possible equivalent assignments to `id`
  public Stream<Expr> possibilities(Arg id) {
    return Streams.worklist(
            id,
            (next, list) -> {
              if (nodes.get(next) instanceof UnionNode(var left, var right)) {
                list.add((Arg) left);
                list.add((Arg) right);
              }
            })
        .map(nodes::get)
        .filter(ENode.class::isInstance)
        .map(node -> ((ENode<Expr>) node).expression());
  }

  /// Extract the best assignment to `id` with a specific cost function
  ///
  /// `cost` shouldn't factor the cost of arguments, that's appended
  public Extractor extract(ToIntFunction<Expr> cost) {
    return new Extractor(cost);
  }

  /// Human-readable dump of the table, one entry per id.
  @Override
  public String toString() {
    var sb = new StringBuilder();
    for (var entry : nodes.entrySet()) {
      var key = entry.getKey();
      var node = entry.getValue();

      sb.append(key).append(": ");
      if (node instanceof UnionNode(var left, var right))
        sb.append("union(").append(left).append(", ").append(right).append(')');
      else sb.append(node);
      sb.append("  [canon=").append(find(key)).append("]\n");
    }
    return sb.toString();
  }

  /// Extract the best assignment to `id` with a specific cost function
  public class Extractor {
    /// for a union: the cheaper child; for an enode: itself
    private final LinkedHashMap<Arg, Arg> choice = new LinkedHashMap<>();

    private Extractor(ToIntFunction<Expr> cost) {
      var best = new LinkedHashMap<Arg, Long>(); // min cost of the value represented by each id

      for (var entry : nodes.entrySet()) {
        var key = entry.getKey();
        var node = entry.getValue();

        switch (node) {
          case UnionNode(var left, var right) -> {
            if (best.get((Arg) left) <= best.get((Arg) right)) {
              best.put(key, best.get((Arg) left));
              choice.put(key, (Arg) left);
            } else {
              best.put(key, best.get((Arg) right));
              choice.put(key, (Arg) right);
            }
          }
          case ENode(var expression) -> {
            long c = cost.applyAsInt((Expr) expression);
            for (var arg : a.arguments((Expr) expression)) c += best.get(arg);
            best.put(key, c);
            choice.put(key, key);
          }
        }
      }
    }

    public Expr get(Arg arg) {
      while (nodes.get(arg) instanceof UnionNode)
        arg = choice.get(arg); // descend to the cheapest enode
      return ((ENode<Expr>) nodes.get(arg)).expression();
    }
  }

  private Arg addNode(@Nullable Arg assignee, Node node) {
    if (assignee == null) {
      assignee = a.freshRegister();
    }
    nodes.put(assignee, node);
    parent.put(assignee, assignee);
    return assignee;
  }

  private void link(Arg a, Arg b) {
    var ra = find(a);
    var rb = find(b);
    if (ra == rb) return;
    if (this.a.argumentComparator().compare(ra, rb) < 0) parent.put(rb, ra);
    else parent.put(ra, rb); // lowest id stays the representative
  }
}
