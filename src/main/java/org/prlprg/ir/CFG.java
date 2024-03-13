package org.prlprg.ir;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.NoSuchElementException;
import java.util.SequencedSet;
import java.util.Set;

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
  private final List<CFGAction<?>> history = new ArrayList<>();

  /** Create a new CFG, with a single basic block and no instructions. */
  public CFG() {
    bbs.put(entry.id(), entry);
  }

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
   */
  public Set<BB> exits() {
    return Collections.unmodifiableSet(exits);
  }

  /** (A view of) ids of every basic block in the CFG. */
  public Set<BBId> bbIds() {
    return Collections.unmodifiableSet(bbs.keySet());
  }

  /**
   * Get the basic block with the associated id.
   *
   * @throws NoSuchElementException If there's no basic block with the id.
   */
  public BB get(BBId id) {
    var bb = bbs.get(id);
    if (bb == null) {
      throw new NoSuchElementException("No basic block with id: " + id);
    }
    return bb;
  }

  /**
   * Get the node with the associated id.
   *
   * @throws NoSuchElementException If there's no node with the id.
   */
  @SuppressWarnings("unchecked")
  public <N extends Node> N get(NodeId<N> id) {
    var node = nodes.get(id);
    if (node == null) {
      throw new NoSuchElementException("No node with id: " + id);
    }
    assert id.clazz().isInstance(node);
    return (N) node;
  }

  /** Create and insert a new basic block. */
  public BB addBB() {
    return addBB("");
  }

  /** Create and insert a new basic block, and attach a short description to the block's id. */
  public BB addBB(String desc) {
    var bb = new BB(this, desc);
    assert !bbs.containsKey(bb.id());
    bbs.put(bb.id(), bb);
    record(new CFGAction.AddBB(desc));
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
  public void remove(BB bb) {
    var removed = bbs.remove(bb.id());
    if (removed == null) {
      throw new IllegalArgumentException("BB already removed");
    }
    assert removed == bb;
    record(new CFGAction.RemoveBB(bb.id()));
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
      throw new IllegalArgumentException("BB already removed");
    }
    record(new CFGAction.RemoveBB(bbId));
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

  /**
   * Iterate through every basic block, starting with the entry and recursing through successors
   * breadth-first.
   */
  public Iterable<BB> bfs() {
    return () -> new CfgIterator.Bfs(this);
  }

  /**
   * Iterate through every basic block, starting with the entry and recursing through successors
   * depth-first.
   */
  public Iterable<BB> dfs() {
    return () -> new CfgIterator.Dfs(this);
  }

  /**
   * Iterate through every basic block, starting with the exits and recursing through predecessors
   * breadth-first.
   */
  public Iterable<BB> reverseBfs() {
    return () -> new CfgIterator.ReverseBfs(this);
  }

  /**
   * Iterate through every basic block, starting with the exits and recursing through predecessors
   * depth-first.
   */
  public Iterable<BB> reverseDfs() {
    return () -> new CfgIterator.ReverseDfs(this);
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
    return () -> new CfgIterator.Dominator(this, tree);
  }

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
    // TODO
  }

  /**
   * Access (a view of) the CFG's history: most recent actions performed which may let you recreate
   * it.
   */
  public List<CFGAction<?>> history() {
    return Collections.unmodifiableList(history);
  }

  /** Clear the CFG's history. */
  public void clearHistory() {
    history.clear();
  }

  @Override
  public String toString() {
    var sb = new StringBuilder();
    var iter = new CfgIterator.Bfs(this);
    iter.forEachRemaining(sb::append);

    if (!iter.remainingBBIds().isEmpty()) {
      sb.append("!!! Free BBs:\n");
      for (var bbId : iter.remainingBBIds()) {
        sb.append(bbs.get(bbId));
      }
    }

    return sb.toString();
  }

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
  void record(CFGAction<?> action) {
    history.add(action);
  }

  /** Returns {@code desc} if unique to the CFG, otherwise disambiguates with a suffix. */
  String nextBBId(String desc) {
    return nextId(desc, nextBbIds);
  }

  /** Returns {@code desc} if unique to the CFG, otherwise disambiguates with a suffix. */
  String nextNodeId(String desc) {
    return nextId(desc, nextNodeIds);
  }

  private String nextId(String desc, Map<String, Integer> nextIds) {
    String result;
    if (nextIds.containsKey(desc)) {
      result = (desc.isEmpty() ? "" : desc + "@") + nextIds.get(desc);
      nextIds.put(desc, nextIds.get(desc) + 1);
    } else {
      result = desc;
      nextIds.put(desc, 0);
    }
    return result;
  }

  // TODO: make sure when we split, delete BBs, phi nodes are updated if necessary, and removed
  // nodes aren't
  //  dependencies of other nodes in the CFG (including removed auxillary nodes, not just
  // instructions).

  // TODO: Fancy toString for this, BB, Instr, and all nodes
}
