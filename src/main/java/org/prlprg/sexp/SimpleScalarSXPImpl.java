package org.prlprg.sexp;

import com.google.common.collect.Iterators;
import com.google.common.collect.UnmodifiableIterator;

import javax.annotation.concurrent.Immutable;

/** Class for representing a scalar SEXP of a primitive type with no attributes. */
@Immutable
abstract class SimpleScalarSXPImpl<T> implements VectorSXP<T> {
    final T data;

    protected SimpleScalarSXPImpl(T data) {
        this.data = data;
    }

    @Override
    public UnmodifiableIterator<T> iterator() {
        return Iterators.forArray(data);
    }

    @Override
    public T get(int i) {
        if (i != 0) {
            throw new IndexOutOfBoundsException();
        }
        return data;
    }

    @Override
    public int size() {
        return 1;
    }

    @Override
    public String toString() {
        return data.toString();
    }

    @Override
    public Attributes attributes() {
        return Attributes.NONE;
    }
}
