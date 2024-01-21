package org.prlprg.sexp;

import com.google.common.primitives.ImmutableDoubleArray;

import javax.annotation.concurrent.Immutable;
import java.util.PrimitiveIterator;

@Immutable
public interface RealSXP extends VectorSXP<Double> {
    @Override
    default SEXPType type() {
        return SEXPType.REAL;
    }

    @Override Attributes attributes();

    @Override
    RealSXP withAttributes(Attributes attributes);
}

record RealSXPImpl(ImmutableDoubleArray data, @Override Attributes attributes) implements RealSXP {
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
    public String toString() {
        return VectorSXPUtil.toString(this, data().stream());
    }

    @Override
    public RealSXP withAttributes(Attributes attributes) {
        return SEXP.real(data, attributes);
    }
}


final class SimpleRealSXPImpl extends SimpleScalarSXPImpl<Double> implements RealSXP {
    SimpleRealSXPImpl(double data) {
        super(data);
    }

    @Override
    public RealSXP withAttributes(Attributes attributes) {
        return SEXP.real(data, attributes);
    }
}
