package org.prlprg.util;

import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;
import java.util.Comparator;
import java.util.Iterator;
import java.util.SequencedSet;

/**
 * A small set backed by an array and stores elements in order based on the given comparator.
 *
 * <p>"Binary" because it fetches and inserts using binary search.
 *
 * <p><a
 * href="https://stackoverflow.com/questions/12346594/small-sets-in-java-which-datastructure">Source</a>
 */
public class SmallBinarySet<T> implements SequencedSet<T> {
  private final Comparator<T> comparator;
  // This can't be `T[]`, because generic type parameters are erased but arrays aren't.
  // Specifically, we'd need to take a `Class<T>` in the constructor to create the array,
  // and AFAIK it doesn't have any benefits outside of making the internal implementation type-safe
  // (meanwhile it hurts the API and actually slightly hurts performance).
  private Object[] array;
  private int size = 0;

  /**
   * Create a new SmallSet with a default capacity of 4. If the capacity is exceeded, it will
   * reallocate.
   *
   * @param comparator Determines how the elements are ordered in the set. Also used for equality:
   *     <i>if you attempt to {@linkplain #add(Object) add} an element that the comparator states is
   *     equal to an existing one, it won't be added.
   */
  public SmallBinarySet(Comparator<T> comparator) {
    this(4, comparator);
  }

  /**
   * Create a new SmallSet with the given capacity. If the capacity is exceeded, it will reallocate.
   *
   * @param comparator Determines how the elements are ordered in the set. Also used for equality:
   *     <i>if the comparator states an inserted element equals an existing one, it will replace the
   *     old one.
   */
  public SmallBinarySet(int capacity, Comparator<T> comparator) {
    this.comparator = comparator;
    array = new Object[capacity];
    Arrays.fill(array, -1);
  }

  /** Get the element which, since this is backed by an array, is stored at the given index. */
  @SuppressWarnings("unchecked")
  public T get(int position) {
    return (T) array[position];
  }

  /** Replace the element at the given index, asserting that it's considered equal. */
  public void equalReplace(int position, T element) {
    assert comparator.compare(get(position), element) == 0
        : "Element at position "
            + position
            + " is not equal to the given element: old="
            + get(position)
            + ", new="
            + element;
    array[position] = element;
  }

  /** Remove the element which, since this is backed by an array, is stored at the given index. */
  public void removeAt(int position) {
    if (position < size - 1) {
      System.arraycopy(array, position + 1, array, position, size - position - 1);
    }
    size--;
  }

  @Override
  public boolean add(T key) {
    var index = binarySearch(key);
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
    var index = binarySearch(o);
    if (index >= 0) {
      removeAt(index);
      return true;
    }
    return false;
  }

  @Override
  public boolean contains(Object key) {
    return binarySearch(key) >= 0;
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

      @Override
      public void remove() {
        removeAt(index);
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

  @Override
  public SequencedSet<T> reversed() {
    return new SequencedSet<>() {
      @Override
      public SequencedSet<T> reversed() {
        return SmallBinarySet.this;
      }

      @Override
      public int size() {
        return SmallBinarySet.this.size();
      }

      @Override
      public boolean isEmpty() {
        return SmallBinarySet.this.isEmpty();
      }

      @Override
      public boolean contains(Object o) {
        return SmallBinarySet.this.contains(o);
      }

      @Override
      public Iterator<T> iterator() {
        return new Iterator<>() {
          private int index = size;

          @Override
          public boolean hasNext() {
            return index > 0;
          }

          @Override
          public T next() {
            return get(--index);
          }

          @Override
          public void remove() {
            removeAt(index);
          }
        };
      }

      @Override
      public Object[] toArray() {
        var array = SmallBinarySet.this.toArray();
        Collections.reverse(Arrays.asList(array));
        return array;
      }

      @Override
      public <T1> T1[] toArray(T1[] a) {
        var array = SmallBinarySet.this.toArray(a);
        Collections.reverse(Arrays.asList(array));
        return array;
      }

      @Override
      public boolean add(T t) {
        return SmallBinarySet.this.add(t);
      }

      @Override
      public boolean remove(Object o) {
        return SmallBinarySet.this.remove(o);
      }

      @Override
      public boolean containsAll(Collection<?> c) {
        return SmallBinarySet.this.containsAll(c);
      }

      @Override
      public boolean addAll(Collection<? extends T> c) {
        return SmallBinarySet.this.addAll(c);
      }

      @Override
      public boolean removeAll(Collection<?> c) {
        return SmallBinarySet.this.removeAll(c);
      }

      @Override
      public boolean retainAll(Collection<?> c) {
        return SmallBinarySet.this.retainAll(c);
      }

      @Override
      public void clear() {
        SmallBinarySet.this.clear();
      }
    };
  }

  /**
   * Returns the index of the element if found, or the index it would be inserted negative and minus
   * one if not.
   *
   * <p>Specifically, it calls {@link Arrays#binarySearch(Object[], int, int, Object)} with the
   * given array, size, and comparator.
   */
  @SuppressWarnings("unchecked")
  private int binarySearch(Object element) {
    return Arrays.binarySearch(array, 0, size, element, (Comparator<Object>) comparator);
  }
}
