package org.prlprg.sexp;

import com.google.common.primitives.ImmutableIntArray;

import javax.annotation.concurrent.Immutable;
import java.util.PrimitiveIterator;

@Immutable
public sealed interface IntSXP extends VectorSXP<Integer> {
    ImmutableIntArray subArray(int startIndex, int endIndex);

    @Override
    default SEXPType type() {
        return SEXPType.INT;
    }

    @Override
    Attributes attributes();

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
        return VectorSXPs.toString(this, data().stream());
    }

    @Override
    public IntSXP withAttributes(Attributes attributes) {
        return SEXPs.integer(data, attributes);
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
        return SEXPs.integer(data, attributes);
    }
}


final class EmptyIntSXPImpl extends EmptyVectorSXPImpl<Integer> implements IntSXP {
    static final EmptyIntSXPImpl INSTANCE = new EmptyIntSXPImpl();

    private EmptyIntSXPImpl() {
        super();
    }

    @Override
    public ImmutableIntArray subArray(int startIndex, int endIndex) {
        if (startIndex == 0 && endIndex == 0) {
            return ImmutableIntArray.of();
        } else {
            throw new IndexOutOfBoundsException("subArray of empty vector; startIndex=" + startIndex + ", endIndex=" + endIndex);
        }
    }

    @Override
    public IntSXP withAttributes(Attributes attributes) {
        return SEXPs.integer(ImmutableIntArray.of(), attributes);
    }
}
