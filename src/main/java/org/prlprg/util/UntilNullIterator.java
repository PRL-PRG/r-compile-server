package org.prlprg.util;

import java.util.Iterator;
import javax.annotation.Nullable;

/** Call a function to generate the next elements, stop when said function returns {@code null}. */
public class UntilNullIterator<T> implements Iterator<T> {
  private final OptionalSupplier<T> supplier;
  private @Nullable T next = null;

  public UntilNullIterator(OptionalSupplier<T> supplier) {
    this.supplier = supplier;
    computeNext();
  }

  @Override
  public boolean hasNext() {
    return next != null;
  }

  @Override
  public T next() {
    if (next == null) {
      throw new IllegalStateException("No more elements");
    }
    var result = next;
    computeNext();
    return result;
  }

  private void computeNext() {
    next = supplier.get();
  }
}
