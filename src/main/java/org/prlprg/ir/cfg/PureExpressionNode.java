package org.prlprg.ir.cfg;

import java.util.List;
import java.util.stream.Stream;
import javax.annotation.Nonnull;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/**
 * A node representing a pure expression.
 *
 * <p>This is neither a {@link LocalNode} nor {@link GlobalNode}; instead, whether it's local or
 * global depends on its children. If any children are local then it's local and its liveness is the
 * intersection of its childrens' liveness; otherwise, it can be reused across graphs.
 */
public sealed interface PureExpressionNode<T> extends Node<T> {
  /**
   * Downcast {@code PureExpressionNode<? extends A>} to {@code PureExpressionNode<? extends B>}
   * where {@code B &lt;: A}.
   *
   * <p>This is needed due to Java's type erasure: see {@link #type()} for more details.
   *
   * @throws ClassCastException if {@code B &lt;/: A}.
   */
  @SuppressWarnings("unchecked")
  @Override
  default <U> PureExpressionNode<? extends U> cast(Class<U> clazz) {
    return (PureExpressionNode<U>) Node.super.cast(clazz);
  }

  /**
   * Immediate children.
   *
   * <p>See also {@link #descendants()}, which includes childrens' children.
   */
  @UnmodifiableView
  List<? extends Node<?>> children();

  /**
   * All descendants: {@link #children()}, their children, their children, and so on.
   *
   * <p>This is a <b>preorder traversal</b>: it includes children before their children.
   */
  @UnmodifiableView
  default List<? extends Node<?>> descendants() {
    return children().stream()
        .flatMap(
            n ->
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
   * <p>If local, no non-equivalent node will have the same id in the same {@link CFG}. If global,
   * no non-equivalent node will have the same id in any {@link CFG}. The key is that, the only
   * different non-equivalent nodes in different {@link CFG}s can have is by referring to different
   * {@link LocalNode}s that have the same identifier, since the same {@link LocalNodeId} can point
   * to different nodes in different {@link CFG}s.
   */
  @Override
  PureExpressionNodeId<T> id();

  @Override
  default boolean isLocal() {
    return children().stream().anyMatch(Node::isLocal);
  }
}

abstract non-sealed class PureExpressionNodeImpl<T> implements PureExpressionNode<T> {
  private final Id id = new Id();

  /**
   * Return the input casted to a {@link PureExpressionNodeImpl}.
   *
   * <p>This is preferred instead of doing a Java cast, because Java allows casts that would throw
   * {@link ClassCastException} at runtime.
   */
  static <T> PureExpressionNodeImpl<T> cast(PureExpressionNode<T> node) {
    return switch (node) {
      case PureExpressionNodeImpl<T> impl -> impl;
    };
  }

  /**
   * Replace all occurrences of {@code old} in {@link #children()} (<i>not</i> descendants) with
   * {@code replacement}.
   *
   * <p>Sets {@code replaced[0]} to true iff any child was replaced.
   *
   * <p>This will not record a {@link CFGEdit}, it may cause this node to no longer be an expected
   * type, and you are responsible for updating instructions whose inputs contain outputs that the
   * replacement changed the type of. Hence this is package-private and "unsafe".
   *
   * <p>This is an in-place operation.
   */
  protected abstract void unsafeReplaceInChildren(
      Node<?> old, Node<?> replacement, boolean[] replaced);

  /**
   * Replace all occurrences of {@code old} in {@link #descendants()} (children and their children)
   * with {@code replacement}.
   *
   * <p>Sets {@code replaced[0]} to true iff any descendant was replaced.
   *
   * <p>This will not record a {@link CFGEdit}, it may cause this node to no longer be an expected
   * type, and you are responsible for updating instructions whose inputs contain outputs that the
   * replacement changed the type of. Hence this is package-private and "unsafe".
   *
   * <p>This is an in-place operation.
   */
  final void unsafeReplaceInDescendants(Node<?> old, Node<?> replacement, boolean[] replaced) {
    unsafeReplaceInChildren(old, replacement, replaced);
    for (var child : children()) {
      if (child != replacement && child instanceof PureExpressionNode<?> child1) {
        PureExpressionNodeImpl.cast(child1).unsafeReplaceInDescendants(old, replacement, replaced);
      }
    }
  }

  @Override
  public PureExpressionNodeId<T> id() {
    return id;
  }

  private class Id implements PureExpressionNodeId<T> {
    @Override
    public List<? extends NodeId<?>> childrenIds() {
      return children().stream().map(Node::id).toList();
    }

    @Nonnull
    @Override
    public Class<? extends T> type() {
      return PureExpressionNodeImpl.this.type();
    }

    // region serialization
    @PrintMethod
    private void print(Printer p) {
      p.print(PureExpressionNodeImpl.this);
    }

    @Override
    public String toString() {
      return Printer.toString(this);
    }
    // endregion serialization
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
}
