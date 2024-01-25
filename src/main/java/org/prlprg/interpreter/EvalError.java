package org.prlprg.interpreter;

/** An concrete error encountered during abstract or concrete interpretation. Basically, Rf_error.
 *
 * @apiNote This class derives {@link Throwable} but not {@link Exception} because we believe it's not an "exceptional"
 * case the same way regular exceptions are: it's not a bug in your program ({@link RuntimeException}), and its not
 * something which will rarely happen {@link java.io.IOException}. But maybe it should be an {@link Exception}
 * (definitely not a {@link RuntimeException} though). */
public abstract class EvalError extends Throwable {
}
