package org.prlprg.sexp;

import com.google.common.collect.Iterators;
import com.google.common.collect.UnmodifiableIterator;
import javax.annotation.concurrent.Immutable;

/**
 * Class for representing a scalar SEXP of a primitive type with no attributes.
 */
@Immutable
abstract non-sealed class EmptyVectorSXPImpl<T> implements VectorSXP<T> {
  protected EmptyVectorSXPImpl() {}

  @Override
  public UnmodifiableIterator<T> iterator() {
    return Iterators.forArray();
  }

  @Override
  public T get(int i) {
    throw new IndexOutOfBoundsException();
  }

  @Override
  public int size() {
    return 0;
  }

  @Override
  public String toString() {
    return "<EMPTY_" + type() + ">";
  }

  @Override
  public Attributes attributes() {
    return Attributes.NONE;
  }
}
