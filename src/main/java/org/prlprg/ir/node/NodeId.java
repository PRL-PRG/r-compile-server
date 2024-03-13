package org.prlprg.ir.node;

import java.util.Objects;
import org.prlprg.ir.CFGAction;

/**
 * CFG-unique {@code N} identifier which can refer to a future node in {@link CFGAction}s.
 * Specifically, there's a counter which gets incremented every time the CFG adds a node.
 */
public interface NodeId<N extends Node> {

  /** Specific class of the node with this id. */
  Class<N> clazz();
}

record NodeIdImpl<N extends Node>(Class<N> clazz, String id) implements NodeId<N> {
  @Override
  public String toString() {
    return id;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) return true;
    if (!(o instanceof NodeIdImpl<?> nodeId)) return false;
    return Objects.equals(id, nodeId.id);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id);
  }
}
