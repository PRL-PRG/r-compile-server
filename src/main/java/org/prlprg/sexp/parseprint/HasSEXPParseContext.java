package org.prlprg.sexp.parseprint;

import org.prlprg.parseprint.Parser;
import org.prlprg.sexp.SEXP;

/**
 * A {@link Parser} context that contains an {@link SEXPParseContext}, so it can be manually
 * threaded.
 *
 * <p>See the code in {@link org.prlprg.ir.cfg.CFGParsePrint} for an example.
 */
public interface HasSEXPParseContext {
  /** The inner context for parsing {@link SEXP}s. */
  SEXPParseContext sexpParseContext();
}
