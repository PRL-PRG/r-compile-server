package org.prlprg.util;

import java.util.Arrays;
import java.util.Collection;
import java.util.Comparator;
import java.util.Iterator;
import java.util.Set;

/**
 * Set backed by an array, so it's good for sets which will only contain at most a few elements.
 * This relies on the object's hash-code to determine equality, it doesn't use {@link Comparable}.
 *
 * <p><a
 * href="https://stackoverflow.com/questions/12346594/small-sets-in-java-which-datastructure">Source</a>
 */
public class SmallSet<T> implements Set<T> {
  private Object[] array;
  private int size = 0;

  /**
   * Create a new SmallSet with the given capacity. If the capacity is exceeded, it will reallocate.
   */
  public SmallSet(int capacity) {
    array = new Object[capacity];
    Arrays.fill(array, -1);
  }

  /** Get the element which, since this is backed by an array, is stored at the given index. */
  @SuppressWarnings("unchecked")
  public T get(int position) {
    return (T) array[position];
  }

  @Override
  public boolean add(T key) {
    var index = Arrays.binarySearch(array, 0, size, key, Comparator.comparingInt(Object::hashCode));
    if (index < 0) {
      var insertIndex = -index - 1;

      if (size < array.length - 1) {
        if (insertIndex < size) {
          System.arraycopy(array, insertIndex, array, insertIndex + 1, size - insertIndex);
        }
        array[insertIndex] = key;
      } else {
        var newArray = new Object[Math.round(array.length * 1.5f)];
        System.arraycopy(array, 0, newArray, 0, insertIndex);
        System.arraycopy(array, insertIndex, newArray, insertIndex + 1, array.length - insertIndex);
        newArray[insertIndex] = key;
        array = newArray;
      }

      size++;
      return true;
    }
    return false;
  }

  @Override
  public boolean remove(Object o) {
    var index = Arrays.binarySearch(array, 0, size, o, Comparator.comparingInt(Object::hashCode));
    if (index >= 0) {
      if (index < size - 1) {
        System.arraycopy(array, index + 1, array, index, size - index - 1);
      }
      size--;
      return true;
    }
    return false;
  }

  @Override
  public boolean contains(Object key) {
    return Arrays.binarySearch(array, key) >= 0;
  }

  @Override
  public boolean addAll(Collection<? extends T> c) {
    var changed = false;
    for (var o : c) {
      changed |= add(o);
    }
    return changed;
  }

  @Override
  public boolean retainAll(Collection<?> c) {
    var changed = false;
    for (var i = 0; i < size; i++) {
      if (!c.contains(array[i])) {
        remove(array[i]);
        changed = true;
      }
    }
    return changed;
  }

  @Override
  public boolean removeAll(Collection<?> c) {
    var changed = false;
    for (var o : c) {
      changed |= remove(o);
    }
    return changed;
  }

  @Override
  public boolean containsAll(Collection<?> c) {
    for (var o : c) {
      if (!contains(o)) {
        return false;
      }
    }
    return true;
  }

  @Override
  public void clear() {
    size = 0;
  }

  @Override
  public int size() {
    return size;
  }

  @Override
  public boolean isEmpty() {
    return size == 0;
  }

  @Override
  public Iterator<T> iterator() {
    return new Iterator<>() {
      private int index = 0;

      @Override
      public boolean hasNext() {
        return index < size;
      }

      @Override
      public T next() {
        return get(index++);
      }
    };
  }

  @Override
  public Object[] toArray() {
    return Arrays.copyOf(array, size);
  }

  @SuppressWarnings({"unchecked", "SuspiciousSystemArraycopy"})
  @Override
  public <T1> T1[] toArray(T1[] a) {
    if (a.length < size) {
      return (T1[]) Arrays.copyOf(array, size, a.getClass());
    } else {
      System.arraycopy(array, 0, a, 0, size);
      if (a.length > size) {
        a[size] = null;
      }
      return a;
    }
  }
}
