package org.prlprg.fir.opt.egraph;

import java.util.Collections;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.Map;
import java.util.Set;
import java.util.function.Predicate;
import java.util.function.ToIntFunction;
import org.jetbrains.annotations.UnmodifiableView;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.expression.Expression;

/// A small *acyclic* e-graph ("aegraph") over FIŘ [Argument]s, inspired by
/// [Cranelift's e-graph
/// proposal](https://github.com/bytecodealliance/rfcs/blob/main/accepted/cranelift-egraph.md).
///
/// ## Model
///
/// - An **e-class** is a set of [Argument]s proven to compute the same value. It's identified by a
///   canonical representative [Argument] ([#find]).
/// - An **e-node** ([ENode]) is one concrete way to *produce* such a value: a constant ([EConst]),
///   a parameter/phi ([EParam]), or an instruction ([EInstruction]). An e-node's [ENode#out] names
///   the e-class it defines.
///
/// So an e-class records, for one value, both (i) the interchangeable [Argument]s that name it and
/// (ii) the [ENode]s that compute it. Optimizations consume (i) to rewrite uses and (ii) to reason
/// about / cost the value.
///
/// ## "Acyclic" — why this is cheap
///
/// A saturating e-graph keeps *parent pointers* and re-canonicalizes the users of an e-class every
/// time two classes merge, iterating to a fixpoint. That bookkeeping is what makes general e-graphs
/// expensive. Following the proposal, this structure drops it entirely:
///
/// - The caller adds e-nodes **bottom-up, in dataflow/dominator order**, so every operand is
///   already in its final (canonical) e-class before the node that uses it is added.
/// - Therefore [#add] sees a node's canonical shape immediately and can hash-cons it on the spot
///   (this is GVN/CSE), and rewrite rules can be applied **once, at creation time** (the
///   "cascades" strategy) — there's never anything to re-canonicalize afterward.
///
/// What remains is just a [union-find](https://en.wikipedia.org/wiki/Disjoint-set_data_structure)
/// ([#find], [#union]) plus a hash-cons table ([#add]); there is no rebuild step. The cost is that
/// equivalences discovered *after* a user node was added don't retroactively merge that user —
// which
/// is exactly the trade-off the proposal makes, and is fine for "optimizer-style" rewrites that
/// only ever replace a value with a cheaper equivalent.
///
/// ## Rewrites
///
/// The structure itself is rules-agnostic (as in Cranelift, where rules live in ISLE). A rewrite is
/// expressed by the caller as: build the equivalent e-node(s) with [#add]/[#addArgument], then
/// [#union] the result with the original. CSE and copy-propagation are the two rewrites the
/// optimization always performs; algebraic/constant-folding rules can be layered on the same way.
///
/// Once built, [#extract] reads a value back out of an e-class by choosing its cheapest member that
/// satisfies a caller-supplied predicate (e.g. "is available here") — the e-graph analogue of
/// extraction/elaboration.
public final class AEGraph {
  /// Union-find: maps every [Argument] ever seen to its [EClass] entry. The class data (members,
  /// nodes) is kept complete only at the class *root* — the argument whose `parent` is itself.
  private final Map<Argument, EClass> classes = new LinkedHashMap<>();

  /// Hash-cons table for **pure** e-nodes: maps a (canonical) [Expression] to the representative of
  /// the e-class it defines. Re-adding a structurally equal pure node merges into that class
  // instead
  /// of starting a new one — this is what implements GVN/CSE. Side-effecting ("pinned") nodes are
  /// deliberately absent, so each remains a distinct value.
  private final Map<Expression, Argument> pureMemo = new LinkedHashMap<>();

  /// Add an e-node and return the canonical [Argument] of the e-class it defines.
  ///
  /// For a **pure** [EInstruction] (`pos == null`), if a structurally equal one was already added,
  /// the two e-classes are [merged][#union] (GVN/CSE). For this to fire, the node's operands must
  /// already be canonical — see the class doc on bottom-up insertion. Side-effecting (pinned)
  /// instructions never deduplicate: every instance is a logically separate effect.
  public Argument add(ENode node) {
    var out = node.out();
    classOf(out).nodes.add(node);
    var root = find(out);

    // Only pure instructions are hash-consed. Constants and params are already canonicalized by
    // [Argument] identity (a constant/register is its own class key), and pinned instructions must
    // stay distinct.
    if (node instanceof EInstruction(_, var expression, var pos) && pos == null) {
      var existing = pureMemo.putIfAbsent(expression, root);
      if (existing != null) {
        return union(existing, out);
      }
    }
    return root;
  }

  /// Ensure `argument` has an e-class and return its canonical representative.
  ///
  /// A [Constant] additionally records an [EConst] e-node (a constant computes itself). Any other
  /// argument gets a (possibly node-less) class; the e-node that *defines* a register is added
  /// separately via [#add] when that register's defining instruction is processed.
  public Argument addArgument(Argument argument) {
    if (argument instanceof Constant(var value)) {
      return add(new EConst(value));
    }
    classOf(argument);
    return find(argument);
  }

  /// Merge the e-classes of `keeper` and `merged`, returning the surviving representative.
  ///
  /// `keeper`'s representative is retained as the root, so passing the "preferred" (e.g.
  /// earlier-defined or canonical) argument first yields a stable, predictable canonical form.
  public Argument union(Argument keeper, Argument merged) {
    var keeperRoot = find(keeper);
    var mergedRoot = find(merged);
    if (keeperRoot.equals(mergedRoot)) {
      return keeperRoot;
    }

    var keeperClass = classOf(keeperRoot);
    var mergedClass = classOf(mergedRoot);
    mergedClass.parent = keeperRoot;
    keeperClass.members.addAll(mergedClass.members);
    keeperClass.nodes.addAll(mergedClass.nodes);
    return keeperRoot;
  }

  /// The canonical representative of `argument`'s e-class (with path compression).
  public Argument find(Argument argument) {
    var eclass = classOf(argument);
    if (eclass.parent.equals(argument)) {
      return argument;
    }
    eclass.parent = find(eclass.parent);
    return eclass.parent;
  }

  /// All [Argument]s known to compute the same value as `argument` (including `argument` itself).
  public @UnmodifiableView Set<Argument> members(Argument argument) {
    return Collections.unmodifiableSet(classOf(find(argument)).members);
  }

  /// Every e-node in `argument`'s e-class: each known way to compute the value.
  public @UnmodifiableView Set<ENode> nodes(Argument argument) {
    return Collections.unmodifiableSet(classOf(find(argument)).nodes);
  }

  /// Every e-class, keyed by its canonical representative and mapping to that class's members.
  public @UnmodifiableView Map<Argument, Set<Argument>> classes() {
    var result = new LinkedHashMap<Argument, Set<Argument>>();
    for (var argument : classes.keySet()) {
      var root = find(argument);
      result.computeIfAbsent(root, r -> Collections.unmodifiableSet(classOf(r).members));
    }
    return Collections.unmodifiableMap(result);
  }

  /// Extract a value from `argument`'s e-class: the cheapest member for which `isUsable` holds, or
  /// `null` if none qualifies.
  ///
  /// This is how a caller "reads a value back out" of the e-graph. `isUsable` encodes the placement
  /// constraint (e.g. "this member is a constant, or a register whose definition dominates here"),
  /// and `cost` ranks the usable candidates (e.g. constants cheapest). Ties are broken by insertion
  /// order, which — given bottom-up construction — prefers the earliest-discovered equivalent.
  public @Nullable Argument extract(
      Argument argument, Predicate<Argument> isUsable, ToIntFunction<Argument> cost) {
    Argument best = null;
    var bestCost = Integer.MAX_VALUE;
    for (var member : classOf(find(argument)).members) {
      if (!isUsable.test(member)) {
        continue;
      }
      var memberCost = cost.applyAsInt(member);
      if (best == null || memberCost < bestCost) {
        best = member;
        bestCost = memberCost;
      }
    }
    return best;
  }

  private EClass classOf(Argument argument) {
    return classes.computeIfAbsent(argument, EClass::new);
  }

  /// Union-find entry: a parent pointer plus this class's members and e-nodes. `members` and
  /// `nodes` are authoritative only at the root (the argument whose `parent` is itself).
  private static final class EClass {
    private Argument parent;
    private final Set<Argument> members = new LinkedHashSet<>();
    private final Set<ENode> nodes = new LinkedHashSet<>();

    EClass(Argument argument) {
      parent = argument;
      members.add(argument);
    }
  }
}
