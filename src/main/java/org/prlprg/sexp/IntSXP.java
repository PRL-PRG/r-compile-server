package org.prlprg.sexp;

import com.google.common.collect.Iterators;
import com.google.common.collect.UnmodifiableIterator;
import com.google.common.primitives.ImmutableIntArray;

import javax.annotation.concurrent.Immutable;
import java.util.Collection;
import java.util.PrimitiveIterator;

@Immutable
public interface IntSXP extends VectorSXP<Integer> {
    ImmutableIntArray subArray(int startIndex, int endIndex);

    @Override
    default SEXPType type() {
        return SEXPType.INT;
    }

    @Override Attributes attributes();

    @Override
    IntSXP withAttributes(Attributes attributes);
}

record IntSXPImpl(ImmutableIntArray data, @Override Attributes attributes) implements IntSXP {
    @Override
    public ImmutableIntArray subArray(int startIndex, int endIndex) {
        return data.subArray(startIndex, endIndex);
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

    @Override
    public String toString() {
        return VectorSXPUtil.toString(this, data().stream());
    }

    @Override
    public IntSXP withAttributes(Attributes attributes) {
        return SEXP.integer(data, attributes);
    }
}

final class SimpleIntSXPImpl extends SimpleScalarSXPImpl<Integer> implements IntSXP {
    SimpleIntSXPImpl(int data) {
        super(data);
    }

    @Override
    public ImmutableIntArray subArray(int startIndex, int endIndex) {
        if (startIndex == endIndex && (startIndex == 0 || startIndex == 1)) {
            return ImmutableIntArray.of();
        } else if (startIndex == 0 && endIndex == 1) {
            return ImmutableIntArray.of(data);
        } else {
            throw new IndexOutOfBoundsException("subArray of simple scalar; startIndex=" + startIndex + ", endIndex=" + endIndex);
        }
    }

    @Override
    public IntSXP withAttributes(Attributes attributes) {
        return SEXP.integer(data, attributes);
    }
}
