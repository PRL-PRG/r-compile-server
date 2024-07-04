package org.prlprg.ir.cfg.abstractNode;

import org.prlprg.ir.type.lattice.Lattice;
import org.prlprg.util.Pair;

/**
 * A lattice used for abstract interpretation.
 *
 * <p>This doesn't actually implement {@link Lattice} because we don't need any of its methods, but
 * it could.
 */
public interface AbstractNode<Self> {
  Pair<AbstractResult, Self> merge(Self other);
}
