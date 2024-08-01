package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import java.util.Iterator;
import java.util.stream.Stream;
import org.prlprg.parseprint.Printer;

/**
 * R "list". Confusingly, this is actually like <a href="https://www.lua.org/pil/2.5.html">Lua's
 * table</a> because each element can have an optional name (still ordered and have indices).
 * Otherwise, it's the same as a generic vector in that its elements are {@link SEXP}s.
 *
 * <p><b>Implementation note:</b> in GNU-R this is represented as a linked list, but we internally
 * use an array-list because it's more efficient.
 */
public sealed interface DotsListSXP extends Iterable<TaggedElem>, AbstractPairListSXP,
    DotsListOrMissingSXP permits NilSXP, DotsListSXPImpl {
  /**
   * Get the element at index i.
   *
   * @throws IndexOutOfBoundsException if i is out of bounds.
   */
  TaggedElem get(int i);

  default SEXP value(int i) {
    return get(i).value();
  }

  /** The number of elements in this collection. */
  int size();

  Stream<TaggedElem> stream();

  @Override
  DotsListSXP withAttributes(Attributes attributes);

  @Override
  default Class<? extends SEXP> getCanonicalType() {
    return DotsListSXP.class;
  }
}

record DotsListSXPImpl(ImmutableList<TaggedElem> data, @Override Attributes attributes)
    implements DotsListSXP {
  @Override
  public SEXPType type() {
    return data.isEmpty() ? SEXPType.NIL : SEXPType.DOT;
  }

  @Override
  public Iterator<TaggedElem> iterator() {
    return data.iterator();
  }

  @Override
  public Stream<TaggedElem> stream() {
    return data.stream();
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
  public DotsListSXPImpl withAttributes(Attributes attributes) {
    return new DotsListSXPImpl(data, attributes);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
}
