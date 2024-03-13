package org.prlprg.ir;

import java.util.Objects;

/**
 * CFG-unique {@code N} identifier which can refer to a future node in {@link CFGAction}s. Every
 * local node has an id unique within its CFG, and every global node has an id unique within
 * <b>every</b> CFG.
 */
public interface NodeId<N extends Node> {
  /** Specific class of the node with this id. */
  Class<N> clazz();
}

abstract class NodeIdImpl<N extends Node> {
  private final Class<N> clazz;
  private final String id;

  protected NodeIdImpl(Class<N> clazz, String id) {
    this.clazz = clazz;
    this.id = id;
  }

  public Class<N> clazz() {
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
  public GlobalNodeId(Class<N> clazz, String id) {
    super(clazz, id);
  }
}

class InstrId<N extends Instr> extends NodeIdImpl<N> {
  public InstrId(Class<N> clazz, CFG cfg, String desc) {
    super(clazz, "%" + cfg.nextNodeId(desc));
  }
}

class PhiId<N extends Phi<?>> extends NodeIdImpl<N> {
  public PhiId(Class<N> clazz, CFG cfg, NodeId<?> firstInputId) {
    super(clazz, "φ" + cfg.nextNodeId(firstInputId.toString().substring(1)));
    assert firstInputId.toString().startsWith("%") || firstInputId.toString().startsWith("φ")
        : "phi can't have global node as its first input";
  }
}

class AuxillaryNodeId<N extends Node> extends NodeIdImpl<N> {
  public AuxillaryNodeId(Class<N> clazz, NodeId<?> base, String id) {
    super(clazz, base + "#" + id);
  }
}
