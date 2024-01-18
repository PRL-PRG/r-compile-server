package org.prlprg.util;

import java.util.Iterator;

/** An iterator which has no elements. */
public record EmptyIterator<T>() implements Iterator<T> {
    @Override
    public boolean hasNext() {
        return false;
    }

    @Override
    public T next() {
        throw new UnsupportedOperationException("EmptyIterator has no elements");
    }
}
