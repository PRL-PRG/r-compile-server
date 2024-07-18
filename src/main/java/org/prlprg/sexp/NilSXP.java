package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import java.util.Collections;
import java.util.List;
import java.util.stream.Stream;
import javax.annotation.Nullable;
import javax.annotation.concurrent.Immutable;
import org.jetbrains.annotations.Unmodifiable;
import org.prlprg.util.EmptyIterator;

/**
 * R {@code NULL}. Represents the empty list, but also used like {@code NULL} in other languages in
 * that it represents "no value" (not to be confused with R's {@code NA} or {@code .missingVal}).
 */
@Immutable
public final class NilSXP implements ListSXP {
  static final NilSXP INSTANCE = new NilSXP();

  private NilSXP() {}

  @Override
  public SEXPType type() {
    return SEXPType.NIL;
  }

  @Override
  public Class<? extends SEXP> getCanonicalType() {
    return NilSXP.class;
  }

  /** In R, nil is equivalent to an empty list, so this is always {@code true}. */
  @Override
  public boolean isEmpty() {
    return true;
  }

  /**
   * In R, nil is equivalent to an empty list, so this always throws {@link
   * UnsupportedOperationException}.
   */
  @Override
  public TaggedElem get(int i) {
    throw new UnsupportedOperationException("NULL is empty");
  }

  /** In R, nil is equivalent to an empty list, so this always returns {@code 0}. */
  @Override
  public int size() {
    return 0;
  }

  /** In R, nil is equivalent to an empty list, so this always returns an empty iterator. */
  @Override
  public EmptyIterator<TaggedElem> iterator() {
    return new EmptyIterator<>();
  }

  @Override
  public @Unmodifiable List<SEXP> values() {
    return Collections.emptyList();
  }

  @Override
  public @Unmodifiable List<SEXP> values(int fromIndex) {
    if (fromIndex == 0) {
      return Collections.emptyList();
    } else {
      throw new UnsupportedOperationException("NULL is empty");
    }
  }

  @Override
  public @Unmodifiable List<String> names() {
    return Collections.emptyList();
  }

  @Override
  public List<String> names(int fromIndex) {
    if (fromIndex == 0) {
      return Collections.emptyList();
    } else {
      throw new UnsupportedOperationException("NULL is empty");
    }
  }

  @Override
  public ListSXP set(int index, @Nullable String tag, SEXP value) {
    throw new UnsupportedOperationException("NULL is empty");
  }

  @Override
  public ListSXP appended(String tag, SEXP value) {
    return new ListSXPImpl(
        new ImmutableList.Builder<TaggedElem>().add(new TaggedElem(tag, value)).build(),
        Attributes.NONE);
  }

  @Override
  public ListSXP appended(ListSXP other) {
    return other;
  }

  @Override
  public ListSXP subList(int fromIndex) {
    if (fromIndex == 0) {
      return this;
    } else {
      throw new UnsupportedOperationException("NULL is empty");
    }
  }

  @Override
  public ListSXP remove(@Nullable String tag) {
    if (tag != null && tag.isEmpty()) {
      throw new IllegalArgumentException(
          "The empty tag doesn't exist, pass `null` to remove untagged elements.");
    }
    return this;
  }

  @Override
  public Stream<TaggedElem> stream() {
    return Stream.of();
  }

  @Override
  public ListSXP prepend(TaggedElem elem) {
    return SEXPs.list(List.of(elem));
  }

  @Override
  public ListSXP withAttributes(Attributes attributes) {
    throw new UnsupportedOperationException("Cannot set attributes on NULL");
  }

  // This can't call `Printer.toString`, because it calls this.
  @Override
  public String toString() {
    return "NULL";
  }
}
