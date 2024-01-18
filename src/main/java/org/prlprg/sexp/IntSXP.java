package org.prlprg.sexp;

import com.google.common.primitives.ImmutableIntArray;

import java.util.Collection;
import java.util.PrimitiveIterator;

public record IntSXP(ImmutableIntArray data, Attributes attributes) implements VectorSXP<Integer> {
    @Override
    public SEXPType type() {
        return SEXPType.INT;
    }

    public IntSXP(Collection<Integer> data, Attributes attributes) {
        this(ImmutableIntArray.copyOf(data), attributes);
    }

    public IntSXP(Collection<Integer> data) {
        this(ImmutableIntArray.copyOf(data), Attributes.NONE);
    }

    public IntSXP(int data, Attributes attributes) {
        this(ImmutableIntArray.of(data), attributes);
    }

    public IntSXP(int data) {
        this(ImmutableIntArray.of(data), Attributes.NONE);
    }


    @Override
    public PrimitiveIterator.OfInt iterator() {
        return data.stream().iterator();
    }

    @Override
    public Integer get(int i) {
        return data.get(i);
    }

    @Override
    public int size() {
        return data.length();
    }
}
