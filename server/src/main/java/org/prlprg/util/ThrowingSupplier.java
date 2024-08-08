package org.prlprg.util;

import java.util.function.Supplier;

/** {@link java.util.function.Supplier} that may throw an error or exception. */
public interface ThrowingSupplier<T> extends Supplier<T> {

  static <R> R get(ThrowingSupplier<R> supplier) {
    return supplier.get();
  }

  T getWithException() throws Exception;

  @Override
  default T get() {
    try {
      return getWithException();
    } catch (RuntimeException e) {
      throw e;
    } catch (Exception e) {
      throw new RuntimeException(e);
    }
  }
}
