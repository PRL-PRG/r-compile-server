package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.List;
import java.util.Objects;
import java.util.Optional;
import java.util.stream.Stream;
import javax.annotation.Nullable;
import org.jetbrains.annotations.Unmodifiable;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.Lists;

/**
 * R "list". Confusingly, this is actually like <a href="https://www.lua.org/pil/2.5.html">Lua's
 * table</a> because each element can have an optional name (still ordered and have indices).
 * Otherwise, it's the same as a generic vector in that its elements are {@link SEXP}s.
 *
 * <p><b>Implementation note:</b> in GNU-R this is represented as a linked list, but we internally
 * use an array-list because it's more efficient.
 */
public sealed interface ListSXP extends ListOrVectorSXP<TaggedElem>, LangOrListSXP
    permits NilSXP, AbstractListSXPImpl {
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

  @Unmodifiable
  List<SEXP> values();

  @Unmodifiable
  List<SEXP> values(int fromIndex);

  @Unmodifiable
  List<String> names();

  List<String> names(int fromIndex);

  ListSXP with(int index, @Nullable String tag, SEXP value);

  ListSXP appended(String tag, SEXP value);

  ListSXP appended(ListSXP other);

  ListSXP subList(int fromIndex);

  void set(int index, SEXP value);

  default boolean hasTags() {
    return names().stream().anyMatch(x -> !x.isEmpty());
  }

  /**
   * Remove all elements with the given tag (R lists may have multiple with the same tag).
   *
   * <p>Given {@code null}, it will remove all untagged elements.
   */
  ListSXP remove(@Nullable String tag);

  Stream<TaggedElem> stream();

  Optional<TaggedElem> get(String name);

  ListSXP prepend(TaggedElem elem);

  @Override
  default Class<? extends SEXP> getCanonicalType() {
    return ListSXP.class;
  }

  default SEXP value(int i) {
    return get(i).value();
  }
}

abstract sealed class AbstractListSXPImpl implements ListSXP permits ListSXPImpl, DotsListSXPImpl {
  protected final TaggedElem[] data;
  private final Attributes attributes;

  AbstractListSXPImpl(TaggedElem[] data, Attributes attributes) {
    this.data = Arrays.copyOf(data, data.length);
    this.attributes = attributes;
  }

  @Override
  public Attributes attributes() {
    return attributes;
  }

  @Override
  public abstract SEXPType type();

  @Override
  public Iterator<TaggedElem> iterator() {
    return Arrays.stream(data).iterator();
  }

  @Override
  public @Unmodifiable List<SEXP> values() {
    return Lists.mapLazy(Arrays.asList(data), TaggedElem::value);
  }

  @Override
  public @Unmodifiable List<SEXP> values(int fromIndex) {
    return values().subList(fromIndex, size());
  }

  @Override
  public List<String> names() {
    return Arrays.stream(data).map(TaggedElem::tagOrEmpty).toList();
  }

  @Override
  public List<String> names(int fromIndex) {
    return names().subList(fromIndex, size());
  }

  protected abstract ListSXP createInstance(TaggedElem[] data, Attributes attributes);

  @Override
  public ListSXP with(int index, @Nullable String tag, SEXP value) {
    var old = data[index];
    data[index] = new TaggedElem(tag, value);
    var result = copy();
    data[index] = old;
    return result;
  }

  @Override
  public ListSXP appended(@Nullable String tag, SEXP value) {
    var data = new TaggedElem[this.data.length + 1];
    System.arraycopy(this.data, 0, data, 0, this.data.length);
    data[this.data.length] = new TaggedElem(tag, value);

    return createInstance(data, attributes);
  }

  @Override
  public ListSXP appended(ListSXP other) {
    var data = new TaggedElem[this.data.length + other.size()];
    System.arraycopy(this.data, 0, data, 0, this.data.length);
    System.arraycopy(((AbstractListSXPImpl) other).data, 0, data, this.data.length, other.size());
    return createInstance(data, attributes);
  }

  @Override
  public ListSXP subList(int fromIndex) {
    var data = new TaggedElem[size() - fromIndex];
    System.arraycopy(this.data, fromIndex, data, 0, data.length);
    return createInstance(data, attributes);
  }

  @Override
  public ListSXP remove(@Nullable String tag) {
    if (tag != null && tag.isEmpty()) {
      throw new IllegalArgumentException(
          "The empty tag doesn't exist, pass `null` to remove untagged elements.");
    }
    return createInstance(
        stream().filter(e -> !Objects.equals(tag, e.tag())).toArray(TaggedElem[]::new), attributes);
  }

  @Override
  public Stream<TaggedElem> stream() {
    return Arrays.stream(data);
  }

  @Override
  public Optional<TaggedElem> get(String name) {
    return Optional.empty();
  }

  @Override
  public ListSXP prepend(TaggedElem elem) {
    var data = new TaggedElem[this.data.length + 1];
    data[0] = elem;
    System.arraycopy(this.data, 0, data, 1, this.data.length);
    return createInstance(data, attributes);
  }

  @Override
  public TaggedElem get(int i) {
    return data[i];
  }

  @Override
  public void set(int i, TaggedElem value) {
    data[i] = value;
  }

  @Override
  public void set(int i, SEXP value) {
    data[i] = new TaggedElem(data[i].tag(), value);
  }

  @Override
  public int size() {
    return data.length;
  }

  @Override
  public abstract ListSXP withAttributes(Attributes attributes);

  @Override
  public ListSXP copy() {
    return createInstance(data, attributes);
  }

  @Override
  public boolean equals(Object o) {
    if (!(o instanceof AbstractListSXPImpl that)) {
      return false;
    }
    return Arrays.equals(data, that.data) && Objects.equals(attributes, that.attributes);
  }

  @Override
  public int hashCode() {
    return Objects.hash(Arrays.hashCode(data), attributes);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
}

final class ListSXPImpl extends AbstractListSXPImpl {
  ListSXPImpl(TaggedElem[] data, Attributes attributes) {
    super(data, attributes);
  }

  @Override
  public SEXPType type() {
    return data.length == 0 ? SEXPType.NIL : SEXPType.LIST;
  }

  @Override
  protected ListSXP createInstance(TaggedElem[] data, Attributes attributes) {
    return new ListSXPImpl(data, attributes);
  }

  @Override
  public ListSXP withAttributes(Attributes attributes) {
    return new ListSXPImpl(data, attributes);
  }
}

final class DotsListSXPImpl extends AbstractListSXPImpl {
  DotsListSXPImpl(TaggedElem[] data, Attributes attributes) {
    super(data, attributes);
  }

  @Override
  public SEXPType type() {
    return data.length == 0 ? SEXPType.NIL : SEXPType.DOT;
  }

  @Override
  protected ListSXP createInstance(TaggedElem[] data, Attributes attributes) {
    return new DotsListSXPImpl(data, attributes);
  }

  @Override
  public ListSXP withAttributes(Attributes attributes) {
    return new DotsListSXPImpl(data, attributes);
  }
}
