package org.prlprg.util;

import com.google.common.collect.ForwardingCollection;
import java.util.ArrayList;
import java.util.Collection;
import java.util.List;
import java.util.SequencedSet;

/** A small set that stores its elements in an {@link ArrayList} and does linear search. */
public class SmallListSet<T> extends ForwardingCollection<T> implements SequencedSet<T> {
  private final List<T> list;

  /** Create a new ListSet with a default capacity of 4. */
  public SmallListSet() {
    list = new ArrayList<>(4);
  }

  /** Create a new ListSet with the given capacity. */
  public SmallListSet(int capacity) {
    list = new ArrayList<>(capacity);
  }

  /**
   * This can't be exposed because it stores {@code existing} directly (vs copy).
   *
   * <p>It's required for {@link #reversed()}.
   */
  private SmallListSet(List<T> existing) {
    list = existing;
  }

  @Override
  protected Collection<T> delegate() {
    return list;
  }

  @Override
  public boolean add(T element) {
    if (contains(element)) {
      return false;
    }
    return super.add(element);
  }

  @Override
  public SequencedSet<T> reversed() {
    return new SmallListSet<>(list.reversed());
  }
}
