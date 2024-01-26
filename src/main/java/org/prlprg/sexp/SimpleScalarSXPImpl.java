package org.prlprg.sexp;

import com.google.common.base.Objects;
import com.google.common.collect.Iterators;
import com.google.common.collect.UnmodifiableIterator;

import javax.annotation.concurrent.Immutable;

/** Class for representing a scalar SEXP of a primitive type with no attributes. */
@Immutable
abstract class SimpleScalarSXPImpl<T> {
    final T data;

    protected SimpleScalarSXPImpl(T data) {
        this.data = data;
    }

    public UnmodifiableIterator<T> iterator() {
        return Iterators.forArray(data);
    }

    public T get(int i) {
        if (i != 0) {
            throw new IndexOutOfBoundsException();
        }
        return data;
    }

    public int size() {
        return 1;
    }

    @Override
    public String toString() {
        return data.toString();
    }

    public Attributes attributes() {
        return Attributes.NONE;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (!(o instanceof SimpleScalarSXPImpl<?> that)) return false;
        return Objects.equal(data, that.data);
    }

    @Override
    public int hashCode() {
        return Objects.hashCode(data);
    }
}
