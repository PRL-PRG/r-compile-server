package org.prlprg.ir;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.SequencedSet;
import java.util.Set;
import java.util.function.BiPredicate;
import java.util.function.Predicate;
import javax.annotation.Nullable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.ir.CFGIterator.DomTreeBfs;
import org.prlprg.util.NotImplementedError;

/**
 * IR (intermediate representation) <a
 * href="https://en.wikipedia.org/wiki/Control-flow_graph">control-flow-graph</a> (graph of {@link
 * Node}s which corresponds to a program; more specifically, a graph of {@link BB}s).
 */
public class CFG {
  private final BB entry = new BB(this, "");
  // These are ordered to ensure deterministic traversal
  private final SequencedSet<BB> exits = new LinkedHashSet<>();
  // These don't need to be ordered, because we don't traverse them directly
  private final Map<BBId, BB> bbs = new HashMap<>();
  private final Map<NodeId<?>, Node> nodes = new HashMap<>();
  private final Map<String, Integer> nextBbIds = new HashMap<>();
  private final Map<String, Integer> nextNodeIds = new HashMap<>();
  private final @Nullable CFG preHistory = null;
  private final List<CFGAction<?>> history = new ArrayList<>();

  /** Create a new CFG, with a single basic block and no instructions. */
  public CFG() {
    bbs.put(entry.id(), entry);
    markExit(entry);
  }

  // region general properties
  /** The basic block that is the entry of this graph. */
  public BB entry() {
    return entry;
  }

  /**
   * (A view of) basic blocks with no successors in this graph.
   *
   * <p>Be aware that if the graph has free nodes, they may be included in this even though they are
   * technically never reached. (A graph with free nodes is in a temporarily-invalid state and will
   * produce errors in {@link #verify()}.)
   *
   * <p>Mutating the CFG will affect the set.
   */
  public @UnmodifiableView Set<BB> exits() {
    return Collections.unmodifiableSet(exits);
  }

  /**
   * (A view of) ids of every basic block in the CFG.
   *
   * <p>Don't iterate the CFG this way, because it's not deterministic. Instead, use {@link
   * CFGIterator} or {@link #bfs()}, {@link #dfs()}, {@link #dominators()}, etc. (which internally
   * use {@link CFGIterator}).
   *
   * <p>Mutating the CFG will affect the set.
   */
  @UnmodifiableView
  Set<BBId> bbIds() {
    return Collections.unmodifiableSet(bbs.keySet());
  }

  /**
   * Computes a dominator tree. It lets you query for which nodes are guaranteed to be run before
   * other nodes.
   *
   * <p>Be careful, mutating the CFG won't affect the tree.
   */
  public DomTree domTree() {
    return new DomTree(this);
  }

  // endregion

  // region iterate
  /**
   * Iterate through every basic block, starting with the entry and recursing through successors
   * breadth-first.
   */
  public Iterable<BB> bfs() {
    return () -> new CFGIterator.Bfs(this);
  }

  /**
   * Iterate through every basic block, starting with the entry and recursing through successors
   * depth-first.
   */
  public Iterable<BB> dfs() {
    return () -> new CFGIterator.Dfs(this);
  }

  /**
   * Iterate through every basic block, starting with the exits and recursing through predecessors
   * breadth-first.
   */
  public Iterable<BB> reverseBfs() {
    return () -> new CFGIterator.ReverseBfs(this);
  }

  /**
   * Iterate through every basic block, starting with the exits and recursing through predecessors
   * depth-first.
   */
  public Iterable<BB> reverseDfs() {
    return () -> new CFGIterator.ReverseDfs(this);
  }

  /**
   * Iterate through every basic block, starting with the entry and recursing through <a
   * href="https://en.wikipedia.org/wiki/Dominator_(graph_theory)">dominators</a> breadth-first.
   */
  public Iterable<BB> dominators() {
    return dominators(domTree());
  }

  /**
   * Iterate through every basic block, starting with the entry and recursing through <a
   * href="https://en.wikipedia.org/wiki/Dominator_(graph_theory)">dominators</a> breadth-first.
   * This overload lets you reuse an existing {@link DomTree} instead of recomputing.
   */
  public Iterable<BB> dominators(DomTree tree) {
    return () -> new DomTreeBfs(tree);
  }

  // endregion

  // region mutate
  /** Create, insert, and return a new basic block. */
  public BB addBB() {
    return addBB("");
  }

  /** Create insert, and return a new basic block, and attach a short name to the block's id. */
  public BB addBB(String name) {
    var bb = new BB(this, name);
    assert !bbs.containsKey(bb.id());
    bbs.put(bb.id(), bb);
    markExit(bb);
    record(new CFGCommand.AddBB(name), bb);
    return bb;
  }

  /**
   * Remove a basic block from the CFG.
   *
   * <p>Existing basic blocks and instructions may still reference it, but these references must be
   * removed before {@link #verify()} is called.
   *
   * @throws IllegalArgumentException If the basic block was never in the CFG.
   * @throws IllegalArgumentException If the basic block was already removed.
   */
  public void remove(BBId bbId) {
    var bb = bbs.remove(bbId);
    if (bb == null) {
      throw new IllegalArgumentException("BB never in CFG");
    }
    if (bb.successors().isEmpty()) {
      unmarkExit(bb);
    }
    record(new CFGCommand.RemoveBB(bbId), bb);
  }

  /**
   * Remove a basic block from the CFG.
   *
   * <p>Existing basic blocks and instructions may still reference it, but these references must be
   * removed before {@link #verify()} is called.
   *
   * @throws IllegalArgumentException If the basic block was never in the CFG.
   * @throws IllegalArgumentException If the basic block was already removed.
   */
  public void remove(BB bb) {
    var removed = bbs.remove(bb.id());
    if (removed == null) {
      throw new IllegalArgumentException("BB already removed");
    }
    if (bb.successors().isEmpty()) {
      unmarkExit(bb);
    }
    assert removed == bb;
    record(new CFGCommand.RemoveBB(bb.id()), bb);
  }

  // endregion

  // region history
  /** Access a view of the CFG before {@link #history()}. */
  public CFG preHistory() {
    // TODO
    throw new NotImplementedError();
  }

  /**
   * Access (a view of) the CFG's history: most recent actions performed which may let you recreate
   * it.
   */
  public List<CFGAction<?>> history() {
    return Collections.unmodifiableList(history);
  }

  /**
   * Returns the most recent action in {@link #history()} whose command satisfies the predicate, or
   * {@code null} if none do.
   */
  public @Nullable CFGAction<?> findAction(Predicate<CFGCommand<?>> predicate) {
    return findAction((cmd, output) -> predicate.test(cmd));
  }

  /**
   * Returns the most recent action in {@link #history()} which satisfies the predicate, or {@code
   * null} if none do.
   */
  public @Nullable CFGAction<?> findAction(BiPredicate<CFGCommand<?>, Object> predicate) {
    for (var i = history.size() - 1; i >= 0; i--) {
      var a = history.get(i);
      if (predicate.test(a.command(), a.output())) {
        return a;
      }
    }
    return null;
  }

  /**
   * Returns the index of the most recent action in {@link #history()} whose command satisfies the
   * predicate, or {@code -1} if none do.
   */
  public int findActionIdx(Predicate<CFGCommand<?>> predicate) {
    return findActionIdx((cmd, output) -> predicate.test(cmd));
  }

  /**
   * Returns the index of the most recent action in {@link #history()} which satisfies the
   * predicate, or {@code -1} if none do.
   */
  public int findActionIdx(BiPredicate<CFGCommand<?>, Object> predicate) {
    for (var i = history.size() - 1; i >= 0; i--) {
      var a = history.get(i);
      if (predicate.test(a.command(), a.output())) {
        return i;
      }
    }
    return -1;
  }

  /** Clear the CFG's history. */
  public void clearHistory() {
    /*WIP preHistory = clone(); */
    history.clear();
  }

  // endregion

  // region debugging (verify and toString)
  /**
   * Verify some CFG invariants. Specifically:
   *
   * <ul>
   *   <li>Instructions don't have arguments that were removed from the CFG (or not present
   *       initially).
   *   <li>Every basic block is connected to the entry block.
   *   <li>Instruction arguments all either originate from earlier in the block, or are
   *       CFG-independent. <i>Except</i> in basic blocks with exactly one predecessor, instruction
   *       arguments may be from that predecessor or, if it also has one predecessor, its
   *       predecessor and so on.
   *   <li>Only basic blocks with two or more predecessors have phi nodes. Phi nodes have an entry
   *       from every predecessor.
   *   <li>Instruction {@link RValue} arguments are of the correct (dynamic) type.
   * </ul>
   *
   * @throws CFGVerifyException if one of the invariants are broken.
   */
  public void verify() {
    var errors = new ArrayList<CFGVerifyException.BrokenInvariant>();

    // Must be DFS so that we can cache defined nodes in onlyPred blocks...
    var iter = new CFGIterator.Dfs(this);
    // ...which we do here in `prevNodes`: during iteration, `prevNodes` holds nodes guaranteed to
    // be defined before the current instruction without control flow ambiguity, that is,
    // referencable ones.
    var prevNodes = new HashSet<Node>();
    BB prevBB = null;
    while (iter.hasNext()) {
      var bb = iter.next();

      if (!bb.hasSinglePredecessor() || bb.onlyPredecessor() != prevBB) {
        prevNodes.clear();
      }

      // Only basic blocks with two or more predecessors have phi nodes. Phi nodes have an entry
      // from every predecessor.
      /*WIP if (bb.predecessors().size() < 2 && !bb.phis().isEmpty()) {
        errors.add(new CFGVerifyException.BrokenInvariant("Phi in single-predecessor BB: " + bb.id(), findActionIdx((c, o) ->
            (c instanceof CFGCommand.AddInstrOrPhi<?> add && add.bbId().equals(bb.id()) && o instanceof Phi) ||
                (c instanceof CFGCommand.RemoveJump<?> remove && remove.)
        )));
      }*/

      for (var instrOrPhi : bb) {
        assert instrOrPhi.cfg() == this;

        for (var arg : instrOrPhi.args()) {
          assert arg.cfg() == null || arg.cfg() == this;
          assert nodes.get(arg.id()) == null || nodes.get(arg.id()) == arg;

          if (arg.cfg() != null) {
            if (!nodes.containsKey(arg.id())) {
              // Instructions don't have arguments that were removed from the CFG (or not present
              // initially).
              errors.add(
                  new CFGVerifyException.BrokenInvariant(
                      "Untracked (removed?) arg: " + arg.id(),
                      findActionIdx(
                          c ->
                              c instanceof CFGCommand.RemoveInstrOrPhi<?, ?> remove
                                  && remove.nodeId().equals(arg.id()))));
            } else if (instrOrPhi instanceof Instr instr && !prevNodes.contains(arg)) {
              // Instruction arguments all either originate from earlier in the block, or are
              // CFG-independent. *Except* in basic blocks with exactly one predecessor, instruction
              // arguments may be from that predecessor or, if it also has one predecessor, its
              // predecessor and so on.
              errors.add(
                  new CFGVerifyException.BrokenInvariant(
                      "Arg not defined before use, or control flow ambiguity (so needs to be a phi): "
                          + arg.id(),
                      findActionIdx(
                          (c, o) ->
                              (c instanceof CFGCommand.UpdateInstr<?, ?> update
                                      && update.nodeId().equals(instr.id())
                                      && update.newArgs().equals(instr.data()))
                                  || (c instanceof CFGCommand.AddInstrOrPhi<?>
                                      && o == arg.origin()))));
            }
          }
        }

        if (instrOrPhi instanceof Phi<?> phi) {
          // Only basic blocks with two or more predecessors have phi nodes. Phi nodes have an entry
          // from every predecessor.
          // TODO

          for (var input : phi.inputs()) {}
        }

        prevNodes.addAll(instrOrPhi.returns());
      }

      prevBB = bb;
    }

    for (var remainingBBId : iter.remainingBBIds()) {
      // Every basic block is connected to the entry block.
      errors.add(
          new CFGVerifyException.BrokenInvariant(
              "BB not reachable: " + remainingBBId,
              findActionIdx(
                  c ->
                      c instanceof CFGCommand.RemoveBB removeBB
                          && removeBB.bbId().equals(remainingBBId))));
    }

    if (!errors.isEmpty()) {
      throw new CFGVerifyException(this, errors);
    }
  }

  @Override
  public String toString() {
    var sb = new StringBuilder();
    var iter = new CFGIterator.Bfs(this);
    iter.forEachRemaining(sb::append);

    if (!iter.remainingBBIds().isEmpty()) {
      sb.append("!!! Free BBs:\n");
      for (var bbId : iter.remainingBBIds()) {
        sb.append(bbs.get(bbId));
      }
    }

    return sb.toString();
  }

  // endregion

  // region for BB and Node
  /**
   * Mark a basic block as being an exit.
   *
   * <p>This is called from {@link BB} when its successors become empty.
   */
  void markExit(BB bb) {
    assert !exits.contains(bb) : "BB is already an exit";
    exits.add(bb);
  }

  /**
   * Unmark a basic block as being an exit.
   *
   * <p>This is called from {@link BB} when its successors become empty.
   */
  void unmarkExit(BB bb) {
    assert exits.contains(bb) : "BB is already not an exit";
    exits.remove(bb);
  }

  /**
   * Mark a node as belonging to this CFG.
   *
   * <p>This is called from {@link BB} when it adds a node. Tracked nodes are used for verification.
   */
  void track(Node node) {
    var id = node.id();
    assert id.clazz().isInstance(node);
    var old = nodes.put(id, node);
    assert old == null : "Node with id already tracked: " + id + "\nold: " + old + "\nnew: " + node;
  }

  /**
   * Mark a node as no longer belonging to this CFG.
   *
   * <p>This is called from {@link BB} when it removes a node, and {@link CFG} itself when it
   * removes a {@link BB}. Tracked nodes are used for verification.
   */
  void untrack(Node node) {
    var removed = nodes.remove(node.id());
    assert removed != null : "Node was never tracked";
    assert removed == node;
  }

  /**
   * Mark a node as no longer belonging to this CFG.
   *
   * <p>This is called from {@link BB} when it removes a node, and {@link CFG} itself when it
   * removes a {@link BB}. Tracked nodes are used for verification.
   */
  void untrack(NodeId<?> nodeId) {
    var removed = nodes.remove(nodeId);
    assert removed != null : "Node was never tracked";
  }

  /**
   * Record that an action was performed on the CFG.
   *
   * <p>This is called from {@link BB} and {@link Phi} when they mutate themselves.
   */
  <Ret> void record(CFGCommand<Ret> command, Ret output) {
    history.add(new CFGAction<>(command, output));
  }

  /** Returns {@code name} if unique to the CFG, otherwise disambiguates with a suffix. */
  String nextBBId(String name) {
    return nextId(name, nextBbIds);
  }

  /** Returns {@code name} if unique to the CFG, otherwise disambiguates with a suffix. */
  String nextNodeId(String name) {
    return nextId(name, nextNodeIds);
  }

  private String nextId(String name, Map<String, Integer> nextIds) {
    String result;
    if (nextIds.containsKey(name)) {
      result = (name.isEmpty() ? "" : name + "@") + nextIds.get(name);
      nextIds.put(name, nextIds.get(name) + 1);
    } else {
      result = name;
      nextIds.put(name, 0);
    }
    return result;
  }
  // endregion

  // TODO: make sure when we split, delete BBs, phi nodes are updated if necessary, and removed
  // nodes aren't
  //  dependencies of other nodes in the CFG (including removed auxillary nodes, not just
  // instructions).

  // TODO: Fancy toString for Instr and nodes
}
