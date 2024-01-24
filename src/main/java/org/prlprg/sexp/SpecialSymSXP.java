package org.prlprg.sexp;

/** Unique symbol (equality by identity). */
public final class SpecialSymSXP implements SymSXP {
    private final String label;

    SpecialSymSXP(String label) {
        this.label = label;
    }

    @Override
    public String toString() {
        return "<" + label + ">";
    }
}
