package org.prlprg.util;

/** A function that takes three arguments and returns nothing. */
@FunctionalInterface
public interface TriConsumer<T, U, V> {
  void accept(T t, U u, V v);
}
