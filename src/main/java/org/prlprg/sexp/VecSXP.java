package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.UnmodifiableIterator;

public sealed interface VecSXP extends VectorSXP<SEXP> {
    @Override
    default SEXPType type() {
        return SEXPType.VEC;
    }

    @Override Attributes attributes();

    @Override
    VecSXP withAttributes(Attributes attributes);
}

record VecSXPImpl(ImmutableList<SEXP> data, @Override Attributes attributes) implements VecSXP {
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
    public String toString() {
        return VectorSXPs.toString(this, data.stream());
    }

    @Override
    public VecSXP withAttributes(Attributes attributes) {
        return SEXPs.vec(data, attributes);
    }
}
