package org.prlprg.bc2ir;

import org.prlprg.ir.cfg.CFG;
import org.prlprg.ir.closure.ClosureVersion;
import org.prlprg.ir.closure.Promise;

/**
 * Compute {@linkplain ClosureVersion.Properties closure} or {@linkplain Promise.Properties promise}
 * properties of a {@linkplain CFG control-flow graph}.
 */
public class PropertiesComputer {
  /** Compute properties for the closure version whose body is the given CFG. */
  static ClosureVersion.Properties computeClosureVersionProperties(CFG cfg) {
    // TODO
    return ClosureVersion.Properties.EMPTY;
  }

  /** Compute properties for the promise whose code is the given CFG. */
  static Promise.Properties computePromiseProperties(CFG cfg) {
    // TODO
    return Promise.Properties.EMPTY;
  }
}
