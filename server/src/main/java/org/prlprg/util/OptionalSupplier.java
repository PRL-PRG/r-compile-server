package org.prlprg.util;

import javax.annotation.Nullable;

/**
 * {@link java.util.function.Supplier Supplier} variant which may explicitly return {@code null}.
 */
public interface OptionalSupplier<T> {
  /** Get the next element, or {@code null} if there are no more elements. */
  @Nullable T get();
}
