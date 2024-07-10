package org.prlprg.ir.analysis.abstractNode;

public class AbstractResult2 {
  private AbstractResult kind;
  private boolean keepSnapshot = false;
  private boolean needRecursion = false;

  /**
   * Create a result with kind {@link AbstractResult#NONE}, and no {@link #keepSnapshot()} or {@link
   * #needRecursion()}.
   */
  public AbstractResult2() {
    this.kind = AbstractResult.NONE;
  }

  /**
   * Create a result with the given kind, and no {@link #keepSnapshot()} or {@link
   * #needRecursion()}.
   */
  public AbstractResult2(AbstractResult kind) {
    this.kind = kind;
  }

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

  public boolean isNone() {
    return kind == AbstractResult.NONE;
  }

  public void update() {
    setKind(kind.union(AbstractResult.UPDATED));
  }

  public void losePrecision() {
    setKind(kind.union(AbstractResult.LOST_PRECISION));
  }

  public void taint() {
    setKind(AbstractResult.TAINTED);
  }

  public void merge(AbstractResult otherKind) {
    kind = kind.union(otherKind);
  }
}
