package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.UnmodifiableIterator;
import org.prlprg.primitive.Complex;

import javax.annotation.concurrent.Immutable;

@Immutable
public sealed interface ComplexSXP extends VectorSXP<Complex> {
    @Override
    default SEXPType type() {
        return SEXPType.CPLX;
    }

    @Override
    Attributes attributes();

    @Override
    ComplexSXP withAttributes(Attributes attributes);
}

record ComplexSXPImpl(ImmutableList<Complex> data, @Override Attributes attributes) implements ComplexSXP {
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

    @Override
    public String toString() {
        return VectorSXPs.toString(this, data().stream());
    }

    @Override
    public ComplexSXP withAttributes(Attributes attributes) {
        return new ComplexSXPImpl(data, attributes);
    }
}

final class SimpleComplexSXPImpl extends SimpleScalarSXPImpl<Complex> implements ComplexSXP {
    SimpleComplexSXPImpl(Complex data) {
        super(data);
    }

    @Override
    public ComplexSXP withAttributes(Attributes attributes) {
        return SEXPs.complex(data, attributes);
    }
}

final class EmptyComplexSXPImpl extends EmptyVectorSXPImpl<Complex> implements ComplexSXP {
    static final EmptyComplexSXPImpl INSTANCE = new EmptyComplexSXPImpl();

    private EmptyComplexSXPImpl() {
        super();
    }

    @Override
    public ComplexSXP withAttributes(Attributes attributes) {
        return SEXPs.complex(ImmutableList.of(), attributes);
    }
}
