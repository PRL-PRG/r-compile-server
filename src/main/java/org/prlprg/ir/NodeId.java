package org.prlprg.ir;

import java.util.Objects;

/**
 * CFG-unique {@code N} identifier which can refer to a future node in {@link CFGCommand}s. Every
 * local node has an id unique within its CFG, and every global node has an id unique within
 * <b>every</b> CFG.
 */
public interface NodeId<N extends Node> {
  /** Specific class of the node with this id. */
  Class<? extends N> clazz();
}

abstract class NodeIdImpl<N extends Node> implements NodeId<N> {
  private final Class<? extends N> clazz;
  private final String id;

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
  public GlobalNodeId(N node, String id) {
    super(node, id);
  }
}

class InstrId<N extends Instr> extends NodeIdImpl<N> {
  public InstrId(N node, CFG cfg, String desc) {
    super(node, "%" + cfg.nextNodeId(desc));
  }
}

class PhiId<N extends Phi<?>> extends NodeIdImpl<N> {
  public PhiId(N node, CFG cfg, NodeId<?> firstInputId) {
    super(node, "φ" + cfg.nextNodeId(firstInputId.toString().substring(1)));
    assert firstInputId.toString().startsWith("%") || firstInputId.toString().startsWith("φ")
        : "phi can't have global node as its first input";
  }
}

class AuxillaryNodeId<N extends Node> extends NodeIdImpl<N> {
  public AuxillaryNodeId(N node, NodeId<?> base, String id) {
    super(node, base + "#" + id);
  }
}
