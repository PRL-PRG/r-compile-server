package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.UnmodifiableIterator;
import com.google.common.primitives.ImmutableIntArray;
import org.prlprg.primitive.Complex;

import java.util.Collection;

public record ComplexSXP(ImmutableList<Complex> data, Attributes attributes) implements VectorSXP<Complex> {
    @Override
    public SEXPType type() {
        return SEXPType.CPLX;
    }

    public ComplexSXP(Collection<Complex> data, Attributes attributes) {
        this(ImmutableList.copyOf(data), attributes);
    }

    public ComplexSXP(Collection<Complex> data) {
        this(ImmutableList.copyOf(data), Attributes.NONE);
    }

    public ComplexSXP(Complex data, Attributes attributes) {
        this(ImmutableList.of(data), attributes);
    }

    public ComplexSXP(Complex data) {
        this(ImmutableList.of(data), Attributes.NONE);
    }

    @Override
    public UnmodifiableIterator<Complex> iterator() {
        return data.iterator();
    }

    @Override
    public Complex get(int i) {
        return data.get(i);
    }

    @Override
    public int size() {
        return data.size();
    }
}
