package org.prlprg.sexp.parseprint;

import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.SEXP;

/**
 * A {@link Printer} context that contains an {@link SEXPPrintContext}, so it can be manually
 * threaded.
 *
 * <p>See the code in {@link org.prlprg.ir.cfg.CFGParsePrint} for an example.
 */
public interface HasSEXPPrintContext {
  /** The inner context for printing {@link SEXP}s. */
  SEXPPrintContext sexpPrintContext();
}
