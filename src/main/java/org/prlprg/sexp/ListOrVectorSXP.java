package org.prlprg.sexp;

/**
 * A list or vector SEXP (2 main collection types in GNU-R)
 */
public sealed interface ListOrVectorSXP<T> extends SEXP, Iterable<T> permits ListSXP, VectorSXP {
  T get(int i);

  int size();

  default boolean isEmpty() {
    return size() == 0;
  }

  @Override
  ListOrVectorSXP<T> withAttributes(Attributes attributes);
}
