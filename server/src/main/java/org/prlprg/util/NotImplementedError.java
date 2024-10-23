package org.prlprg.util;

/**
 * Thrown by code which is not yet implemented; thrown instead of the implementation you will write
 * later.
 */
public class NotImplementedError extends Error {
  /** Throw this for an unimplemented switch case. */
  public NotImplementedError(Object switchCase) {
    super("Sorry, this case is not yet implemented: " + switchCase);
  }

  /** Throw this for any unimplemented code. */
  public NotImplementedError() {
    super("Sorry, this code is not yet implemented");
  }
}
