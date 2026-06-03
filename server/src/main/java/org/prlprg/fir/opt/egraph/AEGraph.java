package org.prlprg.fir.opt.egraph;

import java.util.Collections;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.Map;
import java.util.Set;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.position.CfgPosition;

/// A small *acyclic* e-graph ("aegraph") over FIŘ [Argument]s, inspired by
/// [Cranelift's e-graph
/// proposal](https://github.com/bytecodealliance/rfcs/blob/main/accepted/cranelift-egraph.md).
///
/// ## Model
///
/// - An **e-class** is a set of [Argument]s known to compute the same value. Each e-class is
///   identified by a canonical [Argument] representative ([#find]).
/// - An **e-node** ([ENode]) is one concrete way to compute a value: a constant ([EConst]), a
///   parameter or phi ([EParam]), or an instruction ([EInstruction]). An e-node's [ENode#out] is
///   the [Argument] (e-class) it defines.
///
/// So a class maps an [Argument] to (i) the other [Argument]s equal to it and (ii) the [ENode]s
/// that produce it.
///
/// ## Why "acyclic" / cascades-style
///
/// Unlike a saturating e-graph, this structure keeps **no parent pointers** and never
/// re-canonicalizes the *users* of an e-class after a merge. Instead, equivalences are discovered
/// *as a node is added*: the caller adds nodes in dataflow order (operands before users), with
/// each node's operands already canonicalized, so [#add] sees the canonical shape immediately and
/// can hash-cons it (CSE/GVN) right then. This is the "apply once at node creation" / cascades
/// strategy from the proposal, and it lets the whole thing be a plain
/// [union-find](https://en.wikipedia.org/wiki/Disjoint-set_data_structure) with no rebuild step.
///
/// Equivalences are tracked by union-find ([#union], [#find]); structural deduplication uses a
/// hash-cons map ([#add]). Higher-level rewrites (e.g. copy propagation, algebraic identities)
/// are expressed by the caller as "add the equivalent node(s), then [#union] them with the
/// original".
public final class AEGraph {
  /// Union-find entry per [Argument], also holding the class's members and e-nodes.
  private final Map<Argument, EClass> classes = new LinkedHashMap<>();

  /// Hash-cons: maps an e-node's structural key to the representative of the class it defines, so
  /// re-adding an equivalent e-node merges into the existing class instead of creating a new one.
  /// Pinned (side-effecting) e-nodes use an identity key, so they never deduplicate.
  private final Map<NodeKey, Argument> memo = new LinkedHashMap<>();

  /// Add an e-node, returning the canonical [Argument] of the e-class it defines.
  ///
  /// If an equivalent e-node was already added (equal [NodeKey]), the two classes are
  /// [merged][#union] -- this is what implements CSE/GVN. For deduplication to fire, an
  /// [EInstruction]'s operands must already be canonical (see the class doc). Side-effecting
  /// ("pinned") [EInstruction]s intentionally never deduplicate.
  public Argument add(ENode node) {
    var out = node.out();
    addClass(out).nodes.add(node);

    var root = find(out);
    var existing = memo.putIfAbsent(NodeKey.of(node), root);
    return existing == null ? root : union(existing, out);
  }

  /// Ensure `argument` has an e-class and return its canonical representative.
  ///
  /// A [Constant] is additionally recorded as an [EConst] e-node (a constant is its own
  /// definition). Any other argument only gets a (possibly node-less) class; the e-node that
  /// defines a register is added separately via [#add] when that register's defining instruction
  /// is processed.
  public Argument addArgument(Argument argument) {
    if (argument instanceof Constant(var value)) {
      return add(new EConst(value));
    }
    addClass(argument);
    return find(argument);
  }

  /// Merge the e-classes of `a` and `b`, returning the canonical representative of the result.
  ///
  /// `a`'s representative is kept as the root, so passing the "preferred" argument first yields a
  /// stable, predictable canonical form.
  public Argument union(Argument keeper, Argument merged) {
    var keeperRoot = find(keeper);
    var mergedRoot = find(merged);
    if (keeperRoot.equals(mergedRoot)) {
      return keeperRoot;
    }

    var keeperClass = addClass(keeperRoot);
    var mergedClass = addClass(mergedRoot);

    mergedClass.parent = keeperRoot;
    keeperClass.members.addAll(mergedClass.members);
    keeperClass.nodes.addAll(mergedClass.nodes);

    return keeperRoot;
  }

  /// The canonical representative of `argument`'s e-class (with path compression).
  public Argument find(Argument argument) {
    var eclass = addClass(argument);
    if (eclass.parent.equals(argument)) {
      return argument;
    }

    eclass.parent = find(eclass.parent);
    return eclass.parent;
  }

  /// All [Argument]s known to be equal to `argument` (including `argument` itself).
  public @UnmodifiableView Set<Argument> members(Argument argument) {
    return Collections.unmodifiableSet(addClass(find(argument)).members);
  }

  /// All e-nodes in `argument`'s e-class: every known way to compute the value.
  public @UnmodifiableView Set<ENode> nodes(Argument argument) {
    return Collections.unmodifiableSet(addClass(find(argument)).nodes);
  }

  /// Every e-class, keyed by its canonical representative and mapping to that class's members.
  public @UnmodifiableView Map<Argument, Set<Argument>> classes() {
    var result = new LinkedHashMap<Argument, Set<Argument>>();
    for (var argument : classes.keySet()) {
      var root = find(argument);
      result.put(root, Collections.unmodifiableSet(addClass(root).members));
    }
    return Collections.unmodifiableMap(result);
  }

  private EClass addClass(Argument argument) {
    return classes.computeIfAbsent(argument, EClass::new);
  }

  /// Union-find node: the parent pointer plus this class's members and e-nodes. The members and
  /// nodes sets are only kept complete at the class root (the argument whose `parent` is itself).
  private static final class EClass {
    private Argument parent;
    private final Set<Argument> members = new LinkedHashSet<>();
    private final Set<ENode> nodes = new LinkedHashSet<>();

    EClass(Argument argument) {
      parent = argument;
      members.add(argument);
    }
  }

  /// Structural identity of an e-node, used for hash-consing.
  ///
  /// "Pure" e-nodes key on their contents, so equivalent ones deduplicate. A *pinned*
  /// side-effecting [EInstruction] keys on its unique [CfgPosition] instead, so every instance
  /// stays a logically distinct effect (matching the proposal's `Inst` vs. `Pure` distinction).
  private record NodeKey(Class<? extends ENode> kind, Object payload) {
    static NodeKey of(ENode node) {
      return switch (node) {
        case EConst(var value) -> new NodeKey(EConst.class, value);
        case EParam(var param) -> new NodeKey(EParam.class, param);
        case EInstruction(_, var expression, var pos) ->
            new NodeKey(EInstruction.class, pos == null ? expression : new Pinned(pos));
      };
    }

    /// Wraps a pinned e-node's (unique) position so its key never collides with a pure node's.
    private record Pinned(CfgPosition pos) {}
  }
}
