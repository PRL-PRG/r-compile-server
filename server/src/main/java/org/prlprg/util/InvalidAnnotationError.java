package org.prlprg.util;

/**
 * Error thrown when a syntax node has an annotation whose invariants it doesn't conform to, or the
 * annotation's own invariants are broken.
 *
 * <p>For example, {@link org.jetbrains.annotations.Unmodifiable} applied to a return value which is
 * modifiable, if the compiler or runtime could detect, would throw this.
 */
public class InvalidAnnotationError extends Error {
  private final Object target;

  public InvalidAnnotationError(Object target, String message) {
    super("on " + target + ": " + message);
    this.target = target;
  }

  public InvalidAnnotationError(Object target, String message, Throwable cause) {
    super("on " + target + ": " + message, cause);
    this.target = target;
  }

  /** The object with the invalid annotation. */
  public Object target() {
    return target;
  }
}
