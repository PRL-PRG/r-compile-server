package org.prlprg.util;

import com.google.common.collect.Streams;
import java.util.Iterator;
import java.util.function.Function;

public class Iterables {
  /**
   * Returns an iterable with the elements in the original iterable transformed using the given
   * function. The transformation happens within this call, and further updates to the original
   * iterable don't affect the returned iterable.
   */
  public static <I, O> Iterable<O> map(Iterable<I> iterable, Function<I, O> mapper) {
    return Streams.stream(iterable).map(mapper)::iterator;
  }

  /**
   * Returns an iterable whose iterator lazily maps the elements in the original iterator using the
   * given function. Further updates to the original iterable will affect the returned iterable.
   *
   * <p>Because Java iterators implement {@link Iterator#remove() #remove()}, the mapped iterator
   * also supports {@link Iterator#remove() #remove()} if the original does, and will forward it to
   * the original.
   */
  public static <I, O> Iterable<O> lazyMapView(Iterable<I> iterable, Function<I, O> mapper) {
    return new MapIterableView<>(iterable, mapper);
  }
}
