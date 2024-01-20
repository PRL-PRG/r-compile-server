package org.prlprg.sexp;

/** Unique symbol (equality by identity) */
public final class SpecialSymSXP implements SymSXP {
    private final String toString;

    public SpecialSymSXP(String toString) {
        this.toString = toString;
    }

    @Override
    public String toString() {
        return toString;
    }
}
