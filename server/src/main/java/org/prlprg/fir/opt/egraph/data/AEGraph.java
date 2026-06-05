package org.prlprg.fir.opt.egraph.data;

import com.google.common.collect.ImmutableList;
import com.google.common.primitives.ImmutableIntArray;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.function.ToIntFunction;

/// A simple acyclic e-graph (ae-graph), in the style of Cranelift's mid-end.
///
/// The structure is an append-only table of _eclass nodes_, each addressed by an
/// `int` id. A node is either:
/// - An **e-node**: an operator applied to argument ids, or
/// - A **union node**: two earlier ids whose e-classes are asserted equivalent.
///
/// Two invariants make the whole thing easy to reason about:
/// 1. **Append-only:** ids are never reused or mutated; [#union] produces a
///    _new_ id rather than merging existing ones in place.
/// 2. **Backward references only:** every id a node refers to is strictly smaller than
///    the node's own id. This makes the graph **acyclic**, so traversal, extraction, and
///    a single bottom-up pass all terminate without cycle-breaking.
///
/// A union-find (representative = lowest id in the class) provides partial canonicalization
/// so that global value numbering can deduplicate e-nodes whose arguments are known-equivalent.
///
/// Requires Java 17+ (sealed interfaces, records, pattern matching).
@SuppressWarnings("unchecked")
public final class AEGraph<Op> {
  /// id -> node
  private final ArrayList<Node> nodes = new ArrayList<>();
  /// canonical enode -> id (GVN)
  private final HashMap<ENode<Op>, Integer> memo = new HashMap<>();
  /// union-find, root = lowest id
  private int[] parent = new int[16];

  /// Adds (or finds) the enode `op(args)` and returns its id.
  ///
  /// Arguments are canonicalized through the union-find when computing the dedup key, so two
  /// enodes that differ only in known-equivalent arguments collapse to the same id (this is GVN).
  /// The id is stored with the arguments exactly as supplied, which is what later traversal and
  /// extraction see — pass the id returned by [#union] as an argument to expose a richer
  /// eclass.
  public int add(Op op, int... args) {
    var key = ImmutableIntArray.copyOf(Arrays.stream(args).map(this::find));
    var dedupKey = new ENode<>(op, key);
    var existing = memo.get(dedupKey);
    if (existing != null) return existing;

    var id = addNode(new ENode<>(op, ImmutableIntArray.copyOf(args)));
    memo.put(dedupKey, id);
    return id;
  }

  /**
   * Asserts that the eclasses {@code a} and {@code b} are equivalent and returns a new id denoting
   * the combined eclass. The original ids keep referring to their original contents.
   */
  public int union(int a, int b) {
    var id = addNode(new UnionNode(a, b)); // new entry referring only to earlier ids
    link(a, b); // canonicalization: a and b share a representative
    link(a, id); // ...and so does the combined id
    return id;
  }

  /** Returns the canonical id (lowest in the class) for {@code x}, with path compression. */
  public int find(int x) {
    var root = x;
    while (parent[root] != root) root = parent[root];
    while (parent[x] != root) {
      var next = parent[x];
      parent[x] = root;
      x = next;
    }
    return root;
  }

  /// All enodes reachable from `id` by expanding union nodes (the eclass's members).
  public List<ENode<Op>> eclassNodes(int id) {
    var out = new ArrayList<ENode<Op>>();
    collect(id, out);
    return out;
  }

  /// Extracts the lowest-cost expression from the eclass at `id`, with unit op costs.
  public Term<Op> extract(int id) {
    return extract(id, _ -> 1);
  }

  /// Extracts the lowest-cost expression from the eclass at `id`.
  ///
  /// Because every reference points to a strictly smaller id, a single forward pass computes
  /// the best cost for every node, and reconstruction never loops.
  public Term<Op> extract(int id, ToIntFunction<Op> opCost) {
    var n = nodes.size();
    var best = new long[n]; // min cost of the value represented by each id
    var choice = new int[n]; // for a union: the cheaper child; for an enode: itself
    Arrays.fill(best, Long.MAX_VALUE);

    for (int i = 0; i < n; i++) {
      switch (nodes.get(i)) {
        case UnionNode(var left, var right) -> {
          if (best[left] <= best[right]) {
            best[i] = best[left];
            choice[i] = left;
          } else {
            best[i] = best[right];
            choice[i] = right;
          }
        }
        case ENode(var op, var args) -> {
          long c = opCost.applyAsInt((Op) op);
          for (int a : args.toArray()) c += best[a];
          best[i] = c;
          choice[i] = i;
        }
      }
    }
    return build(id, choice);
  }

  /** Number of table entries (enodes + union nodes) created so far. */
  public int size() {
    return nodes.size();
  }

  /// Human-readable dump of the table, one entry per id.
  @Override
  public String toString() {
    var sb = new StringBuilder();
    for (int i = 0; i < nodes.size(); i++) {
      sb.append(i).append(": ");
      var node = nodes.get(i);
      if (node instanceof UnionNode(var left, var right))
        sb.append("union(").append(left).append(", ").append(right).append(')');
      else sb.append(node);
      sb.append("  [canon=").append(find(i)).append("]\n");
    }
    return sb.toString();
  }

  // --- internals ---

  private Term<Op> build(int id, int[] choice) {
    while (nodes.get(id) instanceof UnionNode) id = choice[id]; // descend to the cheapest enode
    var e = (ENode<Op>) nodes.get(id);
    var children =
        e.args().stream().mapToObj(a -> build(a, choice)).collect(ImmutableList.toImmutableList());
    return new Term<>(e.op(), children);
  }

  private void collect(int id, List<ENode<Op>> out) {
    switch (nodes.get(id)) {
      case UnionNode(var left, var right) -> {
        collect(left, out);
        collect(right, out);
      }
      case ENode<?> n -> out.add((ENode<Op>) n);
    }
  }

  private void link(int a, int b) {
    int ra = find(a), rb = find(b);
    if (ra == rb) return;
    if (ra < rb) parent[rb] = ra;
    else parent[ra] = rb; // lowest id stays the representative
  }

  private int addNode(Node node) {
    int id = nodes.size();
    nodes.add(node);
    if (id == parent.length) parent = Arrays.copyOf(parent, parent.length * 2);
    parent[id] = id;
    return id;
  }
}
