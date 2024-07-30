package org.prlprg.ir.cfg;

import java.util.List;
import java.util.stream.Stream;
import javax.annotation.Nonnull;
import org.jetbrains.annotations.UnmodifiableView;

/**
 * Unique identifier for a {@link PureExpressionNode}.
 *
 * <p>Each subclass of {@link PureExpressionNode} needs an ID that encodes almost the exact same
 * data, except {@link Node} children are replaced by {@link NodeId}s (so unfortunately a lot of
 * abstraction and boilerplate...)
 */
public non-sealed interface PureExpressionNodeId<T> extends NodeId<T> {
  /**
   * IDs of immediate children.
   *
   * <p>See also {@link #descendantIds()}, which includes childrens' children IDs.
   */
  @UnmodifiableView
  List<? extends NodeId<?>> childrenIds();

  /**
   * IDs of all descendants: {@link #childrenIds()}s, their children IDs, their children IDs, and so
   * on.
   *
   * <p>This is a <b>preorder traversal</b>: it includes children IDs before their children IDs.
   */
  @UnmodifiableView
  default List<? extends NodeId<?>> descendantIds() {
    return childrenIds().stream()
        .flatMap(
            n ->
                Stream.concat(
                    Stream.of(n),
                    ((Object) n instanceof PureExpressionNodeId<?> n1)
                        ? n1.descendantIds().stream()
                        : Stream.empty()))
        .toList();
  }

  @Override
  @Nonnull
  Class<? extends T> type();

  @Override
  default boolean isLocal() {
    return childrenIds().stream().anyMatch(NodeId::isLocal);
  }
}
