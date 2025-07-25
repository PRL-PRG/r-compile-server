package org.prlprg.fir.ir.cfg.cursor;

import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.instruction.Jump;

/**
 * Constructs a {@link Jump} to be inserted in the middle of a {@link BB}, splitting it into two.
 */
@FunctionalInterface
public interface JumpInsertion {
  /**
   * Given the BB with the instructions after this jump, compute the jump data to insert.
   *
   * <p>If there are no instructions after, {@code instrsAfter} will be non-null but empty.
   *
   * <p>The returned value will usually have the given BB as one of its targets; although it doesn't
   * have to.
   */
  Jump compute(BB instrsAfter);
}
