package org.prlprg.util;

import com.google.common.annotations.GwtCompatible;
import com.google.common.base.Preconditions;
import com.google.errorprone.annotations.CanIgnoreReturnValue;
import com.google.errorprone.annotations.Immutable;
import java.io.Serial;
import java.io.Serializable;
import java.util.AbstractList;
import java.util.Arrays;
import java.util.Collection;
import java.util.List;
import java.util.RandomAccess;
import java.util.Spliterator;
import java.util.Spliterators;
import java.util.stream.Collector;
import java.util.stream.Stream;
import org.jspecify.annotations.Nullable;

@Immutable
@GwtCompatible
public final class ImmutableBoolArray implements Serializable {
  private static final ImmutableBoolArray EMPTY = new ImmutableBoolArray(new boolean[0]);

  private final boolean[] array;
  private final transient int start;
  private final int end;

  // ---- Factory methods ----

  public static ImmutableBoolArray of() {
    return EMPTY;
  }

  public static ImmutableBoolArray of(boolean e0) {
    return new ImmutableBoolArray(new boolean[] {e0});
  }

  public static ImmutableBoolArray of(boolean e0, boolean e1) {
    return new ImmutableBoolArray(new boolean[] {e0, e1});
  }

  public static ImmutableBoolArray of(boolean e0, boolean e1, boolean e2) {
    return new ImmutableBoolArray(new boolean[] {e0, e1, e2});
  }

  public static ImmutableBoolArray of(boolean e0, boolean e1, boolean e2, boolean e3) {
    return new ImmutableBoolArray(new boolean[] {e0, e1, e2, e3});
  }

  public static ImmutableBoolArray of(boolean e0, boolean e1, boolean e2, boolean e3, boolean e4) {
    return new ImmutableBoolArray(new boolean[] {e0, e1, e2, e3, e4});
  }

  public static ImmutableBoolArray of(
      boolean e0, boolean e1, boolean e2, boolean e3, boolean e4, boolean e5) {
    return new ImmutableBoolArray(new boolean[] {e0, e1, e2, e3, e4, e5});
  }

  public static ImmutableBoolArray of(boolean first, boolean... rest) {
    Preconditions.checkArgument(
        rest.length <= Integer.MAX_VALUE - 1, "the total number of elements must fit in an int");
    boolean[] array = new boolean[rest.length + 1];
    array[0] = first;
    System.arraycopy(rest, 0, array, 1, rest.length);
    return new ImmutableBoolArray(array);
  }

  public static ImmutableBoolArray copyOf(boolean[] values) {
    return values.length == 0
        ? EMPTY
        : new ImmutableBoolArray(Arrays.copyOf(values, values.length));
  }

  public static ImmutableBoolArray copyOf(Collection<Boolean> values) {
    if (values.isEmpty()) {
      return EMPTY;
    }
    boolean[] array = new boolean[values.size()];
    int i = 0;
    for (Boolean value : values) {
      array[i++] = value;
    }
    return new ImmutableBoolArray(array);
  }

  public static ImmutableBoolArray copyOf(Iterable<Boolean> values) {
    return values instanceof Collection
        ? copyOf((Collection<Boolean>) values)
        : builder().addAll(values).build();
  }

  public static ImmutableBoolArray copyOf(Stream<Boolean> stream) {
    return builder().addAll(stream).build();
  }

  public static Builder builder(int initialCapacity) {
    Preconditions.checkArgument(
        initialCapacity >= 0, "Invalid initialCapacity: %s", initialCapacity);
    return new Builder(initialCapacity);
  }

  public static Builder builder() {
    return new Builder(10);
  }

  public static Collector<Boolean, ?, ImmutableBoolArray> toImmutableBoolArray() {
    return Collector.of(
        ImmutableBoolArray::builder,
        Builder::add,
        (left, right) -> {
          left.addAll(right.build());
          return left;
        },
        Builder::build);
  }

  // ---- Constructors ----

  private ImmutableBoolArray(boolean[] array) {
    this(array, 0, array.length);
  }

  private ImmutableBoolArray(boolean[] array, int start, int end) {
    this.array = array;
    this.start = start;
    this.end = end;
  }

  // ---- Core API ----

  public int length() {
    return this.end - this.start;
  }

  public boolean isEmpty() {
    return this.end == this.start;
  }

  public boolean get(int index) {
    Preconditions.checkElementIndex(index, this.length());
    return this.array[this.start + index];
  }

  public int indexOf(boolean target) {
    for (int i = this.start; i < this.end; i++) {
      if (this.array[i] == target) {
        return i - this.start;
      }
    }
    return -1;
  }

  public int lastIndexOf(boolean target) {
    for (int i = this.end - 1; i >= this.start; i--) {
      if (this.array[i] == target) {
        return i - this.start;
      }
    }
    return -1;
  }

  public boolean contains(boolean target) {
    return this.indexOf(target) >= 0;
  }

  public void forEach(java.util.function.Consumer<Boolean> consumer) {
    Preconditions.checkNotNull(consumer);
    for (int i = this.start; i < this.end; i++) {
      consumer.accept(this.array[i]);
    }
  }

  /**
   * Returns a sequential {@link Stream} over the boxed {@code Boolean} elements.
   *
   * <p>Note: unlike {@code ImmutableIntArray}, which can use the primitive {@code IntStream}, Java
   * has no {@code BooleanStream}, so this method returns a boxed {@code Stream<Boolean>}.
   */
  public Stream<Boolean> stream() {
    Stream.Builder<Boolean> builder = Stream.builder();
    for (int i = this.start; i < this.end; i++) {
      builder.accept(this.array[i]);
    }
    return builder.build();
  }

  public boolean[] toArray() {
    return Arrays.copyOfRange(this.array, this.start, this.end);
  }

  public ImmutableBoolArray subArray(int startIndex, int endIndex) {
    Preconditions.checkPositionIndexes(startIndex, endIndex, this.length());
    return startIndex == endIndex
        ? EMPTY
        : new ImmutableBoolArray(this.array, this.start + startIndex, this.start + endIndex);
  }

  Spliterator<Boolean> spliterator() {
    return Spliterators.spliterator(
        this.asList(),
        Spliterator.IMMUTABLE | Spliterator.ORDERED | Spliterator.SIZED | Spliterator.SUBSIZED);
  }

  public List<Boolean> asList() {
    return new AsList(this);
  }

  // ---- Object overrides ----

  @Override
  public boolean equals(@Nullable Object object) {
    if (object == this) {
      return true;
    }
    if (!(object instanceof ImmutableBoolArray that)) {
      return false;
    }
    if (this.length() != that.length()) {
      return false;
    }
    for (int i = 0; i < this.length(); i++) {
      if (this.get(i) != that.get(i)) {
        return false;
      }
    }
    return true;
  }

  @Override
  public int hashCode() {
    int hash = 1;
    for (int i = this.start; i < this.end; i++) {
      hash *= 31;
      hash += Boolean.hashCode(this.array[i]);
    }
    return hash;
  }

  @Override
  public String toString() {
    if (this.isEmpty()) {
      return "[]";
    }
    StringBuilder builder = new StringBuilder(this.length() * 6);
    builder.append('[').append(this.array[this.start]);
    for (int i = this.start + 1; i < this.end; i++) {
      builder.append(", ").append(this.array[i]);
    }
    builder.append(']');
    return builder.toString();
  }

  // ---- Serialization helpers ----

  public ImmutableBoolArray trimmed() {
    return this.isPartialView() ? new ImmutableBoolArray(this.toArray()) : this;
  }

  private boolean isPartialView() {
    return this.start > 0 || this.end < this.array.length;
  }

  @Serial
  Object writeReplace() {
    return this.trimmed();
  }

  @Serial
  Object readResolve() {
    return this.isEmpty() ? EMPTY : this;
  }

  // ---- Builder ----

  public static final class Builder {
    private boolean[] array;
    private int count = 0;

    Builder(int initialCapacity) {
      this.array = new boolean[initialCapacity];
    }

    @CanIgnoreReturnValue
    public Builder add(boolean value) {
      this.ensureRoomFor(1);
      this.array[this.count] = value;
      this.count++;
      return this;
    }

    @CanIgnoreReturnValue
    public Builder addAll(boolean[] values) {
      this.ensureRoomFor(values.length);
      System.arraycopy(values, 0, this.array, this.count, values.length);
      this.count += values.length;
      return this;
    }

    @CanIgnoreReturnValue
    public Builder addAll(Iterable<Boolean> values) {
      if (values instanceof Collection) {
        return this.addAll((Collection<Boolean>) values);
      }
      for (Boolean value : values) {
        this.add(value);
      }
      return this;
    }

    @CanIgnoreReturnValue
    public Builder addAll(Collection<Boolean> values) {
      this.ensureRoomFor(values.size());
      for (Boolean value : values) {
        this.array[this.count++] = value;
      }
      return this;
    }

    @CanIgnoreReturnValue
    public Builder addAll(Stream<Boolean> stream) {
      stream.forEach(this::add);
      return this;
    }

    @CanIgnoreReturnValue
    public Builder addAll(ImmutableBoolArray values) {
      this.ensureRoomFor(values.length());
      System.arraycopy(values.array, values.start, this.array, this.count, values.length());
      this.count += values.length();
      return this;
    }

    private void ensureRoomFor(int numberToAdd) {
      int newCount = this.count + numberToAdd;
      if (newCount > this.array.length) {
        this.array = Arrays.copyOf(this.array, expandedCapacity(this.array.length, newCount));
      }
    }

    private static int expandedCapacity(int oldCapacity, int minCapacity) {
      if (minCapacity < 0) {
        throw new AssertionError("cannot store more than MAX_VALUE elements");
      }
      int newCapacity = oldCapacity + (oldCapacity >> 1) + 1;
      if (newCapacity < minCapacity) {
        newCapacity = Integer.highestOneBit(minCapacity - 1) << 1;
      }
      if (newCapacity < 0) {
        newCapacity = Integer.MAX_VALUE;
      }
      return newCapacity;
    }

    public ImmutableBoolArray build() {
      return this.count == 0
          ? ImmutableBoolArray.EMPTY
          : new ImmutableBoolArray(this.array, 0, this.count);
    }
  }

  // ---- AsList view ----

  private static final class AsList extends AbstractList<Boolean>
      implements RandomAccess, Serializable {
    private final ImmutableBoolArray parent;

    private AsList(ImmutableBoolArray parent) {
      this.parent = parent;
    }

    @Override
    public int size() {
      return this.parent.length();
    }

    @Override
    public Boolean get(int index) {
      return this.parent.get(index);
    }

    @SuppressWarnings("ListIndexOfReplaceableByContains")
    @Override
    public boolean contains(@Nullable Object target) {
      return this.indexOf(target) >= 0;
    }

    @Override
    public int indexOf(@Nullable Object target) {
      return target instanceof Boolean ? this.parent.indexOf((Boolean) target) : -1;
    }

    @Override
    public int lastIndexOf(@Nullable Object target) {
      return target instanceof Boolean ? this.parent.lastIndexOf((Boolean) target) : -1;
    }

    @Override
    public List<Boolean> subList(int fromIndex, int toIndex) {
      return this.parent.subArray(fromIndex, toIndex).asList();
    }

    @Override
    public Spliterator<Boolean> spliterator() {
      return this.parent.spliterator();
    }

    @Override
    public boolean equals(@Nullable Object object) {
      if (object instanceof AsList that) {
        return this.parent.equals(that.parent);
      }
      if (!(object instanceof List<?> that)) {
        return false;
      }
      if (this.size() != that.size()) {
        return false;
      }
      int i = this.parent.start;
      for (Object element : that) {
        if (!(element instanceof Boolean) || this.parent.array[i++] != (Boolean) element) {
          return false;
        }
      }
      return true;
    }

    @Override
    public int hashCode() {
      return this.parent.hashCode();
    }

    @Override
    public String toString() {
      return this.parent.toString();
    }
  }
}
