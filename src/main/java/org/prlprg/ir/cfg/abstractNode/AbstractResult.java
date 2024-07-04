package org.prlprg.ir.cfg.abstractNode;

public record AbstractResult(Kind kind, boolean keepSnapshot, boolean needRecursion) {
  public enum Kind {
    NONE,
    UPDATED,
    LOST_PRECISION,
    TAINTED
  }

  public static final AbstractResult NONE = new AbstractResult(Kind.NONE);
  public static final AbstractResult UPDATED = new AbstractResult(Kind.UPDATED);
  public static final AbstractResult LOST_PRECISION = new AbstractResult(Kind.LOST_PRECISION);
  public static final AbstractResult TAINTED = new AbstractResult(Kind.TAINTED);

  public AbstractResult(Kind kind) {
    this(kind, false, false);
  }

  public AbstractResult keepingSnapshot() {
    return new AbstractResult(kind, true, needRecursion);
  }

  public AbstractResult needingRecursion() {
    return new AbstractResult(kind, keepSnapshot, true);
  }

  public AbstractResult updated() {
    return new AbstractResult(Kind.UPDATED, keepSnapshot, needRecursion);
  }

  public AbstractResult withLostPrecision() {
    return new AbstractResult(Kind.LOST_PRECISION, keepSnapshot, needRecursion);
  }

  public AbstractResult tainted() {
    return new AbstractResult(Kind.TAINTED, keepSnapshot, needRecursion);
  }

  public AbstractResult merge(AbstractResult other) {
    return new AbstractResult(
        kind.ordinal() > other.kind.ordinal() ? kind : other.kind,
        keepSnapshot || other.keepSnapshot,
        needRecursion || other.needRecursion);
  }
}
