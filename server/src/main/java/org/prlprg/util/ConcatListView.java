package org.prlprg.util;

import java.util.Arrays;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import java.util.ListIterator;
import org.jetbrains.annotations.UnmodifiableView;

/** Readonly view created by concatenating two lists. */
@UnmodifiableView
final class ConcatListView<T> implements List<T> {
  // don't care about other `...View` duplicated code because it's all boilerplate - CPD-OFF
  private final List<? extends T> a;
  private final List<? extends T> b;

  public ConcatListView(List<? extends T> a, List<? extends T> b) {
    this.a = a;
    this.b = b;
  }

  @Override
  public int size() {
    return a.size() + b.size();
  }

  @Override
  public boolean isEmpty() {
    return a.isEmpty() && b.isEmpty();
  }

  @Override
  public boolean contains(Object o) {
    return a.contains(o) || b.contains(o);
  }

  @Override
  public Iterator<T> iterator() {
    return new Iterator<>() {
      private final Iterator<? extends T> aIt = a.iterator();
      private final Iterator<? extends T> bIt = b.iterator();

      @Override
      public boolean hasNext() {
        return aIt.hasNext() || bIt.hasNext();
      }

      @Override
      public T next() {
        return aIt.hasNext() ? aIt.next() : bIt.next();
      }
    };
  }

  @Override
  public Object[] toArray() {
    var result = new Object[size()];
    var index = 0;
    for (var elem : a) {
      result[index++] = elem;
    }
    for (var elem : b) {
      result[index++] = elem;
    }
    return result;
  }

  @Override
  @SuppressWarnings("unchecked")
  public <U> U[] toArray(U[] array) {
    var size = size();
    U[] result = array.length >= size ? array : Arrays.copyOf(array, size);
    var index = 0;
    for (var elem : a) {
      result[index++] = (U) elem;
    }
    for (var elem : b) {
      result[index++] = (U) elem;
    }
    return result;
  }

  @Override
  public boolean add(T t) {
    throw new UnsupportedOperationException("Can't mutate `ConcatListView`");
  }

  @Override
  public boolean remove(Object o) {
    throw new UnsupportedOperationException("Can't mutate `ConcatListView`");
  }

  @Override
  public boolean containsAll(Collection<?> c) {
    return c.stream().allMatch(this::contains);
  }

  @Override
  public boolean addAll(Collection<? extends T> c) {
    throw new UnsupportedOperationException("Can't mutate `ConcatListView`");
  }

  @Override
  public boolean addAll(int index, Collection<? extends T> c) {
    throw new UnsupportedOperationException("Can't mutate `ConcatListView`");
  }

  @Override
  public boolean removeAll(Collection<?> c) {
    throw new UnsupportedOperationException("Can't mutate `ConcatListView`");
  }

  @Override
  public boolean retainAll(Collection<?> c) {
    throw new UnsupportedOperationException("Can't mutate `ConcatListView`");
  }

  @Override
  public void clear() {
    throw new UnsupportedOperationException("Can't mutate `ConcatListView`");
  }

  @Override
  public T get(int index) {
    var aSize = a.size();
    return index < aSize ? a.get(index) : b.get(index - aSize);
  }

  @Override
  public T set(int index, T element) {
    throw new UnsupportedOperationException("Can't mutate `ConcatListView`");
  }

  @Override
  public void add(int index, T element) {
    throw new UnsupportedOperationException("Can't mutate `ConcatListView`");
  }

  @Override
  public T remove(int index) {
    throw new UnsupportedOperationException("Can't mutate `ConcatListView`");
  }

  @Override
  public int indexOf(Object o) {
    var index = a.indexOf(o);
    if (index >= 0) {
      return index;
    }
    index = b.indexOf(o);
    return index >= 0 ? index + a.size() : -1;
  }

  @Override
  public int lastIndexOf(Object o) {
    var index = b.lastIndexOf(o);
    if (index >= 0) {
      return index + a.size();
    }
    return a.lastIndexOf(o);
  }

  @Override
  public ListIterator<T> listIterator() {
    return listIterator(0);
  }

  @Override
  public ListIterator<T> listIterator(int index) {
    return new ListIterator<>() {
      private int currentIndex = index;
      private final int aSize = a.size();

      @Override
      public boolean hasNext() {
        return currentIndex < size();
      }

      @Override
      public T next() {
        currentIndex++;
        return currentIndex <= aSize ? a.get(currentIndex) : b.get(currentIndex - aSize);
      }

      @Override
      public boolean hasPrevious() {
        return currentIndex > 0;
      }

      @Override
      public T previous() {
        currentIndex--;
        return currentIndex < aSize ? a.get(currentIndex) : b.get(currentIndex - aSize);
      }

      @Override
      public int nextIndex() {
        return currentIndex;
      }

      @Override
      public int previousIndex() {
        return currentIndex - 1;
      }

      @Override
      public void remove() {
        throw new UnsupportedOperationException("Can't mutate `ConcatListView`");
      }

      @Override
      public void set(T t) {
        throw new UnsupportedOperationException("Can't mutate `ConcatListView`");
      }

      @Override
      public void add(T t) {
        throw new UnsupportedOperationException("Can't mutate `ConcatListView`");
      }
    };
  }

  @Override
  public List<T> subList(int fromIndex, int toIndex) {
    var aSize = a.size();
    if (toIndex <= aSize) {
      @SuppressWarnings("unchecked")
      var result = (List<T>) a.subList(fromIndex, toIndex);
      return result;
    } else if (fromIndex >= aSize) {
      @SuppressWarnings("unchecked")
      var result = (List<T>) b.subList(fromIndex - aSize, toIndex - aSize);
      return result;
    } else {
      return new ConcatListView<>(a.subList(fromIndex, aSize), b.subList(0, toIndex - aSize));
    }
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
  // don't care about other `...View` duplicated code because it's all boilerplate - CPD-ON
}
