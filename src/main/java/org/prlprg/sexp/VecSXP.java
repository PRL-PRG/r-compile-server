package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.UnmodifiableIterator;

import java.util.Collection;

public record VecSXP(ImmutableList<SEXP> data, Attributes attributes) implements VectorSXP<SEXP> {
    @Override
    public SEXPType type() {
        return SEXPType.VEC;
    }

    public VecSXP(Collection<SEXP> data, Attributes attributes) {
        this(ImmutableList.copyOf(data), attributes);
    }

    public VecSXP(Collection<SEXP> data) {
        this(ImmutableList.copyOf(data), Attributes.NONE);
    }

    @Override
    public UnmodifiableIterator<SEXP> iterator() {
        return data.iterator();
    }

    @Override
    public SEXP get(int i) {
        return data.get(i);
    }

    @Override
    public int size() {
        return data.size();
    }

    @Override
    public VecSXP withAttributes(Attributes attributes) {
        return new VecSXP(data, attributes);
    }
}
