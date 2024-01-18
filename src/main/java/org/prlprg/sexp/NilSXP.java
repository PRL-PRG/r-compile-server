package org.prlprg.sexp;

import org.prlprg.util.EmptyIterator;


public final class NilSXP implements ListSXP {
    private NilSXP() {
    }

    static final NilSXP INSTANCE = new NilSXP();

    @Override
    public SEXPType type() {
        return SEXPType.NIL;
    }

    @Override
    public String toString() {
        return "NilSXP";
    }

    /** In GNU-R, nil is equivalent to an empty list, so this is always {@code true}. */
    @Override
    public boolean isEmpty() {
        return true;
    }

    /** In GNU-R, nil is equivalent to an empty list, so this always throws {@link UnsupportedOperationException}. */
    @Override
    public TaggedElem get(int i) {
        throw new UnsupportedOperationException("NilSXP is empty");
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
}
