package org.prlprg.ir.cfg;

import java.util.Collection;
import java.util.NoSuchElementException;
import org.jetbrains.annotations.UnmodifiableView;

interface CFGQuery {
  // region general properties
  /**
   * The number of {@link BB}s in the CFG.
   *
   * <p>Note that before cleanup, this includes to-be-removed unreachable BBs.
   */
  int numBBs();

  /**
   * The number of {@link Node}s in the CFG.
   *
   * <p>Note that before cleanup, this includes to-be-removed dead instructions and their auxillary
   * nodes.
   */
  int numNodes();

  /** The basic block that is the entry of this graph. */
  BB entry();

  /**
   * (A view of) basic blocks with no successors in this graph.
   *
   * <p>Be aware that if the graph has free nodes, they may be included in this even though they are
   * technically never reached. (A graph with free nodes is in a temporarily-invalid state and will
   * produce errors in {@link CFG#verify()}.)
   *
   * <p>Mutating the CFG will update the set.
   *
   * <p>These are ordered to ensure deterministic traversal.
   */
  @UnmodifiableView
  Collection<BB> exits();

  /**
   * (A view of) ids of every basic block in the CFG.
   *
   * <p>Don't iterate the CFG this way, because it's not deterministic. Instead, use {@link
   * CFGIterator} or {@link #bfs()}, {@link #dfs()}, {@link #dominees()}, etc. (which internally use
   * {@link CFGIterator}).
   *
   * <p>Mutating the CFG will update the set.
   */
  @UnmodifiableView
  Collection<BBId> bbIds();

  /**
   * Get the basic block in the CFG with the given id.
   *
   * @throws NoSuchElementException If the basic block with the given id is not in the CFG.
   */
  BB get(BBId bbId);

  /**
   * Get the node in the CFG with the given id, or if the node ID is global, get its corresponding
   * node.
   *
   * @throws NoSuchElementException If the node with the given id is not global and is not in the
   *     CFG.
   */
  <N extends Node> N get(NodeId<N> nodeId);

  /**
   * Get the {@link Phi} input in the CFG with the given id.
   *
   * @throws NoSuchElementException If the input's basic block or node id is not in the CFG.
   */
  <N extends Node> Phi.Input<N> get(Phi.InputId<N> inputId);

  /**
   * Computes a dominator tree. It lets you query for which nodes are guaranteed to be run before
   * other nodes.
   *
   * <p>Be careful, mutating the CFG won't update the tree.
   */
  DomTree domTree();

  // endregion

  // region iterate
  /**
   * Iterate through every basic block in a deterministic but unspecified way.
   *
   * <p>Modifying the CFG during iteration causes undefined behavior.
   */
  Iterable<BB> iter();

  /**
   * Iterate through every basic block, starting with the entry and recursing through successors
   * breadth-first.
   *
   * <p>Adding BBs to the CFG won't add them to the iterator, but removing BBs will remove them and
   * possibly their successors.
   */
  Iterable<BB> bfs();

  /**
   * Iterate through every basic block, starting with the entry and recursing through successors
   * depth-first.
   *
   * <p>Adding BBs to the CFG won't add them to the iterator, but removing BBs will remove them and
   * possibly their successors.
   */
  Iterable<BB> dfs();

  /**
   * Iterate through every basic block, starting with the exits and recursing through predecessors
   * breadth-first.
   *
   * <p>Adding BBs to the CFG won't add them to the iterator, but removing BBs will remove them and
   * possibly their predecessors.
   */
  Iterable<BB> reverseBfs();

  /**
   * Iterate through every basic block, starting with the exits and recursing through predecessors
   * depth-first.
   *
   * <p>Adding BBs to the CFG won't add them to the iterator, but removing BBs will remove them and
   * possibly their predecessors.
   */
  Iterable<BB> reverseDfs();

  /**
   * Iterate through every basic block, starting with the entry and recursing through <a
   * href="https://en.wikipedia.org/wiki/Dominator_(graph_theory)">immediately dominated nodes</a>
   * breadth-first.
   *
   * <p>Adding BBs to the CFG won't add them to the iterator, but removing BBs will remove them and
   * possibly their dominees.
   */
  Iterable<BB> dominees();

  /**
   * Iterate through every basic block, starting with the entry and recursing through <a
   * href="https://en.wikipedia.org/wiki/Dominator_(graph_theory)">immediately dominated nodes</a>
   * breadth-first. This overload lets you reuse an existing {@link DomTree} instead of recomputing.
   *
   * <p>Adding BBs to the CFG won't add them to the iterator, but removing BBs will remove them and
   * possibly their dominees.
   */
  Iterable<BB> dominees(DomTree tree);
  // endregion
}