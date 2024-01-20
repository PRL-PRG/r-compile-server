package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.UnmodifiableIterator;

import java.util.Collection;

public record ExprSXP(ImmutableList<SEXP> data, Attributes attributes) implements VectorSXP<SEXP> {
    @Override
    public SEXPType type() {
        return SEXPType.EXPR;
    }

    public ExprSXP(Collection<SEXP> data, Attributes attributes) {
        this(ImmutableList.copyOf(data), attributes);
    }

    public ExprSXP(Collection<SEXP> data) {
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
    public ExprSXP withAttributes(Attributes attributes) {
        return new ExprSXP(data, attributes);
    }
}
