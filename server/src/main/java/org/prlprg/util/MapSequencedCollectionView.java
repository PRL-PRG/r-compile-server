package org.prlprg.util;

import java.util.Arrays;
import java.util.Collection;
import java.util.Iterator;
import java.util.SequencedCollection;
import java.util.function.Function;
import org.jetbrains.annotations.UnmodifiableView;

/**
 * Readonly view created by applying a function to each of another {@linkplain SequencedCollection
 * sequenced collection}'s elements.
 */
@UnmodifiableView
final class MapSequencedCollectionView<I, O> implements SequencedCollection<O> {
  // don't care about other `Map...View` duplicated code because it's all boilerplate - CPD-OFF
  private final SequencedCollection<I> backing;
  private final Function<I, O> f;

  public MapSequencedCollectionView(SequencedCollection<I> backing, Function<I, O> f) {
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
  public SequencedCollection<O> reversed() {
    return new SequencedCollection<>() {
      @Override
      public SequencedCollection<O> reversed() {
        return MapSequencedCollectionView.this;
      }

      @Override
      public int size() {
        return MapSequencedCollectionView.this.size();
      }

      @Override
      public boolean isEmpty() {
        return MapSequencedCollectionView.this.isEmpty();
      }

      @Override
      public boolean contains(Object o) {
        return MapSequencedCollectionView.this.contains(o);
      }

      @Override
      public Iterator<O> iterator() {
        return new Iterator<>() {
          private final Iterator<I> backingIt = backing.reversed().iterator();

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
        return backing.reversed().stream().map(f).toArray();
      }

      @Override
      public <T> T[] toArray(T[] a) {
        return backing.reversed().stream()
            .map(f)
            .toArray(size -> a.length >= size ? a : Arrays.copyOf(a, size));
      }

      @Override
      public boolean add(O o) {
        return MapSequencedCollectionView.this.add(o);
      }

      @Override
      public boolean remove(Object o) {
        return MapSequencedCollectionView.this.remove(o);
      }

      @Override
      public boolean containsAll(Collection<?> c) {
        return MapSequencedCollectionView.this.containsAll(c);
      }

      @Override
      public boolean addAll(Collection<? extends O> c) {
        return MapSequencedCollectionView.this.addAll(c);
      }

      @Override
      public boolean removeAll(Collection<?> c) {
        return MapSequencedCollectionView.this.removeAll(c);
      }

      @Override
      public boolean retainAll(Collection<?> c) {
        return MapSequencedCollectionView.this.retainAll(c);
      }

      @Override
      public void clear() {
        MapSequencedCollectionView.this.clear();
      }
    };
  }

  @Override
  public boolean equals(Object obj) {
    if (this == obj) {
      return true;
    }
    if (!(obj instanceof SequencedCollection<?> other)) {
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
