package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;

import java.util.Collection;

public interface ListSXP extends ListOrVectorSXP<TaggedElem> {
    static ListSXP of(ImmutableList<TaggedElem> data, Attributes attributes) {
        return new ListSXPImpl(data, attributes);
    }

    static ListSXP of(ImmutableList<TaggedElem> data) {
        return new ListSXPImpl(data, Attributes.NONE);
    }
    static ListSXP of(Collection<TaggedElem> data, Attributes attributes) {
        return new ListSXPImpl(data, attributes);
    }

    static ListSXP of(Collection<TaggedElem> data) {
        return new ListSXPImpl(data, Attributes.NONE);
    }

    static void flatten(ListSXP src, ImmutableList.Builder<TaggedElem> target) {
        for (var i : src) {
            if (i.value() instanceof ListSXP lst) {
                flatten(lst, target);
            } else {
                target.add(i);
            }
        }
    }
}
