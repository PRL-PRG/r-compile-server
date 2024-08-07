package org.prlprg.util;

/**
 * Thrown when a switch case or other code was presumed to be trivially unreachable, but apparently
 * not.
 */
public class UnreachableError extends AssertionError {
  /** Throw this when a switch case or other code is trivially unreachable. */
  public UnreachableError() {
    super("\"Unreachable\" code reached");
  }

  /**
   * Throw this when a switch case or other code is trivially unreachable, but not too trivial you
   * want to provide an explanation.
   */
  public UnreachableError(String message) {
    super("\"Unreachable\" code reached: " + message);
  }
}
