package org.prlprg.util;

import org.jspecify.annotations.Nullable;

/**
 * {@link java.util.function.Supplier Supplier} variant which may explicitly return {@code null}.
 */
@FunctionalInterface
public interface OptionalSupplier<T> {
  /** Get the next element, or {@code null} if there are no more elements. */
  @Nullable T get();
}
