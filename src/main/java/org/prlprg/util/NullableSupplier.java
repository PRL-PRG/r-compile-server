package org.prlprg.util;

import java.util.Optional;
import java.util.function.Supplier;
import javax.annotation.Nullable;

/**
 * {@link Supplier} (function that takes no arguments and returns a value) that may return {@code
 * null}.
 */
@FunctionalInterface
public interface NullableSupplier<T> {
  /** Returns the value, or {@code null} if there is none. */
  @Nullable T getNullable();

  /** Returns the value, or {@link Optional#empty()} if there is none. */
  default Optional<T> getOptional() {
    return Optional.ofNullable(getNullable());
  }
}
