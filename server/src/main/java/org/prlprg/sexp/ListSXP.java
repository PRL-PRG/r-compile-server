package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import java.util.Objects;

/**
 * R "list". Confusingly, this is actually like <a href="https://www.lua.org/pil/2.5.html">Lua's
 * table</a> because each element can have an optional name (still ordered and have indices).
 * Otherwise, it's the same as a generic vector in that its elements are {@link SEXP}s.
 *
 * <p><b>Implementation note:</b> in GNU-R this is sometimes represented as a linked list, but we
 * use an array-list because it's more efficient.
 */
public sealed interface ListSXP extends AbstractListSXP, LangOrListSXP permits NilSXP, ListSXPImpl {
  /**
   * Flatten {@code src} while adding its elements to {@code target}. Ex:
   *
   * <pre>
   *   b = []; flatten([1, [2, 3], 4], b) ==> b = [1, 2, 3, 4]
   * </pre>
   */
  static void flatten(ListSXP src, ImmutableList.Builder<TaggedElem> target) {
    for (var i : src) {
      if (i.value() instanceof ListSXP lst) {
        flatten(lst, target);
      } else {
        target.add(i);
      }
    }
  }

  @Override
  ListSXP withAttributes(Attributes attributes);

  @Override
  ListSXP copy();

  /**
   * Remove all elements with the given tag (R lists may have multiple with the same tag).
   *
   * <p>Given the empty string, it will remove all untagged elements.
   */
  ListSXP remove(String tag);

  /// Returns a new list with the element at the given index replaced by the given one.
  ///
  /// Pass `tag = ""` if the element has no tag.
  ListSXP with(int index, String tag, SEXP value);

  /// Returns a new list with the given element appended.
  ///
  /// Pass `tag = ""` if the element has no tag.
  ListSXP appended(String tag, SEXP value);

  ListSXP appended(ListSXP other);

  ListSXP fromIndex(int fromIndex);

  ListSXP prepend(TaggedElem elem);
}

final class ListSXPImpl extends AbstractListSXPImpl implements ListSXP {
  ListSXPImpl(TaggedElem[] data, Attributes attributes) {
    super(data, attributes);
  }

  @Override
  public SEXPType type() {
    return SEXPType.LIST;
  }

  @Override
  public ListSXP with(int index, String tag, SEXP value) {
    var old = data[index];
    data[index] = new TaggedElem(tag, value);
    var result = copy();
    data[index] = old;
    return result;
  }

  @Override
  public ListSXP appended(String tag, SEXP value) {
    var data = new TaggedElem[this.data.length + 1];
    System.arraycopy(this.data, 0, data, 0, this.data.length);
    data[this.data.length] = new TaggedElem(tag, value);

    return SEXPs.list(data, attributes);
  }

  @Override
  public ListSXP appended(ListSXP other) {
    var data = new TaggedElem[this.data.length + other.size()];
    System.arraycopy(this.data, 0, data, 0, this.data.length);
    System.arraycopy(((AbstractListSXPImpl) other).data, 0, data, this.data.length, other.size());
    return SEXPs.list(data, attributes);
  }

  @Override
  public ListSXP fromIndex(int fromIndex) {
    var data = new TaggedElem[size() - fromIndex];
    System.arraycopy(this.data, fromIndex, data, 0, data.length);
    return SEXPs.list(data, attributes);
  }

  @Override
  public ListSXP remove(String tag) {
    return SEXPs.list(
        stream().filter(e -> !Objects.equals(tag, e.tag())).toArray(TaggedElem[]::new), attributes);
  }

  @Override
  public ListSXP prepend(TaggedElem elem) {
    var data = new TaggedElem[this.data.length + 1];
    data[0] = elem;
    System.arraycopy(this.data, 0, data, 1, this.data.length);
    return SEXPs.list(data, attributes);
  }

  @Override
  public ListSXP withAttributes(Attributes attributes) {
    return SEXPs.list(data, attributes);
  }

  @Override
  public ListSXP copy() {
    return SEXPs.list(data, attributes);
  }

  @Override
  public Class<? extends SEXP> getCanonicalType() {
    return ListSXP.class;
  }
}
