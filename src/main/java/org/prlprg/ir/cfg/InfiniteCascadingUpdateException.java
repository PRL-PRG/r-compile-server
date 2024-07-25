package org.prlprg.ir.cfg;

import org.prlprg.ir.cfg.InstrData.CascadingUpdatedInstrs;

/** Thrown when an instruction's output type updates, which being an input of another instruction,
 * causes the other instruction's output type to update, and so on, until the original instruction
 * is updated again.
 */
public class InfiniteCascadingUpdateException extends RuntimeException {
  InfiniteCascadingUpdateException(CascadingUpdatedInstrs cascade) {
    super(cascade.toString());
  }
}
