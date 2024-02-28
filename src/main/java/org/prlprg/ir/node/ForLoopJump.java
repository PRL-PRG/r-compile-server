package org.prlprg.ir.node;

/**
 * {@code StartFor} or {@code StepFor} instruction, which is a {@link Jump} that returns 2 values.
 */
public interface ForLoopJump<D extends ForLoopJump.Data> extends Jump<D> {
  /**
   * A special SEXP encoding an `R_loopinfo_t` struct which is only used by other loop instructions.
   */
  RValue loopInfo();

  /** The current index or element of the loop. */
  RValue loopVar();

  sealed interface Data extends Jump.Data permits Jumps.ForLoop {
    RValue seq();
  }
}
