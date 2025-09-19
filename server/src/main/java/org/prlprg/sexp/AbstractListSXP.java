package org.prlprg.sexp;

import java.util.Arrays;
import java.util.Iterator;
import java.util.List;
import java.util.Objects;
import java.util.Optional;
import java.util.stream.Stream;
import org.jetbrains.annotations.Unmodifiable;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.Lists;

/**
 * R list-like structure. There are actually 2: {@link ListSXP} and {@link DotsListSXP}.
 *
 * <p><b>Implementation note:</b> in GNU-R this is sometimes represented as a linked list, but we
 * use an array-list because it's more efficient. Also, this doesn't include {@link LangSXP} even
 * though it's represented the same in GNU-R, because it's represented differently here (but see
 * {@link LangOrListSXP}).
 */
public sealed interface AbstractListSXP extends ListOrVectorSXP<TaggedElem>
    permits ListSXP, DotsListSXP {
  @Override
  AbstractListSXP withAttributes(Attributes attributes);

  @Override
  AbstractListSXP copy();

  @Unmodifiable
  List<SEXP> values();

  @Unmodifiable
  List<SEXP> values(int fromIndex);

  @Unmodifiable
  List<String> names();

  List<String> names(int fromIndex);

  void set(int index, SEXP value);

  default boolean hasTags() {
    return names().stream().anyMatch(x -> !x.isEmpty());
  }

  Stream<TaggedElem> stream();

  Optional<TaggedElem> get(String name);

  default SEXP value(int i) {
    return get(i).value();
  }
}

abstract sealed class AbstractListSXPImpl permits ListSXPImpl, DotsListSXPImpl {
  protected final TaggedElem[] data;
  protected final Attributes attributes;

  AbstractListSXPImpl(TaggedElem[] data, Attributes attributes) {
    this.data = Arrays.copyOf(data, data.length);
    this.attributes = attributes;
  }

  // @Override
  public Attributes attributes() {
    return attributes;
  }

  // @Override
  public abstract SEXPType type();

  // @Override
  public Iterator<TaggedElem> iterator() {
    return Arrays.stream(data).iterator();
  }

  // @Override
  public @Unmodifiable List<SEXP> values() {
    return Lists.mapLazy(Arrays.asList(data), TaggedElem::value);
  }

  // @Override
  public @Unmodifiable List<SEXP> values(int fromIndex) {
    return values().subList(fromIndex, size());
  }

  // @Override
  public List<String> names() {
    return Lists.mapLazy(Arrays.asList(data), TaggedElem::tagOrEmpty);
  }

  // @Override
  public List<String> names(int fromIndex) {
    return names().subList(fromIndex, size());
  }

  // @Override
  public Stream<TaggedElem> stream() {
    return Arrays.stream(data);
  }

  // @Override
  public Optional<TaggedElem> get(String name) {
    return Arrays.stream(data).filter(e -> Objects.equals(e.tag(), name)).findFirst();
  }

  // @Override
  public TaggedElem get(int i) {
    return data[i];
  }

  // @Override
  public void set(int i, TaggedElem value) {
    data[i] = value;
  }

  // @Override
  public void set(int i, SEXP value) {
    data[i] = new TaggedElem(data[i].tag(), value);
  }

  // @Override
  public int size() {
    return data.length;
  }

  // @Override
  public boolean equals(Object o) {
    if (this == o) return true;
    if (o == null || getClass() != o.getClass()) return false;
    var that = (AbstractListSXPImpl) o;
    return Arrays.equals(data, that.data) && Objects.equals(attributes, that.attributes);
  }

  // @Override
  public int hashCode() {
    return Objects.hash(Arrays.hashCode(data), attributes);
  }

  // @Override
  public String toString() {
    return Printer.toString(this);
  }
}
