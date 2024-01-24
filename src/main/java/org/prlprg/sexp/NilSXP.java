package org.prlprg.sexp;

import org.prlprg.util.EmptyIterator;

import javax.annotation.concurrent.Immutable;

@Immutable
public final class NilSXP implements ListSXP {
    static final NilSXP INSTANCE = new NilSXP();

    private NilSXP() {
    }

    @Override
    public SEXPType type() {
        return SEXPType.NIL;
    }

    @Override
    public String toString() {
        return "NULL";
    }

    /** In GNU-R, nil is equivalent to an empty list, so this is always {@code true}. */
    @Override
    public boolean isEmpty() {
        return true;
    }

    /** In GNU-R, nil is equivalent to an empty list, so this always throws {@link UnsupportedOperationException}. */
    @Override
    public TaggedElem get(int i) {
        throw new UnsupportedOperationException("NULL is empty");
    }

    /** In GNU-R, nil is equivalent to an empty list, so this always returns {@code 0}. */
    @Override
    public int size() {
        return 0;
    }

    /** In GNU-R, nil is equivalent to an empty list, so this always returns an empty iterator. */
    @Override
    public EmptyIterator<TaggedElem> iterator() {
        return new EmptyIterator<>();
    }

    @Override
    public ListSXP withAttributes(Attributes attributes) {
        throw new UnsupportedOperationException("Cannot set attributes on NULL");
    }
}
