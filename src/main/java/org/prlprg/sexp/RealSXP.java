package org.prlprg.sexp;

import com.google.common.primitives.ImmutableDoubleArray;
import com.google.common.primitives.ImmutableIntArray;

import java.util.Collection;
import java.util.PrimitiveIterator;

public record RealSXP(ImmutableDoubleArray data, Attributes attributes) implements VectorSXP<Double> {
    @Override
    public SEXPType type() {
        return SEXPType.REAL;
    }

    public RealSXP(Collection<Double> data, Attributes attributes) {
        this(ImmutableDoubleArray.copyOf(data), attributes);
    }

    public RealSXP(Collection<Double> data) {
        this(ImmutableDoubleArray.copyOf(data), Attributes.NONE);
    }

    public RealSXP(double data, Attributes attributes) {
        this(ImmutableDoubleArray.of(data), attributes);
    }

    public RealSXP(double data) {
        this(ImmutableDoubleArray.of(data), Attributes.NONE);
    }

    @Override
    public PrimitiveIterator.OfDouble iterator() {
        return data.stream().iterator();
    }

    @Override
    public Double get(int i) {
        return data.get(i);
    }

    @Override
    public int size() {
        return data.length();
    }

    @Override
    public RealSXP withAttributes(Attributes attributes) {
        return new RealSXP(data, attributes);
    }
}
