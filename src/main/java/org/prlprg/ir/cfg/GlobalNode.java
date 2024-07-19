package org.prlprg.ir.cfg;

/**
 * A {@link Node} that doesn't belong to a specific control-flow-graph ({@link CFG}).
 *
 * <p>This means the same node can be reused across graphs. It also means they have infinite
 * <b>liveness</b>.
 */
public sealed interface GlobalNode<T> extends Node<T> permits Constant, StaticEnv, InvalidNode {
  /**
   * Downcast {@code LocalNode<A>} to {@code LocalNode<B>} where {@code B &lt;: A}.
   *
   * <p>This is needed due to Java's type erasure: see {@link #type()} for more details.
   *
   * @throws ClassCastException if {@code B &lt;/: A}.
   */
  @SuppressWarnings("unchecked")
  @Override
  default <U> GlobalNode<? extends U> cast(Class<U> clazz) {
    return (GlobalNode<U>) Node.super.cast(clazz);
  }

  /**
   * Unique identifier for the node, everywhere.
   *
   * <p>No other node can/will have the same ID.
   *
   * <p>Additionally, global node identifiers contain a back-reference to their node.
   */
  @Override
  GlobalNodeId<T> id();
}
