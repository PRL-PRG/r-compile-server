package org.prlprg.util;

import org.jspecify.annotations.Nullable;

/**
 * {@link java.util.function.Function Function} variant which may explicitly return {@code null}.
 */
@FunctionalInterface
public interface OptionalFunction<I, O> {
  /** Call the function. */
  @Nullable O apply(I input);
}
