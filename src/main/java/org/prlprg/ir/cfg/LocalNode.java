package org.prlprg.ir.cfg;

/**
 * A {@link Node} that belongs to a specific control-flow-graph ({@link CFG}).
 *
 * <p>There are 2 types of node: these nodes that only exist in a specific control-flow graph, e.g.
 * {@link Param}s and instruction outputs; and {@link GlobalNode}s that can exist in any graph, e.g.
 * {@link Constant}s.
 *
 * <p>Some local nodes - {@link Phi}s and {@link InstrOutput}s - also have <b>liveness</b>: there
 * are regions in the {@link CFG} where they are "dead" and thus can't be referenced, or the
 * compiled program would potentially crash at runtime.
 */
public sealed interface LocalNode<T> extends Node<T> permits Param, Phi, InstrOutput {
  /**
   * Downcast {@code LocalNode<A>} to {@code LocalNode<B>} where {@code B &lt;: A}.
   *
   * <p>This is needed due to Java's type erasure: see {@link #type()} for more details.
   *
   * @throws ClassCastException if {@code B &lt;/: A}.
   */
  @SuppressWarnings("unchecked")
  default <U extends T> LocalNode<? extends U> cast(Class<U> clazz) {
    return (LocalNode<U>) Node.super.cast(clazz);
  }

  /**
   * CFG containing the node.
   *
   * <p>The node can't be used in any other {@link CFG}. For example, the {@link #id()} of a local
   * node in a different {@link CFG} may be equal to this node's id, even though nodes are uniquely
   * identified by their {@link #id()}, because this uniqueness only holds within the {@link CFG}.
   */
  CFG cfg();

  /**
   * Unique identifier for the node within its own {@link CFG}.
   *
   * <p>No other node in the same {@link CFG} can/will have the same ID. However, a local nodes in a
   * different {@link CFG} can have the same ID.
   */
  LocalNodeId<T> id();
}
