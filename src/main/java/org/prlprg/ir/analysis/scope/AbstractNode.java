package org.prlprg.ir.analysis.scope;

import org.prlprg.ir.type.lattice.Lattice;

/**
 * A lattice used for abstract interpretation.
 *
 * <p>This doesn't actually implement {@link Lattice} because we don't need any of its methods, but
 * it could.
 */
public interface AbstractNode<Self> extends Cloneable {
  /**
   * Merge in-place with {@code other} and return if we changed.
   *
   * <p>After this call, you can't use {@code other} again (it's effectively "moved").
   */
  AbstractResult merge(Self other);

  default AbstractResult mergeExit(Self other) {
    return merge(other);
  }

  /** Deep-copy the node. */
  Self clone();
}
