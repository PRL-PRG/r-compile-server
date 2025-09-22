package org.prlprg.util;

import java.util.Arrays;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import java.util.ListIterator;
import java.util.function.Function;
import org.jetbrains.annotations.UnmodifiableView;

/**
 * Readonly view created by applying a function to each of another {@linkplain List list}'s
 * elements.
 */
@UnmodifiableView
final class MapListView<I, O> implements List<O> {
  // don't care about other `Map...View` duplicated code because it's all boilerplate - CPD-OFF
  private final List<I> backing;
  private final Function<I, O> f;

  public MapListView(List<I> backing, Function<I, O> f) {
    this.backing = backing;
    this.f = f;
  }

  @Override
  public int size() {
    return backing.size();
  }

  @Override
  public boolean isEmpty() {
    return backing.isEmpty();
  }

  @Override
  public boolean contains(Object o) {
    return backing.stream().map(f).anyMatch(o::equals);
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
    };
  }

  @Override
  public Object[] toArray() {
    return backing.stream().map(f).toArray();
  }

  @Override
  public <T> T[] toArray(T[] a) {
    return backing.stream().map(f).toArray(size -> a.length >= size ? a : Arrays.copyOf(a, size));
  }

  @Override
  public boolean add(O o) {
    throw new UnsupportedOperationException();
  }

  @Override
  public boolean remove(Object o) {
    throw new UnsupportedOperationException();
  }

  @Override
  public boolean containsAll(Collection<?> c) {
    return c.stream().allMatch(this::contains);
  }

  @Override
  public boolean addAll(Collection<? extends O> c) {
    throw new UnsupportedOperationException();
  }

  @Override
  public boolean addAll(int index, Collection<? extends O> c) {
    throw new UnsupportedOperationException();
  }

  @Override
  public boolean removeAll(Collection<?> c) {
    throw new UnsupportedOperationException();
  }

  @Override
  public boolean retainAll(Collection<?> c) {
    throw new UnsupportedOperationException();
  }

  @Override
  public void clear() {
    throw new UnsupportedOperationException();
  }

  @Override
  public O get(int index) {
    return f.apply(backing.get(index));
  }

  @Override
  public O set(int index, O element) {
    throw new UnsupportedOperationException();
  }

  @Override
  public void add(int index, O element) {
    throw new UnsupportedOperationException();
  }

  @Override
  public O remove(int index) {
    throw new UnsupportedOperationException();
  }

  @Override
  public int indexOf(Object o) {
    for (int i = 0; i < backing.size(); i++) {
      if (o.equals(f.apply(backing.get(i)))) {
        return i;
      }
    }
    return -1;
  }

  @Override
  public int lastIndexOf(Object o) {
    for (int i = backing.size() - 1; i >= 0; i--) {
      if (o.equals(f.apply(backing.get(i)))) {
        return i;
      }
    }
    return -1;
  }

  @Override
  public ListIterator<O> listIterator() {
    return listIterator(0);
  }

  @Override
  public ListIterator<O> listIterator(int index) {
    return new ListIterator<>() {
      private final ListIterator<I> backingIt = backing.listIterator(index);

      @Override
      public boolean hasNext() {
        return backingIt.hasNext();
      }

      @Override
      public O next() {
        return f.apply(backingIt.next());
      }

      @Override
      public boolean hasPrevious() {
        return backingIt.hasPrevious();
      }

      @Override
      public O previous() {
        return f.apply(backingIt.previous());
      }

      @Override
      public int nextIndex() {
        return backingIt.nextIndex();
      }

      @Override
      public int previousIndex() {
        return backingIt.previousIndex();
      }

      @Override
      public void remove() {
        throw new UnsupportedOperationException();
      }

      @Override
      public void set(O o) {
        throw new UnsupportedOperationException();
      }

      @Override
      public void add(O o) {
        throw new UnsupportedOperationException();
      }
    };
  }

  @Override
  public List<O> subList(int fromIndex, int toIndex) {
    return new MapListView<>(backing.subList(fromIndex, toIndex), f);
  }

  @Override
  public boolean equals(Object obj) {
    if (this == obj) {
      return true;
    }
    if (!(obj instanceof List<?> other)) {
      return false;
    }
    if (size() != other.size()) {
      return false;
    }
    var it = other.iterator();
    for (var x : this) {
      var y = it.next();
      if (!x.equals(y)) {
        return false;
      }
    }
    return true;
  }

  @Override
  public int hashCode() {
    return this.stream().mapToInt(Object::hashCode).reduce(1, (a, b) -> 31 * a + b);
  }
  // don't care about other `Map...View` duplicated code because it's all boilerplate - CPD-ON
}
