package org.prlprg.ir.cfg.builder;

import org.prlprg.ir.cfg.BB;
import org.prlprg.ir.cfg.Jump;
import org.prlprg.ir.cfg.JumpData;

/**
 * Constructs a {@link Jump} to be inserted in the middle of a {@link BB}, splitting it into two.
 *
 * @param <I> The type of jump to insert.
 */
@FunctionalInterface
public interface JumpInsertion<I extends Jump> {
  /**
   * Given the BB with the instructions after this jump, compute the jump data to insert.
   *
   * <p>If there are no instructions after, {@code instrsAfter} will be non-null but empty.
   *
   * <p>The returned value will usually have the given BB as one of its targets; although it doesn't
   * have to.
   */
  JumpData<I> compute(BB instrsAfter);
}
