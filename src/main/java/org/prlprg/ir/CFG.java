package org.prlprg.ir;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.NoSuchElementException;
import org.prlprg.ir.node.Node;
import org.prlprg.ir.node.NodeId;
import org.prlprg.ir.node.NodeIdImpl;

/**
 * IR (intermediate representation) <a
 * href="https://en.wikipedia.org/wiki/Control-flow_graph">control-flow-graph</a> (graph of {@link
 * Node}s which corresponds to a program; more specifically, a graph of {@link BB}s).
 */
public class CFG {
  private final BB entry = new BB(this, "");
  private final Map<BBId, BB> bbs = new HashMap<>();
  private final Map<NodeId<?>, Node> nodes = new HashMap<>();
  private final Map<String, Integer> nextBbId = new HashMap<>();
  private final Map<String, Integer> nextNodeId = new HashMap<>();
  private final List<CFGAction<?>> history = new ArrayList<>();
  private int nextBbIdIdx = 0;
  private int nextNodeIdIdx = 0;

  /** Create a new CFG, with a single basic block and no instructions. */
  public CFG() {
    bbs.put(entry.id(), entry);
  }

  /** The basic block that is the entry of this graph. */
  public BB entry() {
    return entry;
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
   * Get the basic block with the associated id.
   *
   * @throws NoSuchElementException If there's no node with the id.
   */
  @SuppressWarnings("unchecked")
  public <N extends Node> N get(NodeId<N> id) {
    var node = nodes.get(id);
    if (node == null) {
      throw new NoSuchElementException("No node with id: " + id);
    }
    return (N) node;
  }

  /** Create and insert a new basic block. */
  public BB addBB() {
    return addBB("");
  }

  /** Create and insert a new basic block, and attach a short description to the block's id. */
  public BB addBB(String desc) {
    var bb = new BB(this, desc);
    record(new CFGAction.AddBB(bb.id()));
    bbs.put(id, bb);
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
      throw new IllegalArgumentException("BB already removed");
    }
    record(new CFGAction.RemoveBB(bbId));
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
    remove(bb.id());
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

  /** Pretty-print this CFG. */
  String print() {
    // TODO
    return toString();
  }

  /**
   * Mark a node as belonging to this CFG.
   *
   * <p>This is called from {@link BB} when it adds a node. Tracked nodes are used for verification.
   */
  void track(Node node) {
    var wasAdded = nodes.add(node);
    if (!wasAdded) {
      throw new IllegalArgumentException("Node was already tracked");
    }
  }

  /**
   * Mark a node as no longer belonging to this CFG.
   *
   * <p>This is called from {@link BB} when it removes a node, and {@link CFG} itself when it
   * removes a {@link BB}. Tracked nodes are used for verification.
   */
  void untrack(Node node) {
    boolean wasRemoved = nodes.remove(node);
    if (!wasRemoved) {
      throw new IllegalArgumentException("Node was never tracked");
    }
    removedNodes.put(node, IncompleteCFGOperationException.make(() -> "Node removed: " + node));
  }

  private void record(CFGAction<?> action) {
    history.add(action);
  }

  private BBId nextBBId() {
    return new BBIdImpl(nextBbIdIdx++);
  }

  private <N extends Node> NodeId<N> nextNodeId(Class<N> clazz) {
    return new NodeIdImpl<>(clazz, nextNodeIdIdx++);
  }

  // TODO: make sure when we split, delete BBs, phi nodes are updated if necessary, and removed
  // nodes aren't
  //  dependencies of other nodes in the CFG (including removed auxillary nodes, not just
  // instructions).

  // TODO: Fancy toString for this, BB, Instr, and all nodes
}
