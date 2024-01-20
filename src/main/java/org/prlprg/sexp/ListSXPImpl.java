package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;

import java.util.Collection;
import java.util.Iterator;
import java.util.List;

record ListSXPImpl(ImmutableList<TaggedElem> data, Attributes headAttributes) implements ListSXP {
    @Override
    public SEXPType type() {
        return data.isEmpty() ? SEXPType.NIL : SEXPType.LIST;
    }

    ListSXPImpl(ImmutableList<TaggedElem> data) {
        this(data, Attributes.NONE);
    }

    ListSXPImpl(Collection<TaggedElem> data, Attributes attributes) {
        this(ImmutableList.copyOf(data), attributes);
    }

    ListSXPImpl(Collection<TaggedElem> data) {
        this(ImmutableList.copyOf(data), Attributes.NONE);
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
    public ListSXPImpl withAttributes(Attributes attributes) {
        return new ListSXPImpl(data, attributes);
    }
}
