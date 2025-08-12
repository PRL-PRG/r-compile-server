package org.prlprg.util;

import java.util.List;
import java.util.function.Function;
import org.jetbrains.annotations.Unmodifiable;
import org.jetbrains.annotations.UnmodifiableView;

public class Lists {
  /**
   * Returns an unmodifiable list with the elements in the original list transformed using the given
   * function. The transformation happens within this call, and further updates to the original list
   * don't affect the returned list.
   */
  public static <I, O> @Unmodifiable List<O> mapStrict(List<I> list, Function<I, O> mapper) {
    return list.stream().map(mapper).toList();
  }

  /**
   * Returns a readonly list which lazily maps the elements in the original list using the given
   * function. As the original list is updated, so is the returned list.
   *
   * <p>The function should be fast and pure, since the elements are computed every time they're
   * accessed.
   */
  public static <I, O> @UnmodifiableView List<O> mapLazy(List<I> list, Function<I, O> mapper) {
    return new MapListView<>(list, mapper);
  }

  /** Returns a readonly list which lazily concatenates the elements in both lists. */
  public static <T> @UnmodifiableView List<T> concatLazy(List<? extends T> a, List<? extends T> b) {
    return new ConcatListView<>(a, b);
  }

  /** Returns a readonly list which lazily concatenates the elements in the three lists. */
  public static <T> @UnmodifiableView List<T> concatLazy(
      List<? extends T> a, List<? extends T> b, List<? extends T> c) {
    return new ConcatListView<>(a, new ConcatListView<>(b, c));
  }

  private Lists() {}
}
