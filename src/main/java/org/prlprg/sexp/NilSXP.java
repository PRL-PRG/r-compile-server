package org.prlprg.sexp;

import java.util.Collections;
import java.util.List;
import javax.annotation.concurrent.Immutable;
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
  public String toString() {
    return "NULL";
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
  public List<SEXP> values() {
    return Collections.emptyList();
  }

  @Override
  public List<SEXP> values(int fromIndex) {
    if (fromIndex == 0) {
      return Collections.emptyList();
    } else {
      throw new UnsupportedOperationException("NULL is empty");
    }
  }

  @Override
  public List<String> names() {
    return Collections.emptyList();
  }

  @Override
  public ListSXP withAttributes(Attributes attributes) {
    throw new UnsupportedOperationException("Cannot set attributes on NULL");
  }
}
