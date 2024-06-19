package org.prlprg.ir.analysis;

import edu.umd.cs.findbugs.annotations.Nullable;
import edu.umd.cs.findbugs.annotations.SuppressFBWarnings;
import java.util.ArrayDeque;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.Optional;
import java.util.SequencedMap;
import java.util.SequencedSet;
import java.util.Set;
import java.util.function.BiConsumer;
import java.util.function.Function;
import org.prlprg.ir.cfg.BB;
import org.prlprg.ir.cfg.CFG;
import org.prlprg.ir.cfg.CFGIterator.DomTreeBfs;
import org.prlprg.util.SmallListSet;
import org.prlprg.util.YCombinator;

/**
 * <a href="https://en.wikipedia.org/wiki/Dominator_(graph_theory)">Dominator tree</a> of a {@link
 * CFG}: this shows you nodes that are guaranteed to be run before other nodes.
 *
 * <p>Disclaimer: much of the code is taken from <a
 * href="https://github.com/reactorlabs/rir/blob/0c2896fbc82f505e61ed8db416e113905d8f2237/rir/src/compiler/analysis/cfg.cpp">Ř
 * (src/compiler/analysis/cfg.cpp:DominatorTree)</a>, translated into Java.
 */
public class DomTree {
  private final CFG cfg;

  /**
   * This map stores the actual tree. Specifically, it stores the immediate dominator of each block,
   * and the dominators can be found by recursively iterating, e.g., {@code idoms[...[idoms[bb]]]}.
   *
   * <p>These are ordered to ensure deterministic traversal.
   */
  private final SequencedMap<BB, BB> idoms = new LinkedHashMap<>();

  /** Inverse of {@code idoms} for fast traversal. */
  private final SequencedMap<BB, SequencedSet<BB>> idominees = new LinkedHashMap<>();

  /**
   * Computes a dominator tree for the given {@link CFG}.
   *
   * @see CFG#domTree()
   */
  @SuppressFBWarnings("CT_CONSTRUCTOR_THROW")
  DomTree(CFG cfg) {
    this.cfg = cfg;

    // We use the Lengauer-Tarjan algorithm [LT79] for computing dominators.
    // The algorithmic complexity is O(N log N), where N is the number of edges
    // plus the number of nodes.
    //
    // A later paper [GTW06] studied various practical dominator algorithms,
    // and suggested that the simple Lengauer-Tarjan algorithm was the most
    // consistently fast algorithm in their experiments, and also less
    // sensitive to pathological examples.
    //
    // This implementation is a fairly close translation of the pseudocode from
    // [AP04]. The details of the algorithm are fairly technical, but can be
    // found in the same place. (Note: [AP04] is clearer than [LT79] at
    // explaining the algorithm.)
    //
    //
    // The algorithm can be divided into four steps.
    //
    //   Step 1.
    //     Perform a depth-first search of the graph, numbering vertices in
    //     order of discovery. This number (dfnum) allows us to determine if a
    //     node `a` is an ancestor (in the DFS tree) of `b`, assuming there is
    //     a path from `a` to `b` in the CFG.
    //
    //     `a` is an ancestor of `b` if dfnum[a] < dfnum[b]. `a` is a proper
    //     ancestor of `b` if `a` is an ancestor of `b` and `a` is not equal to
    //     `b`.
    //
    //   Step 2.
    //     Iterate over nodes in decreasing dfnum. Calculate semidominators
    //     using the Semidominator Theorem. A node's semidominator is often
    //     that node's immediate dominator. As each node is visited, we insert
    //     it into the spanning forest.
    //
    //     If `s` is the semidominator of `n`, then it is the node with the
    //     smallest dfnum with a path to `n` whose nodes (other than `s` and
    //     `n`) are not ancestors of `n`. In other words, there is a path in
    //     the CFG (but not the DFS tree) that departs from `s` and then
    //     rejoins the tree at `n`.
    //
    //     Semidominator Theorem.
    //       For all predecessors of `n`:
    //        1. If `v` is a proper ancestor of `n` (i.e. dfnum[v] < dfnum[n]),
    //           then `v` is a candidate for semi(n).
    //        2. If `v` is a nonancestor of `n` (i.e. dfnum[v] > dfnum[n]),
    //           then for each ancestor `u` of `v` (or u = v) that is not an
    //           ancestor of `n`, semi(u) is a candidate for semi(n).
    //       The candidate with smallest dfnum is the semidominator of `n`.
    //
    //   Step 3.
    //     Implicitly define the immediate dominator by applying the first
    //     clause of the Dominator Theorem.
    //
    //   Step 4.
    //     Explicitly define the immediate dominator by applying the second
    //     clause of the Dominator Theorem. Do this while iterating over nodes
    //     in increasing dfnum.
    //
    //     Dominator Theorem.
    //       On the DFS tree path below semi(n) and above or including `n`, let
    //       `y` be the node the the smallest numbered semidominator, i.e. with
    //       minimum dfnum[semi(y)]. Then:
    //         1. idom(n) = semi(n)    if semi(y) == semi(n)
    //         2. idom(n) = idom(y)    if semi(y) != semi(n)
    //
    //
    // As the algorithm runs, it maintains a spanning forest of nodes -- at the
    // end, the forest will be fully connected as a single spanning tree. The
    // algorithm is designed so that when a node `n` is being processed, only
    // nodes with a higher dfnum than `n`, i.e. nonancestors of `n`, will be in
    // the forest.
    //
    // This spanning forest is represented by the `ancestor` array, updated by
    // the `link` function, and queried by the `ancestorWithLowestSemi`
    // function.
    //
    // Note that the naive implementation of `ancestorWithLowestSemi` is O(N),
    // but this implementation performs "path compression," so its amortized
    // complexity is O(log N). There is an even more sophisticated version with
    // better algorithmic complexity [LT79], that performs "balanced path
    // compression," but in practice, it is actually slower [GTW06].
    //
    // As `ancestorWithLowestSemi` searches the spanning forest, it updates
    // the `ancestor` array to compress the path. However, as it does so, it
    // must remember the best result in the path that was skipped, i.e. the
    // node with semidominator with lowest dfnum.
    //
    //
    // References:
    //
    // [AP04] Appel, A. and Palsberg, J. (2004). "Efficient Computation of the
    // Dominator Tree." In "Modern Compiler Implementation in Java," 2nd ed.
    //
    // [GTW06] Georgiadis, L., Tarjan, R. E., and Werneck R. F. (2006).
    // "Finding dominators in practice." J. Graph Algorithms Appl.
    // http://doi.org/10.7155/jgaa.00119
    //
    // [LT79] Lengauer, T. and Tarjan, R. E. (1979). "A fast algorithm for
    // finding dominators in a flowgraph." ACM Trans. Program. Lang. Syst.
    // https://doi.org/10.1145/357062.357071

    /* ********************************************************************** *
     * Declarations and initializations.
     * ********************************************************************** */

    // Note that this is an overapproximation of the actual number of BBs,
    // because some BBs may be free.
    var size = cfg.bbIds().size();

    // Counter for numbering BBs, by depth-first search order.
    var N = 0;

    // Indexed by BB id. `dfnum[b]` is the dfnum of block `b`, `vertex[i]` is
    // the node whose dfnum is `i`
    var dfnum = new LinkedHashMap<BB, Integer>(size);
    var vertex = new LinkedHashMap<Integer, BB>(size);

    // Indexed by BB id. `parent[n->id]` is the node that is the parent of `n`
    // in the DFS tree.
    var parent = new LinkedHashMap<BB, BB>(size);

    // Indexed by BB id. `semi[n->id]` is the semidominator of `n`.
    var semi = new LinkedHashMap<BB, BB>(size);

    // Indexed by BB id. `n` has the same dominator as `samedom[n->id]`, i.e.,
    // idom(n) == idom(samedom(n)). This is used for the deferred application
    // of the Dominator Theorem, clause 2.
    var samedom = new LinkedHashMap<BB, BB>(size);

    // Indexed by BB id. `bucket[s->id]` is the set of nodes that `s` semidominates.
    // It's used to defer the dominator calculation until after linking.
    var bucket = new LinkedHashMap<BB, SmallListSet<BB>>(size);

    // Indexed by BB id. Spanning forest for the CFG. `ancestor[n->id]` is an
    // ancestor (not necessarily parent) of `n`, i.e., any node above `n` in
    // the spanning forest. This is gradually built as the algorithm runs; at
    // the end, it will be a spanning tree.
    var ancestor = new LinkedHashMap<BB, BB>(size);

    // Indexed by BB id. While `ancestor[n->id]` points to some ancestor of
    // `n`, it may skip over some nodes. We need to remember the node along
    // that possibly skipped path (which includes `n` but not
    // `ancestor[n->id]`) which has the semidominator with lowest dfnum; that
    // node is `best[n->id]`.
    var best = new LinkedHashMap<BB, BB>(size);

    // Add the edge `n -> p` (where `p` is the parent of `n`) to the spanning
    // forest, represented by `ancestor`.
    BiConsumer<BB, BB> link =
        (p, n) -> {
          // Initially `ancestor[n->id]` points to `n`'s parent.
          ancestor.put(n, p);

          // Initially only `n` is in the path to its ancestor, so it is our
          // current best.
          best.put(n, n);
        };

    // Search upward in the spanning forest, represented by `ancestor`, for the
    // nonroot ancestor of `v` whose semidominator has the smallest dfnum. Note
    // that `ancestor` is built as the algorithm runs, so some nodes are (by
    // design) missing from the forest.
    Function<BB, BB> ancestorWithLowestSemi =
        YCombinator.apply(
            (recur, v) -> {
              var a = ancestor.get(v);
              if (ancestor.containsKey(a)) {
                var b = recur.apply(a);

                // Compress the path as we walk up the spanning forest. We want to
                // skip `a`, which is currently `v`'s ancestor.
                ancestor.put(v, ancestor.get(a));

                // However, `b` might be the new "best" node, i.e. the node whose
                // semidominator has the lowest dfnum. We need to update
                // `best[v]` if this is the case.
                var curBest = best.get(v);
                if (dfnum.getOrDefault(semi.get(b), 0) < dfnum.getOrDefault(semi.get(curBest), 0)) {
                  best.put(v, b);
                }
              }
              return best.get(v);
            });

    /* *********************************************************************** *
     * Algorithm starts here.
     * *********************************************************************** */

    // Step 1. Number nodes by depth-first number. We don't need a function
    // because our DFS is iterative, with an explicit stack -- in fact, we use
    // two stacks in parallel, for nodes and their parents.
    var nodes = new ArrayDeque<BB>();
    var parents = new ArrayDeque<Optional<BB>>();
    nodes.push(cfg.entry());
    parents.push(Optional.empty());

    while (!nodes.isEmpty()) {
      assert nodes.size() == parents.size();
      var n = nodes.pop();
      var p = parents.pop().orElse(null);

      // We haven't visited or numbered `n` yet.
      if (dfnum.getOrDefault(n, 0) == 0) {
        dfnum.put(n, N);
        vertex.put(N, n);
        parent.put(n, p);
        N++;

        for (var w : n.successors()) {
          nodes.push(w);
          parents.push(Optional.of(n));
        }
      }
    }

    // Step 2. Iterate over nodes (skipping the root) in descending dfnum
    // order.
    for (var i = N - 1; i >= 1; --i) {
      var n = vertex.get(i);
      var p = parent.get(n);

      // Parent of `n` is a candidate semidominator (since it's a proper
      // ancestor).
      var s = p;

      // Calculate `s`, the semidominator of `n`, using the Semidominator
      // Theorem. We need to consider all predecessors `v` of `n`.
      for (var v : n.predecessors()) {
        BB s1;
        if (dfnum.getOrDefault(v, 0) <= dfnum.getOrDefault(n, 0)) {
          // Semidominator Theorem, clause 1: `v` is an ancestor of `n`,
          // so it is a candidate semidominator.
          s1 = v;
        } else {
          // Semidominator Theorem, clause 2: `v` is a nonancestor of
          // `n`. For each `u` that is an ancestor of `v` (or u = v) but
          // not an ancestor of `n`, the semi(u) with the lowest dfnum is
          // a candidate. Note that when `n` is processed, only nodes
          // with a higher dfnum than `n` (i.e. nonancestors) will be in
          // the forest.
          var u = ancestorWithLowestSemi.apply(v);
          s1 = semi.get(u);
        }
        if (dfnum.getOrDefault(s1, 0) < dfnum.getOrDefault(s, 0)) {
          // Take the one with the lowest dfnum as the new candidate
          // semidominator. After this loop, we will have found the
          // candidate with the lowest dfnum.
          s = s1;
        }
      }

      // Calculation of `n`'s dominator is deferred until the path from `s`
      // to `n` has been linked into the forest. We don't yet know `y`, the
      // lowest semidominator on the path from `s` to `n` is. Therefore, we
      // put `n` into the bucket of all nodes that `s` semidominates, so we
      // can process it after linking.
      semi.put(n, s);
      bucket.computeIfAbsent(s, _ -> new SmallListSet<>()).add(n);
      link.accept(p, n);

      // Step 3. Now that the path from `p` to `v` has been linked into the
      // spanning forest, calculate the dominator of `v`, based on the first
      // clause of the Dominator Theorem, or else defer calculation until
      // y`'s dominator is known.
      for (var v : bucket.computeIfAbsent(p, _ -> new SmallListSet<>())) {
        // Find `y`, the ancestor of `v` whose semidominator has the lowest
        // dfnum. Note that the spanning forest only contains nodes with a
        // higher dfnum than `n`.
        var y = ancestorWithLowestSemi.apply(v);
        if (semi.get(y) == semi.get(v)) {
          // Dominator Theorem, clause 1: semi(v) = p is the immediate
          // dominator of `v`.
          idoms.put(v, p);
        } else {
          // Dominator Theorem, clause 2: idom(y) is the immediate
          // dominator of `v`. But we don't yet know what idom(y) is, so
          // defer this calculation.
          samedom.put(v, y);
        }
      }
      bucket.get(p).clear();
    }

    // Step 4. Iterate over the nodes (skipping the root) in ascending dfnum
    // order.
    for (var i = 1; i < N; ++i) {
      var n = vertex.get(i);
      // Perform the deferred dominator calculations, based on the second
      // clause of the Dominator Theorem.
      if (samedom.containsKey(n)) {
        // idom(n) = idom(y), and we had previously assigned `y` to
        // samedom(n).
        var y = samedom.get(n);
        idoms.put(n, idoms.get(y));
      }
    }

    // Build the reverse map for fast access.
    for (var entry : idoms.entrySet()) {
      idominees.computeIfAbsent(entry.getValue(), _ -> new SmallListSet<>()).add(entry.getKey());
    }
  }

  /** The CFG this dominator tree is for. */
  public CFG cfg() {
    return cfg;
  }

  /** The root of the dominator tree. This is just {@link CFG#entry()}. */
  public BB root() {
    return cfg.entry();
  }

  /**
   * Does {@code lhs} dominate {@code rhs} (not necessarily immediate)?
   *
   * <p>If so, {@code lhs} <b>equals {@code rhs} or</b> is guaranteed to run before {@code rhs}.
   */
  public boolean dominates(BB lhs, BB rhs) {
    // Start with node `b`, because `a` dominates `b` if `a` equals `b`. Then
    // walk up the dominator tree, comparing each visited node to `a`.
    var x = rhs;
    while (x != null) {
      if (x == lhs) {
        return true;
      }
      x = idoms.get(x);
    }
    return false;
  }

  /**
   * Does {@code lhs} dominate {@code rhs} (not necessarily immediate)?
   *
   * <p>If so, {@code lhs} is guaranteed to run before {@code rhs} (and <b>is not {@code rhs}
   * itself</b>.
   */
  public boolean strictlyDominates(BB lhs, BB rhs) {
    return lhs != rhs && dominates(lhs, rhs);
  }

  /**
   * The immediate dominator of a basic block: the block which strictly dominates {@code bb}
   * (guaranteed to run before), but doesn't strictly dominate any other strict dominator of {@code
   * bb}.
   */
  public BB idominator(BB bb) {
    return idoms.get(bb);
  }

  /**
   * Iterates the dominators of the given block, starting with itself if {@code strict} is false,
   * otherwise the {@linkplain #idominator(BB) immediate dominator}.
   */
  public Iterator<BB> iterDominators(BB bb, boolean strict) {
    return new Iterator<>() {
      private @Nullable BB next = strict ? idoms.get(bb) : bb;

      @Override
      public boolean hasNext() {
        return next != null;
      }

      @Override
      public BB next() {
        var prev = next;
        if (prev == null) {
          throw new IllegalStateException("No more dominators");
        }
        next = idoms.get(next);
        return prev;
      }
    };
  }

  /** The blocks which this one immediately dominates. */
  public SequencedSet<BB> idominees(BB bb) {
    return idominees.getOrDefault(bb, LinkedHashSet.newLinkedHashSet(0));
  }

  /** Iterate the dominator tree starting from the given block, breadth-first. */
  public Iterator<BB> iterDominees(BB start) {
    return new DomTreeBfs(this, start);
  }

  /** The set of BBs dominated by the input set. */
  public Set<BB> dominees(Set<BB> input) {
    // Given a set of BBs, compute the set of BBs dominated by the input set.
    // Inductive definition:
    // - a BB is dominated by the input set if it is contained in the input set.
    // - a BB is dominated by the input set if all its inputs are dominated by
    //   the input set.
    var result = new SmallListSet<BB>();
    var seen = new SmallListSet<BB>();
    var todo = new ArrayDeque<BB>();
    todo.push(cfg.entry());

    while (!todo.isEmpty()) {
      var cur = todo.pop();

      // Is the current BB dominated by the input set?
      var curState = result.contains(cur);

      // If not _and_ the current BB is in the input set, then the BB is
      // dominated; put it in the result set and update our current state.
      if (!curState && input.contains(cur)) {
        result.add(cur);
        curState = true;
      }

      for (var suc : cur.successors()) {
        // Have we already processed this child BB?
        if (!seen.contains(suc)) {
          seen.add(suc);

          // Our parent is dominated, so tentatively assume we're
          // dominated; then add ourself to the worklist.
          if (curState) {
            result.add(suc);
          }
          todo.push(suc);
        } else if (!curState) {
          if (result.remove(suc)) {
            // Our parent is _not_ dominated, but we're in the result
            // set. We were wrong, so remove ourself from the result;
            // then add ourself to the worklist.
            todo.push(suc);
          }
        }
      }
    }

    return result;
  }

  /**
   * The set of blocks which {@code bb} dominates an immediate predecessor of but does not directly
   * strictly dominate. Informally, where {@code bb}'s dominance "ends".
   */
  public Set<BB> frontier(BB bb) {
    var result = new SmallListSet<BB>();
    var dominees = new DomTreeBfs(this, bb);
    while (dominees.hasNext()) {
      var cur = dominees.next(d -> strictlyDominates(bb, d));
      if (!strictlyDominates(bb, cur)) {
        for (var pred : cur.predecessors()) {
          if (strictlyDominates(bb, pred)) {
            result.add(cur);
            break;
          }
        }
      }
    }
    return result;
  }
}
