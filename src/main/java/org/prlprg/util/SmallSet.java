package org.prlprg.util;

import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;
import java.util.Comparator;
import java.util.Iterator;
import java.util.SequencedSet;

/**
 * Set backed by an array, so it's good for sets which will only contain at most a few elements.
 * This relies on the object's hash-code to determine equality, it doesn't use {@link Comparable}.
 *
 * <p><a
 * href="https://stackoverflow.com/questions/12346594/small-sets-in-java-which-datastructure">Source</a>
 */
public class SmallSet<T> implements SequencedSet<T> {
  private Object[] array;
  private int size = 0;

  /**
   * Create a new SmallSet with a default capacity of 4. If the capacity is exceeded, it will
   * reallocate.
   */
  public SmallSet() {
    this(4);
  }

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

  /** Remove the element which, since this is backed by an array, is stored at the given index. */
  public void removeAt(int position) {
    if (position < size - 1) {
      System.arraycopy(array, position + 1, array, position, size - position - 1);
    }
    size--;
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
      removeAt(index);
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
        return SmallSet.this;
      }

      @Override
      public int size() {
        return SmallSet.this.size();
      }

      @Override
      public boolean isEmpty() {
        return SmallSet.this.isEmpty();
      }

      @Override
      public boolean contains(Object o) {
        return SmallSet.this.contains(o);
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
        var array = SmallSet.this.toArray();
        Collections.reverse(Arrays.asList(array));
        return array;
      }

      @Override
      public <T1> T1[] toArray(T1[] a) {
        var array = SmallSet.this.toArray(a);
        Collections.reverse(Arrays.asList(array));
        return array;
      }

      @Override
      public boolean add(T t) {
        return SmallSet.this.add(t);
      }

      @Override
      public boolean remove(Object o) {
        return SmallSet.this.remove(o);
      }

      @Override
      public boolean containsAll(Collection<?> c) {
        return SmallSet.this.containsAll(c);
      }

      @Override
      public boolean addAll(Collection<? extends T> c) {
        return SmallSet.this.addAll(c);
      }

      @Override
      public boolean removeAll(Collection<?> c) {
        return SmallSet.this.removeAll(c);
      }

      @Override
      public boolean retainAll(Collection<?> c) {
        return SmallSet.this.retainAll(c);
      }

      @Override
      public void clear() {
        SmallSet.this.clear();
      }
    };
  }
}
