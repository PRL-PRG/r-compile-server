package org.prlprg.ir.cfg;

import org.prlprg.ir.closure.ClosureVersion;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.Printer;

/** A to {@linkplain Parser#parse(Class)} and {@linkplain Printer#print(Object)} {@link CFG} in a
 *  {@link ClosureVersion}.
 *
 * <p>It stores a reference the outer version to add contextual information.
 */
public interface ClosureVersionContext {
  ClosureVersion version();
}
