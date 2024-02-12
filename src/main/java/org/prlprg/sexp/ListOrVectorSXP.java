package org.prlprg.sexp;

/** A list or vector SEXP (the 2 main collection types in R) */
public sealed interface ListOrVectorSXP<T> extends SEXP, Iterable<T> permits ListSXP, VectorSXP {
  /**
   * Get the element at index i.
   *
   * @throws IndexOutOfBoundsException if i is out of bounds.
   */
  T get(int i);

  /** The number of elements in this collection. */
  int size();

  /** Is the collection empty? */
  default boolean isEmpty() {
    return size() == 0;
  }

  @Override
  ListOrVectorSXP<T> withAttributes(Attributes attributes);
}
