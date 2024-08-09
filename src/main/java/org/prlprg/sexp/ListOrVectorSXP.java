package org.prlprg.sexp;

import java.util.stream.Stream;
import java.util.stream.StreamSupport;

/** A list or vector SEXP (the 2 main collection types in R) */
public sealed interface ListOrVectorSXP<T> extends ValueSXP, Iterable<T> permits ListSXP, VectorSXP {
  /**
   * Get the element at index i.
   *
   * @throws IndexOutOfBoundsException if i is out of bounds.
   */
  T get(int i);

  /** The number of elements in this collection. */
  int size();

  /**
   * Get the element at the last index.
   *
   * @throws IndexOutOfBoundsException if empty.
   */
  default T last() {
    return get(size() - 1);
  }

  /** Is the collection empty? */
  default boolean isEmpty() {
    return size() == 0;
  }

  @Override
  ListOrVectorSXP<T> withAttributes(Attributes attributes);

  default Stream<T> stream() {
    return StreamSupport.stream(spliterator(), false);
  }
}
