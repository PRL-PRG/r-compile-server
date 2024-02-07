package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import java.util.Iterator;
import java.util.stream.Collectors;

public sealed interface ListSXP extends ListOrVectorSXP<TaggedElem> permits NilSXP, ListSXPImpl {
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
