package org.prlprg.util;

/**
 * Thrown by code which is not yet implemented; thrown instead of the implementation you will write
 * later.
 *
 * <p>This shouldn't be thrown by code that isn't in development. e.g. if there's a {@code switch}
 * which should be exhaustive but isn't checked by the compiler, the fallback should not throw
 * {@link NotImplementedError}, instead it should throw {@link UnreachableError} or {@link
 * AssertionError}.
 */
public class NotImplementedError extends Error {
  /**
   * Throw this for an unimplemented switch case.
   *
   * <p>This shouldn't be thrown by code that isn't in development. e.g. if there's a {@code switch}
   * which should be exhaustive but isn't checked by the compiler, the fallback should not throw
   * {@link NotImplementedError}, instead it should throw {@link UnreachableError} or {@link
   * AssertionError}.
   */
  public NotImplementedError(Object switchCase) {
    super("Sorry, this case is not yet implemented: " + switchCase);
  }

  /**
   * Throw this for any unimplemented code.
   *
   * <p>This shouldn't be thrown by code that isn't in development. e.g. if there's a {@code switch}
   * which should be exhaustive but isn't checked by the compiler, the fallback should not throw
   * {@link NotImplementedError}, instead it should throw {@link UnreachableError} or {@link
   * AssertionError}.
   */
  public NotImplementedError() {
    super("Sorry, this code is not yet implemented");
  }
}
