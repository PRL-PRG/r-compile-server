package org.prlprg.ir.cfg;

public final class Param<T> implements LocalNode<T> {
  private final CFG cfg;
  private final Class<T> type;
  private final LocalNodeId<T> id;

  Param(CFG cfg, Class<T> type, LocalNodeId<T> id) {
    this.cfg = cfg;
    this.type = type;
    this.id = id;
  }

  @Override
  public CFG cfg() {
    return cfg;
  }

  @Override
  public Class<T> type() {
    return type;
  }

  @Override
  public LocalNodeId<T> id() {
    return id;
  }

  @Override
  public String toString() {
    return id.toString();
  }
}
