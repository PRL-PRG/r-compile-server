package org.prlprg.util;

import java.util.Iterator;
import java.util.function.Function;

/** Read-write view created by applying a function to each of another iterable's elements. */
final class MapIterableView<I, O> implements Iterable<O> {
  private final Iterable<I> backing;
  private final Function<I, O> f;

  public MapIterableView(Iterable<I> backing, Function<I, O> f) {
    this.backing = backing;
    this.f = f;
  }

  @Override
  public Iterator<O> iterator() {
    return new Iterator<>() {
      private final Iterator<I> backingIt = backing.iterator();

      @Override
      public boolean hasNext() {
        return backingIt.hasNext();
      }

      @Override
      public O next() {
        return f.apply(backingIt.next());
      }

      @Override
      public void remove() {
        backingIt.remove();
      }
    };
  }
}
