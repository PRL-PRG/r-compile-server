package org.prlprg.ir.cfg.builder;

import javax.annotation.Nullable;
import org.prlprg.ir.cfg.BB;
import org.prlprg.ir.cfg.Jump;
import org.prlprg.ir.cfg.JumpData;

/**
 * Constructs a {@link Jump} to be inserted in the middle of a {@link BB}.
 *
 * <p>This will split the BB unless this is being appended and its jump is unset. If split, usually
 * one of the targets are the BB's remaining instructions.
 *
 * @param <I> The type of jump to insert.
 */
@FunctionalInterface
public non-sealed interface JumpInsertion<I extends Jump> extends BBInsertion<I> {
  /**
   * Given the BB with the instructions after this jump, compute the jump data to insert. {@code
   * instrsAfter} will be {@code null} if the jump is being appended to a BB whose jump is unset.
   *
   * <p>The returned value will usually have the given BB as one of its targets; although it doesn't
   * have to.
   */
  JumpData<? extends I> compute(@Nullable BB instrsAfter);
}
