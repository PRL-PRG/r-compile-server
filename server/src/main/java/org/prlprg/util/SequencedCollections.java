package org.prlprg.util;

import java.util.SequencedCollection;
import java.util.function.Function;
import org.jetbrains.annotations.Unmodifiable;
import org.jetbrains.annotations.UnmodifiableView;

public class SequencedCollections {
  /**
   * Returns an unmodifiable sequenced collection with the elements in the original sequenced
   * collection transformed using the given function. The transformation happens within this call,
   * and further updates to the original sequenced collection don't affect the returned sequenced
   * collection.
   */
  public static <I, O> @Unmodifiable SequencedCollection<O> map(
      SequencedCollection<I> sequencedCollection, Function<I, O> mapper) {
    return sequencedCollection.stream().map(mapper).toList();
  }

  /**
   * Returns a readonly sequenced collection whose iterator lazily maps the elements in the original
   * iterator using the given function. Further updates to the original sequenced collection will
   * affect the returned sequenced collection.
   *
   * <p>The function should be fast and pure, since the elements are computed every time they're
   * accessed.
   */
  public static <I, O> @UnmodifiableView SequencedCollection<O> lazyMapView(
      SequencedCollection<I> sequencedCollection, Function<I, O> mapper) {
    return new MapSequencedCollectionView<>(sequencedCollection, mapper);
  }
}
