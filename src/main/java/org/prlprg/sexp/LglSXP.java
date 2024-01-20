package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.UnmodifiableIterator;
import com.google.common.primitives.ImmutableIntArray;
import org.prlprg.primitive.Logical;

import java.util.Collection;

public record LglSXP(ImmutableList<Logical> data, Attributes attributes) implements VectorSXP<Logical> {
    @Override
    public SEXPType type() {
        return SEXPType.LGL;
    }

    public LglSXP(Collection<Logical> data, Attributes attributes) {
        this(ImmutableList.copyOf(data), attributes);
    }

    public LglSXP(Collection<Logical> data) {
        this(ImmutableList.copyOf(data), Attributes.NONE);
    }

    public LglSXP(Logical data, Attributes attributes) {
        this(ImmutableList.of(data), attributes);
    }

    public LglSXP(Logical data) {
        this(ImmutableList.of(data), Attributes.NONE);
    }

    @Override
    public UnmodifiableIterator<Logical> iterator() {
        return data.iterator();
    }

    @Override
    public Logical get(int i) {
        return data.get(i);
    }

    @Override
    public int size() {
        return data.size();
    }

    @Override
    public LglSXP withAttributes(Attributes attributes) {
        return new LglSXP(data, attributes);
    }
}
