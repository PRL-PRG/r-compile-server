package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import java.util.Iterator;
import java.util.List;
import java.util.stream.Collectors;
import javax.annotation.Nullable;

/**
 * R "list". Confusingly, this is actually like <a href="https://www.lua.org/pil/2.5.html">Lua's
 * table</a> because each element can have an optional name (still ordered and have indices).
 * Otherwise, it's the same as a generic vector in that its elements are {@link SEXP}s.
 *
 * @implNote In GNU-R this is represented as a linked list, but we internally use an array-list
 *     because it's more efficient.
 */
public sealed interface ListSXP extends ListOrVectorSXP<TaggedElem> permits NilSXP, ListSXPImpl {
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

  List<SEXP> values();

  List<SEXP> values(int fromIndex);

  List<String> names();

  List<String> names(int fromIndex);

  ListSXP set(int index, @Nullable String tag, SEXP value);

  ListSXP appended(String value, SEXP value1);

  ListSXP subList(int fromIndex);
}

record ListSXPImpl(ImmutableList<TaggedElem> data, @Override Attributes attributes)
    implements ListSXP {
  @Override
  public SEXPType type() {
    return data.isEmpty() ? SEXPType.NIL : SEXPType.LIST;
  }

  @Override
  public Iterator<TaggedElem> iterator() {
    return data.iterator();
  }

  @Override
  public List<SEXP> values() {
    return data.stream().map(TaggedElem::value).toList();
  }

  @Override
  public List<SEXP> values(int fromIndex) {
    return values().subList(1, size());
  }

  @Override
  public List<String> names() {
    return data.stream().map(TaggedElem::tag).toList();
  }

  @Override
  public List<String> names(int fromIndex) {
    return names().subList(1, size());
  }

  @Override
  public ListSXP set(int index, @Nullable String tag, SEXP value) {
    return new ListSXPImpl(
        ImmutableList.<TaggedElem>builder()
            .addAll(data.subList(0, index))
            .add(new TaggedElem(tag, value))
            .addAll(data.subList(index + 1, data.size()))
            .build(),
        attributes);
  }

  @Override
  public ListSXP appended(@Nullable String tag, SEXP value) {
    return new ListSXPImpl(
        ImmutableList.<TaggedElem>builder().addAll(data).add(new TaggedElem(tag, value)).build(),
        attributes);
  }

  @Override
  public ListSXP subList(int fromIndex) {
    return new ListSXPImpl(data.subList(fromIndex, data.size()), attributes);
  }

  @Override
  public TaggedElem get(int i) {
    return data.get(i);
  }

  @Override
  public int size() {
    return data.size();
  }

  @Override
  public String toString() {
    return "(" + data.stream().map(TaggedElem::toString).collect(Collectors.joining(", ")) + ")";
  }

  @Override
  public ListSXPImpl withAttributes(Attributes attributes) {
    return new ListSXPImpl(data, attributes);
  }
}
