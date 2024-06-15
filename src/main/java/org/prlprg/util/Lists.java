package org.prlprg.util;

import java.util.Collections;
import java.util.List;
import java.util.function.Function;
import org.jetbrains.annotations.Unmodifiable;
import org.jetbrains.annotations.UnmodifiableView;

public class Lists {
  /** Assuming the list is ordered, insert the element preserving the order. */
  public static <T extends Comparable<T>> void binaryInsert(List<T> list, T elem) {
    var index = Collections.binarySearch(list, elem);
    if (index < 0) {
      index = -index - 1;
    }
    list.add(index, elem);
  }

  /**
   * Returns an unmodifiable list with the elements in the original list transformed using the given
   * function. The transformation happens within this call, and further updates to the original list
   * don't affect the returned list.
   */
  public static <I, O> @Unmodifiable List<O> map(List<I> list, Function<I, O> mapper) {
    return list.stream().map(mapper).toList();
  }

  /**
   * Returns an unmodifiable list which lazily maps the elements in the original list using the
   * given function. As the original list is updated, so is the returned list.
   *
   * <p>The function should be fast and pure, since the elements are computed every time they're
   * accessed.
   */
  public static <I, O> @UnmodifiableView List<O> lazyMapView(List<I> list, Function<I, O> mapper) {
    return new MapListView<>(list, mapper);
  }

  private Lists() {}
}
