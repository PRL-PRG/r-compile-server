package org.prlprg.sexp;

import com.google.common.primitives.ImmutableIntArray;

import javax.annotation.concurrent.Immutable;
import java.util.PrimitiveIterator;

@Immutable
public sealed interface IntSXP extends VectorSXP<Integer> {
    ImmutableIntArray data();

    @Override
    default SEXPType type() {
        return SEXPType.INT;
    }

    @Override
    Attributes attributes();

    @Override
    IntSXP withAttributes(Attributes attributes);

    ImmutableIntArray subArray(int startIndex, int endIndex);
}

record IntSXPImpl(@Override ImmutableIntArray data, @Override Attributes attributes)
        implements IntSXP {
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

    @Override
    public ImmutableIntArray subArray(int startIndex, int endIndex) {
        return data.subArray(startIndex, endIndex);
    }
}

final class SimpleIntSXPImpl extends SimpleScalarSXPImpl<Integer> implements IntSXP {
    SimpleIntSXPImpl(int data) {
        super(data);
    }

    @Override
    public ImmutableIntArray data() {
        return ImmutableIntArray.of(data);
    }

    @Override
    public IntSXP withAttributes(Attributes attributes) {
        return SEXPs.integer(data, attributes);
    }

    @Override
    public ImmutableIntArray subArray(int startIndex, int endIndex) {
        if (startIndex == 0 && endIndex == 1) {
            return data();
        } else {
            throw new IndexOutOfBoundsException("startIndex=" + startIndex + ", endIndex=" + endIndex);
        }
    }
}

final class EmptyIntSXPImpl extends EmptyVectorSXPImpl<Integer> implements IntSXP {
    static final EmptyIntSXPImpl INSTANCE = new EmptyIntSXPImpl();

    private EmptyIntSXPImpl() {
        super();
    }

    @Override
    public ImmutableIntArray data() {
        return ImmutableIntArray.of();
    }

    @Override
    public IntSXP withAttributes(Attributes attributes) {
        return SEXPs.integer(ImmutableIntArray.of(), attributes);
    }

    @Override
    public ImmutableIntArray subArray(int startIndex, int endIndex) {
        throw new IndexOutOfBoundsException("Empty int vector");
    }
}
