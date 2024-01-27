package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.UnmodifiableIterator;

import javax.annotation.concurrent.Immutable;

/**
 * R expression vector.
 *
 * @apiNote Immutable because we assume it can't contain environments or any other mutable SEXPs.
 */
@Immutable
public sealed interface ExprSXP extends VectorSXP<SEXP> {
    @Override
    default SEXPType type() {
        return SEXPType.EXPR;
    }

    @Override
    Attributes attributes();

    @Override
    ExprSXP withAttributes(Attributes attributes);
}

record ExprSXPImpl(ImmutableList<SEXP> data, @Override Attributes attributes) implements ExprSXP {
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
        return VectorSXPs.toString(this, data().stream());
    }

    @Override
    public ExprSXP withAttributes(Attributes attributes) {
        return SEXPs.expr(data, attributes);
    }
}
