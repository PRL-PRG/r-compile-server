package org.prlprg.ir.analysis.scope;

/**
 * The result of merging or updating an {@link AbstractNode}.
 *
 * <p>As a general rule, a method returns this and takes a subclass of {@link AbstractNode}
 * (including as {@code self}), then the object it takes is mutated iff the return value isn't
 * {@link #NONE}. On {@link AbstractNode#merge(Object)} and {@link AbstractNode#mergeExit(Object)},
 * only the receiver {@code self} is mutated, parts of the other object to-be-merged are cloned
 * where necessary.
 */
public enum AbstractResult {
  /** No change. */
  NONE,
  /** A change. */
  UPDATED,
  /** A change, and the node was "widened" i.e. is less precise (more unknown) than before. */
  LOST_PRECISION,
  /** A change, and the node was "tainted" i.e. became very imprecise (very unknown). */
  TAINTED;

  /**
   * Returns the greater result, where they are ordered as follows:
   *
   * <ul>
   *   <li>{@link #NONE} &lt; {@link #UPDATED} &lt; {@link #LOST_PRECISION} &lt; {@link #TAINTED}.
   * </ul>
   */
  public AbstractResult union(AbstractResult other) {
    return ordinal() > other.ordinal() ? this : other;
  }
}
