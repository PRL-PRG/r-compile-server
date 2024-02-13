package org.prlprg.ir;

import java.util.Objects;

/**
 * CFG-unique identifier for a node of class {@code N}, which can refer to a future node in {@link
 * CFGCommand}s. Every local node has an id unique within its CFG, and every global node has an id
 * unique within <b>every</b> CFG.
 */
public interface NodeId<N extends Node> {
  /** Specific class of the node with this id. */
  Class<? extends N> clazz();

  /**
   * Get the id's string representation, without the preceeding '%' or 'φ' if it's local.
   *
   * <p><i>Don't</i> print or compare ids with this, use {@link Object#toString()} for the real
   * string representation. This is because a regular instruction, phi, and global may have the same
   * {@code name}, but they will always have a different string representation. This is used
   * internally to construct ids whose string representations are derived from other ids.
   */
  default String name() {
    return toString().substring(1);
  }
}

abstract class NodeIdImpl<N extends Node> implements NodeId<N> {
  private final Class<? extends N> clazz;
  private final String id;

  /**
   * Create a node id using the class of the given node and given descriptive name.
   *
   * <p>The node is not actually stored in the id, only its class is stored internally for internal
   * assertions. Equality is only determined by the class of the id itself (not node), and the other
   * arguments to this constructor.
   */
  @SuppressWarnings("unchecked")
  protected NodeIdImpl(N node, String id) {
    this.clazz = (Class<? extends N>) node.getClass();
    this.id = id;
  }

  public Class<? extends N> clazz() {
    return clazz;
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

  @Override
  public String toString() {
    return id;
  }
}

class GlobalNodeId<N extends Node> extends NodeIdImpl<N> {
  /**
   * Create a node id using the class of the given node and given descriptive name.
   *
   * <p>The node is not actually stored in the id, only its class is stored internally for internal
   * assertions. Equality is only determined by the class of the id itself (not node), and the other
   * arguments to this constructor.
   */
  public GlobalNodeId(N node, String id) {
    super(node, id);
  }
}

class InstrId<N extends Instr> extends NodeIdImpl<N> {
  /**
   * Create a node id using the class of the given node and given descriptive name.
   *
   * <p>The node is not actually stored in the id, only its class is stored internally for internal
   * assertions. Equality is only determined by the class of the id itself (not node), and the other
   * arguments to this constructor.
   */
  public InstrId(N node, CFG cfg, String name) {
    super(node, "%" + cfg.nextNodeId(name));
  }
}

class PhiId<N extends Phi<?>> extends NodeIdImpl<N> {
  /**
   * Create a node id using the class of the given node and given descriptive name.
   *
   * <p>The node is not actually stored in the id, only its class is stored internally for internal
   * assertions. Equality is only determined by the class of the id itself (not node), and the other
   * arguments to this constructor.
   */
  public PhiId(N node, CFG cfg, NodeId<?> firstInputId) {
    super(node, "φ" + cfg.nextNodeId(firstInputId.name()));
    assert firstInputId.toString().startsWith("%") || firstInputId.toString().startsWith("φ")
        : "phi can't have global node as its first input";
  }
}

class AuxillaryNodeId<N extends Node> extends NodeIdImpl<N> {
  /**
   * Create a node id using the class of the given node and given descriptive name.
   *
   * <p>The node is not actually stored in the id, only its class is stored internally for internal
   * assertions. Equality is only determined by the class of the id itself (not node), and the other
   * arguments to this constructor.
   */
  public AuxillaryNodeId(N node, NodeId<?> base, String id) {
    super(node, base + "#" + id);
  }
}
