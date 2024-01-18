package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.UnmodifiableIterator;
import com.google.common.primitives.ImmutableIntArray;

import java.util.Collection;

public record StrSXP(ImmutableList<String> data, Attributes attributes) implements VectorSXP<String> {
    @Override
    public SEXPType type() {
        return SEXPType.STR;
    }

    public StrSXP(Collection<String> data, Attributes attributes) {
        this(ImmutableList.copyOf(data), attributes);
    }

    public StrSXP(Collection<String> data) {
        this(ImmutableList.copyOf(data), Attributes.NONE);
    }

    public StrSXP(String data, Attributes attributes) {
        this(ImmutableList.of(data), attributes);
    }

    public StrSXP(String data) {
        this(ImmutableList.of(data), Attributes.NONE);
    }

    @Override
    public UnmodifiableIterator<String> iterator() {
        return data.iterator();
    }

    @Override
    public String get(int i) {
        return data.get(i);
    }

    @Override
    public int size() {
        return data.size();
    }
}
