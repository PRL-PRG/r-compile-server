package org.prlprg.ir.cfg;

import java.util.List;
import java.util.stream.Stream;
import org.jetbrains.annotations.UnmodifiableView;

/** A node representing a pure expression.
 *
 * <p>This is neither a {@link LocalNode} nor {@link GlobalNode}; instead, whether it's local or
 * global depends on its children. If any children are local then it's local and its liveness is the
 * intersection of its childrens' liveness; otherwise, it can be reused across graphs.
 */
public sealed interface PureExpressionNode<T> extends Node<T> {
  /** Immediate children.
   *
   * <p>See also {@link #descendants()}, which includes childrens' children.
   */
  @UnmodifiableView
  List<? extends Node<?>> children();

  /** All descendants: {@link #children()}, their children, their children, and so on.
   *
   * <p>This is a <b>preorder traversal</b>: it includes children before their children.
   */
  @UnmodifiableView
  default List<? extends Node<?>> descendants() {
    return children().stream()
        .flatMap(n ->
            Stream.concat(
                Stream.of(n),
                (n instanceof PureExpressionNode<?> n1)
                    ? n1.descendants().stream()
                    : Stream.empty()))
        .toList();
  }

  /**
   * Unique identifier for the node.
   *
   * <p>No other node can/will have the same ID.
   *
   * <p>Additionally, global node identifiers contain a back-reference to their node.
   */
  @Override
  PureExpressionNodeId<T> id();

  @Override
  default boolean isLocal() {
    return children().stream().anyMatch(Node::isLocal);
  }
}

non-sealed interface PureExpressionNodeImpl<T> extends PureExpressionNode<T> {
  /** Return the input casted to a {@link PureExpressionNodeImpl}.
   *
   * <p>This is preferred instead of doing a Java cast, because Java allows casts that would throw
   * {@link ClassCastException} at runtime.
   */
  static <T> PureExpressionNodeImpl<T> cast(PureExpressionNode<T> node) {
    return switch (node) {
      case PureExpressionNodeImpl<T> impl -> impl;
    };
  }

  /** Replace all occurrences of {@code old} in {@link #descendants()} (children and their children)
   * with {@code replacement}.
   *
   * <p>Sets {@code replaced[0]} to true iff any descendant was replaced.
   *
   * <p>This will not record a {@link CFGEdit}, it may cause this node to no longer be an expected
   * type, and you are responsible for updating instructions whose inputs contain outputs that the
   * replacement changed the type of. Hence this is package-private and "unsafe".
   *
   * <p>This is an in-place operation.
   *
   * <p>Implement by calling {@link #replaceInSelfAndDescendants(Node, Node, Node, boolean[])} on
   * each child. Under no circumstances should {@code replaced[0]} every be set to false.
   */
  void unsafeReplaceInDescendants(Node<?> old, Node<?> replacement, boolean[] replaced);

  /**
   * If {@code target == old}, return {@code replacement}, otherwise return {@code target}, and if
   * it's a {@link PureExpressionNode}, call {@link #unsafeReplaceInDescendants(Node, Node,
   * boolean[])} on it.
   *
   * <p>Sets {@code replaced[0]} to true iff any node is replaced.
   */
  static Node<?> replaceInSelfAndDescendants(Node<?> target, Node<?> old, Node<?> replacement, boolean[] replaced) {
    if (target == old) {
      return replacement;
    } else if (target instanceof PureExpressionNode<?> target1) {
      PureExpressionNodeImpl.cast(target1).unsafeReplaceInDescendants(old, replacement, replaced);
      return target1;
    } else {
      return target;
    }
  }
}