package org.prlprg.ir.analysis.abstractNode;

public class AbstractResult2 {
  private AbstractResult kind = AbstractResult.NONE;
  private boolean keepSnapshot = false;
  private boolean needRecursion = false;

  public AbstractResult kind() {
    return kind;
  }

  public boolean keepSnapshot() {
    return keepSnapshot;
  }

  public boolean needRecursion() {
    return needRecursion;
  }

  public void setKind(AbstractResult kind) {
    this.kind = kind;
  }

  public void setKeepSnapshot() {
    this.keepSnapshot = true;
  }

  public void setNeedRecursion() {
    this.needRecursion = true;
  }

  public void merge(AbstractResult2 other) {
    kind = kind.union(other.kind);
    keepSnapshot |= other.keepSnapshot;
    needRecursion |= other.needRecursion;
  }
}
